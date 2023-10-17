#include "script_component.hpp"

#include "defines.hpp"
#include "CfgEventHandlers.inc"
#include "ace_arsenal_display.inc"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_arsenal"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
