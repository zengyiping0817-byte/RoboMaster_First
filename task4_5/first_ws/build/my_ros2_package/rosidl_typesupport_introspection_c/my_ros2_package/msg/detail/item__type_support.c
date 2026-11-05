// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_ros2_package:msg/Item.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_ros2_package/msg/detail/item__rosidl_typesupport_introspection_c.h"
#include "my_ros2_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_ros2_package/msg/detail/item__functions.h"
#include "my_ros2_package/msg/detail/item__struct.h"


// Include directives for member types
// Member `item_id`
// Member `item_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_ros2_package__msg__Item__rosidl_typesupport_introspection_c__Item_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_ros2_package__msg__Item__init(message_memory);
}

void my_ros2_package__msg__Item__rosidl_typesupport_introspection_c__Item_fini_function(void * message_memory)
{
  my_ros2_package__msg__Item__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_ros2_package__msg__Item__rosidl_typesupport_introspection_c__Item_message_member_array[3] = {
  {
    "item_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__msg__Item, item_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "item_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__msg__Item, item_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "price",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_ros2_package__msg__Item, price),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_ros2_package__msg__Item__rosidl_typesupport_introspection_c__Item_message_members = {
  "my_ros2_package__msg",  // message namespace
  "Item",  // message name
  3,  // number of fields
  sizeof(my_ros2_package__msg__Item),
  false,  // has_any_key_member_
  my_ros2_package__msg__Item__rosidl_typesupport_introspection_c__Item_message_member_array,  // message members
  my_ros2_package__msg__Item__rosidl_typesupport_introspection_c__Item_init_function,  // function to initialize message memory (memory has to be allocated)
  my_ros2_package__msg__Item__rosidl_typesupport_introspection_c__Item_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_ros2_package__msg__Item__rosidl_typesupport_introspection_c__Item_message_type_support_handle = {
  0,
  &my_ros2_package__msg__Item__rosidl_typesupport_introspection_c__Item_message_members,
  get_message_typesupport_handle_function,
  &my_ros2_package__msg__Item__get_type_hash,
  &my_ros2_package__msg__Item__get_type_description,
  &my_ros2_package__msg__Item__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_ros2_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_ros2_package, msg, Item)() {
  if (!my_ros2_package__msg__Item__rosidl_typesupport_introspection_c__Item_message_type_support_handle.typesupport_identifier) {
    my_ros2_package__msg__Item__rosidl_typesupport_introspection_c__Item_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_ros2_package__msg__Item__rosidl_typesupport_introspection_c__Item_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
