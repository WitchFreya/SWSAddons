#include "script_component.hpp"

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.inc"
#include "RscInGameUI.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    author = QUOTE(AUTHOR);
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "OPTRE_UNSC_Units_Army", "sws_main" };
    VERSION_CONFIG;
  };
};
