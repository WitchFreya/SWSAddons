#include "script_component.hpp"

#include "CfgFactionClasses.hpp"

class CargoTurret_01;
class CargoTurret_02;
class CargoTurret_03;
class CodRiverTurret;
class CopilotTurret;
class MainTurret;
class LMG_Turret;
class LoadmasterTurret;
class TopTurret;
class Turrets;

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    author = QUOTE(AUTHOR);
    authors[] = {AUTHORS};
    skipWhenMissingDependencies = TRUE;
    units[] = {CLASSES_VEHICLES};
    weapons[] = {};
    requiredVersion = 1.62;
    requiredAddons[] = {
      "OPTRE_core"
      , "OPTRE_Vehicles_Elephant"
      , "OPTRE_Vehicles_M494"
      , "OPTRE_Vehicles_M808B2"
    };
  };
};
