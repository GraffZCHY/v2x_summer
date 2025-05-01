// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perception_comm:msg/BSM.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_COMM__MSG__DETAIL__BSM__STRUCT_H_
#define PERCEPTION_COMM__MSG__DETAIL__BSM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'vehicle_id'
// Member 'full_json'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/BSM in the package perception_comm.
typedef struct perception_comm__msg__BSM
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String vehicle_id;
  int32_t msg_cnt;
  double lat;
  double lon;
  double elev;
  int32_t heading;
  double speed;
  double accel_lat;
  double accel_long;
  double accel_vert;
  double accel_yaw;
  rosidl_runtime_c__String full_json;
} perception_comm__msg__BSM;

// Struct for a sequence of perception_comm__msg__BSM.
typedef struct perception_comm__msg__BSM__Sequence
{
  perception_comm__msg__BSM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_comm__msg__BSM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_COMM__MSG__DETAIL__BSM__STRUCT_H_
