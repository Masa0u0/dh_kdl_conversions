#include "../../include/dh_kdl_conversions/kdl_msg.hpp"

using namespace std;
using namespace KDL;

namespace tf
{
void quaternionMsgToKDL(const geometry_msgs::Quaternion& m, Quaternion& k)
{
  k.x = m.x;
  k.y = m.y;
  k.z = m.z;
  k.w = m.w;
}
}  // namespace tf
