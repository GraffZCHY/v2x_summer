# generated from rosidl_generator_py/resource/_idl.py.em
# with input from perception_comm:msg/CAN.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'v2_x_intersection_s_p_a_t'
# Member 'v2_x_intersection_m_a_p'
# Member 'a_v_state'
# Member 'road_state'
# Member 'vehicle_orientation'
# Member 'vehicle_location'
# Member 'objects'
# Member 'object_track_a'
# Member 'object_track_b'
# Member 'object_track_c'
# Member 'object_track_d'
# Member 'traffic_signal_heads'
# Member 'traffic_signal_head_track_a'
# Member 'traffic_signs'
# Member 'traffic_sign_track_a'
# Member 'lane_markings'
# Member 'lane_marking_track_a'
# Member 'limit_lines'
# Member 'limit_line_track_a'
# Member 'misc'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CAN(type):
    """Metaclass of message 'CAN'."""

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
            module = import_type_support('perception_comm')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'perception_comm.msg.CAN')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__can
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__can
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__can
            cls._TYPE_SUPPORT = module.type_support_msg__msg__can
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__can

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CAN(metaclass=Metaclass_CAN):
    """Message class 'CAN'."""

    __slots__ = [
        '_header',
        '_v2_x_intersection_s_p_a_t',
        '_v2_x_intersection_m_a_p',
        '_a_v_state',
        '_road_state',
        '_vehicle_orientation',
        '_vehicle_location',
        '_objects',
        '_object_track_a',
        '_object_track_b',
        '_object_track_c',
        '_object_track_d',
        '_traffic_signal_heads',
        '_traffic_signal_head_track_a',
        '_traffic_signs',
        '_traffic_sign_track_a',
        '_lane_markings',
        '_lane_marking_track_a',
        '_limit_lines',
        '_limit_line_track_a',
        '_misc',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'v2_x_intersection_s_p_a_t': 'sequence<float>',
        'v2_x_intersection_m_a_p': 'sequence<float>',
        'a_v_state': 'sequence<float>',
        'road_state': 'sequence<float>',
        'vehicle_orientation': 'sequence<float>',
        'vehicle_location': 'sequence<float>',
        'objects': 'sequence<float>',
        'object_track_a': 'sequence<float>',
        'object_track_b': 'sequence<float>',
        'object_track_c': 'sequence<float>',
        'object_track_d': 'sequence<float>',
        'traffic_signal_heads': 'sequence<float>',
        'traffic_signal_head_track_a': 'sequence<float>',
        'traffic_signs': 'sequence<float>',
        'traffic_sign_track_a': 'sequence<float>',
        'lane_markings': 'sequence<float>',
        'lane_marking_track_a': 'sequence<float>',
        'limit_lines': 'sequence<float>',
        'limit_line_track_a': 'sequence<float>',
        'misc': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.v2_x_intersection_s_p_a_t = array.array('f', kwargs.get('v2_x_intersection_s_p_a_t', []))
        self.v2_x_intersection_m_a_p = array.array('f', kwargs.get('v2_x_intersection_m_a_p', []))
        self.a_v_state = array.array('f', kwargs.get('a_v_state', []))
        self.road_state = array.array('f', kwargs.get('road_state', []))
        self.vehicle_orientation = array.array('f', kwargs.get('vehicle_orientation', []))
        self.vehicle_location = array.array('f', kwargs.get('vehicle_location', []))
        self.objects = array.array('f', kwargs.get('objects', []))
        self.object_track_a = array.array('f', kwargs.get('object_track_a', []))
        self.object_track_b = array.array('f', kwargs.get('object_track_b', []))
        self.object_track_c = array.array('f', kwargs.get('object_track_c', []))
        self.object_track_d = array.array('f', kwargs.get('object_track_d', []))
        self.traffic_signal_heads = array.array('f', kwargs.get('traffic_signal_heads', []))
        self.traffic_signal_head_track_a = array.array('f', kwargs.get('traffic_signal_head_track_a', []))
        self.traffic_signs = array.array('f', kwargs.get('traffic_signs', []))
        self.traffic_sign_track_a = array.array('f', kwargs.get('traffic_sign_track_a', []))
        self.lane_markings = array.array('f', kwargs.get('lane_markings', []))
        self.lane_marking_track_a = array.array('f', kwargs.get('lane_marking_track_a', []))
        self.limit_lines = array.array('f', kwargs.get('limit_lines', []))
        self.limit_line_track_a = array.array('f', kwargs.get('limit_line_track_a', []))
        self.misc = array.array('f', kwargs.get('misc', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.v2_x_intersection_s_p_a_t != other.v2_x_intersection_s_p_a_t:
            return False
        if self.v2_x_intersection_m_a_p != other.v2_x_intersection_m_a_p:
            return False
        if self.a_v_state != other.a_v_state:
            return False
        if self.road_state != other.road_state:
            return False
        if self.vehicle_orientation != other.vehicle_orientation:
            return False
        if self.vehicle_location != other.vehicle_location:
            return False
        if self.objects != other.objects:
            return False
        if self.object_track_a != other.object_track_a:
            return False
        if self.object_track_b != other.object_track_b:
            return False
        if self.object_track_c != other.object_track_c:
            return False
        if self.object_track_d != other.object_track_d:
            return False
        if self.traffic_signal_heads != other.traffic_signal_heads:
            return False
        if self.traffic_signal_head_track_a != other.traffic_signal_head_track_a:
            return False
        if self.traffic_signs != other.traffic_signs:
            return False
        if self.traffic_sign_track_a != other.traffic_sign_track_a:
            return False
        if self.lane_markings != other.lane_markings:
            return False
        if self.lane_marking_track_a != other.lane_marking_track_a:
            return False
        if self.limit_lines != other.limit_lines:
            return False
        if self.limit_line_track_a != other.limit_line_track_a:
            return False
        if self.misc != other.misc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def v2_x_intersection_s_p_a_t(self):
        """Message field 'v2_x_intersection_s_p_a_t'."""
        return self._v2_x_intersection_s_p_a_t

    @v2_x_intersection_s_p_a_t.setter
    def v2_x_intersection_s_p_a_t(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'v2_x_intersection_s_p_a_t' array.array() must have the type code of 'f'"
            self._v2_x_intersection_s_p_a_t = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'v2_x_intersection_s_p_a_t' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._v2_x_intersection_s_p_a_t = array.array('f', value)

    @builtins.property
    def v2_x_intersection_m_a_p(self):
        """Message field 'v2_x_intersection_m_a_p'."""
        return self._v2_x_intersection_m_a_p

    @v2_x_intersection_m_a_p.setter
    def v2_x_intersection_m_a_p(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'v2_x_intersection_m_a_p' array.array() must have the type code of 'f'"
            self._v2_x_intersection_m_a_p = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'v2_x_intersection_m_a_p' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._v2_x_intersection_m_a_p = array.array('f', value)

    @builtins.property
    def a_v_state(self):
        """Message field 'a_v_state'."""
        return self._a_v_state

    @a_v_state.setter
    def a_v_state(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'a_v_state' array.array() must have the type code of 'f'"
            self._a_v_state = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'a_v_state' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._a_v_state = array.array('f', value)

    @builtins.property
    def road_state(self):
        """Message field 'road_state'."""
        return self._road_state

    @road_state.setter
    def road_state(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'road_state' array.array() must have the type code of 'f'"
            self._road_state = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'road_state' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._road_state = array.array('f', value)

    @builtins.property
    def vehicle_orientation(self):
        """Message field 'vehicle_orientation'."""
        return self._vehicle_orientation

    @vehicle_orientation.setter
    def vehicle_orientation(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'vehicle_orientation' array.array() must have the type code of 'f'"
            self._vehicle_orientation = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'vehicle_orientation' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._vehicle_orientation = array.array('f', value)

    @builtins.property
    def vehicle_location(self):
        """Message field 'vehicle_location'."""
        return self._vehicle_location

    @vehicle_location.setter
    def vehicle_location(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'vehicle_location' array.array() must have the type code of 'f'"
            self._vehicle_location = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'vehicle_location' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._vehicle_location = array.array('f', value)

    @builtins.property
    def objects(self):
        """Message field 'objects'."""
        return self._objects

    @objects.setter
    def objects(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'objects' array.array() must have the type code of 'f'"
            self._objects = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'objects' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._objects = array.array('f', value)

    @builtins.property
    def object_track_a(self):
        """Message field 'object_track_a'."""
        return self._object_track_a

    @object_track_a.setter
    def object_track_a(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'object_track_a' array.array() must have the type code of 'f'"
            self._object_track_a = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'object_track_a' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._object_track_a = array.array('f', value)

    @builtins.property
    def object_track_b(self):
        """Message field 'object_track_b'."""
        return self._object_track_b

    @object_track_b.setter
    def object_track_b(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'object_track_b' array.array() must have the type code of 'f'"
            self._object_track_b = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'object_track_b' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._object_track_b = array.array('f', value)

    @builtins.property
    def object_track_c(self):
        """Message field 'object_track_c'."""
        return self._object_track_c

    @object_track_c.setter
    def object_track_c(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'object_track_c' array.array() must have the type code of 'f'"
            self._object_track_c = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'object_track_c' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._object_track_c = array.array('f', value)

    @builtins.property
    def object_track_d(self):
        """Message field 'object_track_d'."""
        return self._object_track_d

    @object_track_d.setter
    def object_track_d(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'object_track_d' array.array() must have the type code of 'f'"
            self._object_track_d = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'object_track_d' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._object_track_d = array.array('f', value)

    @builtins.property
    def traffic_signal_heads(self):
        """Message field 'traffic_signal_heads'."""
        return self._traffic_signal_heads

    @traffic_signal_heads.setter
    def traffic_signal_heads(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'traffic_signal_heads' array.array() must have the type code of 'f'"
            self._traffic_signal_heads = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'traffic_signal_heads' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._traffic_signal_heads = array.array('f', value)

    @builtins.property
    def traffic_signal_head_track_a(self):
        """Message field 'traffic_signal_head_track_a'."""
        return self._traffic_signal_head_track_a

    @traffic_signal_head_track_a.setter
    def traffic_signal_head_track_a(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'traffic_signal_head_track_a' array.array() must have the type code of 'f'"
            self._traffic_signal_head_track_a = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'traffic_signal_head_track_a' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._traffic_signal_head_track_a = array.array('f', value)

    @builtins.property
    def traffic_signs(self):
        """Message field 'traffic_signs'."""
        return self._traffic_signs

    @traffic_signs.setter
    def traffic_signs(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'traffic_signs' array.array() must have the type code of 'f'"
            self._traffic_signs = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'traffic_signs' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._traffic_signs = array.array('f', value)

    @builtins.property
    def traffic_sign_track_a(self):
        """Message field 'traffic_sign_track_a'."""
        return self._traffic_sign_track_a

    @traffic_sign_track_a.setter
    def traffic_sign_track_a(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'traffic_sign_track_a' array.array() must have the type code of 'f'"
            self._traffic_sign_track_a = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'traffic_sign_track_a' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._traffic_sign_track_a = array.array('f', value)

    @builtins.property
    def lane_markings(self):
        """Message field 'lane_markings'."""
        return self._lane_markings

    @lane_markings.setter
    def lane_markings(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'lane_markings' array.array() must have the type code of 'f'"
            self._lane_markings = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'lane_markings' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._lane_markings = array.array('f', value)

    @builtins.property
    def lane_marking_track_a(self):
        """Message field 'lane_marking_track_a'."""
        return self._lane_marking_track_a

    @lane_marking_track_a.setter
    def lane_marking_track_a(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'lane_marking_track_a' array.array() must have the type code of 'f'"
            self._lane_marking_track_a = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'lane_marking_track_a' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._lane_marking_track_a = array.array('f', value)

    @builtins.property
    def limit_lines(self):
        """Message field 'limit_lines'."""
        return self._limit_lines

    @limit_lines.setter
    def limit_lines(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'limit_lines' array.array() must have the type code of 'f'"
            self._limit_lines = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'limit_lines' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._limit_lines = array.array('f', value)

    @builtins.property
    def limit_line_track_a(self):
        """Message field 'limit_line_track_a'."""
        return self._limit_line_track_a

    @limit_line_track_a.setter
    def limit_line_track_a(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'limit_line_track_a' array.array() must have the type code of 'f'"
            self._limit_line_track_a = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'limit_line_track_a' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._limit_line_track_a = array.array('f', value)

    @builtins.property
    def misc(self):
        """Message field 'misc'."""
        return self._misc

    @misc.setter
    def misc(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'misc' array.array() must have the type code of 'f'"
            self._misc = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'misc' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._misc = array.array('f', value)
