#include <ros/ros.h>
#include <std_msgs/String.h>
#include <iostream>

void callback(const std_msgs::StringConstPtr& msg){
	std::cout<<msg->data<<std::endl;
}
int main(int argc, char** argv){

	ros::init(argc, argv, "listener_dj");
	
	ros::NodeHandle node_handle;
	
	ros::Subscriber subscriber = node_handle.subscribe("talker_topic",1,&callback);
	
	ros::spin();
	
	return 0;
}
