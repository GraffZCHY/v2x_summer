// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perception_comm:msg/CAN.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_COMM__MSG__DETAIL__CAN__TRAITS_HPP_
#define PERCEPTION_COMM__MSG__DETAIL__CAN__TRAITS_HPP_

#include "perception_comm/msg/detail/can__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<perception_comm::msg::CAN>()
{
  return "perception_comm::msg::CAN";
}

template<>
inline const char * name<perception_comm::msg::CAN>()
{
  return "perception_comm/msg/CAN";
}

template<>
struct has_fixed_size<perception_comm::msg::CAN>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<perception_comm::msg::CAN>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<perception_comm::msg::CAN>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERCEPTION_COMM__MSG__DETAIL__CAN__TRAITS_HPP_
