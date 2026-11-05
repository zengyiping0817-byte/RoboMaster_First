#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "my_ros2_package__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__msg__Item() -> *const std::ffi::c_void;
}

#[link(name = "my_ros2_package__rosidl_generator_c")]
extern "C" {
    fn my_ros2_package__msg__Item__init(msg: *mut Item) -> bool;
    fn my_ros2_package__msg__Item__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Item>, size: usize) -> bool;
    fn my_ros2_package__msg__Item__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Item>);
    fn my_ros2_package__msg__Item__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Item>, out_seq: *mut rosidl_runtime_rs::Sequence<Item>) -> bool;
}

// Corresponds to my_ros2_package__msg__Item
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Item {

    // This member is not documented.
    #[allow(missing_docs)]
    pub item_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub item_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub price: f32,

}



impl Default for Item {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_ros2_package__msg__Item__init(&mut msg as *mut _) {
        panic!("Call to my_ros2_package__msg__Item__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Item {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__msg__Item__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__msg__Item__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ros2_package__msg__Item__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Item {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Item where Self: Sized {
  const TYPE_NAME: &'static str = "my_ros2_package/msg/Item";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ros2_package__msg__Item() }
  }
}


