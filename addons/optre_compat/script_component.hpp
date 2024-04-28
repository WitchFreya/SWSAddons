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
