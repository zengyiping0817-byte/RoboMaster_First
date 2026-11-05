#include "rclcpp/rclcpp.hpp"
#include "my_ros2_package/msg/item.hpp"

class ItemSubscriber : public rclcpp::Node {
public:
    ItemSubscriber() : Node("item_subscriber") {
        subscription_ = this->create_subscription<my_ros2_package::msg::Item>(
            "item_info", 10, std::bind(&ItemSubscriber::topic_callback, this, std::placeholders::_1));
    }
private:
    void topic_callback(const my_ros2_package::msg::Item::SharedPtr msg) const {
        RCLCPP_INFO(this->get_logger(), "接收物品信息: ID=%s, Name=%s, Price=%.2f", 
                    msg->item_id.c_str(), msg->item_name.c_str(), msg->price);
    }
    rclcpp::Subscription<my_ros2_package::msg::Item>::SharedPtr subscription_;
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ItemSubscriber>());
    rclcpp::shutdown();
    return 0;
}