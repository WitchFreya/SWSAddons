#include "script_component.hpp"

class CBA_Extended_EventHandlers_Base;
class EventHandlers;

#include "CfgVehicles.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "TCGM_Divinities" };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
