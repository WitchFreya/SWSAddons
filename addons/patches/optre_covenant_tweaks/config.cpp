#include "script_component.hpp"

class Turrets;
class MainTurret;

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
      "OPTRE_FC_Weapons_Tyrant"
      , "OPTRE_FC_Weapons_Shrike"
      , "OPTRE_FC_Weapons_Shade"
      , "OPTRE_FC_Weapons_Draugr"
    };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};

