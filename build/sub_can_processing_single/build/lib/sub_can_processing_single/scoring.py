import can
import time
import cantools
import multiprocessing

class AVstate:
    def __init__(self,can_msg_DICT):
        self.can_msg_DICT=can_msg_DICT
        self.lock = multiprocessing.Lock()
        self.rolling_count = 0
        
        # self.bus = can.interface.Bus(bustype='socketcan', channel='can2', bitrate=500000)
        # self.dbc = cantools.database.load_file('/home/autodrive/autodrive/control_ws/src/py_pubsub/py_pubsub/ADC_SC.dbc')

    # def send(self):
    #     while True:
    #         with self.lock:
    #             GlobalAutoStat = self.global_auto_stat.value
    #             SteerCtrl = self.steer_ctrl.value
    #             FricBrake = self.fric_brake.value
    #             PropCtrl = self.PropCtrl.value
    #             start = time.time()
    #             data = self.dbc.encode_message('AVState',
    #                                            {'Rolling_Count': self.rolling_count,
    #                                             'GlobalAutonomyStatus': GlobalAutoStat,
    #                                             'SteeringCtrlActive': SteerCtrl,
    #                                             'FrictionBrakeCtrlActive': FricBrake,
    #                                             'PropulsionCtrlActive': PropCtrl})
    #             message = can.Message(timestamp=time.time(), arbitration_id=17, data=data, is_extended_id=False)
    #             self.bus.send(message)
    #             end = time.time()
    #             time.sleep(abs(0.1 - (end - start)))
    #             if self.rolling_count >= 3:
    #                 self.rolling_count = 0
    #             else:
    #                 self.rolling_count += 1

    def test_send(self):
        while True:
            with self.lock:
                if self.can_msg_DICT ==False:
                    pass
                else:
                    print(self.can_msg_DICT)
                # can_msg_DICR['AVState']['GlobalAutonomyStatus']=GlobalAutoStat#Copy AVState values into dict
                # can_msg_DICR['AVState']['SteeringCtrlActive']=SteerCtrl #Copy AVState values into dict
                # can_msg_DICR['AVState']['FrictionBrakeCtrlActive']=FricBrake #Copy AVState values into dict
                # can_msg_DICR['AVState']['PropulsionCtrlActive']=PropCtrl #Copy AVState values into dict
                # print(can_msg_DICR)
        


