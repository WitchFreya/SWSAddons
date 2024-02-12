#include "script_component.hpp"

#include "CfgFunctions.inc"
#include "CfgEventHandlers.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "optre_functionslibrary", "sws_odst_hud" };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
