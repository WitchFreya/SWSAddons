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
class Extended_Killed_EventHandlers {
  class CAManBase {
    class ADDON {
      clientKilled = QUOTE(_this call FUNC(onKilled));
    };
  };
};
class Extended_Respawn_EventHandlers {
  class CAManBase {
    class ADDON {
      clientRespawn = QUOTE(_this call FUNC(onRespawn));
    };
  };
};
class Extended_Deleted_EventHandlers {
  class ModuleCurator_F {
    class ADDON {
      deleted = QUOTE(_this call FUNC(onCuratorDeleted));
    };
  };
};
