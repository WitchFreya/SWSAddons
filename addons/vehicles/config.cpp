#include "script_component.hpp"

#include "CfgVehicles.inc"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = { CLASSES_VEHICLES };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { 
            "sws_main",
            "sws_weapons",
            "A3_Armor_F_EPB",
            "ace_medical",
            "OPTRE_UNSC_Units_Army",
            "B_19thUNSC"
        };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};