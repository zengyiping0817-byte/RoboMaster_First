// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_ros2_package:msg/Item.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_ros2_package/msg/item.h"


#ifndef MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__STRUCT_H_
#define MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'item_id'
// Member 'item_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Item in the package my_ros2_package.
typedef struct my_ros2_package__msg__Item
{
  rosidl_runtime_c__String item_id;
  rosidl_runtime_c__String item_name;
  float price;
} my_ros2_package__msg__Item;

// Struct for a sequence of my_ros2_package__msg__Item.
typedef struct my_ros2_package__msg__Item__Sequence
{
  my_ros2_package__msg__Item * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__msg__Item__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__STRUCT_H_
