#include "script_component.hpp"

#include "CfgVehicles.inc"
#include "CfgWeapons.inc"
#include "CfgAmmo.inc"
#include "CfgMagazines.inc"


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
    requiredAddons[] = {"MELB", "ace_hellfire"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
