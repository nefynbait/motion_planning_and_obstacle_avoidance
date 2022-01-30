// Generated by gencpp from file hybrid_astar/obsRequest.msg
// DO NOT EDIT!


#ifndef HYBRID_ASTAR_MESSAGE_OBSREQUEST_H
#define HYBRID_ASTAR_MESSAGE_OBSREQUEST_H


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
struct obsRequest_
{
  typedef obsRequest_<ContainerAllocator> Type;

  obsRequest_()
    : x_r(0.0)
    , y_r(0.0)
    , r_r(0.0)
    , theta1(0.0)
    , check(false)  {
    }
  obsRequest_(const ContainerAllocator& _alloc)
    : x_r(0.0)
    , y_r(0.0)
    , r_r(0.0)
    , theta1(0.0)
    , check(false)  {
  (void)_alloc;
    }



   typedef double _x_r_type;
  _x_r_type x_r;

   typedef double _y_r_type;
  _y_r_type y_r;

   typedef double _r_r_type;
  _r_r_type r_r;

   typedef double _theta1_type;
  _theta1_type theta1;

   typedef uint8_t _check_type;
  _check_type check;





  typedef boost::shared_ptr< ::hybrid_astar::obsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hybrid_astar::obsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct obsRequest_

typedef ::hybrid_astar::obsRequest_<std::allocator<void> > obsRequest;

typedef boost::shared_ptr< ::hybrid_astar::obsRequest > obsRequestPtr;
typedef boost::shared_ptr< ::hybrid_astar::obsRequest const> obsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hybrid_astar::obsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hybrid_astar::obsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hybrid_astar::obsRequest_<ContainerAllocator1> & lhs, const ::hybrid_astar::obsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.x_r == rhs.x_r &&
    lhs.y_r == rhs.y_r &&
    lhs.r_r == rhs.r_r &&
    lhs.theta1 == rhs.theta1 &&
    lhs.check == rhs.check;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hybrid_astar::obsRequest_<ContainerAllocator1> & lhs, const ::hybrid_astar::obsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hybrid_astar

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hybrid_astar::obsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hybrid_astar::obsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hybrid_astar::obsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hybrid_astar::obsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hybrid_astar::obsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hybrid_astar::obsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hybrid_astar::obsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "99e59787c4fda523ec72300031359976";
  }

  static const char* value(const ::hybrid_astar::obsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x99e59787c4fda523ULL;
  static const uint64_t static_value2 = 0xec72300031359976ULL;
};

template<class ContainerAllocator>
struct DataType< ::hybrid_astar::obsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hybrid_astar/obsRequest";
  }

  static const char* value(const ::hybrid_astar::obsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hybrid_astar::obsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x_r\n"
"float64 y_r\n"
"float64 r_r\n"
"float64 theta1\n"
"bool check\n"
;
  }

  static const char* value(const ::hybrid_astar::obsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hybrid_astar::obsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x_r);
      stream.next(m.y_r);
      stream.next(m.r_r);
      stream.next(m.theta1);
      stream.next(m.check);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct obsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hybrid_astar::obsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hybrid_astar::obsRequest_<ContainerAllocator>& v)
  {
    s << indent << "x_r: ";
    Printer<double>::stream(s, indent + "  ", v.x_r);
    s << indent << "y_r: ";
    Printer<double>::stream(s, indent + "  ", v.y_r);
    s << indent << "r_r: ";
    Printer<double>::stream(s, indent + "  ", v.r_r);
    s << indent << "theta1: ";
    Printer<double>::stream(s, indent + "  ", v.theta1);
    s << indent << "check: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.check);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HYBRID_ASTAR_MESSAGE_OBSREQUEST_H