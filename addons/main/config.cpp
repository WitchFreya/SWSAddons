#include "script_component.hpp"

#include "CfgFactionClasses.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"Extended_EventHandlers", "cba_main"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};

VERSIONING
