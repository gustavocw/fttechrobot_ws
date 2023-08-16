#include "fttech_pid/fttech_pid_core.h"

int main(int argc, char **argv)
{

  ros::init(argc, argv, "pid_configure");
  ros::NodeHandle nh;

  fttechPID *fttech_pid = new fttechPID();

  dynamic_reconfigure::Server<fttech_pid::fttechPIDConfig> dr_srv;
  dynamic_reconfigure::Server<fttech_pid::fttechPIDConfig>::CallbackType cb;
  cb = boost::bind(&fttechPID::configCallback, fttech_pid, _1, _2);
  dr_srv.setCallback(cb);

  double p;
  double d;
  double i;
  int rate;

  ros::NodeHandle pnh("~");
  pnh.param("p", p, 0.6);
  pnh.param("d", d, 0.3);
  pnh.param("i", i, 0.5);
  pnh.param("rate", rate, 1);

  ros::Publisher pub_message = nh.advertise<fttech_msgs::PID>("pid", 10);

  ros::Rate r(rate);

  while (nh.ok())
  {
    fttech_pid->publishMessage(&pub_message);
    ros::spinOnce();
    r.sleep();
  }

  return 0;
}
