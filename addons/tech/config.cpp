#include "script_component.hpp"

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "RscInGameUI.inc"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { CLASSES_VEHICLE };
        weapons[] = { CLASSES_WEAPONS };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "DMNS_Air_UAV_01", "SWS_Main", "SWS_Logic" };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
