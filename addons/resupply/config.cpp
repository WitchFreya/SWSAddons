#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {"Box_SWS_TeamBox","SWS_Ammo_SupplyPod_Empty","SWS_Ammo_SupplyPod_Basic","SWS_Ammo_SupplyPod_Medical","SWS_Ammo_SupplyPod_Howdy"};
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

#include cfgVehicles.inc
  
};