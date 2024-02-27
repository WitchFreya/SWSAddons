#include "script_component.hpp"

class RscDisplayMPPlayers;
class RscPicture;
class RscStandardDisplay;
class RscActivePicture;
class RscActivePictureKeepAspect;

#include "RscDisplayStart.inc"
#include "RscDisplayLoading.inc"
#include "RscDisplayLoadMission.inc"
#include "RscDisplayClient.inc"
#include "RscDisplayClientWait.inc"
#include "RscDisplayMain.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"19th_Fleet_Armor"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
