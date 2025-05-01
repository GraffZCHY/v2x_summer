// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from perception_comm:msg/CAN.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "perception_comm/msg/detail/can__rosidl_typesupport_introspection_c.h"
#include "perception_comm/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "perception_comm/msg/detail/can__functions.h"
#include "perception_comm/msg/detail/can__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `v2_x_intersection_s_p_a_t`
// Member `v2_x_intersection_m_a_p`
// Member `a_v_state`
// Member `road_state`
// Member `vehicle_orientation`
// Member `vehicle_location`
// Member `objects`
// Member `object_track_a`
// Member `object_track_b`
// Member `object_track_c`
// Member `object_track_d`
// Member `traffic_signal_heads`
// Member `traffic_signal_head_track_a`
// Member `traffic_signs`
// Member `traffic_sign_track_a`
// Member `lane_markings`
// Member `lane_marking_track_a`
// Member `limit_lines`
// Member `limit_line_track_a`
// Member `misc`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  perception_comm__msg__CAN__init(message_memory);
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_fini_function(void * message_memory)
{
  perception_comm__msg__CAN__fini(message_memory);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__v2_x_intersection_s_p_a_t(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__v2_x_intersection_s_p_a_t(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__v2_x_intersection_s_p_a_t(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__v2_x_intersection_s_p_a_t(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__v2_x_intersection_s_p_a_t(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__v2_x_intersection_s_p_a_t(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__v2_x_intersection_s_p_a_t(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__v2_x_intersection_s_p_a_t(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__v2_x_intersection_m_a_p(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__v2_x_intersection_m_a_p(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__v2_x_intersection_m_a_p(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__v2_x_intersection_m_a_p(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__v2_x_intersection_m_a_p(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__v2_x_intersection_m_a_p(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__v2_x_intersection_m_a_p(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__v2_x_intersection_m_a_p(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__a_v_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__a_v_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__a_v_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__a_v_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__a_v_state(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__a_v_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__a_v_state(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__a_v_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__road_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__road_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__road_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__road_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__road_state(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__road_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__road_state(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__road_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__vehicle_orientation(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__vehicle_orientation(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__vehicle_orientation(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__vehicle_orientation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__vehicle_orientation(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__vehicle_orientation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__vehicle_orientation(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__vehicle_orientation(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__vehicle_location(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__vehicle_location(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__vehicle_location(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__vehicle_location(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__vehicle_location(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__vehicle_location(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__vehicle_location(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__vehicle_location(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__objects(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__objects(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__objects(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__objects(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__objects(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__objects(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__object_track_a(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__object_track_a(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__object_track_a(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__object_track_a(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__object_track_a(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__object_track_a(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__object_track_a(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__object_track_a(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__object_track_b(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__object_track_b(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__object_track_b(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__object_track_b(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__object_track_b(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__object_track_b(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__object_track_b(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__object_track_b(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__object_track_c(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__object_track_c(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__object_track_c(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__object_track_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__object_track_c(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__object_track_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__object_track_c(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__object_track_c(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__object_track_d(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__object_track_d(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__object_track_d(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__object_track_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__object_track_d(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__object_track_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__object_track_d(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__object_track_d(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__traffic_signal_heads(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__traffic_signal_heads(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__traffic_signal_heads(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__traffic_signal_heads(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__traffic_signal_heads(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__traffic_signal_heads(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__traffic_signal_heads(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__traffic_signal_heads(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__traffic_signal_head_track_a(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__traffic_signal_head_track_a(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__traffic_signal_head_track_a(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__traffic_signal_head_track_a(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__traffic_signal_head_track_a(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__traffic_signal_head_track_a(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__traffic_signal_head_track_a(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__traffic_signal_head_track_a(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__traffic_signs(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__traffic_signs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__traffic_signs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__traffic_signs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__traffic_signs(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__traffic_signs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__traffic_signs(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__traffic_signs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__traffic_sign_track_a(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__traffic_sign_track_a(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__traffic_sign_track_a(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__traffic_sign_track_a(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__traffic_sign_track_a(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__traffic_sign_track_a(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__traffic_sign_track_a(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__traffic_sign_track_a(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__lane_markings(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__lane_markings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__lane_markings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__lane_markings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__lane_markings(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__lane_markings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__lane_markings(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__lane_markings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__lane_marking_track_a(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__lane_marking_track_a(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__lane_marking_track_a(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__lane_marking_track_a(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__lane_marking_track_a(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__lane_marking_track_a(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__lane_marking_track_a(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__lane_marking_track_a(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__limit_lines(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__limit_lines(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__limit_lines(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__limit_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__limit_lines(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__limit_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__limit_lines(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__limit_lines(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__limit_line_track_a(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__limit_line_track_a(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__limit_line_track_a(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__limit_line_track_a(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__limit_line_track_a(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__limit_line_track_a(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__limit_line_track_a(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__limit_line_track_a(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__misc(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__misc(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__misc(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__misc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__misc(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__misc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__misc(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__misc(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_member_array[21] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v2_x_intersection_s_p_a_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, v2_x_intersection_s_p_a_t),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__v2_x_intersection_s_p_a_t,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__v2_x_intersection_s_p_a_t,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__v2_x_intersection_s_p_a_t,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__v2_x_intersection_s_p_a_t,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__v2_x_intersection_s_p_a_t,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__v2_x_intersection_s_p_a_t  // resize(index) function pointer
  },
  {
    "v2_x_intersection_m_a_p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, v2_x_intersection_m_a_p),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__v2_x_intersection_m_a_p,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__v2_x_intersection_m_a_p,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__v2_x_intersection_m_a_p,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__v2_x_intersection_m_a_p,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__v2_x_intersection_m_a_p,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__v2_x_intersection_m_a_p  // resize(index) function pointer
  },
  {
    "a_v_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, a_v_state),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__a_v_state,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__a_v_state,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__a_v_state,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__a_v_state,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__a_v_state,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__a_v_state  // resize(index) function pointer
  },
  {
    "road_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, road_state),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__road_state,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__road_state,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__road_state,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__road_state,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__road_state,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__road_state  // resize(index) function pointer
  },
  {
    "vehicle_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, vehicle_orientation),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__vehicle_orientation,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__vehicle_orientation,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__vehicle_orientation,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__vehicle_orientation,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__vehicle_orientation,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__vehicle_orientation  // resize(index) function pointer
  },
  {
    "vehicle_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, vehicle_location),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__vehicle_location,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__vehicle_location,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__vehicle_location,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__vehicle_location,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__vehicle_location,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__vehicle_location  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, objects),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__objects,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__objects,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__objects,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__objects,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__objects,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__objects  // resize(index) function pointer
  },
  {
    "object_track_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, object_track_a),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__object_track_a,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__object_track_a,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__object_track_a,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__object_track_a,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__object_track_a,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__object_track_a  // resize(index) function pointer
  },
  {
    "object_track_b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, object_track_b),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__object_track_b,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__object_track_b,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__object_track_b,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__object_track_b,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__object_track_b,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__object_track_b  // resize(index) function pointer
  },
  {
    "object_track_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, object_track_c),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__object_track_c,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__object_track_c,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__object_track_c,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__object_track_c,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__object_track_c,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__object_track_c  // resize(index) function pointer
  },
  {
    "object_track_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, object_track_d),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__object_track_d,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__object_track_d,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__object_track_d,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__object_track_d,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__object_track_d,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__object_track_d  // resize(index) function pointer
  },
  {
    "traffic_signal_heads",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, traffic_signal_heads),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__traffic_signal_heads,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__traffic_signal_heads,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__traffic_signal_heads,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__traffic_signal_heads,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__traffic_signal_heads,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__traffic_signal_heads  // resize(index) function pointer
  },
  {
    "traffic_signal_head_track_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, traffic_signal_head_track_a),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__traffic_signal_head_track_a,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__traffic_signal_head_track_a,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__traffic_signal_head_track_a,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__traffic_signal_head_track_a,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__traffic_signal_head_track_a,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__traffic_signal_head_track_a  // resize(index) function pointer
  },
  {
    "traffic_signs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, traffic_signs),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__traffic_signs,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__traffic_signs,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__traffic_signs,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__traffic_signs,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__traffic_signs,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__traffic_signs  // resize(index) function pointer
  },
  {
    "traffic_sign_track_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, traffic_sign_track_a),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__traffic_sign_track_a,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__traffic_sign_track_a,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__traffic_sign_track_a,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__traffic_sign_track_a,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__traffic_sign_track_a,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__traffic_sign_track_a  // resize(index) function pointer
  },
  {
    "lane_markings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, lane_markings),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__lane_markings,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__lane_markings,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__lane_markings,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__lane_markings,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__lane_markings,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__lane_markings  // resize(index) function pointer
  },
  {
    "lane_marking_track_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, lane_marking_track_a),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__lane_marking_track_a,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__lane_marking_track_a,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__lane_marking_track_a,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__lane_marking_track_a,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__lane_marking_track_a,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__lane_marking_track_a  // resize(index) function pointer
  },
  {
    "limit_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, limit_lines),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__limit_lines,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__limit_lines,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__limit_lines,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__limit_lines,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__limit_lines,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__limit_lines  // resize(index) function pointer
  },
  {
    "limit_line_track_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, limit_line_track_a),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__limit_line_track_a,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__limit_line_track_a,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__limit_line_track_a,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__limit_line_track_a,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__limit_line_track_a,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__limit_line_track_a  // resize(index) function pointer
  },
  {
    "misc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm__msg__CAN, misc),  // bytes offset in struct
    NULL,  // default value
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__size_function__CAN__misc,  // size() function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_const_function__CAN__misc,  // get_const(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__get_function__CAN__misc,  // get(index) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__fetch_function__CAN__misc,  // fetch(index, &value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__assign_function__CAN__misc,  // assign(index, value) function pointer
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__resize_function__CAN__misc  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_members = {
  "perception_comm__msg",  // message namespace
  "CAN",  // message name
  21,  // number of fields
  sizeof(perception_comm__msg__CAN),
  perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_member_array,  // message members
  perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_init_function,  // function to initialize message memory (memory has to be allocated)
  perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_type_support_handle = {
  0,
  &perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_perception_comm
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_comm, msg, CAN)() {
  perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_type_support_handle.typesupport_identifier) {
    perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &perception_comm__msg__CAN__rosidl_typesupport_introspection_c__CAN_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
