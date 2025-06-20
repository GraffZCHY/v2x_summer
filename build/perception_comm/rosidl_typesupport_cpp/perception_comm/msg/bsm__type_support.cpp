// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from perception_comm:msg/BSM.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "perception_comm/msg/detail/bsm__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace perception_comm
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _BSM_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BSM_type_support_ids_t;

static const _BSM_type_support_ids_t _BSM_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BSM_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BSM_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BSM_type_support_symbol_names_t _BSM_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, perception_comm, msg, BSM)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, perception_comm, msg, BSM)),
  }
};

typedef struct _BSM_type_support_data_t
{
  void * data[2];
} _BSM_type_support_data_t;

static _BSM_type_support_data_t _BSM_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BSM_message_typesupport_map = {
  2,
  "perception_comm",
  &_BSM_message_typesupport_ids.typesupport_identifier[0],
  &_BSM_message_typesupport_symbol_names.symbol_name[0],
  &_BSM_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BSM_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BSM_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace perception_comm

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<perception_comm::msg::BSM>()
{
  return &::perception_comm::msg::rosidl_typesupport_cpp::BSM_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, perception_comm, msg, BSM)() {
  return get_message_type_support_handle<perception_comm::msg::BSM>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
