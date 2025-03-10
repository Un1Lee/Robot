// Generated by gencpp from file lslidar_n301_msgs/LslidarN301Sweep.msg
// DO NOT EDIT!


#ifndef LSLIDAR_N301_MSGS_MESSAGE_LSLIDARN301SWEEP_H
#define LSLIDAR_N301_MSGS_MESSAGE_LSLIDARN301SWEEP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <lslidar_n301_msgs/LslidarN301Scan.h>

namespace lslidar_n301_msgs
{
template <class ContainerAllocator>
struct LslidarN301Sweep_
{
  typedef LslidarN301Sweep_<ContainerAllocator> Type;

  LslidarN301Sweep_()
    : header()
    , scans()  {
    }
  LslidarN301Sweep_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , scans()  {
  (void)_alloc;
      scans.assign( ::lslidar_n301_msgs::LslidarN301Scan_<ContainerAllocator> (_alloc));
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef boost::array< ::lslidar_n301_msgs::LslidarN301Scan_<ContainerAllocator> , 16>  _scans_type;
  _scans_type scans;





  typedef boost::shared_ptr< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> const> ConstPtr;

}; // struct LslidarN301Sweep_

typedef ::lslidar_n301_msgs::LslidarN301Sweep_<std::allocator<void> > LslidarN301Sweep;

typedef boost::shared_ptr< ::lslidar_n301_msgs::LslidarN301Sweep > LslidarN301SweepPtr;
typedef boost::shared_ptr< ::lslidar_n301_msgs::LslidarN301Sweep const> LslidarN301SweepConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lslidar_n301_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'lslidar_n301_msgs': ['/home/robot/aplriltags/src/lslidar_n301/lslidar_n301_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e0395900ded93e728803e208b8b88005";
  }

  static const char* value(const ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe0395900ded93e72ULL;
  static const uint64_t static_value2 = 0x8803e208b8b88005ULL;
};

template<class ContainerAllocator>
struct DataType< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lslidar_n301_msgs/LslidarN301Sweep";
  }

  static const char* value(const ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
# The 0th scan is at the bottom\n\
LslidarN301Scan[16] scans\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: lslidar_n301_msgs/LslidarN301Scan\n\
# Altitude of all the points within this scan\n\
float64 altitude\n\
\n\
# The valid points in this scan sorted by azimuth\n\
# from 0 to 359.99\n\
LslidarN301Point[] points\n\
\n\
================================================================================\n\
MSG: lslidar_n301_msgs/LslidarN301Point\n\
# Time when the point is captured\n\
float32 time\n\
\n\
# Converted distance in the sensor frame\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
# Raw measurement from Leishen N301\n\
float64 azimuth\n\
float64 distance\n\
float64 intensity\n\
";
  }

  static const char* value(const ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.scans);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LslidarN301Sweep_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lslidar_n301_msgs::LslidarN301Sweep_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "scans[]" << std::endl;
    for (size_t i = 0; i < v.scans.size(); ++i)
    {
      s << indent << "  scans[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::lslidar_n301_msgs::LslidarN301Scan_<ContainerAllocator> >::stream(s, indent + "    ", v.scans[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LSLIDAR_N301_MSGS_MESSAGE_LSLIDARN301SWEEP_H
