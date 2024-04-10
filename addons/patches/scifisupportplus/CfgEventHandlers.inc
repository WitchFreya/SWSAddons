class Extended_PreStart_EventHandlers {
  class ADDON {
    init = QUOTE(call COMPILE_SUBSCRIPT(XEH_preStart));
  };
};
class Extended_PreInit_EventHandlers {
  class ADDON {
    init = QUOTE(call COMPILE_SUBSCRIPT(XEH_preInit));
  };
};
class Extended_PostInit_EventHandlers {
  class ADDON {
    init = QUOTE(call COMPILE_SUBSCRIPT(XEH_postInit));
  };
};
