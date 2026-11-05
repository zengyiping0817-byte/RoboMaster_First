// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_ros2_package:msg/Item.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_ros2_package/msg/item.hpp"


#ifndef MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__STRUCT_HPP_
#define MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_ros2_package__msg__Item __attribute__((deprecated))
#else
# define DEPRECATED__my_ros2_package__msg__Item __declspec(deprecated)
#endif

namespace my_ros2_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Item_
{
  using Type = Item_<ContainerAllocator>;

  explicit Item_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->item_id = "";
      this->item_name = "";
      this->price = 0.0f;
    }
  }

  explicit Item_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : item_id(_alloc),
    item_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->item_id = "";
      this->item_name = "";
      this->price = 0.0f;
    }
  }

  // field types and members
  using _item_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _item_id_type item_id;
  using _item_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _item_name_type item_name;
  using _price_type =
    float;
  _price_type price;

  // setters for named parameter idiom
  Type & set__item_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->item_id = _arg;
    return *this;
  }
  Type & set__item_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->item_name = _arg;
    return *this;
  }
  Type & set__price(
    const float & _arg)
  {
    this->price = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_ros2_package::msg::Item_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_ros2_package::msg::Item_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_ros2_package::msg::Item_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_ros2_package::msg::Item_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_ros2_package::msg::Item_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_ros2_package::msg::Item_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_ros2_package::msg::Item_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_ros2_package::msg::Item_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_ros2_package::msg::Item_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_ros2_package::msg::Item_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_ros2_package__msg__Item
    std::shared_ptr<my_ros2_package::msg::Item_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_ros2_package__msg__Item
    std::shared_ptr<my_ros2_package::msg::Item_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Item_ & other) const
  {
    if (this->item_id != other.item_id) {
      return false;
    }
    if (this->item_name != other.item_name) {
      return false;
    }
    if (this->price != other.price) {
      return false;
    }
    return true;
  }
  bool operator!=(const Item_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Item_

// alias to use template instance with default allocator
using Item =
  my_ros2_package::msg::Item_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_ros2_package

#endif  // MY_ROS2_PACKAGE__MSG__DETAIL__ITEM__STRUCT_HPP_
