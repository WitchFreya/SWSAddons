#include "script_component.hpp"

class Turrets;
class MainTurret;

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
    requiredAddons[] = {"OPTRE_FC_Weapons"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};

