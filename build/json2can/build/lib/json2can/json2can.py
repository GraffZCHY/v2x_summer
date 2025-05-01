import json
import sys
import os
import can
import cantools
import copy
import time
from threading import Thread, Lock

common_path = os.path.join(os.getcwd(),"src","common") 
sys.path.append(common_path)
from message import Message

def __init__(self):

    self.flag = False
    self.lock = Lock()

    # Init Can Parameters
    self.db = cantools.database.load_file(os.path.join(common_path, "ADC_SC.dbc"))
    self.interval = 0.1
    self.can_bus = can.interface.Bus('can0', bustype='socketcan')

def push_can(self):
    while True:
        with self.lock:
            scm = sCan()
            start = time.time()
            scm.encode_send(self.db, self.can_bus, self.can_msg_DICT)
            end = time.time()
            time.sleep(abs(self.interval-(end-start)))

def start(self):
    self.thread=Thread(target=self.push_can, args=())
    self.thread.start()

def main(args=None):
    print()