#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {  };
        weapons[] = {  };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"dmns_air"};
        skipWhenMissingDependencies = 1;
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
