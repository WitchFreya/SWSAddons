#define COMPONENT aed
#define COMPONENT_BEAUTIFIED Automated External Defibrillator
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_AED
  #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"
