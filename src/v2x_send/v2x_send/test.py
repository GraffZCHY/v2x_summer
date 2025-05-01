
# from perception_comm.msg import CAN
from std_msgs.msg import Header, Int16MultiArray, Float32MultiArray, Int64MultiArray
import json
import numpy as np
import os
import can
import cantools
from rclpy.node import Node
import rclpy
import time
from message import Message

class V2xPublisher():

    def __init__(self):    


        msg_json = json.load(open("/home/tsz/Desktop/V2X_data_send/V2x_data_send_ws/src/v2x_send/v2x_send/CAN_format_default.json"))
        self.msg = Message()
        # self.json_to_message(self.msg, **msg_json)
        self.msg.add_new_key(V2XIntersection_MAP = [])
        setattr(self.msg.V2XIntersection_MAP, "IntersectionID", 2573)
        setattr(self.msg.V2XIntersection_MAP, "IngressLaneID", 7)
        setattr(self.msg.V2XIntersection_MAP, "PlannedEgressLaneID", 15)
        setattr(self.msg.V2XIntersection_MAP, "PlannedManeuver", 2)
        setattr(self.msg.V2XIntersection_MAP, "SignalGroup", 1)
        setattr(self.msg.V2XIntersection_MAP, "Map_Validity", 1)



    def json_to_message(self, msg, **kwargs):
        for k, v in kwargs.items():
            if isinstance(v, dict):
                setattr(msg, k, globals()[k](list(v.values()), CAN_KEYS[k]))
            elif isinstance(v, list):
                val = []
                for i in v:
                    val.extend(list(i.values()))
                setattr(msg, k, globals()[k](val, CAN_KEYS[k]))


def main():
    a = V2xPublisher()
    print(a.msg)

if __name__ == "__main__":
    main()