#include "script_component.hpp"

#include "CfgVehicles.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { CLASSES_VEHICLE };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "DMNS_Air_UAV_01", "SWS_Main" };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
