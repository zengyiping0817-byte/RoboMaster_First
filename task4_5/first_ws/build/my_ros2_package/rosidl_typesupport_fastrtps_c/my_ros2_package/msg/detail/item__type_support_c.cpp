// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_ros2_package:msg/Item.idl
// generated code does not contain a copyright notice
#include "my_ros2_package/msg/detail/item__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_ros2_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_ros2_package/msg/detail/item__struct.h"
#include "my_ros2_package/msg/detail/item__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // item_id, item_name
#include "rosidl_runtime_c/string_functions.h"  // item_id, item_name

// forward declare type support functions


using _Item__ros_msg_type = my_ros2_package__msg__Item;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_ros2_package
bool cdr_serialize_my_ros2_package__msg__Item(
  const my_ros2_package__msg__Item * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: item_id
  {
    const rosidl_runtime_c__String * str = &ros_message->item_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: item_name
  {
    const rosidl_runtime_c__String * str = &ros_message->item_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: price
  {
    cdr << ros_message->price;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_ros2_package
bool cdr_deserialize_my_ros2_package__msg__Item(
  eprosima::fastcdr::Cdr & cdr,
  my_ros2_package__msg__Item * ros_message)
{
  // Field name: item_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->item_id.data) {
      rosidl_runtime_c__String__init(&ros_message->item_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->item_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'item_id'\n");
      return false;
    }
  }

  // Field name: item_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->item_name.data) {
      rosidl_runtime_c__String__init(&ros_message->item_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->item_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'item_name'\n");
      return false;
    }
  }

  // Field name: price
  {
    cdr >> ros_message->price;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_ros2_package
size_t get_serialized_size_my_ros2_package__msg__Item(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Item__ros_msg_type * ros_message = static_cast<const _Item__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: item_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->item_id.size + 1);

  // Field name: item_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->item_name.size + 1);

  // Field name: price
  {
    size_t item_size = sizeof(ros_message->price);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_ros2_package
size_t max_serialized_size_my_ros2_package__msg__Item(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: item_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: item_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: price
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_ros2_package__msg__Item;
    is_plain =
      (
      offsetof(DataType, price) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_ros2_package
bool cdr_serialize_key_my_ros2_package__msg__Item(
  const my_ros2_package__msg__Item * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: item_id
  {
    const rosidl_runtime_c__String * str = &ros_message->item_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: item_name
  {
    const rosidl_runtime_c__String * str = &ros_message->item_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: price
  {
    cdr << ros_message->price;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_ros2_package
size_t get_serialized_size_key_my_ros2_package__msg__Item(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Item__ros_msg_type * ros_message = static_cast<const _Item__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: item_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->item_id.size + 1);

  // Field name: item_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->item_name.size + 1);

  // Field name: price
  {
    size_t item_size = sizeof(ros_message->price);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_ros2_package
size_t max_serialized_size_key_my_ros2_package__msg__Item(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: item_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: item_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: price
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_ros2_package__msg__Item;
    is_plain =
      (
      offsetof(DataType, price) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Item__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const my_ros2_package__msg__Item * ros_message = static_cast<const my_ros2_package__msg__Item *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_my_ros2_package__msg__Item(ros_message, cdr);
}

static bool _Item__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  my_ros2_package__msg__Item * ros_message = static_cast<my_ros2_package__msg__Item *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_my_ros2_package__msg__Item(cdr, ros_message);
}

static uint32_t _Item__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_ros2_package__msg__Item(
      untyped_ros_message, 0));
}

static size_t _Item__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_ros2_package__msg__Item(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Item = {
  "my_ros2_package::msg",
  "Item",
  _Item__cdr_serialize,
  _Item__cdr_deserialize,
  _Item__get_serialized_size,
  _Item__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Item__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Item,
  get_message_typesupport_handle_function,
  &my_ros2_package__msg__Item__get_type_hash,
  &my_ros2_package__msg__Item__get_type_description,
  &my_ros2_package__msg__Item__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_ros2_package, msg, Item)() {
  return &_Item__type_support;
}

#if defined(__cplusplus)
}
#endif
