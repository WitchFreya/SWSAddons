#define COMPONENT weapons
#define COMPONENT_BEAUTIFIED Weapons
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_WEAPONS
  #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"


#define ATT_POINTER_OPTRE_RAIL "OPTRE_BMR_Laser", "OPTRE_BMR_Vis_Red_Laser", "OPTRE_BMR_MEQ_Flashlight"
