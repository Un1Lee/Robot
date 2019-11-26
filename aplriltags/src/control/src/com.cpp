#include <ros/ros.h> 
#include <serial/serial.h>  
#include <std_msgs/String.h> 
#include <std_msgs/Empty.h> 
#include <geometry_msgs/Twist.h>
#include <apriltags/AprilTagDetections.h>
#include <geometry_msgs/Pose.h>

serial::Serial ser; 

geometry_msgs::Twist cmd_angle;
int flag_notag = 1;

void write_callback(apriltags::AprilTagDetections tag_msg)
{
if(!tag_msg.detections.empty())
	{
		for(int i=0;i<tag_msg.detections.size();i++)
		{
			if(tag_msg.detections[i].id==0)
			{
				//If there's a tag,set the no-tag flag zero
				flag_notag = 0;
				//get the pose of tag
				geometry_msgs::Pose tag_pose=tag_msg.detections[i].pose;			
				//orientation
				float posture_y=tag_pose.position.y;			
				//ROS_INFO("z:%f",posture_y);
				cmd_angle.angular.z = posture_y;
				ROS_INFO("z:%f",cmd_angle.angular.z);
				ser.write(posture_y);
			}	
		}	
	}
	
}


int main (int argc, char** argv) 
{
	
	ros::init(argc, argv, "serial_example_node"); 
	 
	ros::NodeHandle nh; 
	 
    ros::Subscriber write_sub = nh.subscribe("/apriltags/detections", 1000, write_callback);
	
   	//ros::Publisher read_pub = nh.advertise<std_msgs::String>("read", 1000); 
	ros::Publisher read_pub = nh.advertise<geometry_msgs::Twist>("cmd_angle", 1000);   

	try 
	{
		 
        ser.setPort("/dev/ttyUSB1");
		ser.setBaudrate(115200); 
		serial::Timeout to = serial::Timeout::simpleTimeout(1000);
		ser.setTimeout(to); 
		ser.open();  
	}
	catch (serial::IOException& e) 
	{ 
        	ROS_ERROR_STREAM("Unable to open port "); 
        	return -1; 
   	} 
	
	ros::Rate loop_rate(50); 
	while(ros::ok()) 
	{
		if(ser.available())
		{ 
		read_pub.publish(cmd_angle); 
		}
	
        ros::spinOnce(); 
        loop_rate.sleep(); 
	}
}
