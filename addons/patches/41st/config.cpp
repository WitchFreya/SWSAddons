#include "script_component.hpp"

class CBA_Extended_EventHandlers_Base;
class EventHandlers;
class Turrets;
class MainTurret;
class NewTurret;
class Components;
class RCWSOptics;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
class CargoTurret_01;

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
        "Retirement"
        , "MyAddon" // I wish I was joking, they actually called it that.
        , "41ST_ODST_FACTIONS"
        , "OPTRE_Vehicles_Pelican"
        , "41_Hogosha"
      };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
