// Generated by gencpp from file tuw_geometry_msgs/LineSegments.msg
// DO NOT EDIT!


#ifndef TUW_GEOMETRY_MSGS_MESSAGE_LINESEGMENTS_H
#define TUW_GEOMETRY_MSGS_MESSAGE_LINESEGMENTS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <tuw_geometry_msgs/LineSegment.h>

namespace tuw_geometry_msgs
{
template <class ContainerAllocator>
struct LineSegments_
{
  typedef LineSegments_<ContainerAllocator> Type;

  LineSegments_()
    : header()
    , segments()  {
    }
  LineSegments_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , segments(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> >::other >  _segments_type;
  _segments_type segments;





  typedef boost::shared_ptr< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> const> ConstPtr;

}; // struct LineSegments_

typedef ::tuw_geometry_msgs::LineSegments_<std::allocator<void> > LineSegments;

typedef boost::shared_ptr< ::tuw_geometry_msgs::LineSegments > LineSegmentsPtr;
typedef boost::shared_ptr< ::tuw_geometry_msgs::LineSegments const> LineSegmentsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_geometry_msgs::LineSegments_<ContainerAllocator1> & lhs, const ::tuw_geometry_msgs::LineSegments_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.segments == rhs.segments;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_geometry_msgs::LineSegments_<ContainerAllocator1> & lhs, const ::tuw_geometry_msgs::LineSegments_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_geometry_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> >
{
  static const char* value()
  {
    return "266fc42f8083d1cc6c451ea3a5df3765";
  }

  static const char* value(const ::tuw_geometry_msgs::LineSegments_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x266fc42f8083d1ccULL;
  static const uint64_t static_value2 = 0x6c451ea3a5df3765ULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_geometry_msgs/LineSegments";
  }

  static const char* value(const ::tuw_geometry_msgs::LineSegments_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header                      # timestamp in the header is the acquisition time and frame\n"
"\n"
"LineSegment[] segments             # detected lines\n"
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
"\n"
"================================================================================\n"
"MSG: tuw_geometry_msgs/LineSegment\n"
"uint32 id                     # Segment id\n"
"\n"
"geometry_msgs/Point p0        # linesegment endpoint 0\n"
"geometry_msgs/Point p1        # linesegment endpoint 1\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::tuw_geometry_msgs::LineSegments_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.segments);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LineSegments_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_geometry_msgs::LineSegments_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_geometry_msgs::LineSegments_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "segments[]" << std::endl;
    for (size_t i = 0; i < v.segments.size(); ++i)
    {
      s << indent << "  segments[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> >::stream(s, indent + "    ", v.segments[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_GEOMETRY_MSGS_MESSAGE_LINESEGMENTS_H