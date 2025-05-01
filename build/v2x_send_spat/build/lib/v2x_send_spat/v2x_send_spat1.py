import os
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import json
import binascii
from .out import DSRC
from scapy.all import rdpcap, Raw, UDP

# 设置 PCAP 文件路径
CURRENT_DIR = os.path.dirname(os.path.abspath(__file__))
PCAP_FILE_PATH = "/home/graffz/Desktop/test/Buckeye-Autodrive-Scoring-CAN-Part2_v1/Buckeye-Autodrive-Scoring-CAN-Part2/src/v2x_send_spat/v2x_send_spat/MAP_SPAT_TIM_BSM_MCity 1.pcap"

class V2XPublisher(Node):
    
    def __init__(self, name):
        super().__init__(name)
        self.publisher_0014 = self.create_publisher(String, 'v2x_j2735_0014', 10)

        # 从 PCAP 读取 J2735 消息
        self.test_messages = self.extract_j2735_messages(PCAP_FILE_PATH)

        # 创建一个定时器，每秒发布一次
        self.timer = self.create_timer(1.0, self.timer_callback)

    def extract_j2735_messages(self, pcap_file):
        """
        读取 PCAP 文件，并提取包含 "0014" 的 J2735 消息
        但 **只保留 0014 及其后面的部分**
        """
        messages = []
        try:
            packets = rdpcap(pcap_file)  # 读取 PCAP 文件

            for i, pkt in enumerate(packets):
                # 只提取 UDP 负载中的 J2735 数据
                if pkt.haslayer(UDP) and pkt.haslayer(Raw):
                    raw_data = pkt[Raw].load
                    hex_data = binascii.hexlify(raw_data).decode('utf-8')

                    # 打印解析出的每条 UDP 负载（十六进制格式）
                    self.get_logger().info(f"Packet {i}: {hex_data}")

                    # 查找 "0014" 在 hex_data 里的位置
                    index = hex_data.find("0014")
                    if index != -1:  # 如果找到了 "0014"
                        j2735_message = hex_data[index:]  # 只保留 "0014" 及其后面的部分
                        messages.append(j2735_message)
                        self.get_logger().info(f"Found J2735 Message in Packet {i}: {j2735_message}")

            self.get_logger().info(f"Extracted {len(messages)} J2735 messages from PCAP.")

        except Exception as e:
            self.get_logger().error(f"Error reading PCAP file: {str(e)}")
        
        return messages

    def decode(self, hex_string):
        """
        解析 J2735 Hex 消息为 JSON
        """
        messageFrame_var = DSRC.MessageFrame
        try:
            decoded_message = messageFrame_var.from_uper(binascii.unhexlify(hex_string))
            json_data = messageFrame_var.to_json(decoded_message)
            return json_data
        except Exception as e:
            self.get_logger().error(f"Error decoding message: {str(e)}")
            return None

    def timer_callback(self):
        """
        定时发布 J2735 消息
        """
        for hex_data in self.test_messages:
            decoded_json = self.decode(hex_data)
            if decoded_json:
                msg = String()
                msg.data = decoded_json
                self.publisher_0014.publish(msg)
                self.get_logger().info(f"Published 0014 message: {decoded_json}")
            else:
                self.get_logger().warn(f"Decoding failed for message: {hex_data}")

def main(args=None):
    rclpy.init(args=args)
    node = V2XPublisher("v2x_j2735_decoder_test")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

