#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "ui\RscAttributes.inc"
#include "CfgRoles.inc"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "ace_dogtags", "ace_arsenal", "aceax_arsenal" };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
