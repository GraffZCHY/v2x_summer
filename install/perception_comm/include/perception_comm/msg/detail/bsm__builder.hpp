// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_comm:msg/BSM.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_COMM__MSG__DETAIL__BSM__BUILDER_HPP_
#define PERCEPTION_COMM__MSG__DETAIL__BSM__BUILDER_HPP_

#include "perception_comm/msg/detail/bsm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace perception_comm
{

namespace msg
{

namespace builder
{

class Init_BSM_full_json
{
public:
  explicit Init_BSM_full_json(::perception_comm::msg::BSM & msg)
  : msg_(msg)
  {}
  ::perception_comm::msg::BSM full_json(::perception_comm::msg::BSM::_full_json_type arg)
  {
    msg_.full_json = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

class Init_BSM_accel_yaw
{
public:
  explicit Init_BSM_accel_yaw(::perception_comm::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_full_json accel_yaw(::perception_comm::msg::BSM::_accel_yaw_type arg)
  {
    msg_.accel_yaw = std::move(arg);
    return Init_BSM_full_json(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

class Init_BSM_accel_vert
{
public:
  explicit Init_BSM_accel_vert(::perception_comm::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_accel_yaw accel_vert(::perception_comm::msg::BSM::_accel_vert_type arg)
  {
    msg_.accel_vert = std::move(arg);
    return Init_BSM_accel_yaw(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

class Init_BSM_accel_long
{
public:
  explicit Init_BSM_accel_long(::perception_comm::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_accel_vert accel_long(::perception_comm::msg::BSM::_accel_long_type arg)
  {
    msg_.accel_long = std::move(arg);
    return Init_BSM_accel_vert(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

class Init_BSM_accel_lat
{
public:
  explicit Init_BSM_accel_lat(::perception_comm::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_accel_long accel_lat(::perception_comm::msg::BSM::_accel_lat_type arg)
  {
    msg_.accel_lat = std::move(arg);
    return Init_BSM_accel_long(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

class Init_BSM_speed
{
public:
  explicit Init_BSM_speed(::perception_comm::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_accel_lat speed(::perception_comm::msg::BSM::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_BSM_accel_lat(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

class Init_BSM_heading
{
public:
  explicit Init_BSM_heading(::perception_comm::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_speed heading(::perception_comm::msg::BSM::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_BSM_speed(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

class Init_BSM_elev
{
public:
  explicit Init_BSM_elev(::perception_comm::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_heading elev(::perception_comm::msg::BSM::_elev_type arg)
  {
    msg_.elev = std::move(arg);
    return Init_BSM_heading(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

class Init_BSM_lon
{
public:
  explicit Init_BSM_lon(::perception_comm::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_elev lon(::perception_comm::msg::BSM::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_BSM_elev(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

class Init_BSM_lat
{
public:
  explicit Init_BSM_lat(::perception_comm::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_lon lat(::perception_comm::msg::BSM::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_BSM_lon(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

class Init_BSM_msg_cnt
{
public:
  explicit Init_BSM_msg_cnt(::perception_comm::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_lat msg_cnt(::perception_comm::msg::BSM::_msg_cnt_type arg)
  {
    msg_.msg_cnt = std::move(arg);
    return Init_BSM_lat(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

class Init_BSM_vehicle_id
{
public:
  explicit Init_BSM_vehicle_id(::perception_comm::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_msg_cnt vehicle_id(::perception_comm::msg::BSM::_vehicle_id_type arg)
  {
    msg_.vehicle_id = std::move(arg);
    return Init_BSM_msg_cnt(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

class Init_BSM_header
{
public:
  Init_BSM_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BSM_vehicle_id header(::perception_comm::msg::BSM::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BSM_vehicle_id(msg_);
  }

private:
  ::perception_comm::msg::BSM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_comm::msg::BSM>()
{
  return perception_comm::msg::builder::Init_BSM_header();
}

}  // namespace perception_comm

#endif  // PERCEPTION_COMM__MSG__DETAIL__BSM__BUILDER_HPP_
