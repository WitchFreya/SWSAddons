#define COMPONENT weapons
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

#define WEAPON(var0) TRIPLES(SWS,Weapon,var0)
#define QWEAPON(var0) QUOTE(WEAPON(var0))
#define NAME(var0) QUOTE([SWS] var0)
#define WEAPON_META(var0,scope) \
    ITEM_META(scope);           \
    baseweapon = QUOTE(WEAPON(var0))
