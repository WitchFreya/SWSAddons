#include "script_component.hpp"

#include "CfgEventHandlers.hpp"

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
        requiredAddons[] = { "tfar_core" };
        skipWhenMissingDependencies = 1;
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
