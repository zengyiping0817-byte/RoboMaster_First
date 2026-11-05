// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_ros2_package:msg/Item.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_ros2_package/msg/item.hpp"


#ifndef MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__BUILDER_HPP_
#define MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_ros2_package/msg/detail/item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_ros2_package
{

namespace msg
{

namespace builder
{

class Init_Item_price
{
public:
  explicit Init_Item_price(::my_ros2_package::msg::Item & msg)
  : msg_(msg)
  {}
  ::my_ros2_package::msg::Item price(::my_ros2_package::msg::Item::_price_type arg)
  {
    msg_.price = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_package::msg::Item msg_;
};

class Init_Item_item_name
{
public:
  explicit Init_Item_item_name(::my_ros2_package::msg::Item & msg)
  : msg_(msg)
  {}
  Init_Item_price item_name(::my_ros2_package::msg::Item::_item_name_type arg)
  {
    msg_.item_name = std::move(arg);
    return Init_Item_price(msg_);
  }

private:
  ::my_ros2_package::msg::Item msg_;
};

class Init_Item_item_id
{
public:
  Init_Item_item_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Item_item_name item_id(::my_ros2_package::msg::Item::_item_id_type arg)
  {
    msg_.item_id = std::move(arg);
    return Init_Item_item_name(msg_);
  }

private:
  ::my_ros2_package::msg::Item msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_package::msg::Item>()
{
  return my_ros2_package::msg::builder::Init_Item_item_id();
}

}  // namespace my_ros2_package

#endif  // MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__BUILDER_HPP_
