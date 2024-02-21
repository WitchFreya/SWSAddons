#include "script_component.hpp"
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
    requiredAddons[] = {"Splits_Vehicles_Air_Pelican"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
