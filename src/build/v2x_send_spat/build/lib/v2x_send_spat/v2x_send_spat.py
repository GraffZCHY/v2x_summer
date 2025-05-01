#!/usr/bin/env python3
# -*- coding: utf-8 -*-


import rclpy                        
from rclpy.node import Node             
import cv2 
import json
# from pycrate_asn1dir import J2735
# import out as J2735
from .out import DSRC
import binascii
import time 
from threading import Thread, Lock   
from std_msgs.msg import String                  
from .message import Message
from perception_comm.msg import CAN
import pyshark
from perception_comm.msg import GPSFix#get gps info

class V2XPublisher(Node):

    def __init__(self, name):
        super().__init__(name)                                           
        self.publisher_ = self.create_publisher(CAN, 'v2x_msg', 10)  
        self.timer = self.create_timer(1, self.timer_callback) 

        self.flag = False  

        self.subscription = self.create_subscription(
            GPSFix,
            'gps',
            self.gps_callback,
            10)





        self.dis_flag=False#receive the output or not  ture:receive false:not receive
        self.standard_dis=0#the distance that used to distinguish wether to receive data or not 
        self.cur_lat=0#the current latitude of the car
        self.cur_long=0#the current longtitude of the car

        self.lock = Lock()  
        self.index_send = 0   
        self.Timestamp_send = 0
        self.minEndTime_send = 0
        self.maxEndTime_send = 0
        self.eventState_send = 0

    
        self.IntersectionID = 0
        self.IngressLaneID = 0
        self.PlannedEgressLaneID = 0
        self.PlannedManeuver = 0
        self.SignalGroup = 0
        self.Map_Validity = 0

        self.msg = Message()
        self.a = CAN()
        self.msg.add_new_key(V2XIntersection_MAP = [])
        self.msg.add_new_key(V2XIntersection_SPAT = [])


    def gps_callback(self, msg):
        # 更新当前位置数据
        self.cur_lat = msg.latitude
        self.cur_long = msg.longitude
        self.get_logger().info(f'Received GPS Data - Latitude: {self.cur_lat}, Longitude: {self.cur_long}')

    def timer_callback(self):
        if self.flag == False:
            self.flag = True
            self.start()

            # time.sleep(0)

        
        setattr(self.msg.V2XIntersection_MAP, "IntersectionID", self.IntersectionID)
        setattr(self.msg.V2XIntersection_MAP, "IngressLaneID", self.IngressLaneID)
        setattr(self.msg.V2XIntersection_MAP, "PlannedEgressLaneID", self.PlannedEgressLaneID)
        setattr(self.msg.V2XIntersection_MAP, "PlannedManeuver", self.PlannedManeuver)
        setattr(self.msg.V2XIntersection_MAP, "SignalGroup", self.SignalGroup)
        setattr(self.msg.V2XIntersection_MAP, "MAP_Validity", self.Map_Validity)   


        
        setattr(self.msg.V2XIntersection_SPAT, "IntersectionID", self.IntersectionID)
        setattr(self.msg.V2XIntersection_SPAT, "SignalGroup", self.SignalGroup)
        setattr(self.msg.V2XIntersection_SPAT, "SPAT_Timestamp", self.Timestamp_send)
        setattr(self.msg.V2XIntersection_SPAT, "SecondsUntilChangeMinimum", self.minEndTime_send)
        setattr(self.msg.V2XIntersection_SPAT, "SecondsUntilChangeMaximum", self.maxEndTime_send)
        setattr(self.msg.V2XIntersection_SPAT, "MovementEventState", 1)  
        setattr(self.msg.V2XIntersection_SPAT, "MovementEventState", self.eventState_send) 
        # setattr(self.msg.V2XIntersection_SPAT, "Rolling_Count", 1) 
        setattr(self.msg.V2XIntersection_SPAT, "SPAT_Validity", self.Map_Validity) 





        self.msg.to_ros(self.a)
        self.publisher_.publish(self.a)
        self.get_logger().info('Publisher V2X Data')









    def decode(self, hex_string):
        
        messageFrame_var = DSRC.MessageFrame

        try:
            decoded_message = messageFrame_var.from_uper(binascii.unhexlify(hex_string))
            json_data = messageFrame_var.to_json(decoded_message)
            return json_data
        except Exception as e:
            
            print(f"error_decode: {str(e)}")
            return None  

    def sift_message(self, data_list):
        data_d = data_list
        result_list = []
        

        for index, time, value_decode in data_d:

            if value_decode[:4] == "0013":

                self.Map_Validity = 1
                self.IntersectionID = 2572
                self.IngressLaneID = 12
                self.PlannedEgressLaneID = 9
                self.PlannedManeuver = 1024
                self.SignalGroup = 6
                


                json_data = self.decode(value_decode)

                result_tuple = (1, 1, json_data)

                result_list.append(result_tuple)

        return result_list


    def sift_id(self, result_list, target_id):
        filtered_results = []


        for result_tuple in result_list:
            json_data = result_tuple[2]  
            json_data_D = json.loads(json_data)
            intersection_id = json_data_D["value"]["intersections"][0]["id"]["id"]
            if intersection_id == target_id:
                filtered_results.append(result_tuple)
                 
        return filtered_results



    def extract_signalgroup6_info(self, result_list):
        extracted_info = []

        for result_tuple in result_list:
            json_data = result_tuple[2]  
            json_data_D = json.loads(json_data)
            signal_groups = json_data_D["value"]["intersections"][0]["states"]
            Timestamp_1 = json_data_D["value"]["timeStamp"]
            Timestamp_2 = json_data_D["value"]["intersections"][0]["timeStamp"]
            intersection_id = json_data_D["value"]["intersections"][0]["id"]["id"]
            intersection_id = 2572

            for state in signal_groups:
                if state["signalGroup"] == 6:
                    state_time_speed = state["state-time-speed"]
                    extracted_info.append((intersection_id, result_tuple[0], result_tuple[1], state_time_speed, Timestamp_1, Timestamp_2))

        return extracted_info
    
    def main_class(self):
        while True:
            with self.lock:
                cap = pyshark.LiveCapture(interface='enx00e04c895558', display_filter='udp')
                
                iii = 0
                for pkt in cap:
                    if 'IP' in pkt and 'UDP' in pkt:
                        ip_src = pkt.ip.src
                        ip_dst = pkt.ip.dst
                
                        target_ip = '192.168.0.3'
                
                        if ip_src == target_ip or ip_dst == target_ip:
                            
                            value = pkt.data.data
                            target_id = 2572
                            k = 0
                            


                            data_d = []
                            
                            time = pkt.sniff_timestamp
                            # value_N = value.replace(":", "")
                            value_N = value
                            # value_decode = value_N[6:]
                            value_decode = value


                            data_d.append((iii, time, value_decode))
                        


                            result_list = self.sift_message(data_d)



                            if result_list:

                                filtered_results = self.sift_id(result_list, target_id)

                            else:

                                continue


                            if filtered_results:

                                extracted_info = self.extract_signalgroup6_info(filtered_results)

                            else:

                                continue

                                                
    



                            intersection_id, index, current_time, state_time_speed, Timestamp_1, Timestamp_2 = extracted_info[0]
                            k += 1
                            
                            self.intersection_id_send = intersection_id
                            
                            self.index_send = index
                            
                            self.current_time_send = current_time

                            self.Timestamp_1_send = Timestamp_1

                            self.Timestamp_2_send = Timestamp_2
                            
                            for item in state_time_speed:
                            
                                
                                self.maxEndTime_send = item['timing']['maxEndTime'] / 10.0 - (Timestamp_1 % 100) * 60.0 - Timestamp_2 / 1000.0
                                self.minEndTime_send = item['timing']['minEndTime'] / 10.0 - (Timestamp_1 % 100) * 60.0 - Timestamp_2 / 1000.0
                                

                                if item['eventState'] == 'permissive-Movement-Allowed':
                                    self.eventState_send = 5
                                if item['eventState'] == 'permissive-clearance':
                                    self.eventState_send = 7
                                if item['eventState'] == 'stop-And-Remain':
                                    self.eventState_send = 3
                            

                            self.Timestamp_send = Timestamp_2
                        

    def sift_message12(self, data_list):#filter the map file
        data_d = data_list
        result_list = []
        for index, time, value_decode in data_d:

            if value_decode[:4] == "0012":


                json_data = self.decode(value_decode)

                result_tuple = (1, 1, json_data)

                result_list.append(result_tuple)

        return result_list

    def sift_message13(self, data_list):#filter the spat file
        data_d = data_list
        result_list = []
        for index, time, value_decode in data_d:

            if value_decode[:4] == "0013":


                json_data = self.decode(value_decode)

                result_tuple = (1, 1, json_data)

                result_list.append(result_tuple)

        return result_list



    import math


    from geopy.distance import geodesic
     
    def haversine(self,lat_str,long_str):
        """
        计算两点之间的距离，使用哈弗辛公式。
        """
        # 将经纬度转换为弧度
        temp_lat = float(lat_str) / 10**8
        temp_long = float(long_str) / 10**8
        ini=(temp_lat,temp_long)
        des=(self.cur_lat,self.cur_long)
        distance = geodesic(ini, des).meters
        
        return distance

    def extract_signalgroup_info13(self, result_list):
        extracted_info = []

        for result_tuple in result_list:
            json_data = result_tuple[2]  
            json_data_D = json.loads(json_data)
            signal_groups = json_data_D["value"]["intersections"][0]["states"]
            Timestamp_1 = json_data_D["value"]["timeStamp"]#<value><SPAT><timeStamp>376531</timeStamp>
            Timestamp_2 = json_data_D["value"]["intersections"][0]["timeStamp"]
            intersection_id = json_data_D["value"]["intersections"][0]["id"]["id"]
            status=json_data_D["value"]["intersections"][0]["status"]
            moy=json_data_D["value"]["intersections"][0]["moy"]

            for state in signal_groups:
                state_time_speed = state["state-time-speed"]
                #eventState=state[]
                extracted_info.append((signal_groups, intersection_id, status, moy, sresult_tuple[0], result_tuple[1], state_time_speed, Timestamp_1, Timestamp_2))
                    
        return extracted_info










    def find_info(self, result_list12,result_list13):

        filtered_results = []
        dis_dic={}#key intersection: id, value: distance
        target_id=0#define the target id 
        min_dis=sys.float_info.max#difine the distance
        for result_tuple in result_list12:#find the id for the minimum distance
            json_data = result_tuple[2]  
            json_data_D = json.loads(json_data)
            int_lat=json_data_D["value"]["MapData"]["intersections"]["IntersectionGeometry"]["refPoint"]["lat"]
            int_long=json_data_D["value"]["MapData"]["intersections"]["IntersectionGeometry"]["refPoint"]["long"]
            int_id=json_data_D["value"]["MapData"]["intersections"]["IntersectionGeometry"]["id"]["id"];
            tempt_dis=haversine(int_lat,int_long,self.cur_lat,self.cur_long)
            if int_id in dis_dic:
                break
            else:
                dis.update({int_id:tempt_dis})
            
        target_id = min(dis_dic, key=lambda k: dis_dic[k])#get the target_id which has the minimum value
        dis_j=dis_dic[target_id]

        if dis_j<=standard_dis :
            dis_flag=true
        else:
            dis_flag=false


        for result_tuple in result_list13:
            json_data = result_tuple[2]  
            intersection_id = json_data_D["value"]["intersections"][0]["id"]["id"]
            if intersection_id==target_id: #get access to the intersection with the minmum distance and then get the information
                return extract_signalgroup_info13(self, result_list13)























    def start(self):
        self.thread = Thread(target=self.main_class, args=())
        self.thread.start()



# ===================================================================================================================================================




       

       






def main(args=None):                                 
    rclpy.init(args=args)                             
    node = V2XPublisher("v2x_send_spat")        
    rclpy.spin(node)                                 
    node.destroy_node()                              
    rclpy.shutdown()                                 

if __name__ == '__main__':
    main()
