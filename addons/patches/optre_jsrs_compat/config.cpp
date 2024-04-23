#include "script_component.hpp"

class Mode_SemiAuto;
class StandardSound;
class Single;

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
    requiredAddons[] = {"OPTRE_JSRS_Sounds"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
