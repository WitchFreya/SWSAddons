#include "script_component.hpp"

#include "CfgWeapons.inc"
#include "CfgMagazines.inc"
#include "CfgAmmo.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"ace_missileguidance"};
    VERSION_CONFIG;
  };
};
