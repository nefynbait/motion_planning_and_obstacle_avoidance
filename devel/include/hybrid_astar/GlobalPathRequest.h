// Generated by gencpp from file hybrid_astar/GlobalPathRequest.msg
// DO NOT EDIT!


#ifndef HYBRID_ASTAR_MESSAGE_GLOBALPATHREQUEST_H
#define HYBRID_ASTAR_MESSAGE_GLOBALPATHREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hybrid_astar
{
template <class ContainerAllocator>
struct GlobalPathRequest_
{
  typedef GlobalPathRequest_<ContainerAllocator> Type;

  GlobalPathRequest_()
    {
    }
  GlobalPathRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GlobalPathRequest_

typedef ::hybrid_astar::GlobalPathRequest_<std::allocator<void> > GlobalPathRequest;

typedef boost::shared_ptr< ::hybrid_astar::GlobalPathRequest > GlobalPathRequestPtr;
typedef boost::shared_ptr< ::hybrid_astar::GlobalPathRequest const> GlobalPathRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace hybrid_astar

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::hybrid_astar::GlobalPathRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hybrid_astar/GlobalPathRequest";
  }

  static const char* value(const ::hybrid_astar::GlobalPathRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::hybrid_astar::GlobalPathRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GlobalPathRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hybrid_astar::GlobalPathRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::hybrid_astar::GlobalPathRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // HYBRID_ASTAR_MESSAGE_GLOBALPATHREQUEST_H