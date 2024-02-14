#include "script_component.hpp"

class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
class Components;

#include "RscCommon.inc"
#include "CfgVehicles.inc"
#include "SWS_RscCustomInfoODSTRadar.inc"
#include "CfgEventHandlers.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    units[] = { };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "sws_main", "sws_common" };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
