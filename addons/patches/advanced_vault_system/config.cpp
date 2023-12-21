#include "script_component.hpp"

class Extended_PreInit_EventHandlers
{
  class SUBADDON
  {
    // Undefined variable in expression error — uncertain if this will work.
    init = "if (isNil {AVS_isUseRollOnEnd}) then { AVS_isUseRollOnEnd = false; };";
  };
};

class CfgPatches
{
  class SUBADDON
  {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"APS_System"};
    skipWhenMissingDependencies = 1;
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
