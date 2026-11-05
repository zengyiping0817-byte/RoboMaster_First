// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_ros2_package:msg/Item.idl
// generated code does not contain a copyright notice

#include "my_ros2_package/msg/detail/item__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_ros2_package
const rosidl_type_hash_t *
my_ros2_package__msg__Item__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0xad, 0x8a, 0x09, 0x80, 0xf4, 0x77, 0xd6,
      0xb6, 0x0d, 0x84, 0xc0, 0xca, 0xbc, 0xd8, 0x04,
      0xee, 0x81, 0x44, 0x67, 0x37, 0xf5, 0x64, 0x69,
      0x15, 0x81, 0x7c, 0x34, 0x5a, 0xa0, 0xc1, 0x30,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_ros2_package__msg__Item__TYPE_NAME[] = "my_ros2_package/msg/Item";

// Define type names, field names, and default values
static char my_ros2_package__msg__Item__FIELD_NAME__item_id[] = "item_id";
static char my_ros2_package__msg__Item__FIELD_NAME__item_name[] = "item_name";
static char my_ros2_package__msg__Item__FIELD_NAME__price[] = "price";

static rosidl_runtime_c__type_description__Field my_ros2_package__msg__Item__FIELDS[] = {
  {
    {my_ros2_package__msg__Item__FIELD_NAME__item_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_ros2_package__msg__Item__FIELD_NAME__item_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_ros2_package__msg__Item__FIELD_NAME__price, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_ros2_package__msg__Item__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_ros2_package__msg__Item__TYPE_NAME, 24, 24},
      {my_ros2_package__msg__Item__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string item_id\n"
  "string item_name\n"
  "float32 price";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_ros2_package__msg__Item__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_ros2_package__msg__Item__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_ros2_package__msg__Item__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_ros2_package__msg__Item__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
