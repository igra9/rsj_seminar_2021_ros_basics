#include <ros/ros.h>
#include <rsj_tutorial_2021_ros_basics/Text.h>

#include <iostream>

void callback(const rsj_tutorial_2021_ros_basics::Text::ConstPtr &msg) {
  std::cout << msg->message << " " << msg->date << '\n';
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "Show");
  ros::NodeHandle node;

  ros::Subscriber sub = node.subscribe("Publish", 10, callback);

  ros::spin();

  return 0;
}