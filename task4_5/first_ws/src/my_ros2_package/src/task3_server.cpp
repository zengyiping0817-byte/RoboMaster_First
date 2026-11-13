// 引入 ROS2 C++ 核心头文件
#include "rclcpp/rclcpp.hpp"
// 引入 ROS2 动作库 rclcpp_action 的头文件
#include "rclcpp_action/rclcpp_action.hpp"
// 引入自定义动作 Accumulate 的头文件
#include "my_ros2_package/action/accumulate.hpp"

// 为动作类型定义别名，简化后续书写
using Accumulate = my_ros2_package::action::Accumulate;
// 为服务端目标句柄类型定义别名
using GoalHandleAccumulate = rclcpp_action::ServerGoalHandle<Accumulate>;

// 定义动作服务端类，继承节点基类，类体在本行开始
class AccumulateServer : public rclcpp::Node {
// 公有成员区
public:
    // 构造函数，把节点命名为 accumulate_server，函数体在本行开始
    AccumulateServer() : Node("accumulate_server") {
        // 创建动作服务端，参数在后续几行给出
        action_server_ = rclcpp_action::create_server<Accumulate>(
            // 传入当前节点指针和动作名 accumulate
            this, "accumulate",
            // 绑定目标请求回调 handle_goal
            std::bind(&AccumulateServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            // 绑定取消请求回调 handle_cancel
            std::bind(&AccumulateServer::handle_cancel, this, std::placeholders::_1),
            // 绑定目标被接受后的回调 handle_accepted，创建语句结束
            std::bind(&AccumulateServer::handle_accepted, this, std::placeholders::_1));
    // 构造函数体结束
    }
// 私有成员区
private:
    // 声明动作服务端的智能指针成员
    rclcpp_action::Server<Accumulate>::SharedPtr action_server_;

    // 处理目标请求的回调，返回是否接受目标，函数体在本行开始
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid, std::shared_ptr<const Accumulate::Goal> goal) {
        // 打印收到的目标数字
        RCLCPP_INFO(this->get_logger(), "收到目标请求，累加到: %d", goal->target_num);
        // 显式忽略未使用的 uuid 参数，避免编译器警告
        (void)uuid;
        // 返回接受该目标并立即执行
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    // handle_goal 回调结束
    }

    // 处理取消请求的回调，函数体在本行开始
    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleAccumulate> goal_handle) {
        // 打印收到取消请求的日志
        RCLCPP_INFO(this->get_logger(), "收到取消请求");
        // 显式忽略未使用的目标句柄参数
        (void)goal_handle;
        // 返回同意取消请求
        return rclcpp_action::CancelResponse::ACCEPT;
    // handle_cancel 回调结束
    }

    // 目标被接受后的回调，函数体在本行开始
    void handle_accepted(const std::shared_ptr<GoalHandleAccumulate> goal_handle) {
        // 另起线程执行 execute 并 detach，避免阻塞回调线程
        std::thread{std::bind(&AccumulateServer::execute, this, std::placeholders::_1), goal_handle}.detach();
    // handle_accepted 回调结束
    }

    // 实际执行累加任务的线程函数，函数体在本行开始
    void execute(const std::shared_ptr<GoalHandleAccumulate> goal_handle) {
        // 打印任务开始执行的日志
        RCLCPP_INFO(this->get_logger(), "开始执行任务...");
        // 从目标句柄中取出目标内容
        const auto goal = goal_handle->get_goal();
        // 创建反馈消息对象
        auto feedback = std::make_shared<Accumulate::Feedback>();
        // 创建结果消息对象
        auto result = std::make_shared<Accumulate::Result>();

        // 初始化累加和为 0
        int32_t current_sum = 0;
        // 从 1 循环累加到目标数字
        for (int i = 1; i <= goal->target_num; ++i) {
            // 判断客户端是否已请求取消
            if (goal_handle->is_canceling()) {
                // 把当前已累加的和记录为最终结果
                result->final_sum = current_sum;
                // 标记目标被取消并回传结果
                goal_handle->canceled(result);
                // 提前退出执行函数
                return;
            // 取消判断分支结束
            }
            // 把当前数字 i 累加进总和
            current_sum += i;
            // 把当前数字写入反馈消息
            feedback->current_num = i;
            // 把当前累加和写入反馈消息
            feedback->current_sum = current_sum;
            // 向客户端发布实时反馈
            goal_handle->publish_feedback(feedback);
            
            // 休眠 200 毫秒模拟耗时，行尾是原有的说明注释
            rclcpp::sleep_for(std::chrono::milliseconds(200)); // 模拟耗时
        // for 循环结束
        }

        // 把最终累加和写入结果消息
        result->final_sum = current_sum;
        // 标记目标成功完成并回传结果
        goal_handle->succeed(result);
        // 打印任务完成后的最终结果
        RCLCPP_INFO(this->get_logger(), "任务执行完成，最终结果: %d", current_sum);
    // execute 函数体结束
    }
// 类定义结束
};

// 程序入口函数，函数体在本行开始
int main(int argc, char **argv) {
    // 初始化 ROS2 通信上下文
    rclcpp::init(argc, argv);
    // 创建动作服务端节点并进入事件循环
    rclcpp::spin(std::make_shared<AccumulateServer>());
    // 关闭 ROS2 上下文
    rclcpp::shutdown();
    // 返回 0，表示程序正常结束
    return 0;
// 主函数体结束
}