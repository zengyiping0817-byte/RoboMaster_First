// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_ros2_package:msg/Item.idl
// generated code does not contain a copyright notice
#include "my_ros2_package/msg/detail/item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `item_id`
// Member `item_name`
#include "rosidl_runtime_c/string_functions.h"

bool
my_ros2_package__msg__Item__init(my_ros2_package__msg__Item * msg)
{
  if (!msg) {
    return false;
  }
  // item_id
  if (!rosidl_runtime_c__String__init(&msg->item_id)) {
    my_ros2_package__msg__Item__fini(msg);
    return false;
  }
  // item_name
  if (!rosidl_runtime_c__String__init(&msg->item_name)) {
    my_ros2_package__msg__Item__fini(msg);
    return false;
  }
  // price
  return true;
}

void
my_ros2_package__msg__Item__fini(my_ros2_package__msg__Item * msg)
{
  if (!msg) {
    return;
  }
  // item_id
  rosidl_runtime_c__String__fini(&msg->item_id);
  // item_name
  rosidl_runtime_c__String__fini(&msg->item_name);
  // price
}

bool
my_ros2_package__msg__Item__are_equal(const my_ros2_package__msg__Item * lhs, const my_ros2_package__msg__Item * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // item_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->item_id), &(rhs->item_id)))
  {
    return false;
  }
  // item_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->item_name), &(rhs->item_name)))
  {
    return false;
  }
  // price
  if (lhs->price != rhs->price) {
    return false;
  }
  return true;
}

bool
my_ros2_package__msg__Item__copy(
  const my_ros2_package__msg__Item * input,
  my_ros2_package__msg__Item * output)
{
  if (!input || !output) {
    return false;
  }
  // item_id
  if (!rosidl_runtime_c__String__copy(
      &(input->item_id), &(output->item_id)))
  {
    return false;
  }
  // item_name
  if (!rosidl_runtime_c__String__copy(
      &(input->item_name), &(output->item_name)))
  {
    return false;
  }
  // price
  output->price = input->price;
  return true;
}

my_ros2_package__msg__Item *
my_ros2_package__msg__Item__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_ros2_package__msg__Item * msg = (my_ros2_package__msg__Item *)allocator.allocate(sizeof(my_ros2_package__msg__Item), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_ros2_package__msg__Item));
  bool success = my_ros2_package__msg__Item__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_ros2_package__msg__Item__destroy(my_ros2_package__msg__Item * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_ros2_package__msg__Item__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_ros2_package__msg__Item__Sequence__init(my_ros2_package__msg__Item__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_ros2_package__msg__Item * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(my_ros2_package__msg__Item)) {
      return false;
    }
    data = (my_ros2_package__msg__Item *)allocator.zero_allocate(size, sizeof(my_ros2_package__msg__Item), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_ros2_package__msg__Item__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_ros2_package__msg__Item__fini(&data[i - 1]);
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
my_ros2_package__msg__Item__Sequence__fini(my_ros2_package__msg__Item__Sequence * array)
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
      my_ros2_package__msg__Item__fini(&array->data[i]);
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

my_ros2_package__msg__Item__Sequence *
my_ros2_package__msg__Item__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_ros2_package__msg__Item__Sequence * array = (my_ros2_package__msg__Item__Sequence *)allocator.allocate(sizeof(my_ros2_package__msg__Item__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_ros2_package__msg__Item__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_ros2_package__msg__Item__Sequence__destroy(my_ros2_package__msg__Item__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_ros2_package__msg__Item__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_ros2_package__msg__Item__Sequence__are_equal(const my_ros2_package__msg__Item__Sequence * lhs, const my_ros2_package__msg__Item__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_ros2_package__msg__Item__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_ros2_package__msg__Item__Sequence__copy(
  const my_ros2_package__msg__Item__Sequence * input,
  my_ros2_package__msg__Item__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(my_ros2_package__msg__Item)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(my_ros2_package__msg__Item);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_ros2_package__msg__Item * data =
      (my_ros2_package__msg__Item *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_ros2_package__msg__Item__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_ros2_package__msg__Item__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_ros2_package__msg__Item__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
