#include "script_component.hpp"

#include "CfgWeapons.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "OPTRE_Weapons_MG"
    };
    VERSION_CONFIG;
  };
};
