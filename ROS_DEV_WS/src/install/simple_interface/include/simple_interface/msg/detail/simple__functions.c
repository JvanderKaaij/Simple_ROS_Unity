// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simple_interface:msg/Simple.idl
// generated code does not contain a copyright notice
#include "simple_interface/msg/detail/simple__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
simple_interface__msg__Simple__init(simple_interface__msg__Simple * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    simple_interface__msg__Simple__fini(msg);
    return false;
  }
  return true;
}

void
simple_interface__msg__Simple__fini(simple_interface__msg__Simple * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

simple_interface__msg__Simple *
simple_interface__msg__Simple__create()
{
  simple_interface__msg__Simple * msg = (simple_interface__msg__Simple *)malloc(sizeof(simple_interface__msg__Simple));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simple_interface__msg__Simple));
  bool success = simple_interface__msg__Simple__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
simple_interface__msg__Simple__destroy(simple_interface__msg__Simple * msg)
{
  if (msg) {
    simple_interface__msg__Simple__fini(msg);
  }
  free(msg);
}


bool
simple_interface__msg__Simple__Sequence__init(simple_interface__msg__Simple__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  simple_interface__msg__Simple * data = NULL;
  if (size) {
    data = (simple_interface__msg__Simple *)calloc(size, sizeof(simple_interface__msg__Simple));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simple_interface__msg__Simple__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simple_interface__msg__Simple__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
simple_interface__msg__Simple__Sequence__fini(simple_interface__msg__Simple__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      simple_interface__msg__Simple__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

simple_interface__msg__Simple__Sequence *
simple_interface__msg__Simple__Sequence__create(size_t size)
{
  simple_interface__msg__Simple__Sequence * array = (simple_interface__msg__Simple__Sequence *)malloc(sizeof(simple_interface__msg__Simple__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = simple_interface__msg__Simple__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
simple_interface__msg__Simple__Sequence__destroy(simple_interface__msg__Simple__Sequence * array)
{
  if (array) {
    simple_interface__msg__Simple__Sequence__fini(array);
  }
  free(array);
}
