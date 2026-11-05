// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from my_ros2_package:srv/Fibonacci.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_ros2_package/srv/detail/fibonacci__struct.h"
#include "my_ros2_package/srv/detail/fibonacci__type_support.h"
#include "my_ros2_package/srv/detail/fibonacci__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_ros2_package
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_Request_type_support_ids_t;

static const _Fibonacci_Request_type_support_ids_t _Fibonacci_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Request_type_support_symbol_names_t _Fibonacci_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_ros2_package, srv, Fibonacci_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, srv, Fibonacci_Request)),
  }
};

typedef struct _Fibonacci_Request_type_support_data_t
{
  void * data[2];
} _Fibonacci_Request_type_support_data_t;

static _Fibonacci_Request_type_support_data_t _Fibonacci_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_Request_message_typesupport_map = {
  2,
  "my_ros2_package",
  &_Fibonacci_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_ros2_package__srv__Fibonacci_Request__get_type_hash,
  &my_ros2_package__srv__Fibonacci_Request__get_type_description,
  &my_ros2_package__srv__Fibonacci_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_ros2_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_ros2_package, srv, Fibonacci_Request)() {
  return &::my_ros2_package::srv::rosidl_typesupport_c::Fibonacci_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_ros2_package/srv/detail/fibonacci__struct.h"
// already included above
// #include "my_ros2_package/srv/detail/fibonacci__type_support.h"
// already included above
// #include "my_ros2_package/srv/detail/fibonacci__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_ros2_package
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_Response_type_support_ids_t;

static const _Fibonacci_Response_type_support_ids_t _Fibonacci_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Response_type_support_symbol_names_t _Fibonacci_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_ros2_package, srv, Fibonacci_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, srv, Fibonacci_Response)),
  }
};

typedef struct _Fibonacci_Response_type_support_data_t
{
  void * data[2];
} _Fibonacci_Response_type_support_data_t;

static _Fibonacci_Response_type_support_data_t _Fibonacci_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_Response_message_typesupport_map = {
  2,
  "my_ros2_package",
  &_Fibonacci_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_ros2_package__srv__Fibonacci_Response__get_type_hash,
  &my_ros2_package__srv__Fibonacci_Response__get_type_description,
  &my_ros2_package__srv__Fibonacci_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_ros2_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_ros2_package, srv, Fibonacci_Response)() {
  return &::my_ros2_package::srv::rosidl_typesupport_c::Fibonacci_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_ros2_package/srv/detail/fibonacci__struct.h"
// already included above
// #include "my_ros2_package/srv/detail/fibonacci__type_support.h"
// already included above
// #include "my_ros2_package/srv/detail/fibonacci__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_ros2_package
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_Event_type_support_ids_t;

static const _Fibonacci_Event_type_support_ids_t _Fibonacci_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Event_type_support_symbol_names_t _Fibonacci_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_ros2_package, srv, Fibonacci_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, srv, Fibonacci_Event)),
  }
};

typedef struct _Fibonacci_Event_type_support_data_t
{
  void * data[2];
} _Fibonacci_Event_type_support_data_t;

static _Fibonacci_Event_type_support_data_t _Fibonacci_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_Event_message_typesupport_map = {
  2,
  "my_ros2_package",
  &_Fibonacci_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_ros2_package__srv__Fibonacci_Event__get_type_hash,
  &my_ros2_package__srv__Fibonacci_Event__get_type_description,
  &my_ros2_package__srv__Fibonacci_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_ros2_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_ros2_package, srv, Fibonacci_Event)() {
  return &::my_ros2_package::srv::rosidl_typesupport_c::Fibonacci_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_ros2_package/srv/detail/fibonacci__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace my_ros2_package
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Fibonacci_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_type_support_ids_t;

static const _Fibonacci_type_support_ids_t _Fibonacci_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_type_support_symbol_names_t _Fibonacci_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_ros2_package, srv, Fibonacci)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, srv, Fibonacci)),
  }
};

typedef struct _Fibonacci_type_support_data_t
{
  void * data[2];
} _Fibonacci_type_support_data_t;

static _Fibonacci_type_support_data_t _Fibonacci_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_service_typesupport_map = {
  2,
  "my_ros2_package",
  &_Fibonacci_service_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_service_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Fibonacci_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Fibonacci_Request_message_type_support_handle,
  &Fibonacci_Response_message_type_support_handle,
  &Fibonacci_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_ros2_package,
    srv,
    Fibonacci
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_ros2_package,
    srv,
    Fibonacci
  ),
  &my_ros2_package__srv__Fibonacci__get_type_hash,
  &my_ros2_package__srv__Fibonacci__get_type_description,
  &my_ros2_package__srv__Fibonacci__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_ros2_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_ros2_package, srv, Fibonacci)() {
  return &::my_ros2_package::srv::rosidl_typesupport_c::Fibonacci_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
