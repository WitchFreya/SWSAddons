#include "script_component.hpp"

class RscStandardDisplay;

#include "RscDisplayStart.inc"
#include "RscDisplayLoading.inc"
#include "RscDisplayLoadMission.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"19th_Fleet_Armor"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
