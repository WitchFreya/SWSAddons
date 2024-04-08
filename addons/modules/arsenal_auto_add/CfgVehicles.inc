#define CLASSES_VEHICLES \
  "SWS_Module_ArsenalAutoAdd"

class CfgVehicles {
  class ACE_Module;
  class SWS_Module_ArsenalAutoAdd : ACE_Module {
    icon = QPATHTOEF(main,data\sws_icon_howl_ca.paa);
    scope = 2;
    displayName = "ACE Arsenal AutoAdd";
    category = "SWS_Utility";
    function = QFUNC(moduleArsenalAddAll);
    functionPriority = 10;
    isGlobal = FALSE;
    isTriggerActivated = FALSE;
    isDisposable = FALSE;
    author = QUOTE(AUTHOR);

    class ModuleDescription : ModuleDescription {
      description = "Automatically add SWS items to synchronized ACE arsenals.";
      sync[] = {"Anything"};
    };

    class Arguments: ArgumentsBaseUnits {
      class Exclude {
        displayName = "Excluded Items:";
        description = "A comma-delimited string of class names to exclude from the arsenal.";
        typeName = "STRING";
        defaultValue = "";
      };

      class AllowDragging {
        displayName = "Allow ACE Dragging";
        description = "Whether synchronized objects can be dragged.";
        typeName = "BOOL";
        defaultValue = FALSE;
      };

      class AllowCarrying {
        displayName = "Allow ACE Carrying";
        description = "Whether synchronized objects can be carried.";
        typeName = "BOOL";
        defaultValue = FALSE;
      };
    };
  };
};
