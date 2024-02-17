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
class Extended_PostInit_EventHandlers {
  class ADDON {
    init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
  };
};
class Extended_Killed_EventHandlers {
  // Patch the M41 + derivatives to replace the object with the base when it's destroyed
  class OPTRE_Static_M41 {
    class SUBADDON {
      clientKilled = QUOTE([ARR_2(_this select 0,""OPTRE_Static_Base_Turret"")] call FUNC(optreReplaceStatic));
    };
  };
  class OPTRE_Static_ATGM {
    class SUBADDON {
      clientKilled = QUOTE([ARR_2(_this select 0,""OPTRE_Static_Base_Turret"")] call FUNC(optreReplaceStatic));
    };
  };
  class OPTRE_Static_AA {
    class SUBADDON {
      clientKilled = QUOTE([ARR_2(_this select 0,""OPTRE_Static_Base_Turret"")] call FUNC(optreReplaceStatic));
    };
  };
  class OPTRE_Static_FG75 {
    class SUBADDON {
      clientKilled = QUOTE([_this select 0] call FUNC(optreReplaceStatic));
    };
  };
};
