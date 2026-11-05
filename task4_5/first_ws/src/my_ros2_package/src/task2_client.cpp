#include "rclcpp/rclcpp.hpp"
#include "my_ros2_package/srv/fibonacci.hpp"

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("fibonacci_client");
    
    // 创建客户端
    auto client = node->create_client<my_ros2_package::srv::Fibonacci>("fibonacci");
    
    // 等待服务端上线
    while (!client->wait_for_service(std::chrono::seconds(1))) {
        RCLCPP_INFO(node->get_logger(), "等待服务端上线...");
    }
    
    int32_t a = 0, b = 1;
    RCLCPP_INFO(node->get_logger(), "客户端初始化: %d", a); // 打印第一个数0
    
    for (int i = 0; i < 10; ++i) {
        auto request = std::make_shared<my_ros2_package::srv::Fibonacci::Request>();
        request->a = a;
        request->b = b;
        
        // 异步发送请求
        auto result_future = client->async_send_request(request);
        
        // 等待结果返回（这行代码会短暂阻塞，并启动spin处理回调）
        if (rclcpp::spin_until_future_complete(node, result_future) == rclcpp::FutureReturnCode::SUCCESS) {
            auto result = result_future.get();
            RCLCPP_INFO(node->get_logger(), "客户端接收: %d", result->next);
            
            // 更新a和b，准备下一次循环
            a = b;
            b = result->next;
        } else {
            RCLCPP_ERROR(node->get_logger(), "服务调用失败");
            break;
        }
    }

    rclcpp::shutdown();
    return 0;
}