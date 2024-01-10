#include "script_component.hpp"

#include "CfgVehicles.inc"

class CfgPatches
{
  class SUBADDON
  {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "V_FZ_Ground_Vehicles" };
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
  };
};
