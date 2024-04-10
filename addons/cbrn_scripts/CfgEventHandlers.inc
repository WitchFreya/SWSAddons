class Extended_PreStart_EventHandlers {
  class ADDON {
    init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
  };
};
class Extended_PreInit_EventHandlers {
  class ADDON {
    init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
  };
};
class Extended_Init_EventHandlers {
  class CAManBase {
    // Their default EH tries to suspend in an unscheduled environment.
		class CBRN_addChemicalHandler {
			init = QUOTE(_this call FUNC(addChemicalHandler));
		};
	};
};
class Extended_Respawn_EventHandlers {
  class CAManBase {
    class ADDON {
      respawn = QUOTE(_this call FUNC(addChemicalHandler));
    };
  };
};
