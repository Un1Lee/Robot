# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robot/aplriltags/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robot/aplriltags/build

# Utility rule file for apriltags_generate_messages_cpp.

# Include the progress variables for this target.
include apriltags/CMakeFiles/apriltags_generate_messages_cpp.dir/progress.make

apriltags/CMakeFiles/apriltags_generate_messages_cpp: /home/robot/aplriltags/devel/include/apriltags/AprilTagDetections.h
apriltags/CMakeFiles/apriltags_generate_messages_cpp: /home/robot/aplriltags/devel/include/apriltags/AprilTagDetection.h


/home/robot/aplriltags/devel/include/apriltags/AprilTagDetections.h: /opt/ros/kinetic/lib/gencpp/gen_cpp.py
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetections.h: /home/robot/aplriltags/src/apriltags/msg/AprilTagDetections.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetections.h: /opt/ros/kinetic/share/std_msgs/msg/Header.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetections.h: /opt/ros/kinetic/share/geometry_msgs/msg/Quaternion.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetections.h: /opt/ros/kinetic/share/geometry_msgs/msg/Point32.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetections.h: /opt/ros/kinetic/share/geometry_msgs/msg/Point.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetections.h: /home/robot/aplriltags/src/apriltags/msg/AprilTagDetection.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetections.h: /opt/ros/kinetic/share/geometry_msgs/msg/Pose.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetections.h: /opt/ros/kinetic/share/gencpp/msg.h.template
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/robot/aplriltags/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating C++ code from apriltags/AprilTagDetections.msg"
	cd /home/robot/aplriltags/src/apriltags && /home/robot/aplriltags/build/catkin_generated/env_cached.sh /usr/bin/python /opt/ros/kinetic/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/robot/aplriltags/src/apriltags/msg/AprilTagDetections.msg -Iapriltags:/home/robot/aplriltags/src/apriltags/msg -Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg -Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg -p apriltags -o /home/robot/aplriltags/devel/include/apriltags -e /opt/ros/kinetic/share/gencpp/cmake/..

/home/robot/aplriltags/devel/include/apriltags/AprilTagDetection.h: /opt/ros/kinetic/lib/gencpp/gen_cpp.py
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetection.h: /home/robot/aplriltags/src/apriltags/msg/AprilTagDetection.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetection.h: /opt/ros/kinetic/share/geometry_msgs/msg/Quaternion.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetection.h: /opt/ros/kinetic/share/geometry_msgs/msg/Point32.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetection.h: /opt/ros/kinetic/share/geometry_msgs/msg/Pose.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetection.h: /opt/ros/kinetic/share/std_msgs/msg/Header.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetection.h: /opt/ros/kinetic/share/geometry_msgs/msg/Point.msg
/home/robot/aplriltags/devel/include/apriltags/AprilTagDetection.h: /opt/ros/kinetic/share/gencpp/msg.h.template
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/robot/aplriltags/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating C++ code from apriltags/AprilTagDetection.msg"
	cd /home/robot/aplriltags/src/apriltags && /home/robot/aplriltags/build/catkin_generated/env_cached.sh /usr/bin/python /opt/ros/kinetic/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/robot/aplriltags/src/apriltags/msg/AprilTagDetection.msg -Iapriltags:/home/robot/aplriltags/src/apriltags/msg -Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg -Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg -p apriltags -o /home/robot/aplriltags/devel/include/apriltags -e /opt/ros/kinetic/share/gencpp/cmake/..

apriltags_generate_messages_cpp: apriltags/CMakeFiles/apriltags_generate_messages_cpp
apriltags_generate_messages_cpp: /home/robot/aplriltags/devel/include/apriltags/AprilTagDetections.h
apriltags_generate_messages_cpp: /home/robot/aplriltags/devel/include/apriltags/AprilTagDetection.h
apriltags_generate_messages_cpp: apriltags/CMakeFiles/apriltags_generate_messages_cpp.dir/build.make

.PHONY : apriltags_generate_messages_cpp

# Rule to build all files generated by this target.
apriltags/CMakeFiles/apriltags_generate_messages_cpp.dir/build: apriltags_generate_messages_cpp

.PHONY : apriltags/CMakeFiles/apriltags_generate_messages_cpp.dir/build

apriltags/CMakeFiles/apriltags_generate_messages_cpp.dir/clean:
	cd /home/robot/aplriltags/build/apriltags && $(CMAKE_COMMAND) -P CMakeFiles/apriltags_generate_messages_cpp.dir/cmake_clean.cmake
.PHONY : apriltags/CMakeFiles/apriltags_generate_messages_cpp.dir/clean

apriltags/CMakeFiles/apriltags_generate_messages_cpp.dir/depend:
	cd /home/robot/aplriltags/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/aplriltags/src /home/robot/aplriltags/src/apriltags /home/robot/aplriltags/build /home/robot/aplriltags/build/apriltags /home/robot/aplriltags/build/apriltags/CMakeFiles/apriltags_generate_messages_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : apriltags/CMakeFiles/apriltags_generate_messages_cpp.dir/depend

