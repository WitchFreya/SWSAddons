#include "script_component.hpp"

class ACE_Actions;
class ACE_MainActions;
class Turrets;
class MainTurret;

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
    requiredAddons[] = {"OPTRE_Weapons", "ace_interaction"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
