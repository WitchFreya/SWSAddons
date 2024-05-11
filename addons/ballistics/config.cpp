#include "script_component.hpp"

#include "CfgAmmo.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    author = QUOTE(AUTHOR);
    ammo[] = { };
    units[] = { };
    weapons[] = {  };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "optre_weapons"
      , "sws_main"
      , "sws_common"
    };
    VERSION_CONFIG;
  };
};
