class CfgVehicles {
  class StaticAAWeapon;
  class StaticATWeapon;
  class StaticMGWeapon;
  // TODO: Remove the crew and such.
  class OPTRE_Static_Base_Turret : StaticMGWeapon {
    // There's no reason to have this be an object, it looks goofy.
    SCOPE(1);
    armor = 300;
  };
  // M79
  class OPTRE_Static_AA : StaticAAWeapon {
    armor = 300;
    class DestructionEffects : GVAR(OPTRE_DestructionEffectsTemplate) {};
  };
  // AT Rocket Turret
  class OPTRE_Static_ATGM : StaticATWeapon {
    armor = 300;
    class DestructionEffects : GVAR(OPTRE_DestructionEffectsTemplate) {};
  };
  // M41 LAAG
  class OPTRE_Static_M41 : StaticMGWeapon {
    armor = 300;
    // Based on the Stomper's effects
    class DestructionEffects : GVAR(OPTRE_DestructionEffectsTemplate) {};
  };
};
