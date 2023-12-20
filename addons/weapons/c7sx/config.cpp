#include "script_component.hpp"

#include "CfgAmmo.inc"
#include "CfgMagazines.inc"
#include "CfgWeapons.inc"

class CfgPatches
{
  class SUBADDON
  {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { CLASSES_MAGAZINES };
    ammo[] = { CLASSES_AMMO };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "OPTRE_Weapons_Sticky"
    };
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
