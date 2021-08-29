// Generated by gencpp from file ros_projects/RectangleArea.msg
// DO NOT EDIT!


#ifndef ROS_PROJECTS_MESSAGE_RECTANGLEAREA_H
#define ROS_PROJECTS_MESSAGE_RECTANGLEAREA_H

#include <ros/service_traits.h>


#include <ros_projects/RectangleAreaRequest.h>
#include <ros_projects/RectangleAreaResponse.h>


namespace ros_projects
{

struct RectangleArea
{

typedef RectangleAreaRequest Request;
typedef RectangleAreaResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RectangleArea
} // namespace ros_projects


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_projects::RectangleArea > {
  static const char* value()
  {
    return "92e9c8f940da77dc3e1bc289f7dd146e";
  }

  static const char* value(const ::ros_projects::RectangleArea&) { return value(); }
};

template<>
struct DataType< ::ros_projects::RectangleArea > {
  static const char* value()
  {
    return "ros_projects/RectangleArea";
  }

  static const char* value(const ::ros_projects::RectangleArea&) { return value(); }
};


// service_traits::MD5Sum< ::ros_projects::RectangleAreaRequest> should match
// service_traits::MD5Sum< ::ros_projects::RectangleArea >
template<>
struct MD5Sum< ::ros_projects::RectangleAreaRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_projects::RectangleArea >::value();
  }
  static const char* value(const ::ros_projects::RectangleAreaRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_projects::RectangleAreaRequest> should match
// service_traits::DataType< ::ros_projects::RectangleArea >
template<>
struct DataType< ::ros_projects::RectangleAreaRequest>
{
  static const char* value()
  {
    return DataType< ::ros_projects::RectangleArea >::value();
  }
  static const char* value(const ::ros_projects::RectangleAreaRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_projects::RectangleAreaResponse> should match
// service_traits::MD5Sum< ::ros_projects::RectangleArea >
template<>
struct MD5Sum< ::ros_projects::RectangleAreaResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_projects::RectangleArea >::value();
  }
  static const char* value(const ::ros_projects::RectangleAreaResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_projects::RectangleAreaResponse> should match
// service_traits::DataType< ::ros_projects::RectangleArea >
template<>
struct DataType< ::ros_projects::RectangleAreaResponse>
{
  static const char* value()
  {
    return DataType< ::ros_projects::RectangleArea >::value();
  }
  static const char* value(const ::ros_projects::RectangleAreaResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_PROJECTS_MESSAGE_RECTANGLEAREA_H