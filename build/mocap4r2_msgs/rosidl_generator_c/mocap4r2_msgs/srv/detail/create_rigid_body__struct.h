// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap4r2_msgs:srv/CreateRigidBody.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_msgs/srv/create_rigid_body.h"


#ifndef MOCAP4R2_MSGS__SRV__DETAIL__CREATE_RIGID_BODY__STRUCT_H_
#define MOCAP4R2_MSGS__SRV__DETAIL__CREATE_RIGID_BODY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rigid_body_name'
// Member 'link_parent'
#include "rosidl_runtime_c/string.h"
// Member 'markers'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/CreateRigidBody in the package mocap4r2_msgs.
typedef struct mocap4r2_msgs__srv__CreateRigidBody_Request
{
  rosidl_runtime_c__String rigid_body_name;
  rosidl_runtime_c__String link_parent;
  rosidl_runtime_c__int32__Sequence markers;
} mocap4r2_msgs__srv__CreateRigidBody_Request;

// Struct for a sequence of mocap4r2_msgs__srv__CreateRigidBody_Request.
typedef struct mocap4r2_msgs__srv__CreateRigidBody_Request__Sequence
{
  mocap4r2_msgs__srv__CreateRigidBody_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_msgs__srv__CreateRigidBody_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CreateRigidBody in the package mocap4r2_msgs.
typedef struct mocap4r2_msgs__srv__CreateRigidBody_Response
{
  bool success;
} mocap4r2_msgs__srv__CreateRigidBody_Response;

// Struct for a sequence of mocap4r2_msgs__srv__CreateRigidBody_Response.
typedef struct mocap4r2_msgs__srv__CreateRigidBody_Response__Sequence
{
  mocap4r2_msgs__srv__CreateRigidBody_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_msgs__srv__CreateRigidBody_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mocap4r2_msgs__srv__CreateRigidBody_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mocap4r2_msgs__srv__CreateRigidBody_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CreateRigidBody in the package mocap4r2_msgs.
typedef struct mocap4r2_msgs__srv__CreateRigidBody_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mocap4r2_msgs__srv__CreateRigidBody_Request__Sequence request;
  mocap4r2_msgs__srv__CreateRigidBody_Response__Sequence response;
} mocap4r2_msgs__srv__CreateRigidBody_Event;

// Struct for a sequence of mocap4r2_msgs__srv__CreateRigidBody_Event.
typedef struct mocap4r2_msgs__srv__CreateRigidBody_Event__Sequence
{
  mocap4r2_msgs__srv__CreateRigidBody_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_msgs__srv__CreateRigidBody_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_MSGS__SRV__DETAIL__CREATE_RIGID_BODY__STRUCT_H_
