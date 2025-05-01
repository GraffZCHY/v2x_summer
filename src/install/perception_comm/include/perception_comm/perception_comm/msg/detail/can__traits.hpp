// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perception_comm:msg/CAN.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_COMM__MSG__DETAIL__CAN__TRAITS_HPP_
#define PERCEPTION_COMM__MSG__DETAIL__CAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "perception_comm/msg/detail/can__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace perception_comm
{

namespace msg
{

inline void to_flow_style_yaml(
  const CAN & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: v2_x_intersection_s_p_a_t
  {
    if (msg.v2_x_intersection_s_p_a_t.size() == 0) {
      out << "v2_x_intersection_s_p_a_t: []";
    } else {
      out << "v2_x_intersection_s_p_a_t: [";
      size_t pending_items = msg.v2_x_intersection_s_p_a_t.size();
      for (auto item : msg.v2_x_intersection_s_p_a_t) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: v2_x_intersection_m_a_p
  {
    if (msg.v2_x_intersection_m_a_p.size() == 0) {
      out << "v2_x_intersection_m_a_p: []";
    } else {
      out << "v2_x_intersection_m_a_p: [";
      size_t pending_items = msg.v2_x_intersection_m_a_p.size();
      for (auto item : msg.v2_x_intersection_m_a_p) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a_v_state
  {
    if (msg.a_v_state.size() == 0) {
      out << "a_v_state: []";
    } else {
      out << "a_v_state: [";
      size_t pending_items = msg.a_v_state.size();
      for (auto item : msg.a_v_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: road_state
  {
    if (msg.road_state.size() == 0) {
      out << "road_state: []";
    } else {
      out << "road_state: [";
      size_t pending_items = msg.road_state.size();
      for (auto item : msg.road_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vehicle_orientation
  {
    if (msg.vehicle_orientation.size() == 0) {
      out << "vehicle_orientation: []";
    } else {
      out << "vehicle_orientation: [";
      size_t pending_items = msg.vehicle_orientation.size();
      for (auto item : msg.vehicle_orientation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vehicle_location
  {
    if (msg.vehicle_location.size() == 0) {
      out << "vehicle_location: []";
    } else {
      out << "vehicle_location: [";
      size_t pending_items = msg.vehicle_location.size();
      for (auto item : msg.vehicle_location) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_track_a
  {
    if (msg.object_track_a.size() == 0) {
      out << "object_track_a: []";
    } else {
      out << "object_track_a: [";
      size_t pending_items = msg.object_track_a.size();
      for (auto item : msg.object_track_a) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_track_b
  {
    if (msg.object_track_b.size() == 0) {
      out << "object_track_b: []";
    } else {
      out << "object_track_b: [";
      size_t pending_items = msg.object_track_b.size();
      for (auto item : msg.object_track_b) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_track_c
  {
    if (msg.object_track_c.size() == 0) {
      out << "object_track_c: []";
    } else {
      out << "object_track_c: [";
      size_t pending_items = msg.object_track_c.size();
      for (auto item : msg.object_track_c) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_track_d
  {
    if (msg.object_track_d.size() == 0) {
      out << "object_track_d: []";
    } else {
      out << "object_track_d: [";
      size_t pending_items = msg.object_track_d.size();
      for (auto item : msg.object_track_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traffic_signal_heads
  {
    if (msg.traffic_signal_heads.size() == 0) {
      out << "traffic_signal_heads: []";
    } else {
      out << "traffic_signal_heads: [";
      size_t pending_items = msg.traffic_signal_heads.size();
      for (auto item : msg.traffic_signal_heads) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traffic_signal_head_track_a
  {
    if (msg.traffic_signal_head_track_a.size() == 0) {
      out << "traffic_signal_head_track_a: []";
    } else {
      out << "traffic_signal_head_track_a: [";
      size_t pending_items = msg.traffic_signal_head_track_a.size();
      for (auto item : msg.traffic_signal_head_track_a) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traffic_signs
  {
    if (msg.traffic_signs.size() == 0) {
      out << "traffic_signs: []";
    } else {
      out << "traffic_signs: [";
      size_t pending_items = msg.traffic_signs.size();
      for (auto item : msg.traffic_signs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traffic_sign_track_a
  {
    if (msg.traffic_sign_track_a.size() == 0) {
      out << "traffic_sign_track_a: []";
    } else {
      out << "traffic_sign_track_a: [";
      size_t pending_items = msg.traffic_sign_track_a.size();
      for (auto item : msg.traffic_sign_track_a) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_markings
  {
    if (msg.lane_markings.size() == 0) {
      out << "lane_markings: []";
    } else {
      out << "lane_markings: [";
      size_t pending_items = msg.lane_markings.size();
      for (auto item : msg.lane_markings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_marking_track_a
  {
    if (msg.lane_marking_track_a.size() == 0) {
      out << "lane_marking_track_a: []";
    } else {
      out << "lane_marking_track_a: [";
      size_t pending_items = msg.lane_marking_track_a.size();
      for (auto item : msg.lane_marking_track_a) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: limit_lines
  {
    if (msg.limit_lines.size() == 0) {
      out << "limit_lines: []";
    } else {
      out << "limit_lines: [";
      size_t pending_items = msg.limit_lines.size();
      for (auto item : msg.limit_lines) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: limit_line_track_a
  {
    if (msg.limit_line_track_a.size() == 0) {
      out << "limit_line_track_a: []";
    } else {
      out << "limit_line_track_a: [";
      size_t pending_items = msg.limit_line_track_a.size();
      for (auto item : msg.limit_line_track_a) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: misc
  {
    if (msg.misc.size() == 0) {
      out << "misc: []";
    } else {
      out << "misc: [";
      size_t pending_items = msg.misc.size();
      for (auto item : msg.misc) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CAN & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: v2_x_intersection_s_p_a_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.v2_x_intersection_s_p_a_t.size() == 0) {
      out << "v2_x_intersection_s_p_a_t: []\n";
    } else {
      out << "v2_x_intersection_s_p_a_t:\n";
      for (auto item : msg.v2_x_intersection_s_p_a_t) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: v2_x_intersection_m_a_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.v2_x_intersection_m_a_p.size() == 0) {
      out << "v2_x_intersection_m_a_p: []\n";
    } else {
      out << "v2_x_intersection_m_a_p:\n";
      for (auto item : msg.v2_x_intersection_m_a_p) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a_v_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a_v_state.size() == 0) {
      out << "a_v_state: []\n";
    } else {
      out << "a_v_state:\n";
      for (auto item : msg.a_v_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: road_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.road_state.size() == 0) {
      out << "road_state: []\n";
    } else {
      out << "road_state:\n";
      for (auto item : msg.road_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vehicle_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehicle_orientation.size() == 0) {
      out << "vehicle_orientation: []\n";
    } else {
      out << "vehicle_orientation:\n";
      for (auto item : msg.vehicle_orientation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vehicle_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehicle_location.size() == 0) {
      out << "vehicle_location: []\n";
    } else {
      out << "vehicle_location:\n";
      for (auto item : msg.vehicle_location) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_track_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_track_a.size() == 0) {
      out << "object_track_a: []\n";
    } else {
      out << "object_track_a:\n";
      for (auto item : msg.object_track_a) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_track_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_track_b.size() == 0) {
      out << "object_track_b: []\n";
    } else {
      out << "object_track_b:\n";
      for (auto item : msg.object_track_b) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_track_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_track_c.size() == 0) {
      out << "object_track_c: []\n";
    } else {
      out << "object_track_c:\n";
      for (auto item : msg.object_track_c) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_track_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_track_d.size() == 0) {
      out << "object_track_d: []\n";
    } else {
      out << "object_track_d:\n";
      for (auto item : msg.object_track_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: traffic_signal_heads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traffic_signal_heads.size() == 0) {
      out << "traffic_signal_heads: []\n";
    } else {
      out << "traffic_signal_heads:\n";
      for (auto item : msg.traffic_signal_heads) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: traffic_signal_head_track_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traffic_signal_head_track_a.size() == 0) {
      out << "traffic_signal_head_track_a: []\n";
    } else {
      out << "traffic_signal_head_track_a:\n";
      for (auto item : msg.traffic_signal_head_track_a) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: traffic_signs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traffic_signs.size() == 0) {
      out << "traffic_signs: []\n";
    } else {
      out << "traffic_signs:\n";
      for (auto item : msg.traffic_signs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: traffic_sign_track_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traffic_sign_track_a.size() == 0) {
      out << "traffic_sign_track_a: []\n";
    } else {
      out << "traffic_sign_track_a:\n";
      for (auto item : msg.traffic_sign_track_a) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lane_markings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_markings.size() == 0) {
      out << "lane_markings: []\n";
    } else {
      out << "lane_markings:\n";
      for (auto item : msg.lane_markings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lane_marking_track_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_marking_track_a.size() == 0) {
      out << "lane_marking_track_a: []\n";
    } else {
      out << "lane_marking_track_a:\n";
      for (auto item : msg.lane_marking_track_a) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: limit_lines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.limit_lines.size() == 0) {
      out << "limit_lines: []\n";
    } else {
      out << "limit_lines:\n";
      for (auto item : msg.limit_lines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: limit_line_track_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.limit_line_track_a.size() == 0) {
      out << "limit_line_track_a: []\n";
    } else {
      out << "limit_line_track_a:\n";
      for (auto item : msg.limit_line_track_a) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: misc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.misc.size() == 0) {
      out << "misc: []\n";
    } else {
      out << "misc:\n";
      for (auto item : msg.misc) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CAN & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace perception_comm

namespace rosidl_generator_traits
{

[[deprecated("use perception_comm::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const perception_comm::msg::CAN & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_comm::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_comm::msg::to_yaml() instead")]]
inline std::string to_yaml(const perception_comm::msg::CAN & msg)
{
  return perception_comm::msg::to_yaml(msg);
}

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
