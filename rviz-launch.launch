<?xml_version = "1.0"?>

<launch>

<param name = "robot_description" command = "$(find xacro)/xacro --inorder $(find owl_robot_description)/urdf/owl_68.urdf" />

<!--read the joint value-->

<node name="robot_state_publisher" pkg="robot_state_publisher" type= "robot_state_publisher" />

<!--visualize in rviz-->

<node name="rviz" pkg="rviz" type= "rviz" arg="-d $(find owl_robot_description)/config/config_new.rviz" />

<!--visualize of thr use_gui for playing with joint-->

<arg name="use_gui" default="true" />
<node name="joint_state_publisher" pkg="joint_state_publisher" type= "joint_state_publisher" output="screen" unless="$(arg use_gui)" />
<node name="joint_state_publisher_gui" pkg="joint_state_publisher_gui" type= "joint_state_publisher_gui" output="screen" if="$(arg use_gui)" />


</launch>
