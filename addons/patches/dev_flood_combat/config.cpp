#include "script_component.hpp"

class CBA_Extended_EventHandlers_Base;
class EventHandlers;

#include "CfgVehicles.inc"

class CfgPatches {
  class SUBADDON {
    skipWhenMissingDependencies = TRUE;
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "dev_flood_combat"
      , "cba_xeh"
    };
    VERSION_CONFIG;
  };
};
