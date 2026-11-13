// 引入 ROS2 C++ 核心头文件，提供节点、订阅器等基础类型
#include "rclcpp/rclcpp.hpp"
// 引入自定义消息 Item 的头文件
#include "my_ros2_package/msg/item.hpp"

// 定义订阅者类，继承 rclcpp::Node，类体在本行开始
class ItemSubscriber : public rclcpp::Node {
// 公有成员区，构造函数对外可访问
public:
    // 构造函数，把节点命名为 item_subscriber，函数体在本行开始
    ItemSubscriber() : Node("item_subscriber") {
        // 创建订阅器，指定消息类型，参数在下一行继续
        subscription_ = this->create_subscription<my_ros2_package::msg::Item>(
            // 订阅话题 item_info，队列深度 10，回调绑定到 topic_callback
            "item_info", 10, std::bind(&ItemSubscriber::topic_callback, this, std::placeholders::_1));
    // 构造函数体结束
    }
// 私有成员区
private:
    // 话题消息回调函数，参数为消息共享指针，函数体在本行开始
    void topic_callback(const my_ros2_package::msg::Item::SharedPtr msg) const {
        // 打印接收到的物品信息（格式串起始行）
        RCLCPP_INFO(this->get_logger(), "接收物品信息: ID=%s, Name=%s, Price=%.2f", 
                    // 传入日志参数：物品编号、物品名称、价格
                    msg->item_id.c_str(), msg->item_name.c_str(), msg->price);
    // 回调函数体结束
    }
    // 声明 Item 消息订阅器的智能指针成员
    rclcpp::Subscription<my_ros2_package::msg::Item>::SharedPtr subscription_;
// 类定义结束
};

// 程序入口函数，函数体在本行开始
int main(int argc, char * argv[]) {
    // 初始化 ROS2 通信上下文
    rclcpp::init(argc, argv);
    // 创建订阅者节点并进入事件循环，等待话题消息
    rclcpp::spin(std::make_shared<ItemSubscriber>());
    // 关闭 ROS2 上下文
    rclcpp::shutdown();
    // 返回 0，表示程序正常结束
    return 0;
// 主函数体结束
}