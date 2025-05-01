// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from perception_comm:msg/CAN.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_COMM__MSG__DETAIL__CAN__STRUCT_HPP_
#define PERCEPTION_COMM__MSG__DETAIL__CAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__perception_comm__msg__CAN __attribute__((deprecated))
#else
# define DEPRECATED__perception_comm__msg__CAN __declspec(deprecated)
#endif

namespace perception_comm
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CAN_
{
  using Type = CAN_<ContainerAllocator>;

  explicit CAN_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit CAN_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _v2_x_intersection_s_p_a_t_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _v2_x_intersection_s_p_a_t_type v2_x_intersection_s_p_a_t;
  using _v2_x_intersection_m_a_p_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _v2_x_intersection_m_a_p_type v2_x_intersection_m_a_p;
  using _a_v_state_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _a_v_state_type a_v_state;
  using _road_state_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _road_state_type road_state;
  using _vehicle_orientation_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _vehicle_orientation_type vehicle_orientation;
  using _vehicle_location_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _vehicle_location_type vehicle_location;
  using _objects_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _objects_type objects;
  using _object_track_a_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _object_track_a_type object_track_a;
  using _object_track_b_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _object_track_b_type object_track_b;
  using _object_track_c_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _object_track_c_type object_track_c;
  using _object_track_d_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _object_track_d_type object_track_d;
  using _traffic_signal_heads_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _traffic_signal_heads_type traffic_signal_heads;
  using _traffic_signal_head_track_a_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _traffic_signal_head_track_a_type traffic_signal_head_track_a;
  using _traffic_signs_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _traffic_signs_type traffic_signs;
  using _traffic_sign_track_a_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _traffic_sign_track_a_type traffic_sign_track_a;
  using _lane_markings_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _lane_markings_type lane_markings;
  using _lane_marking_track_a_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _lane_marking_track_a_type lane_marking_track_a;
  using _limit_lines_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _limit_lines_type limit_lines;
  using _limit_line_track_a_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _limit_line_track_a_type limit_line_track_a;
  using _misc_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _misc_type misc;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__v2_x_intersection_s_p_a_t(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->v2_x_intersection_s_p_a_t = _arg;
    return *this;
  }
  Type & set__v2_x_intersection_m_a_p(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->v2_x_intersection_m_a_p = _arg;
    return *this;
  }
  Type & set__a_v_state(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->a_v_state = _arg;
    return *this;
  }
  Type & set__road_state(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->road_state = _arg;
    return *this;
  }
  Type & set__vehicle_orientation(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->vehicle_orientation = _arg;
    return *this;
  }
  Type & set__vehicle_location(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->vehicle_location = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->objects = _arg;
    return *this;
  }
  Type & set__object_track_a(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->object_track_a = _arg;
    return *this;
  }
  Type & set__object_track_b(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->object_track_b = _arg;
    return *this;
  }
  Type & set__object_track_c(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->object_track_c = _arg;
    return *this;
  }
  Type & set__object_track_d(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->object_track_d = _arg;
    return *this;
  }
  Type & set__traffic_signal_heads(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->traffic_signal_heads = _arg;
    return *this;
  }
  Type & set__traffic_signal_head_track_a(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->traffic_signal_head_track_a = _arg;
    return *this;
  }
  Type & set__traffic_signs(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->traffic_signs = _arg;
    return *this;
  }
  Type & set__traffic_sign_track_a(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->traffic_sign_track_a = _arg;
    return *this;
  }
  Type & set__lane_markings(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->lane_markings = _arg;
    return *this;
  }
  Type & set__lane_marking_track_a(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->lane_marking_track_a = _arg;
    return *this;
  }
  Type & set__limit_lines(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->limit_lines = _arg;
    return *this;
  }
  Type & set__limit_line_track_a(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->limit_line_track_a = _arg;
    return *this;
  }
  Type & set__misc(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->misc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    perception_comm::msg::CAN_<ContainerAllocator> *;
  using ConstRawPtr =
    const perception_comm::msg::CAN_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<perception_comm::msg::CAN_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<perception_comm::msg::CAN_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      perception_comm::msg::CAN_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<perception_comm::msg::CAN_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      perception_comm::msg::CAN_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<perception_comm::msg::CAN_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<perception_comm::msg::CAN_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<perception_comm::msg::CAN_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__perception_comm__msg__CAN
    std::shared_ptr<perception_comm::msg::CAN_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__perception_comm__msg__CAN
    std::shared_ptr<perception_comm::msg::CAN_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CAN_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->v2_x_intersection_s_p_a_t != other.v2_x_intersection_s_p_a_t) {
      return false;
    }
    if (this->v2_x_intersection_m_a_p != other.v2_x_intersection_m_a_p) {
      return false;
    }
    if (this->a_v_state != other.a_v_state) {
      return false;
    }
    if (this->road_state != other.road_state) {
      return false;
    }
    if (this->vehicle_orientation != other.vehicle_orientation) {
      return false;
    }
    if (this->vehicle_location != other.vehicle_location) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    if (this->object_track_a != other.object_track_a) {
      return false;
    }
    if (this->object_track_b != other.object_track_b) {
      return false;
    }
    if (this->object_track_c != other.object_track_c) {
      return false;
    }
    if (this->object_track_d != other.object_track_d) {
      return false;
    }
    if (this->traffic_signal_heads != other.traffic_signal_heads) {
      return false;
    }
    if (this->traffic_signal_head_track_a != other.traffic_signal_head_track_a) {
      return false;
    }
    if (this->traffic_signs != other.traffic_signs) {
      return false;
    }
    if (this->traffic_sign_track_a != other.traffic_sign_track_a) {
      return false;
    }
    if (this->lane_markings != other.lane_markings) {
      return false;
    }
    if (this->lane_marking_track_a != other.lane_marking_track_a) {
      return false;
    }
    if (this->limit_lines != other.limit_lines) {
      return false;
    }
    if (this->limit_line_track_a != other.limit_line_track_a) {
      return false;
    }
    if (this->misc != other.misc) {
      return false;
    }
    return true;
  }
  bool operator!=(const CAN_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CAN_

// alias to use template instance with default allocator
using CAN =
  perception_comm::msg::CAN_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace perception_comm

#endif  // PERCEPTION_COMM__MSG__DETAIL__CAN__STRUCT_HPP_
