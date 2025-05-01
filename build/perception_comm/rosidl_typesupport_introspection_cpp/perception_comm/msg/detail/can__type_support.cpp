// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from perception_comm:msg/CAN.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "perception_comm/msg/detail/can__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace perception_comm
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CAN_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) perception_comm::msg::CAN(_init);
}

void CAN_fini_function(void * message_memory)
{
  auto typed_message = static_cast<perception_comm::msg::CAN *>(message_memory);
  typed_message->~CAN();
}

size_t size_function__CAN__v2_x_intersection_s_p_a_t(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__v2_x_intersection_s_p_a_t(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__v2_x_intersection_s_p_a_t(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__v2_x_intersection_s_p_a_t(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__v2_x_intersection_m_a_p(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__v2_x_intersection_m_a_p(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__v2_x_intersection_m_a_p(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__v2_x_intersection_m_a_p(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__a_v_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__a_v_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__a_v_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__a_v_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__road_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__road_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__road_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__road_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__vehicle_orientation(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__vehicle_orientation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__vehicle_orientation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__vehicle_orientation(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__vehicle_location(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__vehicle_location(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__vehicle_location(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__vehicle_location(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__object_track_a(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__object_track_a(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__object_track_a(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__object_track_a(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__object_track_b(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__object_track_b(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__object_track_b(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__object_track_b(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__object_track_c(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__object_track_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__object_track_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__object_track_c(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__object_track_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__object_track_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__object_track_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__object_track_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__traffic_signal_heads(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__traffic_signal_heads(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__traffic_signal_heads(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__traffic_signal_heads(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__traffic_signal_head_track_a(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__traffic_signal_head_track_a(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__traffic_signal_head_track_a(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__traffic_signal_head_track_a(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__traffic_signs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__traffic_signs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__traffic_signs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__traffic_signs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__traffic_sign_track_a(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__traffic_sign_track_a(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__traffic_sign_track_a(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__traffic_sign_track_a(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__lane_markings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__lane_markings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__lane_markings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__lane_markings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__lane_marking_track_a(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__lane_marking_track_a(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__lane_marking_track_a(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__lane_marking_track_a(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__limit_lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__limit_lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__limit_lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__limit_lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__limit_line_track_a(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__limit_line_track_a(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__limit_line_track_a(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__limit_line_track_a(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CAN__misc(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CAN__misc(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CAN__misc(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CAN__misc(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CAN_message_member_array[21] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "v2_x_intersection_s_p_a_t",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, v2_x_intersection_s_p_a_t),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__v2_x_intersection_s_p_a_t,  // size() function pointer
    get_const_function__CAN__v2_x_intersection_s_p_a_t,  // get_const(index) function pointer
    get_function__CAN__v2_x_intersection_s_p_a_t,  // get(index) function pointer
    resize_function__CAN__v2_x_intersection_s_p_a_t  // resize(index) function pointer
  },
  {
    "v2_x_intersection_m_a_p",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, v2_x_intersection_m_a_p),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__v2_x_intersection_m_a_p,  // size() function pointer
    get_const_function__CAN__v2_x_intersection_m_a_p,  // get_const(index) function pointer
    get_function__CAN__v2_x_intersection_m_a_p,  // get(index) function pointer
    resize_function__CAN__v2_x_intersection_m_a_p  // resize(index) function pointer
  },
  {
    "a_v_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, a_v_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__a_v_state,  // size() function pointer
    get_const_function__CAN__a_v_state,  // get_const(index) function pointer
    get_function__CAN__a_v_state,  // get(index) function pointer
    resize_function__CAN__a_v_state  // resize(index) function pointer
  },
  {
    "road_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, road_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__road_state,  // size() function pointer
    get_const_function__CAN__road_state,  // get_const(index) function pointer
    get_function__CAN__road_state,  // get(index) function pointer
    resize_function__CAN__road_state  // resize(index) function pointer
  },
  {
    "vehicle_orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, vehicle_orientation),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__vehicle_orientation,  // size() function pointer
    get_const_function__CAN__vehicle_orientation,  // get_const(index) function pointer
    get_function__CAN__vehicle_orientation,  // get(index) function pointer
    resize_function__CAN__vehicle_orientation  // resize(index) function pointer
  },
  {
    "vehicle_location",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, vehicle_location),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__vehicle_location,  // size() function pointer
    get_const_function__CAN__vehicle_location,  // get_const(index) function pointer
    get_function__CAN__vehicle_location,  // get(index) function pointer
    resize_function__CAN__vehicle_location  // resize(index) function pointer
  },
  {
    "objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__objects,  // size() function pointer
    get_const_function__CAN__objects,  // get_const(index) function pointer
    get_function__CAN__objects,  // get(index) function pointer
    resize_function__CAN__objects  // resize(index) function pointer
  },
  {
    "object_track_a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, object_track_a),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__object_track_a,  // size() function pointer
    get_const_function__CAN__object_track_a,  // get_const(index) function pointer
    get_function__CAN__object_track_a,  // get(index) function pointer
    resize_function__CAN__object_track_a  // resize(index) function pointer
  },
  {
    "object_track_b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, object_track_b),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__object_track_b,  // size() function pointer
    get_const_function__CAN__object_track_b,  // get_const(index) function pointer
    get_function__CAN__object_track_b,  // get(index) function pointer
    resize_function__CAN__object_track_b  // resize(index) function pointer
  },
  {
    "object_track_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, object_track_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__object_track_c,  // size() function pointer
    get_const_function__CAN__object_track_c,  // get_const(index) function pointer
    get_function__CAN__object_track_c,  // get(index) function pointer
    resize_function__CAN__object_track_c  // resize(index) function pointer
  },
  {
    "object_track_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, object_track_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__object_track_d,  // size() function pointer
    get_const_function__CAN__object_track_d,  // get_const(index) function pointer
    get_function__CAN__object_track_d,  // get(index) function pointer
    resize_function__CAN__object_track_d  // resize(index) function pointer
  },
  {
    "traffic_signal_heads",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, traffic_signal_heads),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__traffic_signal_heads,  // size() function pointer
    get_const_function__CAN__traffic_signal_heads,  // get_const(index) function pointer
    get_function__CAN__traffic_signal_heads,  // get(index) function pointer
    resize_function__CAN__traffic_signal_heads  // resize(index) function pointer
  },
  {
    "traffic_signal_head_track_a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, traffic_signal_head_track_a),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__traffic_signal_head_track_a,  // size() function pointer
    get_const_function__CAN__traffic_signal_head_track_a,  // get_const(index) function pointer
    get_function__CAN__traffic_signal_head_track_a,  // get(index) function pointer
    resize_function__CAN__traffic_signal_head_track_a  // resize(index) function pointer
  },
  {
    "traffic_signs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, traffic_signs),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__traffic_signs,  // size() function pointer
    get_const_function__CAN__traffic_signs,  // get_const(index) function pointer
    get_function__CAN__traffic_signs,  // get(index) function pointer
    resize_function__CAN__traffic_signs  // resize(index) function pointer
  },
  {
    "traffic_sign_track_a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, traffic_sign_track_a),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__traffic_sign_track_a,  // size() function pointer
    get_const_function__CAN__traffic_sign_track_a,  // get_const(index) function pointer
    get_function__CAN__traffic_sign_track_a,  // get(index) function pointer
    resize_function__CAN__traffic_sign_track_a  // resize(index) function pointer
  },
  {
    "lane_markings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, lane_markings),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__lane_markings,  // size() function pointer
    get_const_function__CAN__lane_markings,  // get_const(index) function pointer
    get_function__CAN__lane_markings,  // get(index) function pointer
    resize_function__CAN__lane_markings  // resize(index) function pointer
  },
  {
    "lane_marking_track_a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, lane_marking_track_a),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__lane_marking_track_a,  // size() function pointer
    get_const_function__CAN__lane_marking_track_a,  // get_const(index) function pointer
    get_function__CAN__lane_marking_track_a,  // get(index) function pointer
    resize_function__CAN__lane_marking_track_a  // resize(index) function pointer
  },
  {
    "limit_lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, limit_lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__limit_lines,  // size() function pointer
    get_const_function__CAN__limit_lines,  // get_const(index) function pointer
    get_function__CAN__limit_lines,  // get(index) function pointer
    resize_function__CAN__limit_lines  // resize(index) function pointer
  },
  {
    "limit_line_track_a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, limit_line_track_a),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__limit_line_track_a,  // size() function pointer
    get_const_function__CAN__limit_line_track_a,  // get_const(index) function pointer
    get_function__CAN__limit_line_track_a,  // get(index) function pointer
    resize_function__CAN__limit_line_track_a  // resize(index) function pointer
  },
  {
    "misc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_comm::msg::CAN, misc),  // bytes offset in struct
    nullptr,  // default value
    size_function__CAN__misc,  // size() function pointer
    get_const_function__CAN__misc,  // get_const(index) function pointer
    get_function__CAN__misc,  // get(index) function pointer
    resize_function__CAN__misc  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CAN_message_members = {
  "perception_comm::msg",  // message namespace
  "CAN",  // message name
  21,  // number of fields
  sizeof(perception_comm::msg::CAN),
  CAN_message_member_array,  // message members
  CAN_init_function,  // function to initialize message memory (memory has to be allocated)
  CAN_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CAN_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CAN_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace perception_comm


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<perception_comm::msg::CAN>()
{
  return &::perception_comm::msg::rosidl_typesupport_introspection_cpp::CAN_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, perception_comm, msg, CAN)() {
  return &::perception_comm::msg::rosidl_typesupport_introspection_cpp::CAN_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
