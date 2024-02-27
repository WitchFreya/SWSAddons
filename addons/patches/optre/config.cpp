#include "script_component.hpp"

class LowROF;

#include "CfgAmmo.inc"
#include "CfgWeapons.inc"
#include "CfgVehicles.inc"
#include "CfgFunctions.inc"

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
            "OPTRE_Weapons_Charges",
            "OPTRE_UNSC_Structure_Military",
            "OPTRE_Vehicles_Warthog",
            "OPTRE_Vehicles_HEV",
            "OPTRE_Vehicles_Pelican",
            "OPTRE_Vehicles_Pod",
            "OPTRE_Vehicles_Warthog_RC",
            "OPTRE_Vehicles_Sabre",
            "OPTRE_Vehicles_Wombat",
            "OPTRE_Vehicles_Air_Falcon" };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;

        addonRootClass = QUOTE(ADDON);
    };
};
