#define COMPONENT modules
#define COMPONENT_BEAUTIFIED Modules
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_MODULES
  #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"

#define MODULE_LOCALITY_SERVER_ONLY 0
#define MODULE_LOCALITY_GLOBAL 1
#define MODULE_LOCALITY_GLOBAL_JIP 2

#define ZEN_DIALOG_OWNER_TAB_SIDES 0
#define ZEN_DIALOG_OWNER_TAB_GROUPS 1
#define ZEN_DIALOG_OWNER_TAB_PLAYERS 2
