// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perception_comm:msg/CAN.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_COMM__MSG__DETAIL__CAN__STRUCT_H_
#define PERCEPTION_COMM__MSG__DETAIL__CAN__STRUCT_H_

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
// Member 'v2_x_intersection_s_p_a_t'
// Member 'v2_x_intersection_m_a_p'
// Member 'a_v_state'
// Member 'road_state'
// Member 'vehicle_orientation'
// Member 'vehicle_location'
// Member 'objects'
// Member 'object_track_a'
// Member 'object_track_b'
// Member 'object_track_c'
// Member 'object_track_d'
// Member 'traffic_signal_heads'
// Member 'traffic_signal_head_track_a'
// Member 'traffic_signs'
// Member 'traffic_sign_track_a'
// Member 'lane_markings'
// Member 'lane_marking_track_a'
// Member 'limit_lines'
// Member 'limit_line_track_a'
// Member 'misc'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CAN in the package perception_comm.
typedef struct perception_comm__msg__CAN
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence v2_x_intersection_s_p_a_t;
  rosidl_runtime_c__float__Sequence v2_x_intersection_m_a_p;
  rosidl_runtime_c__float__Sequence a_v_state;
  rosidl_runtime_c__float__Sequence road_state;
  rosidl_runtime_c__float__Sequence vehicle_orientation;
  rosidl_runtime_c__float__Sequence vehicle_location;
  rosidl_runtime_c__float__Sequence objects;
  rosidl_runtime_c__float__Sequence object_track_a;
  rosidl_runtime_c__float__Sequence object_track_b;
  rosidl_runtime_c__float__Sequence object_track_c;
  rosidl_runtime_c__float__Sequence object_track_d;
  rosidl_runtime_c__float__Sequence traffic_signal_heads;
  rosidl_runtime_c__float__Sequence traffic_signal_head_track_a;
  rosidl_runtime_c__float__Sequence traffic_signs;
  rosidl_runtime_c__float__Sequence traffic_sign_track_a;
  rosidl_runtime_c__float__Sequence lane_markings;
  rosidl_runtime_c__float__Sequence lane_marking_track_a;
  rosidl_runtime_c__float__Sequence limit_lines;
  rosidl_runtime_c__float__Sequence limit_line_track_a;
  rosidl_runtime_c__float__Sequence misc;
} perception_comm__msg__CAN;

// Struct for a sequence of perception_comm__msg__CAN.
typedef struct perception_comm__msg__CAN__Sequence
{
  perception_comm__msg__CAN * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_comm__msg__CAN__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_COMM__MSG__DETAIL__CAN__STRUCT_H_
