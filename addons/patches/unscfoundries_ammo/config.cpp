#include "script_component.hpp"
#include "CfgMagazines.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"DMNS_Weapons_Ammo","Split_Weapons_Ammo"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
