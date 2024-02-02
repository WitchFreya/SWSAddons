#define COMPONENT vehicles
#define COMPONENT_BEAUTIFIED Vehicles
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_VEHICLES
  #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"

// scopeArsenal not necessary for vehicles.
#undef SCOPE
#define SCOPE(var0) \
  scope = var0;     \
  scopeCurator = var0

#define A3_TEX_CAMONET_GREEN "A3\Armor_F\Data\camonet_nato_green_co.paa"
#define A3_TEX_CAMONET_CSAT "A3\Armor_F\Data\camonet_csat_hex_green_co.paa"
#define A3_TEX_CAGE_AAF "A3\Armor_F\Data\cage_aaf_co.paa"
