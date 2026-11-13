// 引入 ROS2 C++ 核心头文件
#include "rclcpp/rclcpp.hpp"
// 引入 ROS2 动作库 rclcpp_action 的头文件
#include "rclcpp_action/rclcpp_action.hpp"
// 引入自定义动作 Accumulate 的头文件
#include "my_ros2_package/action/accumulate.hpp"

// 为动作类型定义别名，简化后续书写
using Accumulate = my_ros2_package::action::Accumulate;
// 为客户端目标句柄类型定义别名
using GoalHandleAccumulate = rclcpp_action::ClientGoalHandle<Accumulate>;

// 定义动作客户端类，继承节点基类，类体在本行开始
class AccumulateClient : public rclcpp::Node {
// 公有成员区
public:
    // 构造函数，把节点命名为 accumulate_client，函数体在本行开始
    AccumulateClient() : Node("accumulate_client") {
        // 创建名为 accumulate 的动作客户端
        client_ = rclcpp_action::create_client<Accumulate>(this, "accumulate");
        
        // 每秒检查动作服务端是否上线，未上线则循环等待
        while (!client_->wait_for_action_server(std::chrono::seconds(1))) {
            // 打印等待动作服务端上线的提示
            RCLCPP_INFO(this->get_logger(), "等待动作服务端上线...");
        // 等待循环结束
        }

        // 创建动作目标对象
        auto goal = Accumulate::Goal();
        // 设置累加目标数字为 10，行尾是原有的说明注释
        goal.target_num = 10; // 发送目标数字 10
        // 打印将要发送的目标数字
        RCLCPP_INFO(this->get_logger(), "发送目标数字: %d", goal.target_num);

        // 创建发送目标的选项对象，用于挂载回调
        auto send_goal_options = rclcpp_action::Client<Accumulate>::SendGoalOptions();
        
        // 原有注释：提示下面设置反馈回调
        // 处理反馈
        // 设置反馈回调，赋值表达式在下一行继续
        send_goal_options.feedback_callback = 
            // 定义反馈 lambda，接收目标句柄和反馈数据，函数体在本行开始
            [this](GoalHandleAccumulate::SharedPtr, const std::shared_ptr<const Accumulate::Feedback> feedback) {
                // 打印实时反馈（格式串起始行）
                RCLCPP_INFO(this->get_logger(), "实时反馈 -> 当前数字: %d, 当前和: %d", 
                            // 传入反馈参数：当前数字与当前累加和
                            feedback->current_num, feedback->current_sum);
            // lambda 结束，完成 feedback_callback 赋值
            };
            
        // 原有注释：提示下面设置结果回调
        // 处理结果
        // 设置结果回调，赋值表达式在下一行继续
        send_goal_options.result_callback = 
            // 定义结果 lambda，接收包装后的结果，函数体在本行开始
            [this](const GoalHandleAccumulate::WrappedResult & result) {
                // 判断动作是否成功完成
                if (result.code == rclcpp_action::ResultCode::SUCCEEDED) {
                    // 打印最终结果中的累加和
                    RCLCPP_INFO(this->get_logger(), "最终结果 -> 累加和: %d", result.result->final_sum);
                // if 分支结束
                }
            // lambda 结束，完成 result_callback 赋值
            };
            
        // 异步发送目标以及附带回调的选项
        client_->async_send_goal(goal, send_goal_options);
    // 构造函数体结束
    }
// 私有成员区
private:
    // 声明动作客户端的智能指针成员
    rclcpp_action::Client<Accumulate>::SharedPtr client_;
// 类定义结束
};

// 程序入口函数，函数体在本行开始
int main(int argc, char **argv) {
    // 初始化 ROS2 通信上下文
    rclcpp::init(argc, argv);
    // 创建动作客户端节点对象
    auto node = std::make_shared<AccumulateClient>();
    // 进入事件循环，处理反馈与结果回调
    rclcpp::spin(node);
    // 关闭 ROS2 上下文
    rclcpp::shutdown();
    // 返回 0，表示程序正常结束
    return 0;
// 主函数体结束
}