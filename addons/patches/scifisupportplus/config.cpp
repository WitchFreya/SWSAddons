#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "CfgAmmo.inc"
#include "CfgMagazines.inc"

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
    requiredAddons[] = { "OPAEX_AirCore", "OPAEX_Glassing", "PHAN_OPAEX", "phan_scifisupportplus" };
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
