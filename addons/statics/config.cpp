#include "script_component.hpp"

#include "CfgEventHandlers.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    units[] = {};
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "OPTRE_Weapons_StaticTurret", "sws_main", "sws_common"};
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
