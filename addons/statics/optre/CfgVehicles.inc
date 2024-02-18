#define CLASSES_VEHICLES \
  "SWS_Static_FG75"

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
  // FG75 AT Gun
  class OPTRE_Static_FG75 : StaticMGWeapon {
    armor = 400;
    class DestructionEffects : GVAR(OPTRE_DestructionEffectsTemplate) {};
  };
  class SWS_Static_FG75 : OPTRE_Static_FG75 {
    ITEM_META(2);
    displayName = QNAME(FG75 Anti-Tank Gun);
    side = SIDE_BLUFOR;
    faction = "SWS_UNSC";
    crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
  };
};
