#include "script_component.hpp"

#include "CfgGlasses.inc"

class EventHandlers;
class CBA_Extended_EventHandlers_Base;
#include "CfgVehicles.inc"

#include "CfgWeapons.inc"

class CfgPatches {
  class ADDON {
    author = QUOTE(AUTHOR);
    name = QUOTE(COMPONENT);
    units[] = { };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    skipWhenMissingDependencies = TRUE;
    requiredAddons[] = {
      "cba_xeh"
      , "OPTRE_Weapons"
      , "OPTRE_UNSC_Structure_Military"
      , "OPTRE_Vehicles"
      , "OPTRE_Vehicles_Air"
      , "OPTRE_Misc"
      , "OPTRE_ACE_Compat"
    };
    VERSION_CONFIG;
  };
};
