// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mocap4r2_msgs:srv/CreateRigidBody.idl
// generated code does not contain a copyright notice

#include "mocap4r2_msgs/srv/detail/create_rigid_body__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
const rosidl_type_hash_t *
mocap4r2_msgs__srv__CreateRigidBody__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5d, 0x0c, 0x8a, 0x7f, 0x71, 0xce, 0x38, 0x56,
      0xb0, 0x12, 0x00, 0xff, 0x86, 0xa0, 0x04, 0x3c,
      0x5f, 0xee, 0x69, 0x8f, 0x5a, 0x1c, 0xf0, 0xe0,
      0xe5, 0xb0, 0x22, 0x0e, 0xeb, 0x1c, 0xf8, 0x71,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
const rosidl_type_hash_t *
mocap4r2_msgs__srv__CreateRigidBody_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb0, 0x22, 0x58, 0x02, 0x23, 0x3b, 0xe2, 0x32,
      0xd1, 0x91, 0x6a, 0x71, 0xcb, 0x35, 0xa4, 0x30,
      0xbc, 0xf9, 0x56, 0xa7, 0x95, 0x43, 0x96, 0x94,
      0x74, 0xca, 0x0b, 0x9b, 0xcd, 0xf4, 0x0f, 0x84,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
const rosidl_type_hash_t *
mocap4r2_msgs__srv__CreateRigidBody_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0xae, 0x24, 0x28, 0x05, 0x5a, 0xd9, 0xda,
      0x21, 0xab, 0x85, 0xed, 0x7c, 0x52, 0x10, 0x2f,
      0x1a, 0x22, 0x3f, 0x40, 0xf3, 0x9b, 0xc2, 0x17,
      0xc1, 0x3b, 0xc1, 0x91, 0x93, 0x05, 0xbf, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
const rosidl_type_hash_t *
mocap4r2_msgs__srv__CreateRigidBody_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x61, 0xdf, 0xda, 0x21, 0x8a, 0xec, 0x55, 0xed,
      0xba, 0xbf, 0x35, 0x4b, 0x54, 0x67, 0x1f, 0x2e,
      0x98, 0x95, 0x13, 0x1d, 0xe7, 0x0a, 0x17, 0x7d,
      0x6d, 0x50, 0xaa, 0x8a, 0x44, 0x30, 0xec, 0x22,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char mocap4r2_msgs__srv__CreateRigidBody__TYPE_NAME[] = "mocap4r2_msgs/srv/CreateRigidBody";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mocap4r2_msgs__srv__CreateRigidBody_Event__TYPE_NAME[] = "mocap4r2_msgs/srv/CreateRigidBody_Event";
static char mocap4r2_msgs__srv__CreateRigidBody_Request__TYPE_NAME[] = "mocap4r2_msgs/srv/CreateRigidBody_Request";
static char mocap4r2_msgs__srv__CreateRigidBody_Response__TYPE_NAME[] = "mocap4r2_msgs/srv/CreateRigidBody_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char mocap4r2_msgs__srv__CreateRigidBody__FIELD_NAME__request_message[] = "request_message";
static char mocap4r2_msgs__srv__CreateRigidBody__FIELD_NAME__response_message[] = "response_message";
static char mocap4r2_msgs__srv__CreateRigidBody__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mocap4r2_msgs__srv__CreateRigidBody__FIELDS[] = {
  {
    {mocap4r2_msgs__srv__CreateRigidBody__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mocap4r2_msgs__srv__CreateRigidBody_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__srv__CreateRigidBody__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mocap4r2_msgs__srv__CreateRigidBody_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__srv__CreateRigidBody__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mocap4r2_msgs__srv__CreateRigidBody_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mocap4r2_msgs__srv__CreateRigidBody__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__srv__CreateRigidBody_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__srv__CreateRigidBody_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__srv__CreateRigidBody_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_msgs__srv__CreateRigidBody__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_msgs__srv__CreateRigidBody__TYPE_NAME, 33, 33},
      {mocap4r2_msgs__srv__CreateRigidBody__FIELDS, 3, 3},
    },
    {mocap4r2_msgs__srv__CreateRigidBody__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mocap4r2_msgs__srv__CreateRigidBody_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mocap4r2_msgs__srv__CreateRigidBody_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mocap4r2_msgs__srv__CreateRigidBody_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mocap4r2_msgs__srv__CreateRigidBody_Request__FIELD_NAME__rigid_body_name[] = "rigid_body_name";
static char mocap4r2_msgs__srv__CreateRigidBody_Request__FIELD_NAME__link_parent[] = "link_parent";
static char mocap4r2_msgs__srv__CreateRigidBody_Request__FIELD_NAME__markers[] = "markers";

static rosidl_runtime_c__type_description__Field mocap4r2_msgs__srv__CreateRigidBody_Request__FIELDS[] = {
  {
    {mocap4r2_msgs__srv__CreateRigidBody_Request__FIELD_NAME__rigid_body_name, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__srv__CreateRigidBody_Request__FIELD_NAME__link_parent, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__srv__CreateRigidBody_Request__FIELD_NAME__markers, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_msgs__srv__CreateRigidBody_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_msgs__srv__CreateRigidBody_Request__TYPE_NAME, 41, 41},
      {mocap4r2_msgs__srv__CreateRigidBody_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mocap4r2_msgs__srv__CreateRigidBody_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field mocap4r2_msgs__srv__CreateRigidBody_Response__FIELDS[] = {
  {
    {mocap4r2_msgs__srv__CreateRigidBody_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_msgs__srv__CreateRigidBody_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_msgs__srv__CreateRigidBody_Response__TYPE_NAME, 42, 42},
      {mocap4r2_msgs__srv__CreateRigidBody_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mocap4r2_msgs__srv__CreateRigidBody_Event__FIELD_NAME__info[] = "info";
static char mocap4r2_msgs__srv__CreateRigidBody_Event__FIELD_NAME__request[] = "request";
static char mocap4r2_msgs__srv__CreateRigidBody_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mocap4r2_msgs__srv__CreateRigidBody_Event__FIELDS[] = {
  {
    {mocap4r2_msgs__srv__CreateRigidBody_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__srv__CreateRigidBody_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mocap4r2_msgs__srv__CreateRigidBody_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__srv__CreateRigidBody_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mocap4r2_msgs__srv__CreateRigidBody_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mocap4r2_msgs__srv__CreateRigidBody_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__srv__CreateRigidBody_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__srv__CreateRigidBody_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_msgs__srv__CreateRigidBody_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_msgs__srv__CreateRigidBody_Event__TYPE_NAME, 39, 39},
      {mocap4r2_msgs__srv__CreateRigidBody_Event__FIELDS, 3, 3},
    },
    {mocap4r2_msgs__srv__CreateRigidBody_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mocap4r2_msgs__srv__CreateRigidBody_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mocap4r2_msgs__srv__CreateRigidBody_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string rigid_body_name\n"
  "string link_parent\n"
  "int32[] markers\n"
  "\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_msgs__srv__CreateRigidBody__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_msgs__srv__CreateRigidBody__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 75, 75},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_msgs__srv__CreateRigidBody_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_msgs__srv__CreateRigidBody_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_msgs__srv__CreateRigidBody_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_msgs__srv__CreateRigidBody_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_msgs__srv__CreateRigidBody_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_msgs__srv__CreateRigidBody_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_msgs__srv__CreateRigidBody__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_msgs__srv__CreateRigidBody__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mocap4r2_msgs__srv__CreateRigidBody_Event__get_individual_type_description_source(NULL);
    sources[3] = *mocap4r2_msgs__srv__CreateRigidBody_Request__get_individual_type_description_source(NULL);
    sources[4] = *mocap4r2_msgs__srv__CreateRigidBody_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_msgs__srv__CreateRigidBody_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_msgs__srv__CreateRigidBody_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_msgs__srv__CreateRigidBody_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_msgs__srv__CreateRigidBody_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_msgs__srv__CreateRigidBody_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_msgs__srv__CreateRigidBody_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mocap4r2_msgs__srv__CreateRigidBody_Request__get_individual_type_description_source(NULL);
    sources[3] = *mocap4r2_msgs__srv__CreateRigidBody_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
