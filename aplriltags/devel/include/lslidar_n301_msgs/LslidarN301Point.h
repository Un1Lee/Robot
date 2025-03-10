// Generated by gencpp from file lslidar_n301_msgs/LslidarN301Point.msg
// DO NOT EDIT!


#ifndef LSLIDAR_N301_MSGS_MESSAGE_LSLIDARN301POINT_H
#define LSLIDAR_N301_MSGS_MESSAGE_LSLIDARN301POINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lslidar_n301_msgs
{
template <class ContainerAllocator>
struct LslidarN301Point_
{
  typedef LslidarN301Point_<ContainerAllocator> Type;

  LslidarN301Point_()
    : time(0.0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , azimuth(0.0)
    , distance(0.0)
    , intensity(0.0)  {
    }
  LslidarN301Point_(const ContainerAllocator& _alloc)
    : time(0.0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , azimuth(0.0)
    , distance(0.0)
    , intensity(0.0)  {
  (void)_alloc;
    }



   typedef float _time_type;
  _time_type time;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef double _azimuth_type;
  _azimuth_type azimuth;

   typedef double _distance_type;
  _distance_type distance;

   typedef double _intensity_type;
  _intensity_type intensity;





  typedef boost::shared_ptr< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> const> ConstPtr;

}; // struct LslidarN301Point_

typedef ::lslidar_n301_msgs::LslidarN301Point_<std::allocator<void> > LslidarN301Point;

typedef boost::shared_ptr< ::lslidar_n301_msgs::LslidarN301Point > LslidarN301PointPtr;
typedef boost::shared_ptr< ::lslidar_n301_msgs::LslidarN301Point const> LslidarN301PointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lslidar_n301_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'lslidar_n301_msgs': ['/home/robot/aplriltags/src/lslidar_n301/lslidar_n301_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f9dbdcdc2cb5386e16b2ab1f416979d";
  }

  static const char* value(const ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f9dbdcdc2cb5386ULL;
  static const uint64_t static_value2 = 0xe16b2ab1f416979dULL;
};

template<class ContainerAllocator>
struct DataType< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lslidar_n301_msgs/LslidarN301Point";
  }

  static const char* value(const ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Time when the point is captured\n\
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

  static const char* value(const ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.azimuth);
      stream.next(m.distance);
      stream.next(m.intensity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LslidarN301Point_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lslidar_n301_msgs::LslidarN301Point_<ContainerAllocator>& v)
  {
    s << indent << "time: ";
    Printer<float>::stream(s, indent + "  ", v.time);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "azimuth: ";
    Printer<double>::stream(s, indent + "  ", v.azimuth);
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
    s << indent << "intensity: ";
    Printer<double>::stream(s, indent + "  ", v.intensity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LSLIDAR_N301_MSGS_MESSAGE_LSLIDARN301POINT_H
