#include "ros/ros.h"	
#include <std_msgs/String.h> 	
#include <sstream>
 
int main(int argc, char** argv)
{
	ros::init(argc, argv, "node_a");	
	ros::NodeHandle n;	
	ros::Publisher pub = n.advertise<std_msgs::String>("write", 1000);	
  	ros::Rate loop_rate(10);	

	while(ros::ok())
	{
		std_msgs::String msg;
		std::stringstream ss;
		ss<<"Hello World";
		msg.data = ss.str();
		ROS_INFO("node_a is publishing %s", msg.data.c_str());
		pub.publish(msg);	
		ros::spinOnce();	
		loop_rate.sleep();	
	}
 
	return 0;
}