// Generated by gencpp from file tuw_multi_robot_msgs/Vertex.msg
// DO NOT EDIT!


#ifndef TUW_MULTI_ROBOT_MSGS_MESSAGE_VERTEX_H
#define TUW_MULTI_ROBOT_MSGS_MESSAGE_VERTEX_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace tuw_multi_robot_msgs
{
template <class ContainerAllocator>
struct Vertex_
{
  typedef Vertex_<ContainerAllocator> Type;

  Vertex_()
    : id(0)
    , valid(false)
    , path()
    , weight(0)
    , width(0.0)
    , successors()
    , predecessors()  {
    }
  Vertex_(const ContainerAllocator& _alloc)
    : id(0)
    , valid(false)
    , path(_alloc)
    , weight(0)
    , width(0.0)
    , successors(_alloc)
    , predecessors(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef uint8_t _valid_type;
  _valid_type valid;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _path_type;
  _path_type path;

   typedef uint32_t _weight_type;
  _weight_type weight;

   typedef float _width_type;
  _width_type width;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _successors_type;
  _successors_type successors;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _predecessors_type;
  _predecessors_type predecessors;





  typedef boost::shared_ptr< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> const> ConstPtr;

}; // struct Vertex_

typedef ::tuw_multi_robot_msgs::Vertex_<std::allocator<void> > Vertex;

typedef boost::shared_ptr< ::tuw_multi_robot_msgs::Vertex > VertexPtr;
typedef boost::shared_ptr< ::tuw_multi_robot_msgs::Vertex const> VertexConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator1> & lhs, const ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.valid == rhs.valid &&
    lhs.path == rhs.path &&
    lhs.weight == rhs.weight &&
    lhs.width == rhs.width &&
    lhs.successors == rhs.successors &&
    lhs.predecessors == rhs.predecessors;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator1> & lhs, const ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_multi_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bd4a3cd6c3c626262c4d30c812a2922e";
  }

  static const char* value(const ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbd4a3cd6c3c62626ULL;
  static const uint64_t static_value2 = 0x2c4d30c812a2922eULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_multi_robot_msgs/Vertex";
  }

  static const char* value(const ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#################################################################\n"
"## A single vertex in a graph \n"
"## Each vertex of the same graph must have a unique id. \n"
"## Successors and Predecessors must have a common start or end\n"
"## point \n"
"#################################################################\n"
"uint32 id                   # Vertex id\n"
"bool valid                  # true if it can be used for planning\n"
"geometry_msgs/Point[] path  # points describing a path from the vertex start to the vertex endpoint\n"
"                            #    the first point in the array reprecents the start and the last the endpoint\n"
"                            #    this points can also be used by the vehciles local path following algorithm \n"
"uint32 weight               # the weight of the vertex (e.g. length of the segment)\n"
"float32 width               # fee space next to the vertex\n"
"uint32[] successors         # edges to successors\n"
"uint32[] predecessors       # edges to predecessor\n"
" \n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.valid);
      stream.next(m.path);
      stream.next(m.weight);
      stream.next(m.width);
      stream.next(m.successors);
      stream.next(m.predecessors);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Vertex_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_multi_robot_msgs::Vertex_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valid);
    s << indent << "path[]" << std::endl;
    for (size_t i = 0; i < v.path.size(); ++i)
    {
      s << indent << "  path[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.path[i]);
    }
    s << indent << "weight: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.weight);
    s << indent << "width: ";
    Printer<float>::stream(s, indent + "  ", v.width);
    s << indent << "successors[]" << std::endl;
    for (size_t i = 0; i < v.successors.size(); ++i)
    {
      s << indent << "  successors[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.successors[i]);
    }
    s << indent << "predecessors[]" << std::endl;
    for (size_t i = 0; i < v.predecessors.size(); ++i)
    {
      s << indent << "  predecessors[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.predecessors[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_MULTI_ROBOT_MSGS_MESSAGE_VERTEX_H
