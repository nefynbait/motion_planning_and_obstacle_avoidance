## *********************************************************
##
## File autogenerated for the tuw_multi_robot_router package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 246, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 291, 'description': "On false it won't publish the routing table even a valid route was found", 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'publish_routing_table', 'edit_method': '', 'default': True, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 291, 'description': 'Defines if the generated Graph is a voronoi one (in doubt use false)', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'voronoi_graph', 'edit_method': '', 'default': True, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 291, 'description': 'Defines if priority rescheduling is used', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'priority_rescheduling', 'edit_method': '', 'default': True, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 291, 'description': 'Defines if speed rescheduling is used', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'speed_rescheduling', 'edit_method': '', 'default': True, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 291, 'description': 'Sets the upper limit for a planning approach. (router time is not overall time)', 'max': 300.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'router_time_limit_s', 'edit_method': '', 'default': 10.0, 'level': 0, 'min': 0.1, 'type': 'double'}, {'srcline': 291, 'description': 'Sets the timeout for deleting latched topics', 'max': 300.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'topic_timeout_s', 'edit_method': '', 'default': 10.0, 'level': 0, 'min': 0.1, 'type': 'double'}, {'srcline': 291, 'description': 'optimizes the path (only possible for 1 robot)', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'path_endpoint_optimization', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 291, 'description': 'The used collision resolver for the multi robot planner', 'max': 2, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'collision_resolver', 'edit_method': "{'enum_description': 'Collision resolver type', 'enum': [{'srcline': 15, 'description': 'No collision Resolver (Standard A-Star)', 'srcfile': '/home/souvik/turtlebot/src/tuw_multi_robot/tuw_multi_robot_router/cfg/router.cfg', 'cconsttype': 'const int', 'value': 0, 'ctype': 'int', 'type': 'int', 'name': 'None'}, {'srcline': 16, 'description': 'Backtracking (includes wait steps)', 'srcfile': '/home/souvik/turtlebot/src/tuw_multi_robot/tuw_multi_robot_router/cfg/router.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'Backtracking'}, {'srcline': 17, 'description': 'Avoidance (includes wait steps and can avoid other robots in crossings)', 'srcfile': '/home/souvik/turtlebot/src/tuw_multi_robot/tuw_multi_robot_router/cfg/router.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'Avoidance'}]}", 'default': 2, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 291, 'description': 'The endpoint mode', 'max': 2, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'goal_mode', 'edit_method': "{'enum_description': 'Collision resolver type', 'enum': [{'srcline': 22, 'description': 'endpoint is maped to the real endpoint', 'srcfile': '/home/souvik/turtlebot/src/tuw_multi_robot/tuw_multi_robot_router/cfg/router.cfg', 'cconsttype': 'const int', 'value': 0, 'ctype': 'int', 'type': 'int', 'name': 'use_map_goal'}, {'srcline': 23, 'description': 'endpoint is mapped to the end point on the segment', 'srcfile': '/home/souvik/turtlebot/src/tuw_multi_robot/tuw_multi_robot_router/cfg/router.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'use_voronoi_goal'}, {'srcline': 24, 'description': 'endpoint is mapped to the corresponding segment endpoint', 'srcfile': '/home/souvik/turtlebot/src/tuw_multi_robot/tuw_multi_robot_router/cfg/router.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'use_segment_goal'}]}", 'default': 1, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 291, 'description': 'Router Type', 'max': 1, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'router_type', 'edit_method': "{'enum_description': 'Multi_robot_router_type', 'enum': [{'srcline': 29, 'description': 'standard single threaded router', 'srcfile': '/home/souvik/turtlebot/src/tuw_multi_robot/tuw_multi_robot_router/cfg/router.cfg', 'cconsttype': 'const int', 'value': 0, 'ctype': 'int', 'type': 'int', 'name': 'standard_rotuer'}, {'srcline': 30, 'description': 'multithreaded robot router', 'srcfile': '/home/souvik/turtlebot/src/tuw_multi_robot/tuw_multi_robot_router/cfg/router.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'threaded_rotuer_srr'}]}", 'default': 0, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 291, 'description': 'sets the number of threads for the selected router', 'max': 64, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'nr_threads', 'edit_method': '', 'default': 1, 'level': 0, 'min': 1, 'type': 'int'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

router_None = 0
router_Backtracking = 1
router_Avoidance = 2
router_use_map_goal = 0
router_use_voronoi_goal = 1
router_use_segment_goal = 2
router_standard_rotuer = 0
router_threaded_rotuer_srr = 1
