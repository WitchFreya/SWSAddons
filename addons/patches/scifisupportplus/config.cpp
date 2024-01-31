#include "script_component.hpp"

#include "CfgAmmo.inc"
#include "CfgMagazines.inc"
#include "CfgEventHandlers.inc"

class CfgPatches
{
  class SUBADDON
  {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { CLASSES_AMMO };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "OPAEX_AirCore", "OPAEX_Glassing", "PHAN_OPAEX", "PHAN_ScifiSupportPlus" };
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
