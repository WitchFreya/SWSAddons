#define COMPONENT patches
#define COMPONENT_BEAUTIFIED Patches
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_PATCHES
  #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"

#define PATCH_GVAR(varName) DOUBLES(SUBCOMPONENT,varName)
#define PATCH_QGVAR(varName) QUOTE(PATCH_GVAR(varName))
