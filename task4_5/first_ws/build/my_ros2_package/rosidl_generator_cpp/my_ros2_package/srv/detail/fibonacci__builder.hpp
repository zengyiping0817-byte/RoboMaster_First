// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_ros2_package:srv/Fibonacci.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_ros2_package/srv/fibonacci.hpp"


#ifndef MY_ROS2_PACKAGE__SRV__DETAIL__FIBONACCI__BUILDER_HPP_
#define MY_ROS2_PACKAGE__SRV__DETAIL__FIBONACCI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_ros2_package/srv/detail/fibonacci__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_ros2_package
{

namespace srv
{

namespace builder
{

class Init_Fibonacci_Request_b
{
public:
  explicit Init_Fibonacci_Request_b(::my_ros2_package::srv::Fibonacci_Request & msg)
  : msg_(msg)
  {}
  ::my_ros2_package::srv::Fibonacci_Request b(::my_ros2_package::srv::Fibonacci_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_package::srv::Fibonacci_Request msg_;
};

class Init_Fibonacci_Request_a
{
public:
  Init_Fibonacci_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_Request_b a(::my_ros2_package::srv::Fibonacci_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Fibonacci_Request_b(msg_);
  }

private:
  ::my_ros2_package::srv::Fibonacci_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_package::srv::Fibonacci_Request>()
{
  return my_ros2_package::srv::builder::Init_Fibonacci_Request_a();
}

}  // namespace my_ros2_package


namespace my_ros2_package
{

namespace srv
{

namespace builder
{

class Init_Fibonacci_Response_next
{
public:
  Init_Fibonacci_Response_next()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_ros2_package::srv::Fibonacci_Response next(::my_ros2_package::srv::Fibonacci_Response::_next_type arg)
  {
    msg_.next = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_package::srv::Fibonacci_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_package::srv::Fibonacci_Response>()
{
  return my_ros2_package::srv::builder::Init_Fibonacci_Response_next();
}

}  // namespace my_ros2_package


namespace my_ros2_package
{

namespace srv
{

namespace builder
{

class Init_Fibonacci_Event_response
{
public:
  explicit Init_Fibonacci_Event_response(::my_ros2_package::srv::Fibonacci_Event & msg)
  : msg_(msg)
  {}
  ::my_ros2_package::srv::Fibonacci_Event response(::my_ros2_package::srv::Fibonacci_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_package::srv::Fibonacci_Event msg_;
};

class Init_Fibonacci_Event_request
{
public:
  explicit Init_Fibonacci_Event_request(::my_ros2_package::srv::Fibonacci_Event & msg)
  : msg_(msg)
  {}
  Init_Fibonacci_Event_response request(::my_ros2_package::srv::Fibonacci_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Fibonacci_Event_response(msg_);
  }

private:
  ::my_ros2_package::srv::Fibonacci_Event msg_;
};

class Init_Fibonacci_Event_info
{
public:
  Init_Fibonacci_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_Event_request info(::my_ros2_package::srv::Fibonacci_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Fibonacci_Event_request(msg_);
  }

private:
  ::my_ros2_package::srv::Fibonacci_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_package::srv::Fibonacci_Event>()
{
  return my_ros2_package::srv::builder::Init_Fibonacci_Event_info();
}

}  // namespace my_ros2_package

#endif  // MY_ROS2_PACKAGE__SRV__DETAIL__FIBONACCI__BUILDER_HPP_
