# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "nav_msgs;roscpp;tuw_geometry;tuw_multi_robot_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-ltuw_multi_robot_goal_generator".split(';') if "-ltuw_multi_robot_goal_generator" != "" else []
PROJECT_NAME = "tuw_multi_robot_goal_generator"
PROJECT_SPACE_DIR = "/home/souvik/turtlebot/install"
PROJECT_VERSION = "0.0.0"
