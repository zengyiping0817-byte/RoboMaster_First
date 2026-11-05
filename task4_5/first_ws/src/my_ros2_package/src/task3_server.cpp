#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "my_ros2_package/action/accumulate.hpp"

using Accumulate = my_ros2_package::action::Accumulate;
using GoalHandleAccumulate = rclcpp_action::ServerGoalHandle<Accumulate>;

class AccumulateServer : public rclcpp::Node {
public:
    AccumulateServer() : Node("accumulate_server") {
        action_server_ = rclcpp_action::create_server<Accumulate>(
            this, "accumulate",
            std::bind(&AccumulateServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&AccumulateServer::handle_cancel, this, std::placeholders::_1),
            std::bind(&AccumulateServer::handle_accepted, this, std::placeholders::_1));
    }
private:
    rclcpp_action::Server<Accumulate>::SharedPtr action_server_;

    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid, std::shared_ptr<const Accumulate::Goal> goal) {
        RCLCPP_INFO(this->get_logger(), "收到目标请求，累加到: %d", goal->target_num);
        (void)uuid;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleAccumulate> goal_handle) {
        RCLCPP_INFO(this->get_logger(), "收到取消请求");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(const std::shared_ptr<GoalHandleAccumulate> goal_handle) {
        std::thread{std::bind(&AccumulateServer::execute, this, std::placeholders::_1), goal_handle}.detach();
    }

    void execute(const std::shared_ptr<GoalHandleAccumulate> goal_handle) {
        RCLCPP_INFO(this->get_logger(), "开始执行任务...");
        const auto goal = goal_handle->get_goal();
        auto feedback = std::make_shared<Accumulate::Feedback>();
        auto result = std::make_shared<Accumulate::Result>();

        int32_t current_sum = 0;
        for (int i = 1; i <= goal->target_num; ++i) {
            if (goal_handle->is_canceling()) {
                result->final_sum = current_sum;
                goal_handle->canceled(result);
                return;
            }
            current_sum += i;
            feedback->current_num = i;
            feedback->current_sum = current_sum;
            goal_handle->publish_feedback(feedback);
            
            rclcpp::sleep_for(std::chrono::milliseconds(200)); // 模拟耗时
        }

        result->final_sum = current_sum;
        goal_handle->succeed(result);
        RCLCPP_INFO(this->get_logger(), "任务执行完成，最终结果: %d", current_sum);
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AccumulateServer>());
    rclcpp::shutdown();
    return 0;
}