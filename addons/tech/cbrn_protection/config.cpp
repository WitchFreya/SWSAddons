#include "script_component.hpp"

#include "CfgGlasses.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    ammo[] = { };
    magazines[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      QUOTE(ADDON)
      , "OPTRE_Misc_Objects"
      , "sws_main"
      , "sws_common"
    };
    VERSION_CONFIG;
  };
};
