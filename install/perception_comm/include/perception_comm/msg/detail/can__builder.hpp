// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_comm:msg/CAN.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_COMM__MSG__DETAIL__CAN__BUILDER_HPP_
#define PERCEPTION_COMM__MSG__DETAIL__CAN__BUILDER_HPP_

#include "perception_comm/msg/detail/can__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace perception_comm
{

namespace msg
{

namespace builder
{

class Init_CAN_misc
{
public:
  explicit Init_CAN_misc(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  ::perception_comm::msg::CAN misc(::perception_comm::msg::CAN::_misc_type arg)
  {
    msg_.misc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_limit_line_track_a
{
public:
  explicit Init_CAN_limit_line_track_a(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_misc limit_line_track_a(::perception_comm::msg::CAN::_limit_line_track_a_type arg)
  {
    msg_.limit_line_track_a = std::move(arg);
    return Init_CAN_misc(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_limit_lines
{
public:
  explicit Init_CAN_limit_lines(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_limit_line_track_a limit_lines(::perception_comm::msg::CAN::_limit_lines_type arg)
  {
    msg_.limit_lines = std::move(arg);
    return Init_CAN_limit_line_track_a(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_lane_marking_track_a
{
public:
  explicit Init_CAN_lane_marking_track_a(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_limit_lines lane_marking_track_a(::perception_comm::msg::CAN::_lane_marking_track_a_type arg)
  {
    msg_.lane_marking_track_a = std::move(arg);
    return Init_CAN_limit_lines(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_lane_markings
{
public:
  explicit Init_CAN_lane_markings(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_lane_marking_track_a lane_markings(::perception_comm::msg::CAN::_lane_markings_type arg)
  {
    msg_.lane_markings = std::move(arg);
    return Init_CAN_lane_marking_track_a(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_traffic_sign_track_a
{
public:
  explicit Init_CAN_traffic_sign_track_a(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_lane_markings traffic_sign_track_a(::perception_comm::msg::CAN::_traffic_sign_track_a_type arg)
  {
    msg_.traffic_sign_track_a = std::move(arg);
    return Init_CAN_lane_markings(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_traffic_signs
{
public:
  explicit Init_CAN_traffic_signs(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_traffic_sign_track_a traffic_signs(::perception_comm::msg::CAN::_traffic_signs_type arg)
  {
    msg_.traffic_signs = std::move(arg);
    return Init_CAN_traffic_sign_track_a(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_traffic_signal_head_track_a
{
public:
  explicit Init_CAN_traffic_signal_head_track_a(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_traffic_signs traffic_signal_head_track_a(::perception_comm::msg::CAN::_traffic_signal_head_track_a_type arg)
  {
    msg_.traffic_signal_head_track_a = std::move(arg);
    return Init_CAN_traffic_signs(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_traffic_signal_heads
{
public:
  explicit Init_CAN_traffic_signal_heads(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_traffic_signal_head_track_a traffic_signal_heads(::perception_comm::msg::CAN::_traffic_signal_heads_type arg)
  {
    msg_.traffic_signal_heads = std::move(arg);
    return Init_CAN_traffic_signal_head_track_a(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_object_track_d
{
public:
  explicit Init_CAN_object_track_d(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_traffic_signal_heads object_track_d(::perception_comm::msg::CAN::_object_track_d_type arg)
  {
    msg_.object_track_d = std::move(arg);
    return Init_CAN_traffic_signal_heads(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_object_track_c
{
public:
  explicit Init_CAN_object_track_c(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_object_track_d object_track_c(::perception_comm::msg::CAN::_object_track_c_type arg)
  {
    msg_.object_track_c = std::move(arg);
    return Init_CAN_object_track_d(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_object_track_b
{
public:
  explicit Init_CAN_object_track_b(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_object_track_c object_track_b(::perception_comm::msg::CAN::_object_track_b_type arg)
  {
    msg_.object_track_b = std::move(arg);
    return Init_CAN_object_track_c(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_object_track_a
{
public:
  explicit Init_CAN_object_track_a(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_object_track_b object_track_a(::perception_comm::msg::CAN::_object_track_a_type arg)
  {
    msg_.object_track_a = std::move(arg);
    return Init_CAN_object_track_b(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_objects
{
public:
  explicit Init_CAN_objects(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_object_track_a objects(::perception_comm::msg::CAN::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return Init_CAN_object_track_a(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_vehicle_location
{
public:
  explicit Init_CAN_vehicle_location(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_objects vehicle_location(::perception_comm::msg::CAN::_vehicle_location_type arg)
  {
    msg_.vehicle_location = std::move(arg);
    return Init_CAN_objects(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_vehicle_orientation
{
public:
  explicit Init_CAN_vehicle_orientation(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_vehicle_location vehicle_orientation(::perception_comm::msg::CAN::_vehicle_orientation_type arg)
  {
    msg_.vehicle_orientation = std::move(arg);
    return Init_CAN_vehicle_location(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_road_state
{
public:
  explicit Init_CAN_road_state(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_vehicle_orientation road_state(::perception_comm::msg::CAN::_road_state_type arg)
  {
    msg_.road_state = std::move(arg);
    return Init_CAN_vehicle_orientation(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_a_v_state
{
public:
  explicit Init_CAN_a_v_state(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_road_state a_v_state(::perception_comm::msg::CAN::_a_v_state_type arg)
  {
    msg_.a_v_state = std::move(arg);
    return Init_CAN_road_state(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_v2_x_intersection_m_a_p
{
public:
  explicit Init_CAN_v2_x_intersection_m_a_p(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_a_v_state v2_x_intersection_m_a_p(::perception_comm::msg::CAN::_v2_x_intersection_m_a_p_type arg)
  {
    msg_.v2_x_intersection_m_a_p = std::move(arg);
    return Init_CAN_a_v_state(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_v2_x_intersection_s_p_a_t
{
public:
  explicit Init_CAN_v2_x_intersection_s_p_a_t(::perception_comm::msg::CAN & msg)
  : msg_(msg)
  {}
  Init_CAN_v2_x_intersection_m_a_p v2_x_intersection_s_p_a_t(::perception_comm::msg::CAN::_v2_x_intersection_s_p_a_t_type arg)
  {
    msg_.v2_x_intersection_s_p_a_t = std::move(arg);
    return Init_CAN_v2_x_intersection_m_a_p(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

class Init_CAN_header
{
public:
  Init_CAN_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CAN_v2_x_intersection_s_p_a_t header(::perception_comm::msg::CAN::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CAN_v2_x_intersection_s_p_a_t(msg_);
  }

private:
  ::perception_comm::msg::CAN msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_comm::msg::CAN>()
{
  return perception_comm::msg::builder::Init_CAN_header();
}

}  // namespace perception_comm

#endif  // PERCEPTION_COMM__MSG__DETAIL__CAN__BUILDER_HPP_
