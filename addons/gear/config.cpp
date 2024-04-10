#include "script_component.hpp"

class ItemInfo;

#include "CfgWeapons.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    author = QUOTE(AUTHOR);
    units[] = { };
    weapons[] = {  };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "LM_OPCAN_UNSC"
      , "sws_main"
      , "sws_tech"
      , "sws_common"
      , "OPTRE_UNSC_Units"
    };
    VERSION_CONFIG;
  };
};
