class Extended_PreInit_EventHandlers {
  class OPAEX_Skeleton_Options {
    init = QUOTE(call COMPILE_SUBSCRIPT(XEH_preInit));
    clientInit = QUOTE(call COMPILE_SUBSCRIPT(XEH_preClientInit));
  };
};
