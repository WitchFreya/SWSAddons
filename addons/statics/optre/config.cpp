#include "script_component.hpp"

#include "OPTRE_DestructionEffectsTemplate.inc"
#include "CfgEventHandlers.inc"
#include "CfgVehicles.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    ammo[] = { };
    magazines[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "OPTRE_Weapons_StaticTurret"
      , "OPTRE_Weapons_FG75"
      , "OPTRE_UNSC_Units_Army"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
