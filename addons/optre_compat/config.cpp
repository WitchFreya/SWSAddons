#include "script_component.hpp"

class EventHandlers;
class CBA_Extended_EventHandlers_Base;

#include "CfgWeapons.inc"
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
    requiredAddons[] = {
      "cba_xeh"
      , "OPTRE_Weapons"
      , "OPTRE_UNSC_Structure_Military"
      , "OPTRE_Vehicles"
      , "OPTRE_Vehicles_Air"
      , "OPTRE_ACE_Compat"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
