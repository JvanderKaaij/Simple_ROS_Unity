// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_interface:msg/Simple.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__STRUCT_H_
#define SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Simple in the package simple_interface.
typedef struct simple_interface__msg__Simple
{
  rosidl_runtime_c__String message;
} simple_interface__msg__Simple;

// Struct for a sequence of simple_interface__msg__Simple.
typedef struct simple_interface__msg__Simple__Sequence
{
  simple_interface__msg__Simple * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_interface__msg__Simple__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__STRUCT_H_
