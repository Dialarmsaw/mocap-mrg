# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mocap4r2_msgs:srv/CreateRigidBody.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'markers'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CreateRigidBody_Request(type):
    """Metaclass of message 'CreateRigidBody_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mocap4r2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mocap4r2_msgs.srv.CreateRigidBody_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__create_rigid_body__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__create_rigid_body__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__create_rigid_body__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__create_rigid_body__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__create_rigid_body__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CreateRigidBody_Request(metaclass=Metaclass_CreateRigidBody_Request):
    """Message class 'CreateRigidBody_Request'."""

    __slots__ = [
        '_rigid_body_name',
        '_link_parent',
        '_markers',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'rigid_body_name': 'string',
        'link_parent': 'string',
        'markers': 'sequence<int32>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rigid_body_name = kwargs.get('rigid_body_name', str())
        self.link_parent = kwargs.get('link_parent', str())
        self.markers = array.array('i', kwargs.get('markers', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.rigid_body_name != other.rigid_body_name:
            return False
        if self.link_parent != other.link_parent:
            return False
        if self.markers != other.markers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rigid_body_name(self):
        """Message field 'rigid_body_name'."""
        return self._rigid_body_name

    @rigid_body_name.setter
    def rigid_body_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'rigid_body_name' field must be of type 'str'"
        self._rigid_body_name = value

    @builtins.property
    def link_parent(self):
        """Message field 'link_parent'."""
        return self._link_parent

    @link_parent.setter
    def link_parent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'link_parent' field must be of type 'str'"
        self._link_parent = value

    @builtins.property
    def markers(self):
        """Message field 'markers'."""
        return self._markers

    @markers.setter
    def markers(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'markers' array.array() must have the type code of 'i'"
                self._markers = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'markers' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._markers = array.array('i', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CreateRigidBody_Response(type):
    """Metaclass of message 'CreateRigidBody_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mocap4r2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mocap4r2_msgs.srv.CreateRigidBody_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__create_rigid_body__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__create_rigid_body__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__create_rigid_body__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__create_rigid_body__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__create_rigid_body__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CreateRigidBody_Response(metaclass=Metaclass_CreateRigidBody_Response):
    """Message class 'CreateRigidBody_Response'."""

    __slots__ = [
        '_success',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CreateRigidBody_Event(type):
    """Metaclass of message 'CreateRigidBody_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mocap4r2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mocap4r2_msgs.srv.CreateRigidBody_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__create_rigid_body__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__create_rigid_body__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__create_rigid_body__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__create_rigid_body__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__create_rigid_body__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CreateRigidBody_Event(metaclass=Metaclass_CreateRigidBody_Event):
    """Message class 'CreateRigidBody_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<mocap4r2_msgs/CreateRigidBody_Request, 1>',
        'response': 'sequence<mocap4r2_msgs/CreateRigidBody_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mocap4r2_msgs', 'srv'], 'CreateRigidBody_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mocap4r2_msgs', 'srv'], 'CreateRigidBody_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from mocap4r2_msgs.srv import CreateRigidBody_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, CreateRigidBody_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'CreateRigidBody_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from mocap4r2_msgs.srv import CreateRigidBody_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, CreateRigidBody_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'CreateRigidBody_Response'"
        self._response = value


class Metaclass_CreateRigidBody(type):
    """Metaclass of service 'CreateRigidBody'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mocap4r2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mocap4r2_msgs.srv.CreateRigidBody')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__create_rigid_body

            from mocap4r2_msgs.srv import _create_rigid_body
            if _create_rigid_body.Metaclass_CreateRigidBody_Request._TYPE_SUPPORT is None:
                _create_rigid_body.Metaclass_CreateRigidBody_Request.__import_type_support__()
            if _create_rigid_body.Metaclass_CreateRigidBody_Response._TYPE_SUPPORT is None:
                _create_rigid_body.Metaclass_CreateRigidBody_Response.__import_type_support__()
            if _create_rigid_body.Metaclass_CreateRigidBody_Event._TYPE_SUPPORT is None:
                _create_rigid_body.Metaclass_CreateRigidBody_Event.__import_type_support__()


class CreateRigidBody(metaclass=Metaclass_CreateRigidBody):
    from mocap4r2_msgs.srv._create_rigid_body import CreateRigidBody_Request as Request
    from mocap4r2_msgs.srv._create_rigid_body import CreateRigidBody_Response as Response
    from mocap4r2_msgs.srv._create_rigid_body import CreateRigidBody_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
