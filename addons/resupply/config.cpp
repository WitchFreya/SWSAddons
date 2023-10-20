#include "script_component.hpp"
#include "CfgEditorCategories.inc"
#include "CfgVehicles.inc"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {CLASSES_VEHICLES};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OPTRE_Misc",
            "sws_weapons",
            "ace_medical_treatment"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
