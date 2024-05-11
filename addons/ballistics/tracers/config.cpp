#include "script_component.hpp"

#include "CfgAmmo.inc"

#define REQUIRED_ADDONS_BASE  \
  "OPTRE_Weapons"             \
  , "OPTRE_ACE_Compat"        \
  , QUOTE(ADDON)

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { CLASSES_AMMO };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {REQUIRED_ADDONS_BASE};
    VERSION_CONFIG;
  };

  // Ensure this loads after Wentis if it exists.
  class DOUBLES(SUBADDON,Wentis13_Blue_Tracers) : SUBADDON {
    requiredAddons[] = {
      REQUIRED_ADDONS_BASE
      ,"Wentis13_Blue_Tracers"
    };
    skipWhenMissingDependencies = TRUE;
  };
};
