#define COMPONENT vehicles
#define COMPONENT_BEAUTIFIED Vehicles
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

// scopeArsenal not necessary for vehicles.
#undef SCOPE
#define SCOPE(var0) \
    scope = var0;   \
    scopeCurator = var0

#define MODE_AUTOMATIC_ZEROING 1
#define MODE_MANUAL_ZEROING 2
#define MODE_TARGET_LEAD 4
#define MODE_FCS_PREDICTION 16

#define GREEN_NET_TEXTURE "A3\Armor_F\Data\camonet_nato_green_co.paa"
#define CSAT_NET_TEXTURE "A3\Armor_F\Data\camonet_csat_hex_green_co.paa"
#define AAF_CAGE_TEXTURE "A3\Armor_F\Data\cage_aaf_co.paa"
