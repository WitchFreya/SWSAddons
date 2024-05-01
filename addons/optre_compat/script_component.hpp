#define COMPONENT optre_compat
#define COMPONENT_BEAUTIFIED OPTRE Compatibility Patches
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_OPTRE_COMPAT
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_OPTRE_COMPAT
  #define DEBUG_SETTINGS DEBUG_SETTINGS_OPTRE_COMPAT
#endif

#include "\x\sws\addons\main\script_macros.hpp"

#define CBA_PATCH                                                         \
  class EventHandlers : EventHandlers {                                   \
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {}; \
  }

// CfgGlasses mode property from https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide#Facewear_Configuration
#define GLASSES_MODE_NONE 0 // Not supported according to BIKI
#define GLASSES_MODE_DIVING 1 // Only appear while swimming
#define GLASSES_MODE_GOGGLES 2 // Only overwater
#define GLASSES_MODE_NVG 3 // not supported; probably should check at some point?
#define GLASSES_MODE_MULTIPURPOSE 4 // Above and below water
