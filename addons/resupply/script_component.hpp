#define COMPONENT resupply
#define COMPONENT_BEAUTIFIED Resupply
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_RESUPPLY
  #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"

#define ACE_INTERACT_ACTIONTYPE_TARGET 0
#define ACE_INTERACT_ACTIONTYPE_SELF 1
