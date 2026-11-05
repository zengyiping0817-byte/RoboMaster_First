#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to my_ros2_package__msg__Item

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Item {

    // This member is not documented.
    #[allow(missing_docs)]
    pub item_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub item_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub price: f32,

}



impl Default for Item {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Item::default())
  }
}

impl rosidl_runtime_rs::Message for Item {
  type RmwMsg = super::msg::rmw::Item;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        item_id: msg.item_id.as_str().into(),
        item_name: msg.item_name.as_str().into(),
        price: msg.price,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        item_id: msg.item_id.as_str().into(),
        item_name: msg.item_name.as_str().into(),
      price: msg.price,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      item_id: msg.item_id.to_string(),
      item_name: msg.item_name.to_string(),
      price: msg.price,
    }
  }
}


