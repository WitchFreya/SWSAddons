#include "script_component.hpp"

class SWS_SensorTargetTemplate
{
    minRange = 8000;
    maxRange = 8000;
    objectDistanceLimitCoef = -1;
    viewDistanceLimitCoef = -1;
};

class SWS_SensorDisplayTemplate
{
    componentType = "SensorsDisplayComponent";
    range[] = { 4000, 2000, 1000, 8000 };
    resource = "RscCustomInfoSensors";
};

class Components;
class SensorTemplateIR;
class SensorTemplateLaser;
class SensorTemplateDataLink;

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

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
            "A3_Armor_F_Gamma",
			"A3_Soft_F",
            "A3_Weapons_F_Tank",
            "ace_medical",
            "OPTRE_UNSC_Units_Army",
            "sws_units",
            "sws_common",
            "sws_main",
            "sws_weapons"
        };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
