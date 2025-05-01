# V2X data sending for V2X Challenge Part 1

This package will replay the V2X .pcap dataset, and decode the data then send into ROS. 

## Prerequisites

Before you can use this package, make sure you have the following prerequisites installed:

- ROS2 Foxy
- Python 3

## Installation
#### Dependencies

#####Pycrate
The package needs decode the J2735 data in real-time. Please make sure [Pycrate](https://github.com/P1sec/pycrate) is installed. 


#### Package Installation

- To install this package, clone this package into your ```/src``` of you workspace:

```bash
    git clone https://github.com/yourusername/ros2_v2x_sending.git
```
- Then change the ``v2x_send_spat/v2x_send_spat/v3.json`` path as your absolute path in the file ``v2x_send_spat/v2x_send_spat/v2x_send_spat.py
  ``, line 166.
  
#### Usage
- Source the path and colcon build:
```
source /opt/ros/foxy/setup.bash
colcon build
. install/local_setup.bash
```
- Run node:
```
ros2 run v2x_send_spat v2x_send_spat
```

