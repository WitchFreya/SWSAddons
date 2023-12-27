#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "CfgVehicles.inc"

class CfgPatches
{
  class ADDON
  {
    name = QUOTE(COMPONENT);
    units[] = { CLASSES_VEHICLES };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "A3_Modules_F_Multiplayer", "sws_common", "sws_logic" };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
