cmake_minimum_required(VERSION 3.8)
project(my_ros2_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp_action REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Item.msg"
  "srv/Fibonacci.srv"
  "action/Accumulate.action"
  DEPENDENCIES std_msgs
)

# 任务1可执行文件
add_executable(item_publisher src/task1_publisher.cpp)
ament_target_dependencies(item_publisher rclcpp std_msgs)
rosidl_target_interfaces(item_publisher ${PROJECT_NAME} "rosidl_typesupport_cpp")

add_executable(item_subscriber src/task1_subscriber.cpp)
ament_target_dependencies(item_subscriber rclcpp std_msgs)
rosidl_target_interfaces(item_subscriber ${PROJECT_NAME} "rosidl_typesupport_cpp")

# 任务2可执行文件
add_executable(fibonacci_server src/task2_server.cpp)
ament_target_dependencies(fibonacci_server rclcpp)
rosidl_target_interfaces(fibonacci_server ${PROJECT_NAME} "rosidl_typesupport_cpp")

add_executable(fibonacci_client src/task2_client.cpp)
ament_target_dependencies(fibonacci_client rclcpp)
rosidl_target_interfaces(fibonacci_client ${PROJECT_NAME} "rosidl_typesupport_cpp")

# 任务3可执行文件
add_executable(accumulate_server src/task3_server.cpp)
ament_target_dependencies(accumulate_server rclcpp rclcpp_action)
rosidl_target_interfaces(accumulate_server ${PROJECT_NAME} "rosidl_typesupport_cpp")

add_executable(accumulate_client src/task3_client.cpp)
ament_target_dependencies(accumulate_client rclcpp rclcpp_action)
rosidl_target_interfaces(accumulate_client ${PROJECT_NAME} "rosidl_typesupport_cpp")


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

install(TARGETS
  item_publisher item_subscriber
  fibonacci_server fibonacci_client
  accumulate_server accumulate_client
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
