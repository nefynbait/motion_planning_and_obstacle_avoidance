// Generated by gencpp from file hybrid_astar/Tracking.msg
// DO NOT EDIT!


#ifndef HYBRID_ASTAR_MESSAGE_TRACKING_H
#define HYBRID_ASTAR_MESSAGE_TRACKING_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nav_msgs/Path.h>
#include <nav_msgs/Path.h>

namespace hybrid_astar
{
template <class ContainerAllocator>
struct Tracking_
{
  typedef Tracking_<ContainerAllocator> Type;

  Tracking_()
    : reference_path()
    , tracked_path()
    , err_lat()
    , cross_track()  {
    }
  Tracking_(const ContainerAllocator& _alloc)
    : reference_path(_alloc)
    , tracked_path(_alloc)
    , err_lat(_alloc)
    , cross_track(_alloc)  {
  (void)_alloc;
    }



   typedef  ::nav_msgs::Path_<ContainerAllocator>  _reference_path_type;
  _reference_path_type reference_path;

   typedef  ::nav_msgs::Path_<ContainerAllocator>  _tracked_path_type;
  _tracked_path_type tracked_path;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _err_lat_type;
  _err_lat_type err_lat;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _cross_track_type;
  _cross_track_type cross_track;





  typedef boost::shared_ptr< ::hybrid_astar::Tracking_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hybrid_astar::Tracking_<ContainerAllocator> const> ConstPtr;

}; // struct Tracking_

typedef ::hybrid_astar::Tracking_<std::allocator<void> > Tracking;

typedef boost::shared_ptr< ::hybrid_astar::Tracking > TrackingPtr;
typedef boost::shared_ptr< ::hybrid_astar::Tracking const> TrackingConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hybrid_astar::Tracking_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hybrid_astar::Tracking_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hybrid_astar::Tracking_<ContainerAllocator1> & lhs, const ::hybrid_astar::Tracking_<ContainerAllocator2> & rhs)
{
  return lhs.reference_path == rhs.reference_path &&
    lhs.tracked_path == rhs.tracked_path &&
    lhs.err_lat == rhs.err_lat &&
    lhs.cross_track == rhs.cross_track;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hybrid_astar::Tracking_<ContainerAllocator1> & lhs, const ::hybrid_astar::Tracking_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hybrid_astar

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hybrid_astar::Tracking_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hybrid_astar::Tracking_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hybrid_astar::Tracking_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hybrid_astar::Tracking_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hybrid_astar::Tracking_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hybrid_astar::Tracking_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hybrid_astar::Tracking_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f3b47e58b22562424a28f29828be59bf";
  }

  static const char* value(const ::hybrid_astar::Tracking_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf3b47e58b2256242ULL;
  static const uint64_t static_value2 = 0x4a28f29828be59bfULL;
};

template<class ContainerAllocator>
struct DataType< ::hybrid_astar::Tracking_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hybrid_astar/Tracking";
  }

  static const char* value(const ::hybrid_astar::Tracking_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hybrid_astar::Tracking_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/Path reference_path\n"
"nav_msgs/Path tracked_path\n"
"float32[] err_lat\n"
"float32[] cross_track\n"
"================================================================================\n"
"MSG: nav_msgs/Path\n"
"#An array of poses that represents a Path for a robot to follow\n"
"Header header\n"
"geometry_msgs/PoseStamped[] poses\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::hybrid_astar::Tracking_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hybrid_astar::Tracking_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.reference_path);
      stream.next(m.tracked_path);
      stream.next(m.err_lat);
      stream.next(m.cross_track);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Tracking_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hybrid_astar::Tracking_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hybrid_astar::Tracking_<ContainerAllocator>& v)
  {
    s << indent << "reference_path: ";
    s << std::endl;
    Printer< ::nav_msgs::Path_<ContainerAllocator> >::stream(s, indent + "  ", v.reference_path);
    s << indent << "tracked_path: ";
    s << std::endl;
    Printer< ::nav_msgs::Path_<ContainerAllocator> >::stream(s, indent + "  ", v.tracked_path);
    s << indent << "err_lat[]" << std::endl;
    for (size_t i = 0; i < v.err_lat.size(); ++i)
    {
      s << indent << "  err_lat[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.err_lat[i]);
    }
    s << indent << "cross_track[]" << std::endl;
    for (size_t i = 0; i < v.cross_track.size(); ++i)
    {
      s << indent << "  cross_track[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.cross_track[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HYBRID_ASTAR_MESSAGE_TRACKING_H
