#include "script_component.hpp"

#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "SWS_Main" };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};


