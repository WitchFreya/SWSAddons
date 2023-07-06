#define COMPONENT gear
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_GEAR
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"

#define HELMET(var0) TRIPLES(SWS,Helmet,var0)
#define QHELMET(var0) QUOTE(HELMET(var0))
#define VEST(var0) TRIPLES(SWS,Vest,var0)
#define QVEST(var0) QUOTE(VEST(var0))
