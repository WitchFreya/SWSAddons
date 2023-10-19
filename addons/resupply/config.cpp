#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {CLASSES_VEHICLES};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OPTRE_Misc",
            "sws_weapons",
            "ace_medical_treatment"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};


class CfgVehicles {
    class NATO_Box_Base;
    class OPTRE_Ammo_SupplyPod_Empty;
    #include cfgVehicles.inc
};