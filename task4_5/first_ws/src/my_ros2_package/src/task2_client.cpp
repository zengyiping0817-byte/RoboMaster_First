// 引入 ROS2 C++ 核心头文件
#include "rclcpp/rclcpp.hpp"
// 引入自定义服务 Fibonacci 的头文件
#include "my_ros2_package/srv/fibonacci.hpp"

// 程序入口函数，函数体在本行开始
int main(int argc, char **argv) {
    // 初始化 ROS2 通信上下文
    rclcpp::init(argc, argv);
    // 创建名为 fibonacci_client 的节点对象
    auto node = rclcpp::Node::make_shared("fibonacci_client");
    
    // 原有注释：提示下面创建服务客户端
    // 创建客户端
    // 创建 fibonacci 服务的客户端
    auto client = node->create_client<my_ros2_package::srv::Fibonacci>("fibonacci");
    
    // 原有注释：提示下面等待服务端就绪
    // 等待服务端上线
    // 每秒检查一次服务是否可用，未上线则循环等待
    while (!client->wait_for_service(std::chrono::seconds(1))) {
        // 打印等待服务端上线的提示日志
        RCLCPP_INFO(node->get_logger(), "等待服务端上线...");
    // 等待循环结束
    }
    
    // 初始化斐波那契数列的前两个数 a 和 b
    int32_t a = 0, b = 1;
    // 打印初始值 a，行尾是原有的说明注释
    RCLCPP_INFO(node->get_logger(), "客户端初始化: %d", a); // 打印第一个数0
    
    // 循环 10 次，逐次请求下一个斐波那契数
    for (int i = 0; i < 10; ++i) {
        // 创建服务请求对象
        auto request = std::make_shared<my_ros2_package::srv::Fibonacci::Request>();
        // 把当前的 a 填入请求字段
        request->a = a;
        // 把当前的 b 填入请求字段
        request->b = b;
        
        // 原有注释：提示下面异步发送请求
        // 异步发送请求
        // 异步发送请求并获取结果 future
        auto result_future = client->async_send_request(request);
        
        // 原有注释：说明下一行会短暂阻塞并驱动回调
        // 等待结果返回（这行代码会短暂阻塞，并启动spin处理回调）
        // 阻塞等待服务结果，成功时进入该分支
        if (rclcpp::spin_until_future_complete(node, result_future) == rclcpp::FutureReturnCode::SUCCESS) {
            // 从 future 中取出服务响应结果
            auto result = result_future.get();
            // 打印服务端返回的下一个数
            RCLCPP_INFO(node->get_logger(), "客户端接收: %d", result->next);
            
            // 原有注释：提示下面更新状态以准备下一次循环
            // 更新a和b，准备下一次循环
            // 把 b 的值赋给 a，数列向前推进
            a = b;
            // 把返回的新数赋给 b
            b = result->next;
        // 服务调用未成功时进入该分支
        } else {
            // 打印服务调用失败的错误日志
            RCLCPP_ERROR(node->get_logger(), "服务调用失败");
            // 跳出循环，终止后续请求
            break;
        // if 与 else 分支结束
        }
    // for 循环结束
    }

    // 关闭 ROS2 上下文
    rclcpp::shutdown();
    // 返回 0，表示程序正常结束
    return 0;
// 主函数体结束
}