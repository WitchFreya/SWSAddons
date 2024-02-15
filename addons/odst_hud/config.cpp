#include "script_component.hpp"

class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
class Components;

class Controls;
class HScrollbar;
class VScrollbar;
class RscCustomInfoMiniMap;

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
    requiredAddons[] = {
      // TODO: Move this into an optional subcomponent that loads additional behavior.
      "diwako_dui_main"
      , "OPTRE_Hud"
      , "sws_main"
      , "sws_common"
      // The patch is used to remove the existing behavior for the HUD so we can override it.
      , "sws_patches_optre_functionslibrary"
    };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
