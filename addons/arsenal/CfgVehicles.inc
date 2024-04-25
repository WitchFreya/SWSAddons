#define CLASSES_VEHICLES \
  "SWS_Modules_Arsenal_AddFullArsenal"

class CfgVehicles {
  class Module_F;

  class SWS_Modules_Arsenal_AddFullArsenal : Module_F {
    META;
    scope = 1;
    scopeCurator = 2;
    functionPriority = 1;
    isGlobal = 1;
    isTriggerActivated = FALSE;
    curatorCanAttach = TRUE;
    icon = QPATHTOEF(main,data\sws_icon_howl_ca.paa);
    category = "SWS_Utility";
    displayName = "Add SWS Arsenal";
    function = QFUNC(moduleAddFullArsenal);
  };
};
