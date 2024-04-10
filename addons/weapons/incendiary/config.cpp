#include "script_component.hpp"

#include "CfgAmmo.inc"
#include "CfgMagazines.inc"
#include "CfgMagazineWells.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { CLASSES_MAGAZINES };
    ammo[] = { CLASSES_AMMO };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"OPTRE_Weapons"};
    VERSION_CONFIG;
  };
};
