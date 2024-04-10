#include "script_component.hpp"

#include "CfgMagazines.inc"
#include "CfgMagazineWells.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { CLASSES_MAGAZINES };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"OPTRE_Weapons"};
    VERSION_CONFIG;
  };
};
