// Generated by gencpp from file move_quadcopter/NavigateFeedback.msg
// DO NOT EDIT!


#ifndef MOVE_QUADCOPTER_MESSAGE_NAVIGATEFEEDBACK_H
#define MOVE_QUADCOPTER_MESSAGE_NAVIGATEFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace move_quadcopter
{
template <class ContainerAllocator>
struct NavigateFeedback_
{
  typedef NavigateFeedback_<ContainerAllocator> Type;

  NavigateFeedback_()
    : dist(0.0)  {
    }
  NavigateFeedback_(const ContainerAllocator& _alloc)
    : dist(0.0)  {
  (void)_alloc;
    }



   typedef double _dist_type;
  _dist_type dist;





  typedef boost::shared_ptr< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct NavigateFeedback_

typedef ::move_quadcopter::NavigateFeedback_<std::allocator<void> > NavigateFeedback;

typedef boost::shared_ptr< ::move_quadcopter::NavigateFeedback > NavigateFeedbackPtr;
typedef boost::shared_ptr< ::move_quadcopter::NavigateFeedback const> NavigateFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::move_quadcopter::NavigateFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace move_quadcopter

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'move_quadcopter': ['/home/hadi/catkin_ws/devel/share/move_quadcopter/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3f4fece6412db25720b2bab9f80b3473";
  }

  static const char* value(const ::move_quadcopter::NavigateFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3f4fece6412db257ULL;
  static const uint64_t static_value2 = 0x20b2bab9f80b3473ULL;
};

template<class ContainerAllocator>
struct DataType< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "move_quadcopter/NavigateFeedback";
  }

  static const char* value(const ::move_quadcopter::NavigateFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# distance from goal is returned as feedback\n\
float64 dist\n\
\n\
";
  }

  static const char* value(const ::move_quadcopter::NavigateFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dist);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavigateFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::move_quadcopter::NavigateFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::move_quadcopter::NavigateFeedback_<ContainerAllocator>& v)
  {
    s << indent << "dist: ";
    Printer<double>::stream(s, indent + "  ", v.dist);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVE_QUADCOPTER_MESSAGE_NAVIGATEFEEDBACK_H
