#include "ros/ros.h"
#include "???????????????"

int add(int a,int b)
{
   ??????????????;
}

int muti(int a,int b)
{
    ??????????????/;
}

bool service_request(turtle_control::first::Request &req, turtle_control::first::Response &res)
{
    ROS_INFO("Request Num = %d",??????);
    ROS_INFO("Request Num = %d",??????);
    res. ??????????????????????;
    res.????????????????????????;
    ROS_INFO("Response: %d is add ", (????????????));
    ROS_INFO("Response: %d is muti ", (?????????));
    return true;
}


int main(int argc, char **argv)
{
    ros::init(argc, argv, "????????");
    ros::NodeHandle ??????;
    ros::ServiceServer ?????????????;
    ros::spin();

    return 0;

}
