#include "script_component.hpp"

class SWS_SensorTargetTemplate
{
    minRange = 8000;
    maxRange = 8000;
    objectDistanceLimitCoef = -1;
    viewDistanceLimitCoef = -1;
};

#include "CfgAmmo.inc"
#include "CfgMagazines.inc"
#include "CfgVehicles.inc"
#include "CfgWeapons.inc"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = { CLASSES_VEHICLES };
        weapons[] = { CLASSES_WEAPONS };
        magazines[] = { CLASSES_MAGAZINES };
        ammo[] = { CLASSES_AMMO };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Armor_F_EPB",
            "A3_Weapons_F_Tank",
            "ace_medical",
            "OPTRE_UNSC_Units_Army",
            "sws_common",
            "sws_main",
            "sws_weapons"
        };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
