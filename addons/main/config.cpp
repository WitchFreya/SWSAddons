#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "cba_main" };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};

VERSIONING
