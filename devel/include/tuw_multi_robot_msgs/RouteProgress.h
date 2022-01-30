// Generated by gencpp from file tuw_multi_robot_msgs/RouteProgress.msg
// DO NOT EDIT!


#ifndef TUW_MULTI_ROBOT_MSGS_MESSAGE_ROUTEPROGRESS_H
#define TUW_MULTI_ROBOT_MSGS_MESSAGE_ROUTEPROGRESS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace tuw_multi_robot_msgs
{
template <class ContainerAllocator>
struct RouteProgress_
{
  typedef RouteProgress_<ContainerAllocator> Type;

  RouteProgress_()
    : header()
    , passed()
    , current(0)
    , todo()
    , progress(0.0)  {
    }
  RouteProgress_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , passed(_alloc)
    , current(0)
    , todo(_alloc)
    , progress(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _passed_type;
  _passed_type passed;

   typedef int32_t _current_type;
  _current_type current;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _todo_type;
  _todo_type todo;

   typedef float _progress_type;
  _progress_type progress;





  typedef boost::shared_ptr< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> const> ConstPtr;

}; // struct RouteProgress_

typedef ::tuw_multi_robot_msgs::RouteProgress_<std::allocator<void> > RouteProgress;

typedef boost::shared_ptr< ::tuw_multi_robot_msgs::RouteProgress > RouteProgressPtr;
typedef boost::shared_ptr< ::tuw_multi_robot_msgs::RouteProgress const> RouteProgressConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator1> & lhs, const ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.passed == rhs.passed &&
    lhs.current == rhs.current &&
    lhs.todo == rhs.todo &&
    lhs.progress == rhs.progress;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator1> & lhs, const ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_multi_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cb4a2dcff1f73fe83b54cde1037fad99";
  }

  static const char* value(const ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcb4a2dcff1f73fe8ULL;
  static const uint64_t static_value2 = 0x3b54cde1037fad99ULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_multi_robot_msgs/RouteProgress";
  }

  static const char* value(const ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header           \n"
"int32[] passed   # A list of already passed route segment id's.\n"
"int32 current    # The route segment id where the robot is currently located.\n"
"int32[] todo     # A list of route segment id's which will be visited by the robot. If this list is empty, the robot has finished its route.\n"
"float32 progress        # The route progress in %.\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.passed);
      stream.next(m.current);
      stream.next(m.todo);
      stream.next(m.progress);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RouteProgress_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_multi_robot_msgs::RouteProgress_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "passed[]" << std::endl;
    for (size_t i = 0; i < v.passed.size(); ++i)
    {
      s << indent << "  passed[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.passed[i]);
    }
    s << indent << "current: ";
    Printer<int32_t>::stream(s, indent + "  ", v.current);
    s << indent << "todo[]" << std::endl;
    for (size_t i = 0; i < v.todo.size(); ++i)
    {
      s << indent << "  todo[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.todo[i]);
    }
    s << indent << "progress: ";
    Printer<float>::stream(s, indent + "  ", v.progress);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_MULTI_ROBOT_MSGS_MESSAGE_ROUTEPROGRESS_H