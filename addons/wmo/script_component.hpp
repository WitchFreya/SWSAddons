#define COMPONENT wmo
#define COMPONENT_BEAUTIFIED Walkable Moving Objects Rework
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_WMO
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_WMO
  #define DEBUG_SETTINGS DEBUG_SETTINGS_WMO
#endif

#include "\x\sws\addons\main\script_macros.hpp"

#define CF_ONLY_WATER 1
#define CF_NEAREST_CONTACT 2
#define CF_ONLY_STATIC 4
#define CF_ONLY_DYNAMIC 8
#define CF_FIRST_CONTACT 16
#define CF_ALL_OBJECTS  32

#ifdef DEBUG_MODE_FULL
  #define ROADWAY_OBJECT "BW_roadway_obj_debug"
#else
  #define ROADWAY_OBJECT "BW_roadway_obj"
#endif
