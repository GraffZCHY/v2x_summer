import re
from typing import Dict, List
import numpy as np

from .message_base import MessageBase


# if a message is a collection
CAN_KEYS = dict(
    V2XIntersection_MAP=False,
    RoadState=False,
    VehicleOrientation=False,
    VehicleLocation=False,
    Objects=False,
    Object_TrackA=True,
    Object_TrackB=True,
    Object_TrackC=True,
    Object_TrackD=True,
    TrafficSignalHeads=False,
    TrafficSignalHead_TrackA=True,
    TrafficSigns=False,
    TrafficSign_TrackA=True,
    LaneMarkings=False,
    LaneMarking_TrackA=True,
    LimitLines=False,
    LimitLine_TrackA=True,
    Misc=False,
)
CAN_KEYS_TO_ROS_KEYS = {
    k: re.sub("(?<!^)(?=[A-Z])", "_", k.replace("_", "")).lower() for k in CAN_KEYS
}


class RoadState(MessageBase):
    KEYS = [
        "Rolling_Count",
        "Active_Traffic_Signal_Head_ID",
        "Current_Observed_Speed_Limit",
        "Next_Observed_Speed_Limit",
        "Next_Observed_Speed_Limit_Longit",
        "Active_Lane_Number",
        "Left_Lane_Marking_ID",
        "Right_Lane_Marking_ID",
        "LLnDistanceValid",
        "DistToLLnEdge",
        "RLnDistanceValid",
        "DistToRLnEdge",
        "dummy0",
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class VehicleOrientation(MessageBase):
    KEYS = [
        "UNUSED_MSG_PLACEHOLDER",
    ]


class VehicleLocation(MessageBase):
    KEYS = [
        "VehicleLatitude",
        "VehicleLongitude",
        "Velocity",
        "Yaw",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class Objects(MessageBase):
    KEYS = [
        "Rolling_Count",
        "Current_Object_Count",
        "Observation_Time_of_Hour",
        "dummy0",
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class Object_TrackA(MessageBase):
    KEYS = [
        "Rolling_Count",
        "ObjObjectID",
        "ObjObjectType",
        "LongPos",
        "LatPos",
        "RelLongVel",
        "RelLatVel",
        "Confidence",
        "Relative_Lane",
        "bbox_xmin",
        "bbox_ymin",
        "bbox_xmax",
        "bbox_ymax",
        "bbox3d_x",
        "bbox3d_y",
        "bbox3d_z",
        "bbox3d_dx",
        "bbox3d_dy",
        "bbox3d_dz",
        "bbox3d_ry",
        "confidence_val",
        "dummy0",  # 0 if no 3d information can be found by fusion method, 1 if 3d bbox available
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class Object_TrackB(MessageBase):
    KEYS = [
        "Rolling_Count",
        "ObjObjectID",
        "Width",
        "Height",
        "Object_Relative_Orientation",
        "RelLnPosition",
        "Object_Source_Camera",
        "Object_Source_Radar",
        "Object_Source_Ultrasonic",
        "Object_Source_V2X",
        "Object_Source_Lidar",
        "Object_Source_Other",
        "dummy0",
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class Object_TrackC(MessageBase):
    KEYS = [
        "Rolling_Count",
        "ObjObjectID",
        "Object_Latitude",
        "Object_Absolute_Velocity",
        "Object_Course",
        "DynProp",
        "dummy0",
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class Object_TrackD(MessageBase):
    KEYS = [
        "Rolling_Count",
        "ObjObjectID",
        "Object_Longitude",
        "dummy0",
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class TrafficSignalHeads(MessageBase):
    KEYS = [
        "Rolling_Count",
        "Current_Signal_Head_Count",
        "Observation_Time_of_Hour",
        "dummy0",
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class TrafficSignalHead_TrackA(MessageBase):
    KEYS = [
        "Rolling_Count",
        "SignalObjectID",
        "Height_Above_Ground",
        "LongPos",
        "LatPos",
        "Confidence",
        "Signal_Head_Type",
        "IllumLtNone",
        "IllumLtRedBall",
        "IllumLtYellowBall",
        "IllumLtGreenBall",
        "IllumLtFlshngRedBall",
        "IllumLtFlshngYellowBall",
        "IllumLtRedLeftArrow",
        "IllumLtYellowLeftArrow",
        "IllumLtGreenLeftArrow",
        "IllumLtFlshngRedLeftArrow",
        "IllumLtFlshngYellowLeftArrow",
        "IllumLtRedRightArrow",
        "IllumLtYellowRightArrow",
        "IllumLtGreenRightArrow",
        "IllumLtFlshngRedRightArrow",
        "IllumLtFlshngYellowRightArrow",
        "bbox_xmin",
        "bbox_ymin",
        "bbox_xmax",
        "bbox_ymax",
        "bbox3d_x",
        "bbox3d_y",
        "bbox3d_z",
        "bbox3d_dx",
        "bbox3d_dy",
        "bbox3d_dz",
        "bbox3d_ry",
        "confidence_val",
        "dummy0",  # 0 if no 3d information can be found by fusion method, 1 if 3d bbox available
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class TrafficSigns(MessageBase):
    KEYS = [
        "Rolling_Count",
        "Current_Sign_Count",
        "Observation_Time_of_Hour",
        "dummy0",
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class TrafficSign_TrackA(MessageBase):
    KEYS = [
        "Rolling_Count",
        "SignObjectID",
        "Confidence",
        "LongPos",
        "Height_Above_Ground",
        "LatPos",
        "Sign_Type",
        "Sign_Value",
        "bbox_xmin",
        "bbox_ymin",
        "bbox_xmax",
        "bbox_ymax",
        "bbox3d_x",
        "bbox3d_y",
        "bbox3d_z",
        "bbox3d_dx",
        "bbox3d_dy",
        "bbox3d_dz",
        "bbox3d_ry",
        "confidence_val",
        "dummy0",  # 0 if no 3d information can be found by fusion method, 1 if 3d bbox available
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class LaneMarkings(MessageBase):
    KEYS = [
        "Rolling_Count",
        "CurrentLaneMarkingCount",
        "Observation_Time_of_Hour",
        "dummy0",
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class LaneMarking_TrackA(MessageBase):
    KEYS = [
        "Rolling_Count",
        "LaneMarkingID",
        "LaneMarkingLnHdngTngtV",
        "LaneMarkingLnHdngTngt",
        "LaneMarkingLnDstV",
        "LaneMarkingLnDst",
        "LaneMarkingLnCrvtV",
        "LaneMarkingLnCrvtGradV",
        "LaneMarkingLnCrvtGrad",
        "LaneMarkingLnCrvt",
        "LaneMarkingLnQltyConfLvl",
        "LaneMarkingLnMrkrTyp",
        "LaneMarkingColor",
        "dummy0",
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class LimitLines(MessageBase):
    KEYS = [
        "Rolling_Count",
        "Current_Limit_Line_Count",
        "Observation_Time_of_Hour",
        "dummy0",
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class LimitLine_TrackA(MessageBase):
    KEYS = [
        "Rolling_Count",
        "LineObjectID",
        "Confidence",
        "Longitudinal_Length",
        "Width",
        "LongPos",
        "LatPos",
        "Relative_Lane",
        "confidence_val",
        "dummy0",
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
    ]


class V2XIntersection_MAP(MessageBase):
    KEYS = [
        "IntersectionID",
        "IngressLaneID",
        "PlannedEgressLaneID",
        "PlannedManeuver",
        "SignalGroup",
        "Rolling_Count",
        "MAP_Validity",
    ]

class V2XIntersection_SPAT(MessageBase):
    KEYS = [
        "IntersectionID",
        "SignalGroup",
        "SPAT_Timestamp",
        "SecondsUntilChangeMinimum",
        "SecondsUntilChangeMaximum",
        "MovementEventState",
        "Rolling_Count",
        "SPAT_Validity",
    ]


class Misc(MessageBase):
    KEYS = [
        "dummy0",
        "dummy1",
        "dummy2",
        "dummy3",
        "dummy4",
        "dummy5",
        "dummy6",
        "dummy7",
        "dummy8",
        "dummy9",
        "dummy10",
    ]


class Message:
    __slots__ = tuple(CAN_KEYS.keys())

    def __init__(self, **kwargs):
        """
        For each key, input:
            - empty list `[]` to create dummy one
            - a valid list if it exists
        to include it in the message, otherwise it will be excluded.

        RoadState: Optional[List[float]] = None,
        VehicleOrientation: Optional[List[float]] = None,
        VehicleLocation: Optional[List[float]] = None,
        Objects: Optional[List[float]] = None,
        Object_TrackA: Optional[List[float]] = None,
        Object_TrackB: Optional[List[float]] = None,
        Object_TrackC: Optional[List[float]] = None,
        Object_TrackD: Optional[List[float]] = None,
        TrafficSignalHeads: Optional[List[float]] = None,
        TrafficSignalHead_TrackA: Optional[List[float]] = None,
        TrafficSigns: Optional[List[float]] = None,
        TrafficSign_TrackA: Optional[List[float]] = None,
        LaneMarkings: Optional[List[float]] = None,
        LaneMarking_TrackA: Optional[List[float]] = None,
        LimitLines: Optional[List[float]] = None,
        LimitLine_TrackA: Optional[List[float]] = None,
        Misc: Optional[List[float]] = None,
        """
        self.add_new_key(**kwargs)

    def add_new_key(self, **kwargs) -> None:
        for k, v in kwargs.items():
            assert not hasattr(self, k)
            assert isinstance(v, list) or isinstance(v, np.ndarray)
            setattr(self, k, globals()[k](v, CAN_KEYS[k]))

    def reset_key(self, **kwargs) -> None:
        for k, v in kwargs.items():
            assert hasattr(self, k)
            assert isinstance(v, list) or isinstance(v, np.ndarray)
            setattr(self, k, globals()[k](v, CAN_KEYS[k]))

    def to_can(self) -> Dict:
        return {k: getattr(self, k).to_can() for k in self.get_avail_keys()}

    def to_ros(self, msg) -> None:
        for k in self.get_avail_keys():
            k_ros = CAN_KEYS_TO_ROS_KEYS[k]
            setattr(msg, k_ros, getattr(self, k).to_ros())

    def _to_ros(self) -> Dict:
        return {
            CAN_KEYS_TO_ROS_KEYS[k]: getattr(self, k).to_ros()
            for k in self.get_avail_keys()
        }

    @classmethod
    def from_ros(cls, msg) -> "Message":
        # TODO: so ugly here
        kwargs = {}
        if len(getattr(msg, "objects")) > 0:
            kwargs.update(
                dict(
                    Object_TrackA=[],
                    Object_TrackB=[],
                    Object_TrackC=[],
                    Object_TrackD=[],
                )
            )

        if len(getattr(msg, "traffic_signal_heads")) > 0:
            kwargs["TrafficSignalHead_TrackA"] = []

        if len(getattr(msg, "traffic_signs")) > 0:
            kwargs["TrafficSign_TrackA"] = []

        if len(getattr(msg, "lane_markings")) > 0:
            kwargs["LaneMarking_TrackA"] = []

        if len(getattr(msg, "limit_lines")) > 0:
            kwargs["LimitLine_TrackA"] = []

        for k in CAN_KEYS.keys():
            k_ros = CAN_KEYS_TO_ROS_KEYS[k]
            v = getattr(msg, k_ros)
            if len(v) > 0:
                kwargs[k] = np.array(v, dtype=np.float64)

        return Message(**kwargs)

    def get_avail_keys(self) -> List[str]:
        return [k for k in CAN_KEYS.keys() if hasattr(self, k)]

    def get_avail_ros_keys(self) -> List[str]:
        return [CAN_KEYS_TO_ROS_KEYS[k] for k in self.get_avail_keys()]

    def __len__(self) -> int:
        return len(self.get_avail_keys())

    def __repr__(self) -> str:
        avail_keys = self.get_avail_keys()
        s = f"{self.__class__.__name__}(num_messages={len(avail_keys)}"
        for k in avail_keys:
            s += f", {k}={getattr(self, k)}"
        s += ")"
        return s

    __str__ = __repr__
