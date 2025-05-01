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
from .message import Message

# from .package import globaldata
# from .package import globaldata
from multiprocessing import Process, Value, Array
from .can_send_main import SendCANMessage as sCan
import multiprocessing
from multiprocessing import Manager
from .scoring import AVstate

# from gps_msgs.msg  import GPSFix
from threading import Thread, Lock
import message_filters
from message_filters import ApproximateTimeSynchronizer, Subscriber
import copy
from rclpy.executors import MultiThreadedExecutor
# from novatel_gps_msgs.msg import NovatelHeading2


class sub_can_processing(Node):
    def __init__(self):
        super().__init__("sub_can_processing")
        self.can_msg_DICT = {}

        # ++++++ Set up for listening three topics ROS1 STYLE +++++++++++++++++++++++
        self.perce_msg = message_filters.Subscriber(self, CAN, "/perception_msg")
        # self.AVState_msg = message_filters.Subscriber(
        #     self, Int64MultiArray, "/scoring_can"
        # )  # The Subscriber for your code.
        # self.V2X_msg = Subscriber(self, CAN, "/v2x_msg")

        # self.v2x_msg = message_filters.Subscriber(self, CAN, "/v2x_msg") # DOESNT WORK
        # self.perce_msg=message_filters.Subscriber(self, NovatelHeading2, "/heading2") #The first topic I want to subscribe
        # self.AVState_msg=message_filters.Subscriber(self, GPSFix, "/gps") #The Second topic I want to subscribe


        # ++++++ Set up for listening three topics ROS2 STYLE 😎 +++++++++++++
        self.v2x_msg = None
        self.perception_msg = None
        self.scoring_msg = None

        self.percep_sub = self.create_subscription(
            CAN, "perception_msg", self.perce_callback, 10
        )

        self.sc_sub = self.create_subscription(
            Int64MultiArray, "scoring_can", self.AVState_callback, 10
        )

        self.v2x_sub = self.create_subscription(
            CAN, "v2x_msg", self.v2x_callback, 10
        )

        # queue_size = 100
        # ts_tolerance = 1
        # ats = ApproximateTimeSynchronizer( # ONLY WORKS WITH SUBSCRIBER METHOD
        #     [self.percep_sub, self.sc_sub, self.v2x_msg], queue_size, ts_tolerance
        # )
        # ats.registerCallback(self.SC_callback)


        # ++++++++++++++++++++++++++
        self.flag = False
        self.lock = Lock()

        # Init Can Parameters
        # Dynamic path for ADC_SC.dbc
        self.db = cantools.database.load_file(
            os.path.join(
                os.getcwd(),
                "src",
                "sub_can_processing",
                "sub_can_processing",
                "ADC_SC.dbc",
            )
        )
        # self.db = cantools.database.load_file('PUT CURRENT WS LOCATION/src/sub_can_processing/ADC_SC.dbc')
        self.interval = 0.1

        # Depends on how you init the CAN BUS on Intel computer. Ask Javed.
        # self.can_bus = can.interface.Bus("can0", bustype="socketcan") UNCOMMENT ME

    def test_send(self):
        while True:
            with self.lock:
                # scm = sCan()  # Init CAN UNCOMMENT ME
                # print(self.can_msg_DICT)
                # print(self.can_msg_DICT['VehicleLocation']['VehicleLatitude'])
                start = time.time()

                # Encode and send the data into SC UNCOMMENT ME ON REAL TESTING
                # scm.encode_send(self.db, self.can_bus, self.can_msg_DICT)
                # print(self.can_msg_DICT['V2XIntersection_MAP'])
                # print(self.can_msg_DICT['VehicleLocation']['VehicleLatitude'])
                end = time.time()
                time.sleep(abs(self.interval - (end - start)))

    def start(self):
        # self.p5=multiprocessing.Process(target=self.test_send, args=())
        # self.p5.start()
        # self.p5.join()
        self.thread = Thread(target=self.test_send, args=())
        self.thread.start()
        # self.test_send()

    def v2x_callback(self, msg):
        with self.lock:
            self.v2x_msg = msg
            self.SC_callback()

    def perce_callback(self, msg):
        with self.lock:
            self.perce_msg = msg
            self.SC_callback()

    def AVState_callback(self, msg):
        with self.lock:
            self.AVState_msg = msg
            self.SC_callback()


    def SC_callback(self):

        # Process synchronized data here
        if self.v2x_msg is not None:
        # and self.perce_msg is not None and self.AVState_msg is not None:
            # self.get_logger().info('Received scoring_can: %s' % AVState_msg)
            # self.get_logger().info('Received perception_msg: %s' % perce_msg)
            # self.get_logger().info('Received v2x_msg: %s' % self.v2x_msg)
            print(self.v2x_msg.v2_x_intersection_m_a_p[0])

        # AVState_msg: the AVState data message subcribe from '/scoring_can'

        # Init the SendCan class
        # scm=sCan()
        # self.test_send()
        # print(self.can_msg_DICT)

        # Post-Processing data
        can_msg = Message.from_ros(self.v2x_msg)

        can_dict = can_msg.to_can()

        # Set AVState fo++++++++

        # can_dict["AVState"]["GlobalAutonomyStatus"] = AVState_msg[0]
        # can_dict["AVState"]["SteeringCtrlActive"] = AVState_msg[1]
        # can_dict["AVState"]["FrictionBrakeCtrlActive"] = AVState_msg[2]
        # can_dict["AVState"]["PropulsionCtrlActive"] = AVState_msg[3]

        # Set V2XIntersection_MAP
        can_dict["V2XIntersection_MAP"]["IntersectionID"] = self.v2x_msg.v2_x_intersection_m_a_p[0]
        can_dict["V2XIntersection_MAP"]["IngressLaneID"] = self.v2x_msg.v2_x_intersection_m_a_p[1]
        can_dict["V2XIntersection_MAP"]["PlannedEgressLaneID"] = self.v2x_msg.v2_x_intersection_m_a_p[2]
        can_dict["V2XIntersection_MAP"]["PlannedManeuver"] = self.v2x_msg.v2_x_intersection_m_a_p[3]
        can_dict["V2XIntersection_MAP"]["SignalGroup"] = self.v2x_msg.v2_x_intersection_m_a_p[4]
        can_dict["V2XIntersection_MAP"]["Rolling_Count"] = self.v2x_msg.v2_x_intersection_m_a_p[5]
        can_dict["V2XIntersection_MAP"]["MAP_Validity"] = self.v2x_msg.v2_x_intersection_m_a_p[6]

        print(can_dict)

        # Uncomment this part if you want hard-coded V2XIntersection_MAP and V2XIntersection_SPAT values
        # V2XIntersection_MAP = {
        #     "IntersectionID": 0,
        #     "IngressLaneID": 0,
        #     "PlannedEgressLaneID": 0,
        #     "PlannedManeuver": 0,
        #     "SignalGroup": 0,
        #     "Rolling_Count": 0,
        #     "MAP_Validity": 0,
        # }
        # can_dict["V2XIntersection_MAP"] = V2XIntersection_MAP
        # V2XIntersection_SPAT = {
        #     "IntersectionID": 0,
        #     "SignalGroup": 0,
        #     "SPAT_Timestamp": 0,
        #     "SecondsUntilChangeMinimum": 0,
        #     "SecondsUntilChangeMaximum": 0,
        #     "MovementEventState": 0,
        #     "Rolling_Count": 0,
        #     "SPAT_Validity": 0,
        # }
        # can_dict["V2XIntersection_SPAT"] = V2XIntersection_SPAT

        # This will modify the global data and update the data in thread.
        self.can_msg_DICT = can_dict

        # Test V2XIntersection_MAP subscription
        print(self.can_msg_DICT["V2XIntersection_MAP"])

        # +++++++++++++++++++++++

        # self.can_msg_DICT.pop('AVState')
        # print(self.can_msg_DICT['VehicleLocation']['VehicleLatitude'])
        # self.can_msg_DICT=can_msg.to_can()

        # If the thread does not start, start it, otherwise pass.
        if self.flag != True:
            self.flag = True
            self.start()

        # else:
        #     self.p5.close()
        #     self.start()
        # print(can_msg.)

        # globaldata.global_Message=copy.deepcopy(can_msg)
        # globaldata.global_scoring_dict=copy.deepcopy(globaldata.global_Message.to_can())
        # print(ppp.global_var.value)

        # can_msg_DICT=copy.deepcopy(manager.dict(can_msg.to_can()))

        # print(can_msg_DICT['Object_TrackA'])
        # can_msg_dict['RoadState']['DistToLLnEdge']=0
        # can_msg_dict['AVState']['GlobalAutonomyStatus']=2

        # print(can_msg_dict['Object_TrackA'])
        # can_msg_dict['Object_TrackB']['Object_Relative_Orientation']=0
        # can_msg_dict['AVState']['GlobalAutonomyStatus']=ppp.global_auto_stat_val.value #Copy AVState values into dict
        # can_msg_dict['AVState']['SteeringCtrlActive']=copy.deepcopy(ppp.steer_ctrl_val.value) #Copy AVState values into dict
        # can_msg_dict['AVState']['FrictionBrakeCtrlActive']=copy.deepcopy(ppp.fric_brake_val.value) #Copy AVState values into dict
        # can_msg_dict['AVState']['PropulsionCtrlActive']=copy.deepcopy(ppp.prop_ctrl_val.value) #Copy AVState values into dict

        # print(can_msg_dict('AVState'))#Copy AVState values into dict

        # Data sending
        # can_msg_avstate={}

        # can_msg_avstate['VehicleLocation']=can_msg_dict['VehicleLocation']
        # can_msg_avstate['VehicleLocation']['VehicleLatitude']=0.11
        # can_msg_avstate['VehicleLocation']['VehicleLongitude']=0.11

        # print(can_msg_avstate)
        # start = time.time()
        # scm.encode_send(self.db, self.can_bus,can_msg_dict)
        # # print(can_msg_dict['V2XIntersection_MAP'])
        # end = time.time()
        # time.sleep(abs(self.interval-(end-start)))

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

    minimal_subscriber = sub_can_processing()

    executor = MultiThreadedExecutor()
    executor.add_node(minimal_subscriber)
    executor.spin()
    # rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
