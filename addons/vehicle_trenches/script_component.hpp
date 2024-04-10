#define COMPONENT vehicle_trenches
#define COMPONENT_BEAUTIFIED Vehicle Trenches
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_VEHICLE_TRENCHES
  #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"

#define PLOW_MOVING "plowMoving"
#define PLOW_UP "plowUp"
#define PLOW_NONE "plowNone"
#define PLOW_VEHICLE_TRENCH "plowVehicleTrench"
#define PLOW_GIANT_TRENCH	"plowGiantTrench"
#define PLOW_LONG_TRENCH	"plowLongTrench"

