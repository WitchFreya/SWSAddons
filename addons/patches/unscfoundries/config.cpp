#include "script_component.hpp"

class CBA_Extended_EventHandlers_Base;
class Components;
class EventHandlers;
class Reflectors;
class Right;

#include "CfgVehicles.inc"
#include "CfgMagazineWells.inc"

class CfgPatches
{
  class SUBADDON
  {
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
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
