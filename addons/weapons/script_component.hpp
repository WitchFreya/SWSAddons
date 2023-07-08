#define COMPONENT weapons
#include "\x\SWS\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_WEAPONS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\SWS\addons\main\script_macros.hpp"

#define WEAPON_META(var0,scope) \
    ITEM_META(scope);           \
    baseweapon = QUOTE(WEAPON(var0))

#define WEAPON(var0) TRIPLES(PREFIX,Weapon,var0)
#define MAGAZINE(var0) TRIPLES(PREFIX,Magazine,var0)
#define AMMO(var0) TRIPLES(PREFIX,B,var0)
#define QWEAPON(var0) QUOTE(WEAPON(var0))
#define QMAGAZINE(var0) QUOTE(MAGAZINE(var0))
#define QAMMO(var0) QUOTE(AMMO(var0))
#define GRENADE(var0) AMMO(DOUBLES(Grenade,var0))
#define QGRENADE(var0) QUOTE(GRENADE(var0))
#define MUZZLE(var0) TRIPLES(PREFIX,Muzzle,var0)
#define QMUZZLE(var0) QUOTE(MUZZLE(var0))
