#define COMPONENT tech
#define COMPONENT_BEAUTIFIED Technology
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_TECH
  #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"

#define THERMAL_MODE_WHITE_HOT 0
#define THERMAL_MODE_BLACK_HOT 1
#define THERMAL_MODE_GREEN_HOT 2
#define THERMAL_MODE_GREEN_BLACK_HOT 3
#define THERMAL_MODE_RED_HOT 4
#define THERMAL_MODE_IR 6
#define THERMAL_MODE_RGB 7  // Don't use this. 'tis a silly mode.
#define THERMAL_MODE_WHITE_HOT_2 8 // Same as 0 from what I can tell.
