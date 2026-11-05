
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "my_ros2_package__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_Goal() -> *const std::ffi::c_void;
}

#[link(name = "my_ros2_package__rosidl_generator_c")]
extern "C" {
    fn my_ros2_package__action__Accumulate_Goal__init(msg: *mut Accumulate_Goal) -> bool;
    fn my_ros2_package__action__Accumulate_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_Goal>, size: usize) -> bool;
    fn my_ros2_package__action__Accumulate_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_Goal>);
    fn my_ros2_package__action__Accumulate_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Accumulate_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Accumulate_Goal>) -> bool;
}

// Corresponds to my_ros2_package__action__Accumulate_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Accumulate_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_num: i32,

}



impl Default for Accumulate_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_ros2_package__action__Accumulate_Goal__init(&mut msg as *mut _) {
        panic!("Call to my_ros2_package__action__Accumulate_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Accumulate_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Accumulate_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Accumulate_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "my_ros2_package/action/Accumulate_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_Goal() }
  }
}


#[link(name = "my_ros2_package__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_Result() -> *const std::ffi::c_void;
}

#[link(name = "my_ros2_package__rosidl_generator_c")]
extern "C" {
    fn my_ros2_package__action__Accumulate_Result__init(msg: *mut Accumulate_Result) -> bool;
    fn my_ros2_package__action__Accumulate_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_Result>, size: usize) -> bool;
    fn my_ros2_package__action__Accumulate_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_Result>);
    fn my_ros2_package__action__Accumulate_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Accumulate_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Accumulate_Result>) -> bool;
}

// Corresponds to my_ros2_package__action__Accumulate_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Accumulate_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub final_sum: i32,

}



impl Default for Accumulate_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_ros2_package__action__Accumulate_Result__init(&mut msg as *mut _) {
        panic!("Call to my_ros2_package__action__Accumulate_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Accumulate_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Accumulate_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Accumulate_Result where Self: Sized {
  const TYPE_NAME: &'static str = "my_ros2_package/action/Accumulate_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_Result() }
  }
}


#[link(name = "my_ros2_package__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "my_ros2_package__rosidl_generator_c")]
extern "C" {
    fn my_ros2_package__action__Accumulate_Feedback__init(msg: *mut Accumulate_Feedback) -> bool;
    fn my_ros2_package__action__Accumulate_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_Feedback>, size: usize) -> bool;
    fn my_ros2_package__action__Accumulate_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_Feedback>);
    fn my_ros2_package__action__Accumulate_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Accumulate_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Accumulate_Feedback>) -> bool;
}

// Corresponds to my_ros2_package__action__Accumulate_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Accumulate_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_num: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_sum: i32,

}



impl Default for Accumulate_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_ros2_package__action__Accumulate_Feedback__init(&mut msg as *mut _) {
        panic!("Call to my_ros2_package__action__Accumulate_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Accumulate_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Accumulate_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Accumulate_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "my_ros2_package/action/Accumulate_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_Feedback() }
  }
}


#[link(name = "my_ros2_package__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "my_ros2_package__rosidl_generator_c")]
extern "C" {
    fn my_ros2_package__action__Accumulate_FeedbackMessage__init(msg: *mut Accumulate_FeedbackMessage) -> bool;
    fn my_ros2_package__action__Accumulate_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_FeedbackMessage>, size: usize) -> bool;
    fn my_ros2_package__action__Accumulate_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_FeedbackMessage>);
    fn my_ros2_package__action__Accumulate_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Accumulate_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Accumulate_FeedbackMessage>) -> bool;
}

// Corresponds to my_ros2_package__action__Accumulate_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Accumulate_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Accumulate_Feedback,

}



impl Default for Accumulate_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_ros2_package__action__Accumulate_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to my_ros2_package__action__Accumulate_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Accumulate_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Accumulate_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Accumulate_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "my_ros2_package/action/Accumulate_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_FeedbackMessage() }
  }
}




#[link(name = "my_ros2_package__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_ros2_package__rosidl_generator_c")]
extern "C" {
    fn my_ros2_package__action__Accumulate_SendGoal_Request__init(msg: *mut Accumulate_SendGoal_Request) -> bool;
    fn my_ros2_package__action__Accumulate_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_SendGoal_Request>, size: usize) -> bool;
    fn my_ros2_package__action__Accumulate_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_SendGoal_Request>);
    fn my_ros2_package__action__Accumulate_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Accumulate_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Accumulate_SendGoal_Request>) -> bool;
}

// Corresponds to my_ros2_package__action__Accumulate_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Accumulate_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Accumulate_Goal,

}



impl Default for Accumulate_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_ros2_package__action__Accumulate_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to my_ros2_package__action__Accumulate_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Accumulate_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Accumulate_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Accumulate_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_ros2_package/action/Accumulate_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_SendGoal_Request() }
  }
}


#[link(name = "my_ros2_package__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_ros2_package__rosidl_generator_c")]
extern "C" {
    fn my_ros2_package__action__Accumulate_SendGoal_Response__init(msg: *mut Accumulate_SendGoal_Response) -> bool;
    fn my_ros2_package__action__Accumulate_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_SendGoal_Response>, size: usize) -> bool;
    fn my_ros2_package__action__Accumulate_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_SendGoal_Response>);
    fn my_ros2_package__action__Accumulate_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Accumulate_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Accumulate_SendGoal_Response>) -> bool;
}

// Corresponds to my_ros2_package__action__Accumulate_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Accumulate_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Accumulate_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_ros2_package__action__Accumulate_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to my_ros2_package__action__Accumulate_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Accumulate_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Accumulate_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Accumulate_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_ros2_package/action/Accumulate_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_SendGoal_Response() }
  }
}


#[link(name = "my_ros2_package__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_ros2_package__rosidl_generator_c")]
extern "C" {
    fn my_ros2_package__action__Accumulate_GetResult_Request__init(msg: *mut Accumulate_GetResult_Request) -> bool;
    fn my_ros2_package__action__Accumulate_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_GetResult_Request>, size: usize) -> bool;
    fn my_ros2_package__action__Accumulate_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_GetResult_Request>);
    fn my_ros2_package__action__Accumulate_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Accumulate_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Accumulate_GetResult_Request>) -> bool;
}

// Corresponds to my_ros2_package__action__Accumulate_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Accumulate_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Accumulate_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_ros2_package__action__Accumulate_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to my_ros2_package__action__Accumulate_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Accumulate_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Accumulate_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Accumulate_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_ros2_package/action/Accumulate_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_GetResult_Request() }
  }
}


#[link(name = "my_ros2_package__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_ros2_package__rosidl_generator_c")]
extern "C" {
    fn my_ros2_package__action__Accumulate_GetResult_Response__init(msg: *mut Accumulate_GetResult_Response) -> bool;
    fn my_ros2_package__action__Accumulate_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_GetResult_Response>, size: usize) -> bool;
    fn my_ros2_package__action__Accumulate_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Accumulate_GetResult_Response>);
    fn my_ros2_package__action__Accumulate_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Accumulate_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Accumulate_GetResult_Response>) -> bool;
}

// Corresponds to my_ros2_package__action__Accumulate_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Accumulate_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Accumulate_Result,

}



impl Default for Accumulate_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_ros2_package__action__Accumulate_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to my_ros2_package__action__Accumulate_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Accumulate_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__action__Accumulate_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Accumulate_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Accumulate_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_ros2_package/action/Accumulate_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__action__Accumulate_GetResult_Response() }
  }
}






#[link(name = "my_ros2_package__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_ros2_package__action__Accumulate_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to my_ros2_package__action__Accumulate_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Accumulate_SendGoal;

impl rosidl_runtime_rs::Service for Accumulate_SendGoal {
    type Request = Accumulate_SendGoal_Request;
    type Response = Accumulate_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_ros2_package__action__Accumulate_SendGoal() }
    }
}




#[link(name = "my_ros2_package__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_ros2_package__action__Accumulate_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to my_ros2_package__action__Accumulate_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Accumulate_GetResult;

impl rosidl_runtime_rs::Service for Accumulate_GetResult {
    type Request = Accumulate_GetResult_Request;
    type Response = Accumulate_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_ros2_package__action__Accumulate_GetResult() }
    }
}


