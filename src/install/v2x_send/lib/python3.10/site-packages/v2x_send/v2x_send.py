import json
import os
from .message import Message, CAN_KEYS


def json_to_message(msg, **kwargs):
    for k, v in kwargs.items():
        if isinstance(v, dict):
            setattr(msg, k, globals()[k](list(v.values()), CAN_KEYS[k]))
        elif isinstance(v, list):
            val = []
            for i in v:
                val.extend(list(i.values()))
            setattr(msg, k, globals()[k](val, CAN_KEYS[k]))

def main():
    msg_json = json.load(open(os.path.join(os.getcwd(),"src","common", "CAN_format_default.json")))
    msg = Message()
    # msg.add_new_key(RoadState= [])
    json_to_message(msg, **msg_json)
    print(msg)

