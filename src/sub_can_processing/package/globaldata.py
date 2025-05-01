"""
In this module, it will set global variable for tansmitting data across files.
"""
from .message import *
import copy


def init():
    global global_Message #global Message object
    global_Message= Message()

    global global_AVState_dict #global AVState dict variable
    global_AVState_dict={}

    global global_scoringNoAVState_dict # global dict from perception team(without AVState)
    global_scoringNoAVState_dict={}

    global global_scoring_dict
    global_scoring_dict={}
    print('2')

def set_global_Message(msg):
    global global_Message
    global_Message=copy.deepcopy(msg)

def set_global_AVState(dict):
    global global_AVState_dict
    global_AVState_dict=copy.deepcopy(dict)

def set_global_scoringNoACStatus(dict):
    global global_scoringNoAVState_dict
    global_scoringNoAVState_dict=copy.deepcopy(dict)

def get_global_Message():
    return global_Message

def get_global_AVState():
    return global_AVState_dict

def get_global_scoringNoACStatus():
    return global_scoringNoAVState_dict
