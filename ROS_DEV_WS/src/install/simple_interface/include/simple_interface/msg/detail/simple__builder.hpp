// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_interface:msg/Simple.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__BUILDER_HPP_
#define SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__BUILDER_HPP_

#include "simple_interface/msg/detail/simple__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace simple_interface
{

namespace msg
{

namespace builder
{

class Init_Simple_message
{
public:
  Init_Simple_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simple_interface::msg::Simple message(::simple_interface::msg::Simple::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_interface::msg::Simple msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_interface::msg::Simple>()
{
  return simple_interface::msg::builder::Init_Simple_message();
}

}  // namespace simple_interface

#endif  // SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__BUILDER_HPP_
