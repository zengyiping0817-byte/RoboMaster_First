#include "rclcpp/rclcpp.hpp"
#include "my_ros2_package/msg/item.hpp"

class ItemPublisher : public rclcpp::Node
{
public:
    ItemPublisher() : Node("item_publisher")
    {
        publisher_ = this->create_publisher<my_ros2_package::msg::Item>("item_info", 10);
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&ItemPublisher::timer_callback, this));
    }

private:
    void timer_callback()
    {
        auto message = my_ros2_package::msg::Item();
        message.item_id = "ID_001";
        message.item_name = "机械键盘";
        message.price = 399.0;
        RCLCPP_INFO(this->get_logger(), "发布物品信息: ID=%s, Name=%s, Price=%.2f",
                    message.item_id.c_str(), message.item_name.c_str(), message.price);
        publisher_->publish(message);
    }
    rclcpp::Publisher<my_ros2_package::msg::Item>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ItemPublisher>());
    rclcpp::shutdown();
    return 0;
}