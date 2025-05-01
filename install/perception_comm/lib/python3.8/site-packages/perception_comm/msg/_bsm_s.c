// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from perception_comm:msg/BSM.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "perception_comm/msg/detail/bsm__struct.h"
#include "perception_comm/msg/detail/bsm__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool perception_comm__msg__bsm__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("perception_comm.msg._bsm.BSM", full_classname_dest, 28) == 0);
  }
  perception_comm__msg__BSM * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vehicle_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->vehicle_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // msg_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msg_cnt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // elev
    PyObject * field = PyObject_GetAttrString(_pymsg, "elev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->elev = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heading = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_long
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_long");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_long = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_vert
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_vert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_vert = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // full_json
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_json");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->full_json, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * perception_comm__msg__bsm__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BSM */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("perception_comm.msg._bsm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BSM");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  perception_comm__msg__BSM * ros_message = (perception_comm__msg__BSM *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->vehicle_id.data,
      strlen(ros_message->vehicle_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg_cnt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->msg_cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->elev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_long
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_long);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_long", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_vert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_vert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_vert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_json
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->full_json.data,
      strlen(ros_message->full_json.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_json", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
