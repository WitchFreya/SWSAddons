#include "script_component.hpp"

class ItemInfo;

#include "CfgWeapons.inc"
#include "XtdGearInfos.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    ammo[] = { };
    magazines[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"sws_gear"};
    VERSION_CONFIG;
  };
};
