#include "script_component.hpp"

class StandardSound;
class Single;

#include "CfgWeapons.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"OPTRE_JSRS_Sounds"};
    units[] = {};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
