#include "script_component.hpp"

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
    requiredAddons[] = { };
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
