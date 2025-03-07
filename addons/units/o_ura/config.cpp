#include "script_component.hpp"

#include "CfgWeapons.inc"
#include "CfgFactionClasses.inc"
#include "CfgGroups.inc"

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
class EventHandlers;

#include "CfgVehicles.inc"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        author = QUOTE(AUTHOR);
        authors[] = {AUTHORS};
        skipWhenMissingDependencies = TRUE;
        units[] = {CLASSES_VEHICLES};
        weapons[] = {CLASSES_WEAPONS};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "ace_nouniformrestrictions"
            , "OPTRE_Core"
            , "OPTRE_Vehicles"
        };
        VERSION_CONFIG;
    };
};
