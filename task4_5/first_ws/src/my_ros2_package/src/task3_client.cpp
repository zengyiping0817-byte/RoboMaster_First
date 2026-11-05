#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "my_ros2_package/action/accumulate.hpp"

using Accumulate = my_ros2_package::action::Accumulate;
using GoalHandleAccumulate = rclcpp_action::ClientGoalHandle<Accumulate>;

class AccumulateClient : public rclcpp::Node {
public:
    AccumulateClient() : Node("accumulate_client") {
        client_ = rclcpp_action::create_client<Accumulate>(this, "accumulate");
        
        while (!client_->wait_for_action_server(std::chrono::seconds(1))) {
            RCLCPP_INFO(this->get_logger(), "等待动作服务端上线...");
        }

        auto goal = Accumulate::Goal();
        goal.target_num = 10; // 发送目标数字 10
        RCLCPP_INFO(this->get_logger(), "发送目标数字: %d", goal.target_num);

        auto send_goal_options = rclcpp_action::Client<Accumulate>::SendGoalOptions();
        
        // 处理反馈
        send_goal_options.feedback_callback = 
            [this](GoalHandleAccumulate::SharedPtr, const std::shared_ptr<const Accumulate::Feedback> feedback) {
                RCLCPP_INFO(this->get_logger(), "实时反馈 -> 当前数字: %d, 当前和: %d", 
                            feedback->current_num, feedback->current_sum);
            };
            
        // 处理结果
        send_goal_options.result_callback = 
            [this](const GoalHandleAccumulate::WrappedResult & result) {
                if (result.code == rclcpp_action::ResultCode::SUCCEEDED) {
                    RCLCPP_INFO(this->get_logger(), "最终结果 -> 累加和: %d", result.result->final_sum);
                }
            };
            
        client_->async_send_goal(goal, send_goal_options);
    }
private:
    rclcpp_action::Client<Accumulate>::SharedPtr client_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<AccumulateClient>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}