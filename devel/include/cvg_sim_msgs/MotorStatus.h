// Generated by gencpp from file cvg_sim_msgs/MotorStatus.msg
// DO NOT EDIT!


#ifndef CVG_SIM_MSGS_MESSAGE_MOTORSTATUS_H
#define CVG_SIM_MSGS_MESSAGE_MOTORSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace cvg_sim_msgs
{
template <class ContainerAllocator>
struct MotorStatus_
{
  typedef MotorStatus_<ContainerAllocator> Type;

  MotorStatus_()
    : header()
    , on(false)
    , running(false)
    , frequency()
    , current()  {
    }
  MotorStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , on(false)
    , running(false)
    , frequency(_alloc)
    , current(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _on_type;
  _on_type on;

   typedef uint8_t _running_type;
  _running_type running;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _frequency_type;
  _frequency_type frequency;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _current_type;
  _current_type current;





  typedef boost::shared_ptr< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> const> ConstPtr;

}; // struct MotorStatus_

typedef ::cvg_sim_msgs::MotorStatus_<std::allocator<void> > MotorStatus;

typedef boost::shared_ptr< ::cvg_sim_msgs::MotorStatus > MotorStatusPtr;
typedef boost::shared_ptr< ::cvg_sim_msgs::MotorStatus const> MotorStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cvg_sim_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'cvg_sim_msgs': ['/home/hadi/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1469bebf9a94a2d2a47aefabd197f250";
  }

  static const char* value(const ::cvg_sim_msgs::MotorStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1469bebf9a94a2d2ULL;
  static const uint64_t static_value2 = 0xa47aefabd197f250ULL;
};

template<class ContainerAllocator>
struct DataType< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cvg_sim_msgs/MotorStatus";
  }

  static const char* value(const ::cvg_sim_msgs::MotorStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
bool on\n\
bool running\n\
float32[] frequency\n\
uint8[] current\n\
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
";
  }

  static const char* value(const ::cvg_sim_msgs::MotorStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.on);
      stream.next(m.running);
      stream.next(m.frequency);
      stream.next(m.current);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cvg_sim_msgs::MotorStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "on: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.on);
    s << indent << "running: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.running);
    s << indent << "frequency[]" << std::endl;
    for (size_t i = 0; i < v.frequency.size(); ++i)
    {
      s << indent << "  frequency[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.frequency[i]);
    }
    s << indent << "current[]" << std::endl;
    for (size_t i = 0; i < v.current.size(); ++i)
    {
      s << indent << "  current[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.current[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CVG_SIM_MSGS_MESSAGE_MOTORSTATUS_H
