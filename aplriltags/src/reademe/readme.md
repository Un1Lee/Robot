# 节点图
摄像头-->二维码识别-->控制量计算-->发给下位机
# 如何启动
roslaunch control bringup.launch
roslaunch board_communication.launch
# 调试
rostopic echo /apriltags/detections
rostopic echo cmd_vel

