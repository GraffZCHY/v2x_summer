// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from perception_comm:msg/BSM.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_COMM__MSG__DETAIL__BSM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PERCEPTION_COMM__MSG__DETAIL__BSM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "perception_comm/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "perception_comm/msg/detail/bsm__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace perception_comm
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perception_comm
cdr_serialize(
  const perception_comm::msg::BSM & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perception_comm
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  perception_comm::msg::BSM & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perception_comm
get_serialized_size(
  const perception_comm::msg::BSM & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perception_comm
max_serialized_size_BSM(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace perception_comm

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_perception_comm
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, perception_comm, msg, BSM)();

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_COMM__MSG__DETAIL__BSM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
