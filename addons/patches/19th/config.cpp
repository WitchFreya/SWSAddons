#include "script_component.hpp"

#define ATT_POINTER_OPTRE_RAIL "OPTRE_BMR_Laser", "OPTRE_BMR_Vis_Red_Laser", "OPTRE_BMR_MEQ_Flashlight"

#include "CfgWeapons.inc"
#include "CfgVehicles.inc"

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
        requiredAddons[] = { "19th_Weapons_F_BattleRifle", "DMNS_Vehicles_M511_Springbok" };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;

        addonRootClass = QUOTE(ADDON);
    };
};
