#include "script_component.hpp"

#include "CfgWeapons.inc"
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
    requiredAddons[] = {"OPTRE_Vehicles_Hornet"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
