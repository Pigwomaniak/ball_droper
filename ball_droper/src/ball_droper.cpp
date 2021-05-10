#include <ros/ros.h>
#include <std_msgs/builtin_string.h>
#include <ball_droper_msgs/drop_ball.h>

bool ball_drop_cb(ball_droper_msgs::drop_ball::Request& req, ball_droper_msgs::drop_ball::Response& res){
    if(req.ball_to_drop == "A"){
        ROS_INFO("Drop A");
        res.status = "Dropping A";
    } else {
        ROS_INFO("Drop B");
        res.status = "Dropping B";
    }
    return true;
}


int main(int argc, char** argv){
    ros::init(argc, argv, "ball_droper");
    ros::NodeHandle n;
    ros::ServiceServer ball_drop_srv = n.advertiseService("ball_drop", ball_drop_cb);
    ROS_INFO("Ready to drop ball");
    ros::spin();
    return 0;
}