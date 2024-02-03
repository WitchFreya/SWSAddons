#include "script_component.hpp"

#include "SensorTargetTemplates.inc"
#include "CfgMagazineWells.inc"

class CfgPatches
{
  class ADDON
  {
    name = QUOTE(COMPONENT);
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"sws_main"};
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
