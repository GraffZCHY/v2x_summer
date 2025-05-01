// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from perception_comm:msg/CAN.idl
// generated code does not contain a copyright notice
#include "perception_comm/msg/detail/can__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "perception_comm/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "perception_comm/msg/detail/can__struct.h"
#include "perception_comm/msg/detail/can__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // a_v_state, lane_marking_track_a, lane_markings, limit_line_track_a, limit_lines, misc, object_track_a, object_track_b, object_track_c, object_track_d, objects, road_state, traffic_sign_track_a, traffic_signal_head_track_a, traffic_signal_heads, traffic_signs, v2_x_intersection_m_a_p, v2_x_intersection_s_p_a_t, vehicle_location, vehicle_orientation
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // a_v_state, lane_marking_track_a, lane_markings, limit_line_track_a, limit_lines, misc, object_track_a, object_track_b, object_track_c, object_track_d, objects, road_state, traffic_sign_track_a, traffic_signal_head_track_a, traffic_signal_heads, traffic_signs, v2_x_intersection_m_a_p, v2_x_intersection_s_p_a_t, vehicle_location, vehicle_orientation
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_perception_comm
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_perception_comm
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_perception_comm
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _CAN__ros_msg_type = perception_comm__msg__CAN;

static bool _CAN__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CAN__ros_msg_type * ros_message = static_cast<const _CAN__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: v2_x_intersection_s_p_a_t
  {
    size_t size = ros_message->v2_x_intersection_s_p_a_t.size;
    auto array_ptr = ros_message->v2_x_intersection_s_p_a_t.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: v2_x_intersection_m_a_p
  {
    size_t size = ros_message->v2_x_intersection_m_a_p.size;
    auto array_ptr = ros_message->v2_x_intersection_m_a_p.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: a_v_state
  {
    size_t size = ros_message->a_v_state.size;
    auto array_ptr = ros_message->a_v_state.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: road_state
  {
    size_t size = ros_message->road_state.size;
    auto array_ptr = ros_message->road_state.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vehicle_orientation
  {
    size_t size = ros_message->vehicle_orientation.size;
    auto array_ptr = ros_message->vehicle_orientation.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vehicle_location
  {
    size_t size = ros_message->vehicle_location.size;
    auto array_ptr = ros_message->vehicle_location.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: objects
  {
    size_t size = ros_message->objects.size;
    auto array_ptr = ros_message->objects.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: object_track_a
  {
    size_t size = ros_message->object_track_a.size;
    auto array_ptr = ros_message->object_track_a.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: object_track_b
  {
    size_t size = ros_message->object_track_b.size;
    auto array_ptr = ros_message->object_track_b.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: object_track_c
  {
    size_t size = ros_message->object_track_c.size;
    auto array_ptr = ros_message->object_track_c.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: object_track_d
  {
    size_t size = ros_message->object_track_d.size;
    auto array_ptr = ros_message->object_track_d.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: traffic_signal_heads
  {
    size_t size = ros_message->traffic_signal_heads.size;
    auto array_ptr = ros_message->traffic_signal_heads.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: traffic_signal_head_track_a
  {
    size_t size = ros_message->traffic_signal_head_track_a.size;
    auto array_ptr = ros_message->traffic_signal_head_track_a.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: traffic_signs
  {
    size_t size = ros_message->traffic_signs.size;
    auto array_ptr = ros_message->traffic_signs.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: traffic_sign_track_a
  {
    size_t size = ros_message->traffic_sign_track_a.size;
    auto array_ptr = ros_message->traffic_sign_track_a.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lane_markings
  {
    size_t size = ros_message->lane_markings.size;
    auto array_ptr = ros_message->lane_markings.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lane_marking_track_a
  {
    size_t size = ros_message->lane_marking_track_a.size;
    auto array_ptr = ros_message->lane_marking_track_a.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: limit_lines
  {
    size_t size = ros_message->limit_lines.size;
    auto array_ptr = ros_message->limit_lines.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: limit_line_track_a
  {
    size_t size = ros_message->limit_line_track_a.size;
    auto array_ptr = ros_message->limit_line_track_a.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: misc
  {
    size_t size = ros_message->misc.size;
    auto array_ptr = ros_message->misc.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CAN__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CAN__ros_msg_type * ros_message = static_cast<_CAN__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: v2_x_intersection_s_p_a_t
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->v2_x_intersection_s_p_a_t.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->v2_x_intersection_s_p_a_t);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->v2_x_intersection_s_p_a_t, size)) {
      return "failed to create array for field 'v2_x_intersection_s_p_a_t'";
    }
    auto array_ptr = ros_message->v2_x_intersection_s_p_a_t.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: v2_x_intersection_m_a_p
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->v2_x_intersection_m_a_p.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->v2_x_intersection_m_a_p);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->v2_x_intersection_m_a_p, size)) {
      return "failed to create array for field 'v2_x_intersection_m_a_p'";
    }
    auto array_ptr = ros_message->v2_x_intersection_m_a_p.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: a_v_state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->a_v_state.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->a_v_state);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->a_v_state, size)) {
      return "failed to create array for field 'a_v_state'";
    }
    auto array_ptr = ros_message->a_v_state.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: road_state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->road_state.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->road_state);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->road_state, size)) {
      return "failed to create array for field 'road_state'";
    }
    auto array_ptr = ros_message->road_state.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vehicle_orientation
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vehicle_orientation.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->vehicle_orientation);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->vehicle_orientation, size)) {
      return "failed to create array for field 'vehicle_orientation'";
    }
    auto array_ptr = ros_message->vehicle_orientation.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vehicle_location
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vehicle_location.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->vehicle_location);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->vehicle_location, size)) {
      return "failed to create array for field 'vehicle_location'";
    }
    auto array_ptr = ros_message->vehicle_location.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: objects
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->objects.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->objects);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->objects, size)) {
      return "failed to create array for field 'objects'";
    }
    auto array_ptr = ros_message->objects.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: object_track_a
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_track_a.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->object_track_a);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->object_track_a, size)) {
      return "failed to create array for field 'object_track_a'";
    }
    auto array_ptr = ros_message->object_track_a.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: object_track_b
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_track_b.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->object_track_b);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->object_track_b, size)) {
      return "failed to create array for field 'object_track_b'";
    }
    auto array_ptr = ros_message->object_track_b.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: object_track_c
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_track_c.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->object_track_c);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->object_track_c, size)) {
      return "failed to create array for field 'object_track_c'";
    }
    auto array_ptr = ros_message->object_track_c.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: object_track_d
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_track_d.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->object_track_d);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->object_track_d, size)) {
      return "failed to create array for field 'object_track_d'";
    }
    auto array_ptr = ros_message->object_track_d.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: traffic_signal_heads
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->traffic_signal_heads.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->traffic_signal_heads);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->traffic_signal_heads, size)) {
      return "failed to create array for field 'traffic_signal_heads'";
    }
    auto array_ptr = ros_message->traffic_signal_heads.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: traffic_signal_head_track_a
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->traffic_signal_head_track_a.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->traffic_signal_head_track_a);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->traffic_signal_head_track_a, size)) {
      return "failed to create array for field 'traffic_signal_head_track_a'";
    }
    auto array_ptr = ros_message->traffic_signal_head_track_a.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: traffic_signs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->traffic_signs.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->traffic_signs);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->traffic_signs, size)) {
      return "failed to create array for field 'traffic_signs'";
    }
    auto array_ptr = ros_message->traffic_signs.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: traffic_sign_track_a
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->traffic_sign_track_a.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->traffic_sign_track_a);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->traffic_sign_track_a, size)) {
      return "failed to create array for field 'traffic_sign_track_a'";
    }
    auto array_ptr = ros_message->traffic_sign_track_a.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lane_markings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lane_markings.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->lane_markings);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->lane_markings, size)) {
      return "failed to create array for field 'lane_markings'";
    }
    auto array_ptr = ros_message->lane_markings.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lane_marking_track_a
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lane_marking_track_a.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->lane_marking_track_a);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->lane_marking_track_a, size)) {
      return "failed to create array for field 'lane_marking_track_a'";
    }
    auto array_ptr = ros_message->lane_marking_track_a.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: limit_lines
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->limit_lines.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->limit_lines);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->limit_lines, size)) {
      return "failed to create array for field 'limit_lines'";
    }
    auto array_ptr = ros_message->limit_lines.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: limit_line_track_a
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->limit_line_track_a.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->limit_line_track_a);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->limit_line_track_a, size)) {
      return "failed to create array for field 'limit_line_track_a'";
    }
    auto array_ptr = ros_message->limit_line_track_a.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: misc
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->misc.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->misc);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->misc, size)) {
      return "failed to create array for field 'misc'";
    }
    auto array_ptr = ros_message->misc.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_perception_comm
size_t get_serialized_size_perception_comm__msg__CAN(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CAN__ros_msg_type * ros_message = static_cast<const _CAN__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name v2_x_intersection_s_p_a_t
  {
    size_t array_size = ros_message->v2_x_intersection_s_p_a_t.size;
    auto array_ptr = ros_message->v2_x_intersection_s_p_a_t.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v2_x_intersection_m_a_p
  {
    size_t array_size = ros_message->v2_x_intersection_m_a_p.size;
    auto array_ptr = ros_message->v2_x_intersection_m_a_p.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a_v_state
  {
    size_t array_size = ros_message->a_v_state.size;
    auto array_ptr = ros_message->a_v_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_state
  {
    size_t array_size = ros_message->road_state.size;
    auto array_ptr = ros_message->road_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_orientation
  {
    size_t array_size = ros_message->vehicle_orientation.size;
    auto array_ptr = ros_message->vehicle_orientation.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_location
  {
    size_t array_size = ros_message->vehicle_location.size;
    auto array_ptr = ros_message->vehicle_location.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name objects
  {
    size_t array_size = ros_message->objects.size;
    auto array_ptr = ros_message->objects.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_track_a
  {
    size_t array_size = ros_message->object_track_a.size;
    auto array_ptr = ros_message->object_track_a.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_track_b
  {
    size_t array_size = ros_message->object_track_b.size;
    auto array_ptr = ros_message->object_track_b.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_track_c
  {
    size_t array_size = ros_message->object_track_c.size;
    auto array_ptr = ros_message->object_track_c.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_track_d
  {
    size_t array_size = ros_message->object_track_d.size;
    auto array_ptr = ros_message->object_track_d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name traffic_signal_heads
  {
    size_t array_size = ros_message->traffic_signal_heads.size;
    auto array_ptr = ros_message->traffic_signal_heads.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name traffic_signal_head_track_a
  {
    size_t array_size = ros_message->traffic_signal_head_track_a.size;
    auto array_ptr = ros_message->traffic_signal_head_track_a.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name traffic_signs
  {
    size_t array_size = ros_message->traffic_signs.size;
    auto array_ptr = ros_message->traffic_signs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name traffic_sign_track_a
  {
    size_t array_size = ros_message->traffic_sign_track_a.size;
    auto array_ptr = ros_message->traffic_sign_track_a.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_markings
  {
    size_t array_size = ros_message->lane_markings.size;
    auto array_ptr = ros_message->lane_markings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_marking_track_a
  {
    size_t array_size = ros_message->lane_marking_track_a.size;
    auto array_ptr = ros_message->lane_marking_track_a.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name limit_lines
  {
    size_t array_size = ros_message->limit_lines.size;
    auto array_ptr = ros_message->limit_lines.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name limit_line_track_a
  {
    size_t array_size = ros_message->limit_line_track_a.size;
    auto array_ptr = ros_message->limit_line_track_a.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name misc
  {
    size_t array_size = ros_message->misc.size;
    auto array_ptr = ros_message->misc.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CAN__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_perception_comm__msg__CAN(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_perception_comm
size_t max_serialized_size_perception_comm__msg__CAN(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: v2_x_intersection_s_p_a_t
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: v2_x_intersection_m_a_p
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: a_v_state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: road_state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_orientation
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_location
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: objects
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_track_a
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_track_b
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_track_c
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_track_d
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: traffic_signal_heads
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: traffic_signal_head_track_a
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: traffic_signs
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: traffic_sign_track_a
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_markings
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_marking_track_a
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: limit_lines
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: limit_line_track_a
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: misc
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CAN__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_perception_comm__msg__CAN(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CAN = {
  "perception_comm::msg",
  "CAN",
  _CAN__cdr_serialize,
  _CAN__cdr_deserialize,
  _CAN__get_serialized_size,
  _CAN__max_serialized_size
};

static rosidl_message_type_support_t _CAN__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CAN,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, perception_comm, msg, CAN)() {
  return &_CAN__type_support;
}

#if defined(__cplusplus)
}
#endif
