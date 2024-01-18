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
    requiredAddons[] = {
      "dev_flood_combat"
      , "cba_xeh"
    };
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
  };
};
