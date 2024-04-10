#include "script_component.hpp"

class CBA_Extended_EventHandlers_Base;
class Components;
class EventHandlers;
class Reflectors;
class Right;

#include "CfgVehicles.inc"
#include "CfgMagazines.inc"
#include "CfgMagazineWells.inc"
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
      "B_19thUNSC"
      , "DMNS_Shortsword_F"
      , "DMNS_Vehicles_SOEIV"
      , "Splits_Vehicles_Air_Pelican"
      , "Dmns_Weapons_F_MachineGuns"
      , "Split_Weapons_Ammo"
      , "DMNS_Weapons_Ammo"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
