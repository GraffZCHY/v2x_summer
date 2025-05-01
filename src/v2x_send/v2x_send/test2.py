import re

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
print(CAN_KEYS_TO_ROS_KEYS)