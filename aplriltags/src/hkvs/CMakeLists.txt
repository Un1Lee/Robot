cmake_minimum_required(VERSION 2.8.3)
project(hkvs)
find_package(catkin REQUIRED)
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  cv_bridge
  image_transport
)

find_package(OpenCV REQUIRED)

catkin_package(
  INCLUDE_DIRS include
  CATKIN_DEPENDS cv_bridge
                 std_msgs
                 roscpp
                 image_transport
)


include_directories(
  include ${catkin_INCLUDE_DIRS}
          ${OpenCV_INCLUDE_DIRS}
# include
# ${catkin_INCLUDE_DIRS}
)
link_directories(/opt/MVS/lib/64)

add_executable(hkvs_pub
  src/hkvs_pub.cpp
)
add_dependencies(hkvs_pub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(hkvs_pub -lMvCameraControl -lpthread
  ${catkin_LIBRARIES}
  ${OpenCV_LIBRARIES}
)

add_executable(hkvs_sub
  src/hkvs_sub.cpp
)
add_dependencies(hkvs_sub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(hkvs_sub
  ${catkin_LIBRARIES}
  ${OpenCV_LIBRARIES}
)

