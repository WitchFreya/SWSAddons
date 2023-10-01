#include "script_component.hpp"
#include "CfgVehicles.hpp"

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
        requiredAddons[] = { "crowsEW_emp" };
        // skipWhenMissingDependencies = 1; // TODO: enable once deps are enumerated
        VERSION_CONFIG;

        addonRootClass = QUOTE(ADDON);
    };
};
