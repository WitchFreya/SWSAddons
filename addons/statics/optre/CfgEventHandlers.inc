class Extended_Killed_EventHandlers {
  // Patch the M41 + derivatives to replace the object with the base when it's destroyed
  class OPTRE_Static_M41 {
    class SUBADDON {
      clientKilled = QUOTE([ARR_2(_this select 0,""OPTRE_Static_Base_Turret"")] call FUNC(delayedReplace));
    };
  };
  class OPTRE_Static_ATGM {
    class SUBADDON {
      clientKilled = QUOTE([ARR_2(_this select 0,""OPTRE_Static_Base_Turret"")] call FUNC(delayedReplace));
    };
  };
  class OPTRE_Static_AA {
    class SUBADDON {
      clientKilled = QUOTE([ARR_2(_this select 0,""OPTRE_Static_Base_Turret"")] call FUNC(delayedReplace));
    };
  };
  class OPTRE_Static_FG75 {
    class SUBADDON {
      clientKilled = QUOTE([_this select 0] call FUNC(delayedReplace));
    };
  };
};
