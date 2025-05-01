import sys
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
from threading import Thread, Lock
import copy

from .message import Message
from .scoring import AVstate
from .can_send_main import SendCANMessage as sCan
# from gps_msgs.msg  import GPSFix
# from .package import globaldata


class Can_Subscriber(Node):


    def __init__(self):
        super().__init__('sub_can')
        self.can_msg_DICT={}
        self.subscription = self.create_subscription(
            CAN,
            'v2x_msg',
            self.listener_callback,
            10)

        self.flag = False
        self.lock = Lock()
        # Init Can Parameters
        self.db = cantools.database.load_file(os.path.join(os.getcwd(), "src", "common", "ADC_SC.dbc"))
        self.interval = 0.09
        self.can_bus = can.interface.Bus('can0', bustype='socketcan')
    
    def test_send(self):
        while True:
            with self.lock:
                scm = sCan()
                start = time.time()
                scm.encode_send(self.db, self.can_bus, self.can_msg_DICT)
                end = time.time()
                time.sleep(abs(self.interval-(end-start)))
        
    def start(self):
        self.thread=Thread(target=self.test_send, args=())
        self.thread.start()


    def listener_callback(self, msg):

        # Post-Processing data
        can_msg = Message.from_ros(msg)
        can_dict=can_msg.to_can()
        # can_dict['V2XIntersection_MAP']['PlannedManeuver'] *= .256
        # print(can_dict)
        self.can_msg_DICT=copy.deepcopy(can_dict)

        if self.flag!=True:
            self.flag=True
            self.start()




        """

        To access value in can_msg, using can_msg.CAN_KEY or can_msg.CAN_KEY.CAN_SUBKEY

        For instance:
            
            [option 1]
            can_msg.RoadState

            This will return a Message Class object of RoadState

            [option 2]
            can_msg.RoadState.Active_Lane_Number

            This will return the value of Active_Lane_Number
        
        """
        # print(can_msg.RoadState)

        



def main(args=None):
    rclpy.init(args=args)
    # globaldata.init()
    minimal_subscriber = Can_Subscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
