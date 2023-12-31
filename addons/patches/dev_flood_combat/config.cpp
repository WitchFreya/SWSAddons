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
      , "OPTRE_FC_Units_Elite"
      , "CBA_EventHandlers"
    };
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
  };
};
