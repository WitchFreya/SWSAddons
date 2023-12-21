#include "script_component.hpp"

#include "CfgMagazines.inc"
#include "CfgMagazineWells.inc"

class CfgPatches
{
  class SUBADDON
  {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { CLASSES_MAGAZINES };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "OPTRE_Weapons_Ammo_Signal_Smoke"
    };
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
