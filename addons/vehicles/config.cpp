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
            "ace_medical"
        };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
