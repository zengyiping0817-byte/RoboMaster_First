// 引入 ROS2 C++ 核心头文件，提供节点、发布器等基础类型
#include "rclcpp/rclcpp.hpp"
// 引入自定义消息 Item 的头文件
#include "my_ros2_package/msg/item.hpp"

// 定义发布者类，继承 rclcpp::Node 以获得 ROS2 节点能力
class ItemPublisher : public rclcpp::Node
// 类体开始
{
// 公有成员区，构造函数对外可访问
public:
    // 构造函数，调用基类构造并把节点命名为 item_publisher
    ItemPublisher() : Node("item_publisher")
    // 构造函数体开始
    {
        // 创建发布器，话题名 item_info，队列深度 10
        publisher_ = this->create_publisher<my_ros2_package::msg::Item>("item_info", 10);
        // 创建周期为 1 秒的定时器，回调绑定到 timer_callback
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&ItemPublisher::timer_callback, this));
    // 构造函数体结束
    }

// 私有成员区，回调和成员变量仅类内可访问
private:
    // 声明定时器回调函数，每次定时触发时执行
    void timer_callback()
    // 回调函数体开始
    {
        // 构造一个 Item 消息对象
        auto message = my_ros2_package::msg::Item();
        // 设置消息的物品编号为 ID_001
        message.item_id = "ID_001";
        // 设置消息的物品名称为机械键盘
        message.item_name = "机械键盘";
        // 设置消息的价格为 399.0
        message.price = 399.0;
        // 打印日志，输出本次要发布的物品信息（格式串起始行）
        RCLCPP_INFO(this->get_logger(), "发布物品信息: ID=%s, Name=%s, Price=%.2f",
                    // 传入日志参数：物品编号、物品名称、价格
                    message.item_id.c_str(), message.item_name.c_str(), message.price);
        // 通过发布器把消息发布到 item_info 话题
        publisher_->publish(message);
    // 回调函数体结束
    }
    // 声明 Item 消息发布器的智能指针成员
    rclcpp::Publisher<my_ros2_package::msg::Item>::SharedPtr publisher_;
    // 声明定时器的智能指针成员
    rclcpp::TimerBase::SharedPtr timer_;
// 类定义结束，末尾分号不可省略
};

// 程序入口函数，接收命令行参数
int main(int argc, char *argv[])
// 主函数体开始
{
    // 初始化 ROS2 通信上下文
    rclcpp::init(argc, argv);
    // 创建发布者节点并进入事件循环，持续触发定时回调
    rclcpp::spin(std::make_shared<ItemPublisher>());
    // 退出循环后关闭 ROS2 上下文并释放资源
    rclcpp::shutdown();
    // 返回 0，表示程序正常结束
    return 0;
// 主函数体结束
}