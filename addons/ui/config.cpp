#include "script_component.hpp"

class Controls;
class RscActivePicture;
class RscActiveText;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscDisplayMPPlayers;
class RscMainMenuSpotlight;
class RscPicture;
class RscPictureKeepAspect;
class RscStandardDisplay;
class RscText;

#include "RscDisplayClient.inc"
#include "RscDisplayClientWait.inc"
#include "RscDisplayLoadMission.inc"
#include "RscDisplayMain.inc"
#include "RscDisplayStart.inc"

#include "RscDisplayLoading.inc"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "19th_Fleet_Armor" };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
