import os
import rclpy
from rclpy.node import Node
import binascii
import json
import threading
import time

import pyshark  # 用于实时抓包
from perception_comm.msg import BSM
from .out import DSRC

# 假设你不用PCAP_FILE_PATH了
CURRENT_DIR = os.path.dirname(os.path.abspath(__file__))

class BSMDecoderPublisher(Node):

    def __init__(self, name):
        super().__init__(name)
        # ROS2 发布器
        self.publisher_bsm = self.create_publisher(BSM, 'bsm_messages', 10)

        # 用于存储实时抓到的“0014”数据（尚未解码或已经解码）
        self.lock = threading.Lock()
        self.decoded_bsm_list = []

        # 启动后台抓包线程
        self.stop_flag = False
        self.capture_thread = threading.Thread(target=self.capture_dsrc_packets)
        self.capture_thread.start()

        # 定时器，每秒一次
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.skip_count=0
    def capture_dsrc_packets(self):
        """
        后台线程：实时监听网络接口，找到 DSRC 负载中含 “0014” 的数据并解码，然后保存到 self.decoded_bsm_list。
        """
        interface_name = 'enp0s31f6'  # 你的 OBU 网口
        display_filter = 'udp'             # 只抓UDP

        cap = pyshark.LiveCapture(interface=interface_name, display_filter=display_filter)
        self.get_logger().info(f"Starting LiveCapture on {interface_name} with filter={display_filter}")

        for pkt in cap:
            if self.stop_flag:
                break
            try:
                # 只要存在 Raw层数据
                if hasattr(pkt, 'data'):
                    raw_hex = pkt.data.data.replace(':','')  # pyshark有时用冒号分隔
                else:
                    # 如果 pkt.data 不可用，跳过
                    continue

                # 找 "0014"
                index = raw_hex.find("0014")
                if index != -1:
                    # 只保留 0014 及其后面
                    j2735_hex = raw_hex[index:]
                    if len(j2735_hex) % 2 != 0:
                    	self.skip_count += 1
                    	continue

 
                    # 解码成 JSON 字符串
                    decoded_json_str = self.decode_j2735(j2735_hex)

                    if decoded_json_str:
                        # 这里选择直接解析 JSON -> 塞进 self.decoded_bsm_list
                        decoded_dict = json.loads(decoded_json_str)
                        with self.lock:
                            self.decoded_bsm_list.append(decoded_dict)
            except Exception as e:
                self.get_logger().error(f"capture_dsrc_packets error: {str(e)}")

        self.get_logger().info("Capture thread ended.")

    def decode_j2735(self, hex_string):
        """
        使用 DSRC.MessageFrame 的 from_uper 解码
        """
        try:
            messageFrame_var = DSRC.MessageFrame
            decoded_message = messageFrame_var.from_uper(binascii.unhexlify(hex_string))
            json_data = messageFrame_var.to_json(decoded_message)
            return json_data
        except Exception as e:
            self.get_logger().error(f"Error decoding message: {str(e)}")
            return None

    def timer_callback(self):
        """
        每秒发布一下我们抓到的新 BSM 消息
        """
        # 先把当前列表拷贝，然后清空
        with self.lock:
            local_list = self.decoded_bsm_list
            self.decoded_bsm_list = []

        # 发布
        for decoded_dict in local_list:
            bsm_msg = self.dict_to_bsm(decoded_dict)
            self.publisher_bsm.publish(bsm_msg)
            self.get_logger().info(f"Published BSM message: ID={bsm_msg.vehicle_id}, cnt={bsm_msg.msg_cnt}, lat={bsm_msg.lat}, lon={bsm_msg.lon}")

    def dict_to_bsm(self, decoded_dict):
        """
        把 JSON dict 转换成 BSM.msg
        """
        bsm_msg = BSM()

        # 1) messageId
        

        # 2) coreData
        core_data = decoded_dict.get("value", {}).get("coreData", {})
        bsm_msg.vehicle_id = str(core_data.get("id", ""))
        bsm_msg.msg_cnt = int(core_data.get("msgCnt", 0))
        bsm_msg.lat = float(core_data.get("lat", 0.0))
        bsm_msg.lon = float(core_data.get("long", 0.0))
        bsm_msg.elev = float(core_data.get("elev", 0.0))
        bsm_msg.heading = int(core_data.get("heading", 0))
        bsm_msg.speed = float(core_data.get("speed", 0.0))

        accel_set = core_data.get("accelSet", {})
        bsm_msg.accel_lat = float(accel_set.get("lat", 0.0))
        bsm_msg.accel_long = float(accel_set.get("long", 0.0))
        bsm_msg.accel_vert = float(accel_set.get("vert", 0.0))
        bsm_msg.accel_yaw = float(accel_set.get("yaw", 0.0))

        # 3) full_json
        bsm_msg.full_json = json.dumps(decoded_dict)

        return bsm_msg

    def destroy_node(self):
        """ 关闭前先停止后台线程 """
        self.stop_flag = True
        self.get_logger().info(f"Total skipped packets (odd-length): {self.skip_count}")
        return super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = BSMDecoderPublisher("bsm_decoder_publisher")
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        print("KeyboardInterrupt detected. Stopping node.")
    finally:
        node.destroy_node()
        rclpy.shutdown()

