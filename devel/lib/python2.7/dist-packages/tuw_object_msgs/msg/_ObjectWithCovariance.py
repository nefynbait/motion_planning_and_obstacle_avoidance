# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tuw_object_msgs/ObjectWithCovariance.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import tuw_object_msgs.msg

class ObjectWithCovariance(genpy.Message):
  _md5sum = "7f5bff1206fce53cd48a87798c13655f"
  _type = "tuw_object_msgs/ObjectWithCovariance"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# This expresses a object in free space with uncertainty.

Object object

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)

float64[] covariance_pose   # pose covariance if it exists it will be 3x3 or 6x6
float64[] covariance_twist  # twist covariance if it exists it will be 3x3 or 6x6
float64[] correlation       # correlation between pose and twist if it exists it will be 3x3 or 6x6
================================================================================
MSG: tuw_object_msgs/Object
# This expresses a object in a 3D space
int32[] ids                  # possible ids of the detected object (empty if no id could be identified/assigned)
int32   shape                # shape type (possible types are listed below)
float64[] shape_variables    # variables correspoding to the shape of the object (possible types are listed below)
float64[] ids_confidence     # confidence of the possible ids in [0, 1]
geometry_msgs/Pose pose      # pose of the detected object
geometry_msgs/Twist twist    # twist of the detected object

# SHAPE_TYPE                      # SHAPE_VARIABLES
# ====================================================
int32 SHAPE_UNKOWN           = 0  # []
int32 SHAPE_POINT            = 1  # []
int32 SHAPE_CIRCLE           = 2  # [radius]
int32 SHAPE_ELLIPSE          = 3  # [radius1, radius2]
int32 SHAPE_SQUARE           = 4  # [width]
int32 SHAPE_RECTANGLE        = 5  # [length, width]
int32 SHAPE_HULL             = 6  # [p0, p1, p2, ...]
int32 SHAPE_LINE             = 7  # [] or [length] 

int32 SHAPE_SPHERE           = 102
int32 SHAPE_ELLIPSOID        = 103
int32 SHAPE_CUBE             = 104
int32 SHAPE_BOX              = 105
int32 SHAPE_MESH             = 106

int32 SHAPE_TRAFFIC_CONE     = 201 # [radius, color(1 = blue, 2 = yellow, 3 = red)] 
int32 SHAPE_DOOR             = 202 # [width, height, opening angle (0=closed), nr of door leafs, clockwise (0) counterclockwise (1)]
int32 SHAPE_MAP_DOOR         = 212 # for doors already mapped, same parameters as usual door
int32 SHAPE_PERSON           = 203
int32 SHAPE_VEHICLE          = 204
int32 SHAPE_FIDUCIAL         = 205
int32 SHAPE_CONE             = 206 # [radius, height]

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  __slots__ = ['object','covariance_pose','covariance_twist','correlation']
  _slot_types = ['tuw_object_msgs/Object','float64[]','float64[]','float64[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       object,covariance_pose,covariance_twist,correlation

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObjectWithCovariance, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.object is None:
        self.object = tuw_object_msgs.msg.Object()
      if self.covariance_pose is None:
        self.covariance_pose = []
      if self.covariance_twist is None:
        self.covariance_twist = []
      if self.correlation is None:
        self.correlation = []
    else:
      self.object = tuw_object_msgs.msg.Object()
      self.covariance_pose = []
      self.covariance_twist = []
      self.correlation = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.object.ids)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.Struct(pattern).pack(*self.object.ids))
      _x = self.object.shape
      buff.write(_get_struct_i().pack(_x))
      length = len(self.object.shape_variables)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.object.shape_variables))
      length = len(self.object.ids_confidence)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.object.ids_confidence))
      _x = self
      buff.write(_get_struct_13d().pack(_x.object.pose.position.x, _x.object.pose.position.y, _x.object.pose.position.z, _x.object.pose.orientation.x, _x.object.pose.orientation.y, _x.object.pose.orientation.z, _x.object.pose.orientation.w, _x.object.twist.linear.x, _x.object.twist.linear.y, _x.object.twist.linear.z, _x.object.twist.angular.x, _x.object.twist.angular.y, _x.object.twist.angular.z))
      length = len(self.covariance_pose)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.covariance_pose))
      length = len(self.covariance_twist)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.covariance_twist))
      length = len(self.correlation)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.correlation))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.object is None:
        self.object = tuw_object_msgs.msg.Object()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.object.ids = s.unpack(str[start:end])
      start = end
      end += 4
      (self.object.shape,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.object.shape_variables = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.object.ids_confidence = s.unpack(str[start:end])
      _x = self
      start = end
      end += 104
      (_x.object.pose.position.x, _x.object.pose.position.y, _x.object.pose.position.z, _x.object.pose.orientation.x, _x.object.pose.orientation.y, _x.object.pose.orientation.z, _x.object.pose.orientation.w, _x.object.twist.linear.x, _x.object.twist.linear.y, _x.object.twist.linear.z, _x.object.twist.angular.x, _x.object.twist.angular.y, _x.object.twist.angular.z,) = _get_struct_13d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.covariance_pose = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.covariance_twist = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.correlation = s.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.object.ids)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.object.ids.tostring())
      _x = self.object.shape
      buff.write(_get_struct_i().pack(_x))
      length = len(self.object.shape_variables)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.object.shape_variables.tostring())
      length = len(self.object.ids_confidence)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.object.ids_confidence.tostring())
      _x = self
      buff.write(_get_struct_13d().pack(_x.object.pose.position.x, _x.object.pose.position.y, _x.object.pose.position.z, _x.object.pose.orientation.x, _x.object.pose.orientation.y, _x.object.pose.orientation.z, _x.object.pose.orientation.w, _x.object.twist.linear.x, _x.object.twist.linear.y, _x.object.twist.linear.z, _x.object.twist.angular.x, _x.object.twist.angular.y, _x.object.twist.angular.z))
      length = len(self.covariance_pose)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.covariance_pose.tostring())
      length = len(self.covariance_twist)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.covariance_twist.tostring())
      length = len(self.correlation)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.correlation.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.object is None:
        self.object = tuw_object_msgs.msg.Object()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.object.ids = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (self.object.shape,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.object.shape_variables = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.object.ids_confidence = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      _x = self
      start = end
      end += 104
      (_x.object.pose.position.x, _x.object.pose.position.y, _x.object.pose.position.z, _x.object.pose.orientation.x, _x.object.pose.orientation.y, _x.object.pose.orientation.z, _x.object.pose.orientation.w, _x.object.twist.linear.x, _x.object.twist.linear.y, _x.object.twist.linear.z, _x.object.twist.angular.x, _x.object.twist.angular.y, _x.object.twist.angular.z,) = _get_struct_13d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.covariance_pose = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.covariance_twist = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.correlation = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_13d = None
def _get_struct_13d():
    global _struct_13d
    if _struct_13d is None:
        _struct_13d = struct.Struct("<13d")
    return _struct_13d
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
