// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from my_ros2_package:msg/Item.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "my_ros2_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "my_ros2_package/msg/detail/item__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace my_ros2_package
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_ros2_package
cdr_serialize(
  const my_ros2_package::msg::Item & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_ros2_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_ros2_package::msg::Item & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_ros2_package
get_serialized_size(
  const my_ros2_package::msg::Item & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_ros2_package
max_serialized_size_Item(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_ros2_package
cdr_serialize_key(
  const my_ros2_package::msg::Item & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_ros2_package
get_serialized_size_key(
  const my_ros2_package::msg::Item & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_ros2_package
max_serialized_size_key_Item(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_ros2_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_ros2_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_ros2_package, msg, Item)();

#ifdef __cplusplus
}
#endif

#endif  // MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
