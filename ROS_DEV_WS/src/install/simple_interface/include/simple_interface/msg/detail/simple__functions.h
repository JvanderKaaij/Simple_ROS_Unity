// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from simple_interface:msg/Simple.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__FUNCTIONS_H_
#define SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "simple_interface/msg/rosidl_generator_c__visibility_control.h"

#include "simple_interface/msg/detail/simple__struct.h"

/// Initialize msg/Simple message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simple_interface__msg__Simple
 * )) before or use
 * simple_interface__msg__Simple__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interface
bool
simple_interface__msg__Simple__init(simple_interface__msg__Simple * msg);

/// Finalize msg/Simple message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interface
void
simple_interface__msg__Simple__fini(simple_interface__msg__Simple * msg);

/// Create msg/Simple message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simple_interface__msg__Simple__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interface
simple_interface__msg__Simple *
simple_interface__msg__Simple__create();

/// Destroy msg/Simple message.
/**
 * It calls
 * simple_interface__msg__Simple__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interface
void
simple_interface__msg__Simple__destroy(simple_interface__msg__Simple * msg);


/// Initialize array of msg/Simple messages.
/**
 * It allocates the memory for the number of elements and calls
 * simple_interface__msg__Simple__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interface
bool
simple_interface__msg__Simple__Sequence__init(simple_interface__msg__Simple__Sequence * array, size_t size);

/// Finalize array of msg/Simple messages.
/**
 * It calls
 * simple_interface__msg__Simple__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interface
void
simple_interface__msg__Simple__Sequence__fini(simple_interface__msg__Simple__Sequence * array);

/// Create array of msg/Simple messages.
/**
 * It allocates the memory for the array and calls
 * simple_interface__msg__Simple__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interface
simple_interface__msg__Simple__Sequence *
simple_interface__msg__Simple__Sequence__create(size_t size);

/// Destroy array of msg/Simple messages.
/**
 * It calls
 * simple_interface__msg__Simple__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interface
void
simple_interface__msg__Simple__Sequence__destroy(simple_interface__msg__Simple__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACE__MSG__DETAIL__SIMPLE__FUNCTIONS_H_
