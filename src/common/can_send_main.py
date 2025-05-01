import can
import time
import json
import copy


class SendCANMessage:
    static_count = 0  # Setting a static count

    def __init__(self):
        self.Rolling_Count = SendCANMessage.static_count

        if SendCANMessage.static_count < 3:
            SendCANMessage.static_count += 1
        else:
            SendCANMessage.static_count = 0

    def can_file_load(self, file_loc):
        with open(file_loc) as f:
            data = json.load(f)
        return data

    def encode_send(self, db, can_bus, fd_out):
        # stop = 0.001
        stop = 0.0005
        # msg = self.can_file_load(fd_out)
        msg = fd_out
        # msg = copy.deepcopy(msgaa)
        # print(msg)
        # print(msg['Object_TrackA'][0]['Rolling_Count'])
        # ++++++++++++ UNCOMMENT ME
        # detected_objects = int(msg["Objects"]["Current_Object_Count"])
        # detected_signals = int(msg["TrafficSignalHeads"]["Current_Signal_Head_Count"])
        # detected_signs = int(msg["TrafficSigns"]["Current_Sign_Count"])
        # detected_markings = int(msg["LaneMarkings"]["CurrentLaneMarkingCount"])
        # detected_lines = int(msg["LimitLines"]["Current_Limit_Line_Count"])
        # +++++++++++++++
        for key in msg:
            if bool(msg[key]) == False:
                # if not msg[key]==False: #Change this key when ones does not work
                pass
            elif (
                key == "AVState"
                or key == "RoadState"
                or key == "Objects"
                or key == "TrafficSignalHeads"
                or key == "TrafficSigns"
                or key == "LaneMarkings"
                or key == "LimitLines"
                or key == "VehicleOrientation"
                or key == "VehicleLocation"
                or key == "V2XIntersection_MAP"
                or key == "V2XIntersection_SPAT"
            ):
                dict_temp = msg[key]
                dict2 = copy.deepcopy(dict_temp)
                for sub_key in dict2.keys():
                    if "dummy" in sub_key:
                        dict_temp.pop(sub_key)

                    if "Yaw" in sub_key:
                        dict_temp.pop(sub_key)

                    if "Velocity" in sub_key:
                        dict_temp.pop(sub_key)

                # Convert into int+++++++++++++++++++++++++++
                # for keys in dict_temp.keys():
                #     if keys == 'dummy0' or keys == 'dummy1' or keys == 'dummy2' or keys == 'dummy3' or keys == 'dummy4' or keys == 'dummy5':
                #         dict_temp.pop(keys)
                for keys in dict_temp.keys():
                    if (
                        keys == "DistToLLnEdge"
                        or keys == "DistToRLnEdge"
                        or keys == "VehicleLatitude"
                        or keys == "VehicleLongitude"
                        or keys == "Observation_Time_of_Hour"
                    ):
                        dict_temp[keys] = float(dict_temp[keys])
                    else:
                        dict_temp[keys] = int(dict_temp[keys])

                # for keys in dict_temp.keys():
                #     if keys =='DistToRLnEdge':
                #         pass
                #     else:
                #         dict_temp[keys]=int(dict_temp[keys])
                # ++++++++++++++++++++++++++++++++++++++++++++++

                if key == "VehicleOrientation" or key == "VehicleLocation":
                    pass
                else:
                    dict_temp["Rolling_Count"] = self.Rolling_Count
                # print(key, ' expected', dict_temp)
                data = db.encode_message(key, dict_temp)
                message = can.Message(
                    arbitration_id=db.get_message_by_name(key).frame_id,
                    data=data,
                    is_extended_id=False,
                )
                if key == "V2XIntersection_MAP":
                    # print(db.get_message_by_name(key).frame_id)
                    print("Encoding some CAN 😎 | Rolling Count: " , dict_temp['Rolling_Count'])

                try:
                    can_bus.send(message)
                    time.sleep(stop)
                except:
                    time.sleep(stop)
            elif key == "Object_TrackA":
                for i in range(detected_objects):
                    data = db.encode_message(
                        "Object_TrackA",
                        {
                            "Rolling_Count": self.Rolling_Count,
                            "ObjObjectID": int(msg["Object_TrackA"][i]["ObjObjectID"]),
                            "ObjObjectType": int(
                                msg["Object_TrackA"][i]["ObjObjectType"]
                            ),
                            "LongPos": float(msg["Object_TrackA"][i]["LongPos"]),
                            "LatPos": float(msg["Object_TrackA"][i]["LatPos"]),
                            "RelLongVel": int(msg["Object_TrackA"][i]["RelLongVel"]),
                            "RelLatVel": int(msg["Object_TrackA"][i]["RelLatVel"]),
                            "Confidence": int(msg["Object_TrackA"][i]["Confidence"]),
                            "Relative_Lane": int(
                                msg["Object_TrackA"][i]["Relative_Lane"]
                            ),
                        },
                    )
                    message = can.Message(
                        arbitration_id=db.get_message_by_name("Object_TrackA").frame_id,
                        data=data,
                        is_extended_id=False,
                    )
                    try:
                        can_bus.send(message)
                        time.sleep(stop)
                    except:
                        time.sleep(stop)

                    data = db.encode_message(
                        "Object_TrackB",
                        {
                            "Rolling_Count": self.Rolling_Count,
                            "ObjObjectID": int(msg["Object_TrackB"][i]["ObjObjectID"]),
                            "Width": float(msg["Object_TrackB"][i]["Width"]),
                            "Height": float(msg["Object_TrackB"][i]["Height"]),
                            "Object_Relative_Orientation": abs(
                                float(
                                    msg["Object_TrackB"][i][
                                        "Object_Relative_Orientation"
                                    ]
                                )
                            ),
                            "RelLnPosition": int(
                                msg["Object_TrackB"][i]["RelLnPosition"]
                            ),
                            "Object_Source_Camera": int(
                                msg["Object_TrackB"][i]["Object_Source_Camera"]
                            ),
                            "Object_Source_Radar": int(
                                msg["Object_TrackB"][i]["Object_Source_Radar"]
                            ),
                            "Object_Source_Ultrasonic": int(
                                msg["Object_TrackB"][i]["Object_Source_Ultrasonic"]
                            ),
                            "Object_Source_V2X": int(
                                msg["Object_TrackB"][i]["Object_Source_V2X"]
                            ),
                            "Object_Source_Lidar": int(
                                msg["Object_TrackB"][i]["Object_Source_Lidar"]
                            ),
                            "Object_Source_Other": int(
                                msg["Object_TrackB"][i]["Object_Source_Other"]
                            ),
                        },
                    )
                    message = can.Message(
                        arbitration_id=db.get_message_by_name("Object_TrackB").frame_id,
                        data=data,
                        is_extended_id=False,
                    )
                    try:
                        can_bus.send(message)
                        time.sleep(stop)
                    except:
                        time.sleep(stop)
                    data = db.encode_message(
                        "Object_TrackC",
                        {
                            "Rolling_Count": self.Rolling_Count,
                            "ObjObjectID": int(msg["Object_TrackC"][i]["ObjObjectID"]),
                            "Object_Latitude": float(
                                msg["Object_TrackC"][i]["Object_Latitude"]
                            ),
                            "Object_Absolute_Velocity": float(
                                msg["Object_TrackC"][i]["Object_Absolute_Velocity"]
                            ),
                            "Object_Course": float(
                                msg["Object_TrackC"][i]["Object_Course"]
                            ),
                            "DynProp": int(msg["Object_TrackC"][i]["DynProp"]),
                        },
                    )
                    message = can.Message(
                        arbitration_id=db.get_message_by_name("Object_TrackC").frame_id,
                        data=data,
                        is_extended_id=False,
                    )
                    try:
                        can_bus.send(message)
                        time.sleep(stop)
                    except:
                        time.sleep(stop)
                    data = db.encode_message(
                        "Object_TrackD",
                        {
                            "Rolling_Count": self.Rolling_Count,
                            "ObjObjectID": int(msg["Object_TrackD"][i]["ObjObjectID"]),
                            "Object_Longitude": float(
                                msg["Object_TrackD"][i]["Object_Longitude"]
                            ),
                        },
                    )
                    message = can.Message(
                        arbitration_id=db.get_message_by_name("Object_TrackD").frame_id,
                        data=data,
                        is_extended_id=False,
                    )
                    try:
                        can_bus.send(message)
                        time.sleep(stop)
                    except:
                        time.sleep(stop)
            elif key == "TrafficSignalHead_TrackA":
                for i in range(detected_signals):
                    data = db.encode_message(
                        "TrafficSignalHead_TrackA",
                        {
                            "Rolling_Count": self.Rolling_Count,
                            "SignalObjectID": int(
                                msg["TrafficSignalHead_TrackA"][i]["SignalObjectID"]
                            ),
                            "Height_Above_Ground": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "Height_Above_Ground"
                                ]
                            ),
                            "LongPos": float(
                                msg["TrafficSignalHead_TrackA"][i]["LongPos"]
                            ),
                            "LatPos": float(
                                msg["TrafficSignalHead_TrackA"][i]["LatPos"]
                            ),
                            "Confidence": int(
                                msg["TrafficSignalHead_TrackA"][i]["Confidence"]
                            ),
                            "Signal_Head_Type": int(
                                msg["TrafficSignalHead_TrackA"][i]["Signal_Head_Type"]
                            ),
                            "IllumLtNone": int(
                                msg["TrafficSignalHead_TrackA"][i]["IllumLtNone"]
                            ),
                            "IllumLtRedBall": int(
                                msg["TrafficSignalHead_TrackA"][i]["IllumLtRedBall"]
                            ),
                            "IllumLtYellowBall": int(
                                msg["TrafficSignalHead_TrackA"][i]["IllumLtYellowBall"]
                            ),
                            "IllumLtGreenBall": int(
                                msg["TrafficSignalHead_TrackA"][i]["IllumLtGreenBall"]
                            ),
                            "IllumLtFlshngRedBall": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "IllumLtFlshngRedBall"
                                ]
                            ),
                            "IllumLtFlshngYellowBall": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "IllumLtFlshngYellowBall"
                                ]
                            ),
                            "IllumLtRedLeftArrow": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "IllumLtRedLeftArrow"
                                ]
                            ),
                            "IllumLtYellowLeftArrow": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "IllumLtYellowLeftArrow"
                                ]
                            ),
                            "IllumLtGreenLeftArrow": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "IllumLtGreenLeftArrow"
                                ]
                            ),
                            "IllumLtFlshngRedLeftArrow": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "IllumLtFlshngRedLeftArrow"
                                ]
                            ),
                            "IllumLtFlshngYellowLeftArrow": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "IllumLtFlshngYellowLeftArrow"
                                ]
                            ),
                            "IllumLtRedRightArrow": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "IllumLtRedRightArrow"
                                ]
                            ),
                            "IllumLtYellowRightArrow": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "IllumLtYellowRightArrow"
                                ]
                            ),
                            "IllumLtGreenRightArrow": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "IllumLtGreenRightArrow"
                                ]
                            ),
                            "IllumLtFlshngRedRightArrow": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "IllumLtFlshngRedRightArrow"
                                ]
                            ),
                            "IllumLtFlshngYellowRightArrow": int(
                                msg["TrafficSignalHead_TrackA"][i][
                                    "IllumLtFlshngYellowRightArrow"
                                ]
                            ),
                        },
                    )
                    message = can.Message(
                        arbitration_id=db.get_message_by_name(
                            "TrafficSignalHead_TrackA"
                        ).frame_id,
                        data=data,
                        is_extended_id=False,
                    )
                    try:
                        can_bus.send(message)
                        time.sleep(stop)
                    except:
                        time.sleep(stop)
            elif key == "TrafficSign_TrackA":
                for i in range(detected_signs):
                    data = db.encode_message(
                        "TrafficSign_TrackA",
                        {
                            "Rolling_Count": self.Rolling_Count,
                            "SignObjectID": int(
                                msg["TrafficSign_TrackA"][i]["SignObjectID"]
                            ),
                            "Confidence": int(
                                msg["TrafficSign_TrackA"][i]["Confidence"]
                            ),
                            "LongPos": float(msg["TrafficSign_TrackA"][i]["LongPos"]),
                            "Height_Above_Ground": float(
                                msg["TrafficSign_TrackA"][i]["Height_Above_Ground"]
                            ),
                            "LatPos": float(msg["TrafficSign_TrackA"][i]["LatPos"]),
                            "Sign_Type": int(msg["TrafficSign_TrackA"][i]["Sign_Type"]),
                            "Sign_Value": int(
                                msg["TrafficSign_TrackA"][i]["Sign_Value"]
                            ),
                        },
                    )
                    message = can.Message(
                        arbitration_id=db.get_message_by_name(
                            "TrafficSign_TrackA"
                        ).frame_id,
                        data=data,
                        is_extended_id=False,
                    )
                    try:
                        can_bus.send(message)
                        time.sleep(stop)
                    except:
                        time.sleep(stop)
            elif key == "LaneMarking_TrackA":
                for i in range(detected_markings):
                    data = db.encode_message(
                        "LaneMarking_TrackA",
                        {
                            "Rolling_Count": self.Rolling_Count,
                            "LaneMarkingID": int(
                                msg["LaneMarking_TrackA"][i]["LaneMarkingID"]
                            ),
                            "LaneMarkingLnHdngTngtV": int(
                                msg["LaneMarking_TrackA"][i]["LaneMarkingLnHdngTngtV"]
                            ),
                            "LaneMarkingLnHdngTngt": float(
                                msg["LaneMarking_TrackA"][i]["LaneMarkingLnHdngTngt"]
                            ),
                            "LaneMarkingLnDstV": int(
                                msg["LaneMarking_TrackA"][i]["LaneMarkingLnDstV"]
                            ),
                            "LaneMarkingLnDst": float(
                                msg["LaneMarking_TrackA"][i]["LaneMarkingLnDst"]
                            ),
                            "LaneMarkingLnCrvtV": int(
                                msg["LaneMarking_TrackA"][i]["LaneMarkingLnCrvtV"]
                            ),
                            "LaneMarkingLnCrvtGradV": int(
                                msg["LaneMarking_TrackA"][i]["LaneMarkingLnCrvtGradV"]
                            ),
                            "LaneMarkingLnCrvtGrad": 0,
                            "LaneMarkingLnCrvt": float(
                                msg["LaneMarking_TrackA"][i]["LaneMarkingLnCrvt"]
                            ),
                            "LaneMarkingLnQltyConfLvl": float(
                                msg["LaneMarking_TrackA"][i]["LaneMarkingLnQltyConfLvl"]
                            ),
                            "LaneMarkingLnMrkrTyp": int(
                                msg["LaneMarking_TrackA"][i]["LaneMarkingLnMrkrTyp"]
                            ),
                            "LaneMarkingColor": int(
                                msg["LaneMarking_TrackA"][i]["LaneMarkingColor"]
                            ),
                        },
                    )
                    message = can.Message(
                        arbitration_id=db.get_message_by_name(
                            "LaneMarking_TrackA"
                        ).frame_id,
                        data=data,
                        is_extended_id=False,
                    )
                    try:
                        can_bus.send(message)
                        time.sleep(stop)
                    except:
                        time.sleep(stop)
            elif key == "LimitLine_TrackA":
                for i in range(detected_lines):
                    data = db.encode_message(
                        "LimitLine_TrackA",
                        {
                            "Rolling_Count": self.Rolling_Count,
                            "LineObjectID": int(
                                msg["LimitLine_TrackA"][i]["LineObjectID"]
                            ),
                            "Confidence": int(msg["LimitLine_TrackA"][i]["Confidence"]),
                            "Longitudinal_Length": float(
                                msg["LimitLine_TrackA"][i]["Longitudinal_Length"]
                            ),
                            "Width": float(msg["LimitLine_TrackA"][i]["Width"]),
                            "LongPos": float(msg["LimitLine_TrackA"][i]["LongPos"]),
                            "LatPos": float(msg["LimitLine_TrackA"][i]["LatPos"]),
                            "Relative_Lane": int(
                                msg["LimitLine_TrackA"][i]["Relative_Lane"]
                            ),
                        },
                    )
                    message = can.Message(
                        arbitration_id=db.get_message_by_name(
                            "LimitLine_TrackA"
                        ).frame_id,
                        data=data,
                        is_extended_id=False,
                    )
                    try:
                        can_bus.send(message)
                        time.sleep(stop)
                    except:
                        time.sleep(stop)
