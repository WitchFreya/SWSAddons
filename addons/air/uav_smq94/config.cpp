#include "script_component.hpp"

class HitPoints;
class HitHull;
class Turrets;
class MainTurret;
class OpticsIn;
class Wide;
class AssembleInfo;

#include "CfgVehicles.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "melb"
      , "DMNS_Supplies_F_Bags"
      , "DMNS_Air_UAV_01"
      , "sws_main"
      , "sws_aceax"
    };
    VERSION_CONFIG;
  };
};
