# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target my_ros2_package::my_ros2_package
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${my_ros2_package_TARGETS}.
if(my_ros2_package_TARGETS AND NOT TARGET my_ros2_package::my_ros2_package)
  add_library(my_ros2_package::my_ros2_package INTERFACE IMPORTED)
  set_target_properties(my_ros2_package::my_ros2_package PROPERTIES
    INTERFACE_LINK_LIBRARIES "${my_ros2_package_TARGETS}")
endif()
