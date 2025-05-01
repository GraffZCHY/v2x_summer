from perception_comm.msg import CAN
from std_msgs.msg import Header, Int16MultiArray, Float32MultiArray, Int64MultiArray
import json
import numpy as np
import os
import can
import cantools
from rclpy.node import Node
import rclpy
import time
from .message import Message, CAN_KEYS

                      


class V2xPublisher(Node):

    def __init__(self, name):
        super().__init__(name)                                           
        self.publisher_ = self.create_publisher(CAN, Node, 10) 
        self.timer = self.create_timer(1, self.timer_callback)   

        self.msg = Message()
        self.a = CAN()

        self.msg.add_new_key(V2XIntersection_MAP = [])
        setattr(self.msg.V2XIntersection_MAP, "IntersectionID", 2573)
        setattr(self.msg.V2XIntersection_MAP, "IngressLaneID", 7)
        setattr(self.msg.V2XIntersection_MAP, "PlannedEgressLaneID", 15)
        setattr(self.msg.V2XIntersection_MAP, "PlannedManeuver", 4000)
        setattr(self.msg.V2XIntersection_MAP, "SignalGroup", 1)
        setattr(self.msg.V2XIntersection_MAP, "MAP_Validity", 1)

    def timer_callback(self):
        self.msg.to_ros(self.a)
        self.publisher_.publish(self.a)
        self.get_logger().info('Publishing V2X Data')              

class PercePublisher(Node):

    def __init__(self, name):
        super().__init__(name) 
        # UNCOMMENT ME                                          
        # self.publisher_ = self.create_publisher(CAN, Node, 10)  
        # self.timer = self.create_timer(1, self.timer_callback)


        msg_json = json.load(open(os.path.join(os.getcwd(),"src","common", "CAN_format_default.json")))
        self.msg = Message()
        self.msg.add_new_key(RoadState= [])
        self.a = CAN()
        self.json_to_message(self.msg, **msg_json)
        print(msg_json)

    def json_to_message(self, msg, **kwargs):
        for k, v in kwargs.items():
            if isinstance(v, dict):
                setattr(msg, k, globals()[k](list(v.values()), CAN_KEYS[k]))
            elif isinstance(v, list):
                val = []
                for i in v:
                    val.extend(list(i.values()))
                setattr(msg, k, globals()[k](val, CAN_KEYS[k]))

    def timer_callback(self):
        self.msg.to_ros(self.a)
        self.publisher_.publish(self.a)
        self.get_logger().info('Publishing Perception Data')              


def main(args=None):                                 
    rclpy.init(args=args)

    # v2x_node = V2xPublisher("v2x_send")        
    # rclpy.spin(v2x_node)

    perception_node = PercePublisher("perception_msg")
    # rclpy.spin(perception_node)

    # v2x_node.destroy_node()
    # perception_node.destroy_node()                            
    # rclpy.shutdown()                          


