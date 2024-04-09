#include "script_component.hpp"

class UserActions;

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
    requiredAddons[] = { "SAG6_Pelicans" };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
