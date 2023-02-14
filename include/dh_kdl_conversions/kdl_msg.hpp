#pragma once

#include <geometry_msgs/Quaternion.h>

#include <dh_kdl/quaternion.hpp>

namespace tf
{
void quaternionMsgToKDL(const geometry_msgs::Quaternion& m, KDL::Quaternion& k);
}  // namespace tf
