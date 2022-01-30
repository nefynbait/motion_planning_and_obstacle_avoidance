// Generated by gencpp from file tuw_nav_msgs/IwsCmdVRATVec.msg
// DO NOT EDIT!


#ifndef TUW_NAV_MSGS_MESSAGE_IWSCMDVRATVEC_H
#define TUW_NAV_MSGS_MESSAGE_IWSCMDVRATVEC_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace tuw_nav_msgs
{
template <class ContainerAllocator>
struct IwsCmdVRATVec_
{
  typedef IwsCmdVRATVec_<ContainerAllocator> Type;

  IwsCmdVRATVec_()
    : header()
    , v()
    , rho()
    , phi()
    , delta_t()
    , state0()  {
    }
  IwsCmdVRATVec_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , v(_alloc)
    , rho(_alloc)
    , phi(_alloc)
    , delta_t(_alloc)
    , state0(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _v_type;
  _v_type v;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _rho_type;
  _rho_type rho;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _phi_type;
  _phi_type phi;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _delta_t_type;
  _delta_t_type delta_t;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _state0_type;
  _state0_type state0;





  typedef boost::shared_ptr< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> const> ConstPtr;

}; // struct IwsCmdVRATVec_

typedef ::tuw_nav_msgs::IwsCmdVRATVec_<std::allocator<void> > IwsCmdVRATVec;

typedef boost::shared_ptr< ::tuw_nav_msgs::IwsCmdVRATVec > IwsCmdVRATVecPtr;
typedef boost::shared_ptr< ::tuw_nav_msgs::IwsCmdVRATVec const> IwsCmdVRATVecConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator1> & lhs, const ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.v == rhs.v &&
    lhs.rho == rhs.rho &&
    lhs.phi == rhs.phi &&
    lhs.delta_t == rhs.delta_t &&
    lhs.state0 == rhs.state0;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator1> & lhs, const ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ffc1d6dbf30b45c520195bc2f2064824";
  }

  static const char* value(const ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xffc1d6dbf30b45c5ULL;
  static const uint64_t static_value2 = 0x20195bc2f2064824ULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_nav_msgs/IwsCmdVRATVec";
  }

  static const char* value(const ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float64[] v\n"
"float64[] rho\n"
"float64[] phi\n"
"float64[] delta_t\n"
"\n"
"float64[] state0\n"
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

  static const char* value(const ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.v);
      stream.next(m.rho);
      stream.next(m.phi);
      stream.next(m.delta_t);
      stream.next(m.state0);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IwsCmdVRATVec_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_nav_msgs::IwsCmdVRATVec_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "v[]" << std::endl;
    for (size_t i = 0; i < v.v.size(); ++i)
    {
      s << indent << "  v[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.v[i]);
    }
    s << indent << "rho[]" << std::endl;
    for (size_t i = 0; i < v.rho.size(); ++i)
    {
      s << indent << "  rho[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.rho[i]);
    }
    s << indent << "phi[]" << std::endl;
    for (size_t i = 0; i < v.phi.size(); ++i)
    {
      s << indent << "  phi[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.phi[i]);
    }
    s << indent << "delta_t[]" << std::endl;
    for (size_t i = 0; i < v.delta_t.size(); ++i)
    {
      s << indent << "  delta_t[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.delta_t[i]);
    }
    s << indent << "state0[]" << std::endl;
    for (size_t i = 0; i < v.state0.size(); ++i)
    {
      s << indent << "  state0[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.state0[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_NAV_MSGS_MESSAGE_IWSCMDVRATVEC_H
