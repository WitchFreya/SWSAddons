#include "script_component.hpp"

#include "XtdGearModels.inc"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {  };
        weapons[] = {  };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"aceax_main"};
        skipWhenMissingDependencies = 1;
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
