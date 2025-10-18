#include "script_component.hpp"

class CBA_Extended_EventHandlers_Base;
class ItemInfo;

#include "CfgWeapons.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "LM_OPCAN_UNSC"
      , "OPTRE_UNSC_Units_Army"
    };
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
  };
};
