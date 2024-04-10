#include "script_component.hpp"

class AnimationSources;
class Mode_Burst;

#include "CfgVehicles.inc"
#include "CfgWeapons.inc"
#include "CfgMagazines.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"MELB"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
