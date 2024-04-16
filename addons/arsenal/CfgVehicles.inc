#define CLASSES_VEHICLES \
  "SWS_Modules_Arsenal_AddFullArsenal"

class CfgVehicles {
  class SWS_ModuleBase;

  class SWS_Modules_Arsenal_AddFullArsenal : SWS_ModuleBase {
    curatorCanAttach = TRUE;
    icon = QPATHTOEF(main,data\sws_icon_howl_ca.paa);
    category = "SWS_Utility";
    displayName = "Add SWS Arsenal";
    function = QFUNC(moduleAddFullArsenal);
  };
};
