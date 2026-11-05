// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_ros2_package:msg/Item.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_ros2_package/msg/item.hpp"


#ifndef MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__TRAITS_HPP_
#define MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_ros2_package/msg/detail/item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_ros2_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const Item & msg,
  std::ostream & out)
{
  out << "{";
  // member: item_id
  {
    out << "item_id: ";
    rosidl_generator_traits::value_to_yaml(msg.item_id, out);
    out << ", ";
  }

  // member: item_name
  {
    out << "item_name: ";
    rosidl_generator_traits::value_to_yaml(msg.item_name, out);
    out << ", ";
  }

  // member: price
  {
    out << "price: ";
    rosidl_generator_traits::value_to_yaml(msg.price, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Item & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: item_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_id: ";
    rosidl_generator_traits::value_to_yaml(msg.item_id, out);
    out << "\n";
  }

  // member: item_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_name: ";
    rosidl_generator_traits::value_to_yaml(msg.item_name, out);
    out << "\n";
  }

  // member: price
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "price: ";
    rosidl_generator_traits::value_to_yaml(msg.price, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Item & msg, bool use_flow_style = false)
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

}  // namespace my_ros2_package

namespace rosidl_generator_traits
{

[[deprecated("use my_ros2_package::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_ros2_package::msg::Item & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_ros2_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_ros2_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_ros2_package::msg::Item & msg)
{
  return my_ros2_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_ros2_package::msg::Item>()
{
  return "my_ros2_package::msg::Item";
}

template<>
inline const char * name<my_ros2_package::msg::Item>()
{
  return "my_ros2_package/msg/Item";
}

template<>
struct has_fixed_size<my_ros2_package::msg::Item>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_ros2_package::msg::Item>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_ros2_package::msg::Item>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__TRAITS_HPP_
