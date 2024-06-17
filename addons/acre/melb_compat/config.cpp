#include "script_component.hpp"

class AcreIntercoms;
class Intercom_1;

#include "CfgVehicles.inc"

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
      "acre_main"
      , "acre_sys_intercom"
      , "MELB"
      , "sws_patches_melb_reborn"
      , "sws_main"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
