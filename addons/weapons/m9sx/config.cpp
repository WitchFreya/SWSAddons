#include "script_component.hpp"

#include "CfgMagazines.inc"
#include "CfgAmmo.inc"
#include "CfgMagazineWells.inc"

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
    requiredAddons[] = { };
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
