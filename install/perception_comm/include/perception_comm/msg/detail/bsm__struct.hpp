// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from perception_comm:msg/BSM.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_COMM__MSG__DETAIL__BSM__STRUCT_HPP_
#define PERCEPTION_COMM__MSG__DETAIL__BSM__STRUCT_HPP_

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
# define DEPRECATED__perception_comm__msg__BSM __attribute__((deprecated))
#else
# define DEPRECATED__perception_comm__msg__BSM __declspec(deprecated)
#endif

namespace perception_comm
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BSM_
{
  using Type = BSM_<ContainerAllocator>;

  explicit BSM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_id = "";
      this->msg_cnt = 0l;
      this->lat = 0.0;
      this->lon = 0.0;
      this->elev = 0.0;
      this->heading = 0l;
      this->speed = 0.0;
      this->accel_lat = 0.0;
      this->accel_long = 0.0;
      this->accel_vert = 0.0;
      this->accel_yaw = 0.0;
      this->full_json = "";
    }
  }

  explicit BSM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    vehicle_id(_alloc),
    full_json(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_id = "";
      this->msg_cnt = 0l;
      this->lat = 0.0;
      this->lon = 0.0;
      this->elev = 0.0;
      this->heading = 0l;
      this->speed = 0.0;
      this->accel_lat = 0.0;
      this->accel_long = 0.0;
      this->accel_vert = 0.0;
      this->accel_yaw = 0.0;
      this->full_json = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vehicle_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _vehicle_id_type vehicle_id;
  using _msg_cnt_type =
    int32_t;
  _msg_cnt_type msg_cnt;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _elev_type =
    double;
  _elev_type elev;
  using _heading_type =
    int32_t;
  _heading_type heading;
  using _speed_type =
    double;
  _speed_type speed;
  using _accel_lat_type =
    double;
  _accel_lat_type accel_lat;
  using _accel_long_type =
    double;
  _accel_long_type accel_long;
  using _accel_vert_type =
    double;
  _accel_vert_type accel_vert;
  using _accel_yaw_type =
    double;
  _accel_yaw_type accel_yaw;
  using _full_json_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _full_json_type full_json;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vehicle_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->vehicle_id = _arg;
    return *this;
  }
  Type & set__msg_cnt(
    const int32_t & _arg)
  {
    this->msg_cnt = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__elev(
    const double & _arg)
  {
    this->elev = _arg;
    return *this;
  }
  Type & set__heading(
    const int32_t & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__accel_lat(
    const double & _arg)
  {
    this->accel_lat = _arg;
    return *this;
  }
  Type & set__accel_long(
    const double & _arg)
  {
    this->accel_long = _arg;
    return *this;
  }
  Type & set__accel_vert(
    const double & _arg)
  {
    this->accel_vert = _arg;
    return *this;
  }
  Type & set__accel_yaw(
    const double & _arg)
  {
    this->accel_yaw = _arg;
    return *this;
  }
  Type & set__full_json(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->full_json = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    perception_comm::msg::BSM_<ContainerAllocator> *;
  using ConstRawPtr =
    const perception_comm::msg::BSM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<perception_comm::msg::BSM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<perception_comm::msg::BSM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      perception_comm::msg::BSM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<perception_comm::msg::BSM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      perception_comm::msg::BSM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<perception_comm::msg::BSM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<perception_comm::msg::BSM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<perception_comm::msg::BSM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__perception_comm__msg__BSM
    std::shared_ptr<perception_comm::msg::BSM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__perception_comm__msg__BSM
    std::shared_ptr<perception_comm::msg::BSM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BSM_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vehicle_id != other.vehicle_id) {
      return false;
    }
    if (this->msg_cnt != other.msg_cnt) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->elev != other.elev) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->accel_lat != other.accel_lat) {
      return false;
    }
    if (this->accel_long != other.accel_long) {
      return false;
    }
    if (this->accel_vert != other.accel_vert) {
      return false;
    }
    if (this->accel_yaw != other.accel_yaw) {
      return false;
    }
    if (this->full_json != other.full_json) {
      return false;
    }
    return true;
  }
  bool operator!=(const BSM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BSM_

// alias to use template instance with default allocator
using BSM =
  perception_comm::msg::BSM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace perception_comm

#endif  // PERCEPTION_COMM__MSG__DETAIL__BSM__STRUCT_HPP_
