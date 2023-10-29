#define COMPONENT weapons
#define COMPONENT_BEAUTIFIED Weapons
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

#define WEAPON_META(var0,var1) \
    ITEM_META(var1);           \
    baseweapon = QUOTE(DOUBLES(SWS_Weapon,var0))

#define MAGAZINE_M24RLD_MASS 10
#define WEAPON_M24RLD_MASS 30
#define WEAPON_M24RLD_LOADED_MASS 40

#define ATT_POINTER_OPTRE_RAIL_M12 "OPTRE_M12_Laser", "OPTRE_M12_Flashlight", "OPTRE_M12_Vis_Red_Laser"
#define ATT_POINTER_OPTRE_RAIL "OPTRE_BMR_Laser", "OPTRE_BMR_Vis_Red_Laser", "OPTRE_BMR_MEQ_Flashlight"
#define ATT_POINTER_OPTRE_MUZZLE "OPTRE_BMR_Flashlight", "OPTRE_BMR_Flashlight_Laser", "OPTRE_BMR_Flashlight_Vis_Red_Laser"
#define ATT_POINTER_ACE "acc_pointer_IR", "ACE_acc_pointer_red", "ACE_acc_pointer_green_IR", "ACE_acc_pointer_green"
