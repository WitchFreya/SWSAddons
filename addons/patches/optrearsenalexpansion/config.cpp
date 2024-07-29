#include "script_component.hpp"

#include "CfgVehicles.inc"
#include "EventHandlers.inc"

delete RscDisplayAttributesModuleOPAEX_Glassing;

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "OPTRE_Vehicles_Air", "OPAEX_Hornet", "OPAEX_D20", "OPAEX_Functions", "OPAEX_Glassing" };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
