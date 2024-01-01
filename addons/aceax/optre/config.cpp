#include "script_component.hpp"

#include "XtdGearInfos.inc"
#include "XtdGearModels.inc"

class CfgPatches
{
  class SUBADDON
  {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "OPTRE_Weapons" };
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
  };
};
