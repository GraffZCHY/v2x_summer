// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from perception_comm:msg/BSM.idl
// generated code does not contain a copyright notice
#include "perception_comm/msg/detail/bsm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `vehicle_id`
// Member `full_json`
#include "rosidl_runtime_c/string_functions.h"

bool
perception_comm__msg__BSM__init(perception_comm__msg__BSM * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    perception_comm__msg__BSM__fini(msg);
    return false;
  }
  // vehicle_id
  if (!rosidl_runtime_c__String__init(&msg->vehicle_id)) {
    perception_comm__msg__BSM__fini(msg);
    return false;
  }
  // msg_cnt
  // lat
  // lon
  // elev
  // heading
  // speed
  // accel_lat
  // accel_long
  // accel_vert
  // accel_yaw
  // full_json
  if (!rosidl_runtime_c__String__init(&msg->full_json)) {
    perception_comm__msg__BSM__fini(msg);
    return false;
  }
  return true;
}

void
perception_comm__msg__BSM__fini(perception_comm__msg__BSM * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vehicle_id
  rosidl_runtime_c__String__fini(&msg->vehicle_id);
  // msg_cnt
  // lat
  // lon
  // elev
  // heading
  // speed
  // accel_lat
  // accel_long
  // accel_vert
  // accel_yaw
  // full_json
  rosidl_runtime_c__String__fini(&msg->full_json);
}

bool
perception_comm__msg__BSM__are_equal(const perception_comm__msg__BSM * lhs, const perception_comm__msg__BSM * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // vehicle_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vehicle_id), &(rhs->vehicle_id)))
  {
    return false;
  }
  // msg_cnt
  if (lhs->msg_cnt != rhs->msg_cnt) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // elev
  if (lhs->elev != rhs->elev) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // accel_lat
  if (lhs->accel_lat != rhs->accel_lat) {
    return false;
  }
  // accel_long
  if (lhs->accel_long != rhs->accel_long) {
    return false;
  }
  // accel_vert
  if (lhs->accel_vert != rhs->accel_vert) {
    return false;
  }
  // accel_yaw
  if (lhs->accel_yaw != rhs->accel_yaw) {
    return false;
  }
  // full_json
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->full_json), &(rhs->full_json)))
  {
    return false;
  }
  return true;
}

bool
perception_comm__msg__BSM__copy(
  const perception_comm__msg__BSM * input,
  perception_comm__msg__BSM * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // vehicle_id
  if (!rosidl_runtime_c__String__copy(
      &(input->vehicle_id), &(output->vehicle_id)))
  {
    return false;
  }
  // msg_cnt
  output->msg_cnt = input->msg_cnt;
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // elev
  output->elev = input->elev;
  // heading
  output->heading = input->heading;
  // speed
  output->speed = input->speed;
  // accel_lat
  output->accel_lat = input->accel_lat;
  // accel_long
  output->accel_long = input->accel_long;
  // accel_vert
  output->accel_vert = input->accel_vert;
  // accel_yaw
  output->accel_yaw = input->accel_yaw;
  // full_json
  if (!rosidl_runtime_c__String__copy(
      &(input->full_json), &(output->full_json)))
  {
    return false;
  }
  return true;
}

perception_comm__msg__BSM *
perception_comm__msg__BSM__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_comm__msg__BSM * msg = (perception_comm__msg__BSM *)allocator.allocate(sizeof(perception_comm__msg__BSM), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_comm__msg__BSM));
  bool success = perception_comm__msg__BSM__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_comm__msg__BSM__destroy(perception_comm__msg__BSM * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_comm__msg__BSM__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_comm__msg__BSM__Sequence__init(perception_comm__msg__BSM__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_comm__msg__BSM * data = NULL;

  if (size) {
    data = (perception_comm__msg__BSM *)allocator.zero_allocate(size, sizeof(perception_comm__msg__BSM), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_comm__msg__BSM__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_comm__msg__BSM__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
perception_comm__msg__BSM__Sequence__fini(perception_comm__msg__BSM__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      perception_comm__msg__BSM__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

perception_comm__msg__BSM__Sequence *
perception_comm__msg__BSM__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_comm__msg__BSM__Sequence * array = (perception_comm__msg__BSM__Sequence *)allocator.allocate(sizeof(perception_comm__msg__BSM__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_comm__msg__BSM__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_comm__msg__BSM__Sequence__destroy(perception_comm__msg__BSM__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_comm__msg__BSM__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_comm__msg__BSM__Sequence__are_equal(const perception_comm__msg__BSM__Sequence * lhs, const perception_comm__msg__BSM__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_comm__msg__BSM__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_comm__msg__BSM__Sequence__copy(
  const perception_comm__msg__BSM__Sequence * input,
  perception_comm__msg__BSM__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_comm__msg__BSM);
    perception_comm__msg__BSM * data =
      (perception_comm__msg__BSM *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_comm__msg__BSM__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          perception_comm__msg__BSM__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perception_comm__msg__BSM__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
