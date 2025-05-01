import cantools
import can
import time
import os
# from message2CAN import perception2CAN as pCan
from .can_send_main import SendCANMessage as sCan
from .message import *
# from .package import globaldata
import copy

from .package import globaldata
from . import sub_can
from multiprocessing import Process, Value, Array

# from sub_can import sub_can

# from install.sub_can.lib.sub_can import sub_can



# globaldata.init()

# from can_send_slow import SendCANMessage as sCan_slow

# # Cheng sanity check:
# fd_check = '/mnt/d/CAN_AutoDrive/Can_programs/CAN_format_default.json'
# print(fd_check)
# ms = pCan()
# fd_out = ms.OpenFile_Get()
# print(fd_out)
# print('Here1')
# a = ms.GetMsg(fd_out) # Pulling from buffer
# print('Here2')


db = cantools.database.load_file('/home/tsz/Documents/tszlearning/package_ws/src/can_sending_pkg/can_sending_pkg/ADC_SC.dbc')
#can_bus = can.interface.Bus('can0', bustype='socketcan')
# ms = pCan()
scm = sCan()
#scm = sCan_slow()

# CAN sending time interval: 100ms
interval = 0.1
#schedule.every(0.1).seconds.do(scm.encode_send, db, can_bus, ms)

# fd_out: open file handler of the CAN_BUFF
# fd_out = ms.OpenFile_Get()
# print(fd_out)
def main():
    while True:
        """
            See mergeDICTpartcode.pv
        """


        start = time.time()

        # send one frame to CAN
        # scm.encode_send(db, can_bus, SC_dict)
        # print(globaldata.global_Message)
        print(sub_can.global_var)
        end = time.time()

        # may need to test if one frame is within 100ms
        time.sleep(abs(interval-(end-start)))


        #n = schedule.idle_seconds()
        #if n is None:
        #break
        #elif abs(n) > 0:
        # sleep exactly the right amount of time
        #time.sleep(abs(n))
        #schedule.run_pending()

        # old code --> time.sleep(abs0.001 - run_time)





if __name__ == '__main__':
    main()
