// Generated by gencpp from file vrep_common/simRosAppendStringSignalRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSAPPENDSTRINGSIGNALREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSAPPENDSTRINGSIGNALREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_common
{
template <class ContainerAllocator>
struct simRosAppendStringSignalRequest_
{
  typedef simRosAppendStringSignalRequest_<ContainerAllocator> Type;

  simRosAppendStringSignalRequest_()
    : signalName()
    , signalValue()  {
    }
  simRosAppendStringSignalRequest_(const ContainerAllocator& _alloc)
    : signalName(_alloc)
    , signalValue(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _signalName_type;
  _signalName_type signalName;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _signalValue_type;
  _signalValue_type signalValue;





  typedef boost::shared_ptr< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosAppendStringSignalRequest_

typedef ::vrep_common::simRosAppendStringSignalRequest_<std::allocator<void> > simRosAppendStringSignalRequest;

typedef boost::shared_ptr< ::vrep_common::simRosAppendStringSignalRequest > simRosAppendStringSignalRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosAppendStringSignalRequest const> simRosAppendStringSignalRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/user001/Documents/turtlebot2_wss/vrep_ros_interface/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a27f6ed9e44bd0fc3f310d02aeac102f";
  }

  static const char* value(const ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa27f6ed9e44bd0fcULL;
  static const uint64_t static_value2 = 0x3f310d02aeac102fULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosAppendStringSignalRequest";
  }

  static const char* value(const ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
string signalName\n\
string signalValue\n\
";
  }

  static const char* value(const ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.signalName);
      stream.next(m.signalValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosAppendStringSignalRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosAppendStringSignalRequest_<ContainerAllocator>& v)
  {
    s << indent << "signalName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.signalName);
    s << indent << "signalValue: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.signalValue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSAPPENDSTRINGSIGNALREQUEST_H
