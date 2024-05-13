class Extended_PreStart_EventHandlers {
  class ADDON {
    init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    clientInit = QUOTE(call COMPILE_SCRIPT(XEH_preClientStart));
  };
};
class Extended_PreInit_EventHandlers {
  class ADDON {
    init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    clientInit = QUOTE(call COMPILE_SCRIPT(XEH_preClientInit));
  };
};
class Extended_PostInit_EventHandlers {
  class ADDON {
    init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
    clientInit = QUOTE(call COMPILE_SCRIPT(XEH_postClientInit));
  };
};
