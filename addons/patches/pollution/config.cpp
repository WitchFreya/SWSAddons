#include "script_component.hpp"
#include "CfgAmmo.inc"
#include "CfgWeapons.inc"
#include "CfgVehicles.inc"

class CfgPatches {
  class SUBADDON {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSSES_WEAPONS };
    magazines[] = { };
    ammo[] = { CLASSES_AMMO };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { };
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
