#include "script_component.hpp"

class CfgPatches
{
  class ADDON
  {
    name = QUOTE(COMPONENT);
    units[] = {};
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"sws_main", "sws_common", "ace_medical_treatment"};
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
