// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_interface:msg/Simple.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__TRAITS_HPP_
#define SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__TRAITS_HPP_

#include "simple_interface/msg/detail/simple__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simple_interface::msg::Simple>()
{
  return "simple_interface::msg::Simple";
}

template<>
inline const char * name<simple_interface::msg::Simple>()
{
  return "simple_interface/msg/Simple";
}

template<>
struct has_fixed_size<simple_interface::msg::Simple>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simple_interface::msg::Simple>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simple_interface::msg::Simple>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__TRAITS_HPP_
