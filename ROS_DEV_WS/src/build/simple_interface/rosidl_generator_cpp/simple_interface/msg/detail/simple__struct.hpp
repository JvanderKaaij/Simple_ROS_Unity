// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simple_interface:msg/Simple.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__STRUCT_HPP_
#define SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__simple_interface__msg__Simple __attribute__((deprecated))
#else
# define DEPRECATED__simple_interface__msg__Simple __declspec(deprecated)
#endif

namespace simple_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Simple_
{
  using Type = Simple_<ContainerAllocator>;

  explicit Simple_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit Simple_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_interface::msg::Simple_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_interface::msg::Simple_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_interface::msg::Simple_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_interface::msg::Simple_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_interface::msg::Simple_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_interface::msg::Simple_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_interface::msg::Simple_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_interface::msg::Simple_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_interface::msg::Simple_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_interface::msg::Simple_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_interface__msg__Simple
    std::shared_ptr<simple_interface::msg::Simple_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_interface__msg__Simple
    std::shared_ptr<simple_interface::msg::Simple_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Simple_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Simple_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Simple_

// alias to use template instance with default allocator
using Simple =
  simple_interface::msg::Simple_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simple_interface

#endif  // SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__STRUCT_HPP_
