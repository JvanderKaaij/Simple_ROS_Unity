// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from simple_interface:msg/Simple.idl
// generated code does not contain a copyright notice
#include "simple_interface/msg/detail/simple__rosidl_typesupport_fastrtps_cpp.hpp"
#include "simple_interface/msg/detail/simple__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace simple_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interface
cdr_serialize(
  const simple_interface::msg::Simple & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  simple_interface::msg::Simple & ros_message)
{
  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interface
get_serialized_size(
  const simple_interface::msg::Simple & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interface
max_serialized_size_Simple(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Simple__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const simple_interface::msg::Simple *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Simple__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<simple_interface::msg::Simple *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Simple__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const simple_interface::msg::Simple *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Simple__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Simple(full_bounded, 0);
}

static message_type_support_callbacks_t _Simple__callbacks = {
  "simple_interface::msg",
  "Simple",
  _Simple__cdr_serialize,
  _Simple__cdr_deserialize,
  _Simple__get_serialized_size,
  _Simple__max_serialized_size
};

static rosidl_message_type_support_t _Simple__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Simple__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace simple_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_simple_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<simple_interface::msg::Simple>()
{
  return &simple_interface::msg::typesupport_fastrtps_cpp::_Simple__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, simple_interface, msg, Simple)() {
  return &simple_interface::msg::typesupport_fastrtps_cpp::_Simple__handle;
}

#ifdef __cplusplus
}
#endif
