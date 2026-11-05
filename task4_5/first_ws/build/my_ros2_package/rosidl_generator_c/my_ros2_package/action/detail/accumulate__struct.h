// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_ros2_package:action/Accumulate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_ros2_package/action/accumulate.h"


#ifndef MY_ROS2_PACKAGE__ACTION__DETAIL__ACCUMULATE__STRUCT_H_
#define MY_ROS2_PACKAGE__ACTION__DETAIL__ACCUMULATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Accumulate in the package my_ros2_package.
typedef struct my_ros2_package__action__Accumulate_Goal
{
  int32_t target_num;
} my_ros2_package__action__Accumulate_Goal;

// Struct for a sequence of my_ros2_package__action__Accumulate_Goal.
typedef struct my_ros2_package__action__Accumulate_Goal__Sequence
{
  my_ros2_package__action__Accumulate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Accumulate_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/Accumulate in the package my_ros2_package.
typedef struct my_ros2_package__action__Accumulate_Result
{
  int32_t final_sum;
} my_ros2_package__action__Accumulate_Result;

// Struct for a sequence of my_ros2_package__action__Accumulate_Result.
typedef struct my_ros2_package__action__Accumulate_Result__Sequence
{
  my_ros2_package__action__Accumulate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Accumulate_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/Accumulate in the package my_ros2_package.
typedef struct my_ros2_package__action__Accumulate_Feedback
{
  int32_t current_num;
  int32_t current_sum;
} my_ros2_package__action__Accumulate_Feedback;

// Struct for a sequence of my_ros2_package__action__Accumulate_Feedback.
typedef struct my_ros2_package__action__Accumulate_Feedback__Sequence
{
  my_ros2_package__action__Accumulate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Accumulate_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_ros2_package/action/detail/accumulate__struct.h"

/// Struct defined in action/Accumulate in the package my_ros2_package.
typedef struct my_ros2_package__action__Accumulate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_ros2_package__action__Accumulate_Goal goal;
} my_ros2_package__action__Accumulate_SendGoal_Request;

// Struct for a sequence of my_ros2_package__action__Accumulate_SendGoal_Request.
typedef struct my_ros2_package__action__Accumulate_SendGoal_Request__Sequence
{
  my_ros2_package__action__Accumulate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Accumulate_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Accumulate in the package my_ros2_package.
typedef struct my_ros2_package__action__Accumulate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_ros2_package__action__Accumulate_SendGoal_Response;

// Struct for a sequence of my_ros2_package__action__Accumulate_SendGoal_Response.
typedef struct my_ros2_package__action__Accumulate_SendGoal_Response__Sequence
{
  my_ros2_package__action__Accumulate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Accumulate_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_ros2_package__action__Accumulate_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_ros2_package__action__Accumulate_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Accumulate in the package my_ros2_package.
typedef struct my_ros2_package__action__Accumulate_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_ros2_package__action__Accumulate_SendGoal_Request__Sequence request;
  my_ros2_package__action__Accumulate_SendGoal_Response__Sequence response;
} my_ros2_package__action__Accumulate_SendGoal_Event;

// Struct for a sequence of my_ros2_package__action__Accumulate_SendGoal_Event.
typedef struct my_ros2_package__action__Accumulate_SendGoal_Event__Sequence
{
  my_ros2_package__action__Accumulate_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Accumulate_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Accumulate in the package my_ros2_package.
typedef struct my_ros2_package__action__Accumulate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_ros2_package__action__Accumulate_GetResult_Request;

// Struct for a sequence of my_ros2_package__action__Accumulate_GetResult_Request.
typedef struct my_ros2_package__action__Accumulate_GetResult_Request__Sequence
{
  my_ros2_package__action__Accumulate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Accumulate_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_ros2_package/action/detail/accumulate__struct.h"

/// Struct defined in action/Accumulate in the package my_ros2_package.
typedef struct my_ros2_package__action__Accumulate_GetResult_Response
{
  int8_t status;
  my_ros2_package__action__Accumulate_Result result;
} my_ros2_package__action__Accumulate_GetResult_Response;

// Struct for a sequence of my_ros2_package__action__Accumulate_GetResult_Response.
typedef struct my_ros2_package__action__Accumulate_GetResult_Response__Sequence
{
  my_ros2_package__action__Accumulate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Accumulate_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_ros2_package__action__Accumulate_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_ros2_package__action__Accumulate_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Accumulate in the package my_ros2_package.
typedef struct my_ros2_package__action__Accumulate_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_ros2_package__action__Accumulate_GetResult_Request__Sequence request;
  my_ros2_package__action__Accumulate_GetResult_Response__Sequence response;
} my_ros2_package__action__Accumulate_GetResult_Event;

// Struct for a sequence of my_ros2_package__action__Accumulate_GetResult_Event.
typedef struct my_ros2_package__action__Accumulate_GetResult_Event__Sequence
{
  my_ros2_package__action__Accumulate_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Accumulate_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_ros2_package/action/detail/accumulate__struct.h"

/// Struct defined in action/Accumulate in the package my_ros2_package.
typedef struct my_ros2_package__action__Accumulate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_ros2_package__action__Accumulate_Feedback feedback;
} my_ros2_package__action__Accumulate_FeedbackMessage;

// Struct for a sequence of my_ros2_package__action__Accumulate_FeedbackMessage.
typedef struct my_ros2_package__action__Accumulate_FeedbackMessage__Sequence
{
  my_ros2_package__action__Accumulate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_package__action__Accumulate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROS2_PACKAGE__ACTION__DETAIL__ACCUMULATE__STRUCT_H_
