#include "fttech_base.h"

int main(int argc, char** argv )
{
    ros::init(argc, argv, "fttech_base_node");
    fttechBase fttech;
    ros::spin();
    return 0;
}