# generated from rosidl_generator_py/resource/_idl.py.em
# with input from perception_comm:msg/BSM.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BSM(type):
    """Metaclass of message 'BSM'."""

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
                'perception_comm.msg.BSM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bsm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bsm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bsm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bsm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bsm

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


class BSM(metaclass=Metaclass_BSM):
    """Message class 'BSM'."""

    __slots__ = [
        '_header',
        '_vehicle_id',
        '_msg_cnt',
        '_lat',
        '_lon',
        '_elev',
        '_heading',
        '_speed',
        '_accel_lat',
        '_accel_long',
        '_accel_vert',
        '_accel_yaw',
        '_full_json',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vehicle_id': 'string',
        'msg_cnt': 'int32',
        'lat': 'double',
        'lon': 'double',
        'elev': 'double',
        'heading': 'int32',
        'speed': 'double',
        'accel_lat': 'double',
        'accel_long': 'double',
        'accel_vert': 'double',
        'accel_yaw': 'double',
        'full_json': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.vehicle_id = kwargs.get('vehicle_id', str())
        self.msg_cnt = kwargs.get('msg_cnt', int())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.elev = kwargs.get('elev', float())
        self.heading = kwargs.get('heading', int())
        self.speed = kwargs.get('speed', float())
        self.accel_lat = kwargs.get('accel_lat', float())
        self.accel_long = kwargs.get('accel_long', float())
        self.accel_vert = kwargs.get('accel_vert', float())
        self.accel_yaw = kwargs.get('accel_yaw', float())
        self.full_json = kwargs.get('full_json', str())

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
        if self.vehicle_id != other.vehicle_id:
            return False
        if self.msg_cnt != other.msg_cnt:
            return False
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.elev != other.elev:
            return False
        if self.heading != other.heading:
            return False
        if self.speed != other.speed:
            return False
        if self.accel_lat != other.accel_lat:
            return False
        if self.accel_long != other.accel_long:
            return False
        if self.accel_vert != other.accel_vert:
            return False
        if self.accel_yaw != other.accel_yaw:
            return False
        if self.full_json != other.full_json:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
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

    @property
    def vehicle_id(self):
        """Message field 'vehicle_id'."""
        return self._vehicle_id

    @vehicle_id.setter
    def vehicle_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vehicle_id' field must be of type 'str'"
        self._vehicle_id = value

    @property
    def msg_cnt(self):
        """Message field 'msg_cnt'."""
        return self._msg_cnt

    @msg_cnt.setter
    def msg_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_cnt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'msg_cnt' field must be an integer in [-2147483648, 2147483647]"
        self._msg_cnt = value

    @property
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat' field must be of type 'float'"
        self._lat = value

    @property
    def lon(self):
        """Message field 'lon'."""
        return self._lon

    @lon.setter
    def lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon' field must be of type 'float'"
        self._lon = value

    @property
    def elev(self):
        """Message field 'elev'."""
        return self._elev

    @elev.setter
    def elev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elev' field must be of type 'float'"
        self._elev = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heading' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'heading' field must be an integer in [-2147483648, 2147483647]"
        self._heading = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
        self._speed = value

    @property
    def accel_lat(self):
        """Message field 'accel_lat'."""
        return self._accel_lat

    @accel_lat.setter
    def accel_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_lat' field must be of type 'float'"
        self._accel_lat = value

    @property
    def accel_long(self):
        """Message field 'accel_long'."""
        return self._accel_long

    @accel_long.setter
    def accel_long(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_long' field must be of type 'float'"
        self._accel_long = value

    @property
    def accel_vert(self):
        """Message field 'accel_vert'."""
        return self._accel_vert

    @accel_vert.setter
    def accel_vert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_vert' field must be of type 'float'"
        self._accel_vert = value

    @property
    def accel_yaw(self):
        """Message field 'accel_yaw'."""
        return self._accel_yaw

    @accel_yaw.setter
    def accel_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_yaw' field must be of type 'float'"
        self._accel_yaw = value

    @property
    def full_json(self):
        """Message field 'full_json'."""
        return self._full_json

    @full_json.setter
    def full_json(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'full_json' field must be of type 'str'"
        self._full_json = value
