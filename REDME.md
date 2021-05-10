# ball_droper
ROS package for control of dropping ball servo via mavros

## Dependency
* [mavros package](http://wiki.ros.org/mavros#mavros.2FPlugins.Published_Topics-4)


## Setup
At your flight controller you need to set parameter __SYSID_MYGCS__ to mavros system id default:`1`

## Features
Repository contains two packages _ball_droper_ and _ball_droper_msgs_.
_ball_dropper_ package provide __ball_dropper__ node witch handle communication with mavros via service.

Main Service is:

"/ball_droper/drop_ball" 
* Request `std_msgs::String` to drop ball from left side send "A" and 
  to drop ball from right side send "B"
  
* Response `std_msgs::String` is simple confirmation "_Dropping A_" or "_Dropping B_"