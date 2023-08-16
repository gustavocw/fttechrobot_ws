#ifndef SR_fttech_PID_CORE_H
#define SR_fttech_PID_CORE_H

#include "ros/ros.h"
#include "ros/time.h"

// Custom message includes. Auto-generated from msg/ directory.
#include <fttech_msgs/PID.h>

// Dynamic reconfigure includes.
#include <dynamic_reconfigure/server.h>
// Auto-generated from cfg/ directory.
#include <fttech_pid/fttechPIDConfig.h>

class fttechPID
{
public:
  fttechPID();
  ~fttechPID();
  void configCallback(fttech_pid::fttechPIDConfig &config, double level);
  void publishMessage(ros::Publisher *pub_message);
  void messageCallback(const fttech_msgs::PID::ConstPtr &msg);

  double p_;
  double d_;
  double i_;

};
#endif
