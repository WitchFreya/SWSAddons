#include "script_component.hpp"

#include "CfgWeapons.inc"
#include "XtdGearInfos.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "LM_OPCAN_UNSC"
      , "sws_main"
      , "sws_tech"
      , "sws_common"
      , "OPTRE_UNSC_Units"
    };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
