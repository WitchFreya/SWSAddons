#define CLASSES_VEHICLES \
  "SWS_Modules_ResupplyPlayerLoadouts"

class CfgVehicles {
  class Module_F;

  class SWS_Modules_ResupplyPlayerLoadouts : Module_F {
    META;
    scope = 1;
    scopeCurator = 2;
    category = "SWS_Utility";
    displayName = "Resupply Player Loadouts";
    icon = "\z\crowsza\addons\misc\data\resupplyplayerloadout.paa";
    functionPriority = 1;
    isGlobal = MODULE_LOCALITY_GLOBAL;
    function = QFUNC(moduleResupplyPlayerLoadouts);
    isTriggerActivated = FALSE;
    curatorCanAttach = TRUE;
  };
};
