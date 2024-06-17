#include "script_component.hpp"

class Weather;
class Overcast;

#include "world_vr_space.inc"

class CfgWorldList {
  class SWS_VR_Space;
};

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    ammo[] = { };
    magazines[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"OPTRE_Phobos"};
    VERSION_CONFIG;
  };
};
