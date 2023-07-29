#include "\x\SWS\addons\patches\script_component.hpp"

#include "CfgWeapons.inc"
#include "CfgVehicles.inc"

class CfgPatches
{
    class SWS_Patches_19th
    {
        name = "SWS_Patches_19th";
        units[] = { };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredAddons[] = { "19th_Weapons_F_BattleRifle", "DMNS_Vehicles_M511_Springbok" };
        addonRootClass = "SWS_Patches";
    };
};
