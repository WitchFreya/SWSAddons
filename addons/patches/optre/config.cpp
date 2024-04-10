#include "script_component.hpp"

class CBA_Extended_EventHandlers_Base;
class EventHandlers;
class LowROF;

#include "CfgAmmo.inc"
#include "CfgWeapons.inc"
#include "CfgVehicles.inc"
#include "CfgFunctions.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "OPTRE_Weapons"
      , "OPTRE_UNSC_Structure_Military"
      , "OPTRE_Vehicles"
      , "OPTRE_Vehicles_Air"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
