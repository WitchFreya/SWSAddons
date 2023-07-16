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
#define SHELL(var0) GRENADE(DOUBLES(var0,Shell))
#define QSHELL(var0) QUOTE(SHELL(var0))
#define MUZZLE(var0) TRIPLES(PREFIX,Muzzle,var0)
#define QMUZZLE(var0) QUOTE(MUZZLE(var0))
#define GMAGAZINE(var0) MAGAZINE(DOUBLES(Grenade,var0))
#define QGMAGAZINE(var0) QUOTE(GMAGAZINE(var0))
#define GSMAGAZINE(var0,var1) GMAGAZINE(TRIPLES(var0,var1,Shell))
#define QGSMAGAZINE(var0,var1) QUOTE(GSMAGAZINE(var0,var1))
#define OPTIC(var0) TRIPLES(PREFIX,Optic,var0)
#define QOPTIC(var0) QUOTE(OPTIC(var0))

#define MAGAZINE_HOPPER_MASS 10
#define WEAPON_HOPPER_MASS 30
#define WEAPON_HOPPER_LOADED_MASS 40
