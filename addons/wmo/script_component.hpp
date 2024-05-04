#define COMPONENT wmo
#define COMPONENT_BEAUTIFIED Walkable Moving Objects Patches
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

#ifdef DEBUG_MODE_FULL
  #define ROADWAY_OBJECT "BW_roadway_obj_debug"
#else
  #define ROADWAY_OBJECT "BW_roadway_obj"
#endif
