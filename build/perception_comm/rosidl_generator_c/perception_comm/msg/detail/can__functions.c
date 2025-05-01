// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from perception_comm:msg/CAN.idl
// generated code does not contain a copyright notice
#include "perception_comm/msg/detail/can__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `v2_x_intersection_s_p_a_t`
// Member `v2_x_intersection_m_a_p`
// Member `a_v_state`
// Member `road_state`
// Member `vehicle_orientation`
// Member `vehicle_location`
// Member `objects`
// Member `object_track_a`
// Member `object_track_b`
// Member `object_track_c`
// Member `object_track_d`
// Member `traffic_signal_heads`
// Member `traffic_signal_head_track_a`
// Member `traffic_signs`
// Member `traffic_sign_track_a`
// Member `lane_markings`
// Member `lane_marking_track_a`
// Member `limit_lines`
// Member `limit_line_track_a`
// Member `misc`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
perception_comm__msg__CAN__init(perception_comm__msg__CAN * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // v2_x_intersection_s_p_a_t
  if (!rosidl_runtime_c__float__Sequence__init(&msg->v2_x_intersection_s_p_a_t, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // v2_x_intersection_m_a_p
  if (!rosidl_runtime_c__float__Sequence__init(&msg->v2_x_intersection_m_a_p, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // a_v_state
  if (!rosidl_runtime_c__float__Sequence__init(&msg->a_v_state, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // road_state
  if (!rosidl_runtime_c__float__Sequence__init(&msg->road_state, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // vehicle_orientation
  if (!rosidl_runtime_c__float__Sequence__init(&msg->vehicle_orientation, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // vehicle_location
  if (!rosidl_runtime_c__float__Sequence__init(&msg->vehicle_location, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // objects
  if (!rosidl_runtime_c__float__Sequence__init(&msg->objects, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // object_track_a
  if (!rosidl_runtime_c__float__Sequence__init(&msg->object_track_a, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // object_track_b
  if (!rosidl_runtime_c__float__Sequence__init(&msg->object_track_b, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // object_track_c
  if (!rosidl_runtime_c__float__Sequence__init(&msg->object_track_c, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // object_track_d
  if (!rosidl_runtime_c__float__Sequence__init(&msg->object_track_d, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // traffic_signal_heads
  if (!rosidl_runtime_c__float__Sequence__init(&msg->traffic_signal_heads, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // traffic_signal_head_track_a
  if (!rosidl_runtime_c__float__Sequence__init(&msg->traffic_signal_head_track_a, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // traffic_signs
  if (!rosidl_runtime_c__float__Sequence__init(&msg->traffic_signs, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // traffic_sign_track_a
  if (!rosidl_runtime_c__float__Sequence__init(&msg->traffic_sign_track_a, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // lane_markings
  if (!rosidl_runtime_c__float__Sequence__init(&msg->lane_markings, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // lane_marking_track_a
  if (!rosidl_runtime_c__float__Sequence__init(&msg->lane_marking_track_a, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // limit_lines
  if (!rosidl_runtime_c__float__Sequence__init(&msg->limit_lines, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // limit_line_track_a
  if (!rosidl_runtime_c__float__Sequence__init(&msg->limit_line_track_a, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  // misc
  if (!rosidl_runtime_c__float__Sequence__init(&msg->misc, 0)) {
    perception_comm__msg__CAN__fini(msg);
    return false;
  }
  return true;
}

void
perception_comm__msg__CAN__fini(perception_comm__msg__CAN * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // v2_x_intersection_s_p_a_t
  rosidl_runtime_c__float__Sequence__fini(&msg->v2_x_intersection_s_p_a_t);
  // v2_x_intersection_m_a_p
  rosidl_runtime_c__float__Sequence__fini(&msg->v2_x_intersection_m_a_p);
  // a_v_state
  rosidl_runtime_c__float__Sequence__fini(&msg->a_v_state);
  // road_state
  rosidl_runtime_c__float__Sequence__fini(&msg->road_state);
  // vehicle_orientation
  rosidl_runtime_c__float__Sequence__fini(&msg->vehicle_orientation);
  // vehicle_location
  rosidl_runtime_c__float__Sequence__fini(&msg->vehicle_location);
  // objects
  rosidl_runtime_c__float__Sequence__fini(&msg->objects);
  // object_track_a
  rosidl_runtime_c__float__Sequence__fini(&msg->object_track_a);
  // object_track_b
  rosidl_runtime_c__float__Sequence__fini(&msg->object_track_b);
  // object_track_c
  rosidl_runtime_c__float__Sequence__fini(&msg->object_track_c);
  // object_track_d
  rosidl_runtime_c__float__Sequence__fini(&msg->object_track_d);
  // traffic_signal_heads
  rosidl_runtime_c__float__Sequence__fini(&msg->traffic_signal_heads);
  // traffic_signal_head_track_a
  rosidl_runtime_c__float__Sequence__fini(&msg->traffic_signal_head_track_a);
  // traffic_signs
  rosidl_runtime_c__float__Sequence__fini(&msg->traffic_signs);
  // traffic_sign_track_a
  rosidl_runtime_c__float__Sequence__fini(&msg->traffic_sign_track_a);
  // lane_markings
  rosidl_runtime_c__float__Sequence__fini(&msg->lane_markings);
  // lane_marking_track_a
  rosidl_runtime_c__float__Sequence__fini(&msg->lane_marking_track_a);
  // limit_lines
  rosidl_runtime_c__float__Sequence__fini(&msg->limit_lines);
  // limit_line_track_a
  rosidl_runtime_c__float__Sequence__fini(&msg->limit_line_track_a);
  // misc
  rosidl_runtime_c__float__Sequence__fini(&msg->misc);
}

bool
perception_comm__msg__CAN__are_equal(const perception_comm__msg__CAN * lhs, const perception_comm__msg__CAN * rhs)
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
  // v2_x_intersection_s_p_a_t
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->v2_x_intersection_s_p_a_t), &(rhs->v2_x_intersection_s_p_a_t)))
  {
    return false;
  }
  // v2_x_intersection_m_a_p
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->v2_x_intersection_m_a_p), &(rhs->v2_x_intersection_m_a_p)))
  {
    return false;
  }
  // a_v_state
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->a_v_state), &(rhs->a_v_state)))
  {
    return false;
  }
  // road_state
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->road_state), &(rhs->road_state)))
  {
    return false;
  }
  // vehicle_orientation
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->vehicle_orientation), &(rhs->vehicle_orientation)))
  {
    return false;
  }
  // vehicle_location
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->vehicle_location), &(rhs->vehicle_location)))
  {
    return false;
  }
  // objects
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  // object_track_a
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->object_track_a), &(rhs->object_track_a)))
  {
    return false;
  }
  // object_track_b
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->object_track_b), &(rhs->object_track_b)))
  {
    return false;
  }
  // object_track_c
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->object_track_c), &(rhs->object_track_c)))
  {
    return false;
  }
  // object_track_d
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->object_track_d), &(rhs->object_track_d)))
  {
    return false;
  }
  // traffic_signal_heads
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->traffic_signal_heads), &(rhs->traffic_signal_heads)))
  {
    return false;
  }
  // traffic_signal_head_track_a
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->traffic_signal_head_track_a), &(rhs->traffic_signal_head_track_a)))
  {
    return false;
  }
  // traffic_signs
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->traffic_signs), &(rhs->traffic_signs)))
  {
    return false;
  }
  // traffic_sign_track_a
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->traffic_sign_track_a), &(rhs->traffic_sign_track_a)))
  {
    return false;
  }
  // lane_markings
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->lane_markings), &(rhs->lane_markings)))
  {
    return false;
  }
  // lane_marking_track_a
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->lane_marking_track_a), &(rhs->lane_marking_track_a)))
  {
    return false;
  }
  // limit_lines
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->limit_lines), &(rhs->limit_lines)))
  {
    return false;
  }
  // limit_line_track_a
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->limit_line_track_a), &(rhs->limit_line_track_a)))
  {
    return false;
  }
  // misc
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->misc), &(rhs->misc)))
  {
    return false;
  }
  return true;
}

bool
perception_comm__msg__CAN__copy(
  const perception_comm__msg__CAN * input,
  perception_comm__msg__CAN * output)
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
  // v2_x_intersection_s_p_a_t
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->v2_x_intersection_s_p_a_t), &(output->v2_x_intersection_s_p_a_t)))
  {
    return false;
  }
  // v2_x_intersection_m_a_p
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->v2_x_intersection_m_a_p), &(output->v2_x_intersection_m_a_p)))
  {
    return false;
  }
  // a_v_state
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->a_v_state), &(output->a_v_state)))
  {
    return false;
  }
  // road_state
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->road_state), &(output->road_state)))
  {
    return false;
  }
  // vehicle_orientation
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->vehicle_orientation), &(output->vehicle_orientation)))
  {
    return false;
  }
  // vehicle_location
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->vehicle_location), &(output->vehicle_location)))
  {
    return false;
  }
  // objects
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  // object_track_a
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->object_track_a), &(output->object_track_a)))
  {
    return false;
  }
  // object_track_b
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->object_track_b), &(output->object_track_b)))
  {
    return false;
  }
  // object_track_c
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->object_track_c), &(output->object_track_c)))
  {
    return false;
  }
  // object_track_d
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->object_track_d), &(output->object_track_d)))
  {
    return false;
  }
  // traffic_signal_heads
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->traffic_signal_heads), &(output->traffic_signal_heads)))
  {
    return false;
  }
  // traffic_signal_head_track_a
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->traffic_signal_head_track_a), &(output->traffic_signal_head_track_a)))
  {
    return false;
  }
  // traffic_signs
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->traffic_signs), &(output->traffic_signs)))
  {
    return false;
  }
  // traffic_sign_track_a
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->traffic_sign_track_a), &(output->traffic_sign_track_a)))
  {
    return false;
  }
  // lane_markings
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->lane_markings), &(output->lane_markings)))
  {
    return false;
  }
  // lane_marking_track_a
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->lane_marking_track_a), &(output->lane_marking_track_a)))
  {
    return false;
  }
  // limit_lines
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->limit_lines), &(output->limit_lines)))
  {
    return false;
  }
  // limit_line_track_a
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->limit_line_track_a), &(output->limit_line_track_a)))
  {
    return false;
  }
  // misc
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->misc), &(output->misc)))
  {
    return false;
  }
  return true;
}

perception_comm__msg__CAN *
perception_comm__msg__CAN__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_comm__msg__CAN * msg = (perception_comm__msg__CAN *)allocator.allocate(sizeof(perception_comm__msg__CAN), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_comm__msg__CAN));
  bool success = perception_comm__msg__CAN__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_comm__msg__CAN__destroy(perception_comm__msg__CAN * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_comm__msg__CAN__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_comm__msg__CAN__Sequence__init(perception_comm__msg__CAN__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_comm__msg__CAN * data = NULL;

  if (size) {
    data = (perception_comm__msg__CAN *)allocator.zero_allocate(size, sizeof(perception_comm__msg__CAN), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_comm__msg__CAN__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_comm__msg__CAN__fini(&data[i - 1]);
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
perception_comm__msg__CAN__Sequence__fini(perception_comm__msg__CAN__Sequence * array)
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
      perception_comm__msg__CAN__fini(&array->data[i]);
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

perception_comm__msg__CAN__Sequence *
perception_comm__msg__CAN__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_comm__msg__CAN__Sequence * array = (perception_comm__msg__CAN__Sequence *)allocator.allocate(sizeof(perception_comm__msg__CAN__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_comm__msg__CAN__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_comm__msg__CAN__Sequence__destroy(perception_comm__msg__CAN__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_comm__msg__CAN__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_comm__msg__CAN__Sequence__are_equal(const perception_comm__msg__CAN__Sequence * lhs, const perception_comm__msg__CAN__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_comm__msg__CAN__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_comm__msg__CAN__Sequence__copy(
  const perception_comm__msg__CAN__Sequence * input,
  perception_comm__msg__CAN__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_comm__msg__CAN);
    perception_comm__msg__CAN * data =
      (perception_comm__msg__CAN *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_comm__msg__CAN__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          perception_comm__msg__CAN__fini(&data[i]);
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
    if (!perception_comm__msg__CAN__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
