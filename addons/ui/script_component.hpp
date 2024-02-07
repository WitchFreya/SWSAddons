#define COMPONENT ui
#define COMPONENT_BEAUTIFIED UI
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_UI
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"

#define RGBA_WHITE 1,1,1,1
#define RGBA_BLACK_TRANSLUCENT 0,0,0,0.5
