#define COMPONENT zeus
#define COMPONENT_BEAUTIFIED Zeus
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_ZEUS
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_ZEUS
  #define DEBUG_SETTINGS DEBUG_SETTINGS_ZEUS
#endif

#include "\x\sws\addons\main\script_macros.hpp"

#define MODULE_LOCALITY_SERVER_ONLY 0
#define MODULE_LOCALITY_GLOBAL 1
#define MODULE_LOCALITY_GLOBAL_JIP 2
