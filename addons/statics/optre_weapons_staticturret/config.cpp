#include "script_component.hpp"

#include "OPTRE_DestructionEffectsTemplate.inc"
#include "CfgEventHandlers.inc"
#include "CfgVehicles.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    ammo[] = { };
    magazines[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"OPTRE_Weapons_StaticTurret"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
