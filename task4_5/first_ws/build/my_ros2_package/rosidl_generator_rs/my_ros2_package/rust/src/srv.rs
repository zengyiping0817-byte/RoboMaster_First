#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to my_ros2_package__srv__Fibonacci_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Fibonacci_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: i32,

}



impl Default for Fibonacci_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Fibonacci_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Fibonacci_Request {
  type RmwMsg = super::srv::rmw::Fibonacci_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        a: msg.a,
        b: msg.b,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      a: msg.a,
      b: msg.b,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      a: msg.a,
      b: msg.b,
    }
  }
}


// Corresponds to my_ros2_package__srv__Fibonacci_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Fibonacci_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub next: i32,

}



impl Default for Fibonacci_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Fibonacci_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Fibonacci_Response {
  type RmwMsg = super::srv::rmw::Fibonacci_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        next: msg.next,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      next: msg.next,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      next: msg.next,
    }
  }
}






#[link(name = "my_ros2_package__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_ros2_package__srv__Fibonacci() -> *const std::ffi::c_void;
}

// Corresponds to my_ros2_package__srv__Fibonacci
#[allow(missing_docs, non_camel_case_types)]
pub struct Fibonacci;

impl rosidl_runtime_rs::Service for Fibonacci {
    type Request = Fibonacci_Request;
    type Response = Fibonacci_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_ros2_package__srv__Fibonacci() }
    }
}


