#include "script_component.hpp"

#include "CfgFactionClasses.inc"

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
