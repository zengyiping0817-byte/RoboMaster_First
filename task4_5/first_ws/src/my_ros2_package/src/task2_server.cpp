// 引入 ROS2 C++ 核心头文件
#include "rclcpp/rclcpp.hpp"
// 引入自定义服务 Fibonacci 的头文件
#include "my_ros2_package/srv/fibonacci.hpp"

// 定义服务端类，继承 rclcpp::Node，类体在本行开始
class FibonacciServer : public rclcpp::Node {
// 公有成员区，构造函数对外可访问
public:
    // 构造函数，把节点命名为 fibonacci_server，函数体在本行开始
    FibonacciServer() : Node("fibonacci_server") {
        // 创建 Fibonacci 服务，参数在下一行继续
        service_ = this->create_service<my_ros2_package::srv::Fibonacci>(
            // 指定服务名 fibonacci，并把回调绑定到 handle_service
            "fibonacci", std::bind(&FibonacciServer::handle_service, this, std::placeholders::_1, std::placeholders::_2));
    // 构造函数体结束
    }
// 私有成员区
private:
    // 服务回调函数声明，第一参数是请求，续行继续
    void handle_service(const std::shared_ptr<my_ros2_package::srv::Fibonacci::Request> request,
                        // 第二参数是响应，函数体在本行开始
                        std::shared_ptr<my_ros2_package::srv::Fibonacci::Response> response) {
        // 计算 a 加 b 并写入响应的 next 字段
        response->next = request->a + request->b;
        // 打印本次计算过程的日志
        RCLCPP_INFO(this->get_logger(), "服务端计算: %d + %d = %d", request->a, request->b, response->next);
    // 回调函数体结束
    }
    // 声明服务端对象的智能指针成员
    rclcpp::Service<my_ros2_package::srv::Fibonacci>::SharedPtr service_;
// 类定义结束
};

// 程序入口函数，函数体在本行开始
int main(int argc, char **argv) {
    // 初始化 ROS2 通信上下文
    rclcpp::init(argc, argv);
    // 创建服务端节点并进入事件循环，等待请求
    rclcpp::spin(std::make_shared<FibonacciServer>());
    // 关闭 ROS2 上下文
    rclcpp::shutdown();
    // 返回 0，表示程序正常结束
    return 0;
// 主函数体结束
}