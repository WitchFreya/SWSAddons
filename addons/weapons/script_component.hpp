#define COMPONENT weapons
#include "\x\SWS\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_WEAPONS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\SWS\addons\main\script_macros.hpp"

#define WEAPON_META(var0,var1) \
    ITEM_META(var1);           \
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

#define VEHICLE(var0) GVAR(DOUBLES(V,var0))
#define QVEHICLE(var0) QUOTE(VEHICLE(var0))

#define MAGAZINE_M24RLD_MASS 10
#define WEAPON_M24RLD_MASS 30
#define WEAPON_M24RLD_LOADED_MASS 40

#define ATT_POINTER_OPTRE_RAIL "OPTRE_BMR_Laser", "OPTRE_BMR_Vis_Red_Laser", "OPTRE_BMR_MEQ_Flashlight"
#define ATT_POINTER_OPTRE_MUZZLE "OPTRE_BMR_Flashlight", "OPTRE_BMR_Flashlight_Laser", "OPTRE_BMR_Flashlight_Vis_Red_Laser"
#define ATT_POINTER_ACE "acc_pointer_IR", "ACE_acc_pointer_red", "ACE_acc_pointer_green_IR", "ACE_acc_pointer_green"
