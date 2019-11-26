#include "ros/ros.h"
#include "std_msgs/String.h"
#include <apriltags/AprilTagDetections.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include "tf/transform_datatypes.h"//转换函数头文件

//velocity command
geometry_msgs::Twist cmd_vel;


int flag_notag = 1;
float linear_x[2];
float linear_y[2];
float angular_z[2];
float deceleration_factor = 0.7;	//deceleration rate
float acceleration_factor = 0.2;	//acceleration rate
float horizontal_bias_last=0;
float distance_bias_last=0;
float horizontal_bias=0;
float distance_bias=0;
double roll, pitch, yaw;//定义存储r\p\y的容器
float high=0;

void chatterCallback(const apriltags::AprilTagDetections tag_msg)
{
	//ROS_INFO("I heard tag");
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
				//calculate bias
				float horizontal_bias_last=horizontal_bias;
				float distance_bias_last=distance_bias;

				float horizontal_bias=tag_pose.position.x;
				float base_distance=0.25;
				float distance_bias=tag_pose.position.z-base_distance;
			    high=tag_pose.position.y;
				/*
				//orientation
				float posture_x=tag_pose.orientation.x;
				float posture_y=tag_pose.orientation.y;
				float posture_z=tag_pose.orientation.z;
				float posture_w=tag_pose.orientation.w;
			
				ROS_INFO("x:%f y:%f z:%f w:%f",posture_x,posture_y,posture_z,posture_w);
				*/
				tf::Quaternion quat;
     	        tf::quaternionMsgToTF(tag_pose.orientation, quat);
 			    //roll：前后 pitch：左右 yaw：旋转
     		    tf::Matrix3x3(quat).getRPY(roll, pitch, yaw);//进行转换
				ROS_INFO("r:%f p:%f y:%f      high:%f",linear_x[1],linear_y[1],angular_z[1],high);

				//calculate vel command 
				float k_y=30;//coefficient
				float k_z=6;
				float k_p=-1;//pitch max=1
				linear_y[1]=k_y*distance_bias;//believe car frame like this: y means foward,x means right,z means upward
				angular_z[1]=k_p*pitch;//k_z*horizontal_bias*horizontal_bias or kd×（）  
				linear_x[1]=k_z*horizontal_bias;
				//limite the number  参数有待调整

				if(linear_x[1]>0.4)
				{
					linear_x[1]=0.4;
				}
				else if(linear_x[1]<-0.4)
				{
					linear_x[1]=-0.4;
				}
				/*
				k_p=-12;
				angular_z[1]=k_p*pitch*pitch*pitch;
				if(angular_z[1]>2.4)
				{
					angular_z[1]=2.4;
				}
				else if(angular_z[1]<-2.4)
				{
					angular_z[1]=-2.4;
				}
				
				*/
				

				if(distance_bias>0)
				{
					linear_y[1]=k_y*distance_bias*distance_bias;
				}
				else if(distance_bias<-0)
				{
					linear_y[1]=-k_y*distance_bias*distance_bias;
				}
				
				
			}
			else
			{
				//If there's no tag,set the no-tag flag one
				flag_notag ++;
			}
		}
	}
	else
	{
		flag_notag ++;
	}
	
	if(flag_notag <= 3)	//加速
	{
		//linear_y[0] = linear_y[0] + (linear_y[1] - linear_y[0])*acceleration_factor;
		//angular_z[0] = angular_z[0] + (angular_z[1] - angular_z[0])*acceleration_factor;
		cmd_vel.linear.y = linear_y[1];
		cmd_vel.angular.z = angular_z[1];
		cmd_vel.linear.x = linear_x[1];
	}
	else if(flag_notag > 3)	//减速
	{
		linear_x[1] = linear_x[1]*deceleration_factor;
		linear_y[1] = linear_y[1]*deceleration_factor;
		angular_z[1] = angular_z[1]*deceleration_factor;
		cmd_vel.linear.y = linear_y[1];
		cmd_vel.angular.z = angular_z[1];
		cmd_vel.linear.x = linear_x[1];
	}
	
	
}

int main(int argc, char *argv[])
{
	ros::init(argc, argv, "control_node");
	ros::NodeHandle n;
	ros::Subscriber sub = n.subscribe("/apriltags/detections", 1000, chatterCallback);
	
	ros::Publisher chatter_pub = n.advertise<geometry_msgs::Twist>("cmd_vel", 1000);
	

	ros::Rate loop_rate(20);
	while (ros::ok())
	{
		chatter_pub.publish(cmd_vel);
		ros::spinOnce();
		loop_rate.sleep();
	}
	cmd_vel.linear.y =0;
		cmd_vel.angular.z = 0;
		cmd_vel.linear.x = 0;
		chatter_pub.publish(cmd_vel);
	return 0;
}