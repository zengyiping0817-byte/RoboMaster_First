#include "rclcpp/rclcpp.hpp"
#include "my_ros2_package/srv/fibonacci.hpp"

class FibonacciServer : public rclcpp::Node {
public:
    FibonacciServer() : Node("fibonacci_server") {
        service_ = this->create_service<my_ros2_package::srv::Fibonacci>(
            "fibonacci", std::bind(&FibonacciServer::handle_service, this, std::placeholders::_1, std::placeholders::_2));
    }
private:
    void handle_service(const std::shared_ptr<my_ros2_package::srv::Fibonacci::Request> request,
                        std::shared_ptr<my_ros2_package::srv::Fibonacci::Response> response) {
        response->next = request->a + request->b;
        RCLCPP_INFO(this->get_logger(), "服务端计算: %d + %d = %d", request->a, request->b, response->next);
    }
    rclcpp::Service<my_ros2_package::srv::Fibonacci>::SharedPtr service_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<FibonacciServer>());
    rclcpp::shutdown();
    return 0;
}