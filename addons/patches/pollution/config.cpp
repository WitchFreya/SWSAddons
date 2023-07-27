#include "\x\SWS\addons\patches\script_component.hpp"
#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

class CfgPatches
{
    class SWS_Patches_Pollution
    {
        name = "SWS_Patches_Pollution";
        units[] = { };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredAddons[] = { "41ST_ODST_FACTIONS" };
        addonRootClass = "SWS_Patches";
    };
};
