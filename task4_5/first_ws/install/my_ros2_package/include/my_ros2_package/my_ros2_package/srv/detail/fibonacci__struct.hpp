// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_ros2_package:srv/Fibonacci.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_ros2_package/srv/fibonacci.hpp"


#ifndef MY_ROS2_PACKAGE__SRV__DETAIL__FIBONACCI__STRUCT_HPP_
#define MY_ROS2_PACKAGE__SRV__DETAIL__FIBONACCI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_ros2_package__srv__Fibonacci_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_ros2_package__srv__Fibonacci_Request __declspec(deprecated)
#endif

namespace my_ros2_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_Request_
{
  using Type = Fibonacci_Request_<ContainerAllocator>;

  explicit Fibonacci_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
    }
  }

  explicit Fibonacci_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
    }
  }

  // field types and members
  using _a_type =
    int32_t;
  _a_type a;
  using _b_type =
    int32_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int32_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int32_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_ros2_package__srv__Fibonacci_Request
    std::shared_ptr<my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_ros2_package__srv__Fibonacci_Request
    std::shared_ptr<my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_Request_

// alias to use template instance with default allocator
using Fibonacci_Request =
  my_ros2_package::srv::Fibonacci_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_ros2_package


#ifndef _WIN32
# define DEPRECATED__my_ros2_package__srv__Fibonacci_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_ros2_package__srv__Fibonacci_Response __declspec(deprecated)
#endif

namespace my_ros2_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_Response_
{
  using Type = Fibonacci_Response_<ContainerAllocator>;

  explicit Fibonacci_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->next = 0l;
    }
  }

  explicit Fibonacci_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->next = 0l;
    }
  }

  // field types and members
  using _next_type =
    int32_t;
  _next_type next;

  // setters for named parameter idiom
  Type & set__next(
    const int32_t & _arg)
  {
    this->next = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_ros2_package__srv__Fibonacci_Response
    std::shared_ptr<my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_ros2_package__srv__Fibonacci_Response
    std::shared_ptr<my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_Response_ & other) const
  {
    if (this->next != other.next) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_Response_

// alias to use template instance with default allocator
using Fibonacci_Response =
  my_ros2_package::srv::Fibonacci_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_ros2_package


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_ros2_package__srv__Fibonacci_Event __attribute__((deprecated))
#else
# define DEPRECATED__my_ros2_package__srv__Fibonacci_Event __declspec(deprecated)
#endif

namespace my_ros2_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_Event_
{
  using Type = Fibonacci_Event_<ContainerAllocator>;

  explicit Fibonacci_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Fibonacci_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_ros2_package::srv::Fibonacci_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_ros2_package::srv::Fibonacci_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_ros2_package::srv::Fibonacci_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_ros2_package::srv::Fibonacci_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_ros2_package::srv::Fibonacci_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_ros2_package::srv::Fibonacci_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_ros2_package::srv::Fibonacci_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_ros2_package::srv::Fibonacci_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_ros2_package::srv::Fibonacci_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_ros2_package::srv::Fibonacci_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_ros2_package::srv::Fibonacci_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_ros2_package::srv::Fibonacci_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_ros2_package__srv__Fibonacci_Event
    std::shared_ptr<my_ros2_package::srv::Fibonacci_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_ros2_package__srv__Fibonacci_Event
    std::shared_ptr<my_ros2_package::srv::Fibonacci_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_Event_

// alias to use template instance with default allocator
using Fibonacci_Event =
  my_ros2_package::srv::Fibonacci_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_ros2_package

namespace my_ros2_package
{

namespace srv
{

struct Fibonacci
{
  using Request = my_ros2_package::srv::Fibonacci_Request;
  using Response = my_ros2_package::srv::Fibonacci_Response;
  using Event = my_ros2_package::srv::Fibonacci_Event;
};

}  // namespace srv

}  // namespace my_ros2_package

#endif  // MY_ROS2_PACKAGE__SRV__DETAIL__FIBONACCI__STRUCT_HPP_
