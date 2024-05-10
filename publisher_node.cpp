#include<ros/ros.h>
#include<std_msgs/String.h>

int main(int argc, char** argv){
	ros::init(argc,argv,"talker_dj");
	ros::NodeHandle node_handle;
	ros::Publisher publisher = node_handle.advertise<std_msgs::String>("talker_topic",1);
	ros::Rate rate(10);
	while(ros::ok()){
		std_msgs::String msg;
		msg.data = "Hello!";
		publisher.publish(msg);
		ros::spinOnce();
		rate.sleep();
	}
	return 0;
}
