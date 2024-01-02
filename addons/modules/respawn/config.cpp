#include "script_component.hpp"

#include "CfgVehicles.inc"

class CfgPatches
{
  class SUBADDON
  {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "A3_Modules_F_Multiplayer" };
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
  };
};
