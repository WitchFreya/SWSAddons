#define COMPONENT tech
#define COMPONENT_BEAUTIFIED Technology
#include "\x\SWS\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_TECH
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\SWS\addons\main\script_macros.hpp"

#define TERMINAL(var0) TRIPLES(PREFIX,Term,var0)
#define QTERMINAL(var0) QUOTE(TERMINAL(var0))
