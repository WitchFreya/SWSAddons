#define COMPONENT gear
#define COMPONENT_BEAUTIFIED Gear
#include "\x\SWS\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_GEAR
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\SWS\addons\main\script_macros.hpp"

#define UNIT(var0) TRIPLES(PREFIX,U,var0)
#define QUNIT(var0) QUOTE(UNIT(var0))
