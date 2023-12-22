#include "script_component.hpp"

#include "CfgVehicles.inc"
#include "EventHandlers.inc"

class CfgPatches
{
  class SUBADDON
  {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "OPTRE_Vehicles_Air", "OPAEX_Hornet", "OPAEX_D20", "OPAEX_Functions" };
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
