#include "script_component.hpp"

class ItemInfo;

#include "CfgWeapons.inc"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    author = QUOTE(AUTHOR);
    units[] = { };
    weapons[] = {  };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "sws_main"
      , "sws_tech"
      , "sws_common"
      , "OPTRE_UNSC_Units"
    };
    VERSION_CONFIG;
  };
};
