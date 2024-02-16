#include "script_component.hpp"

#include "CfgEventHandlers.inc"
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
    requiredAddons[] = {"OPTRE_Weapons_StaticTurret"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
