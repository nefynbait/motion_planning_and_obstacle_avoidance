# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "message_runtime;std_msgs;geometry_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-ltuw_geometry_msgs".split(';') if "-ltuw_geometry_msgs" != "" else []
PROJECT_NAME = "tuw_geometry_msgs"
PROJECT_SPACE_DIR = "/home/souvik/turtlebot/install"
PROJECT_VERSION = "0.0.13"