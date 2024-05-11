#define CLASSES_AMMO  \
  "B_65x39_Case_Blue"                     \
  , "B_65x39_Case_Orange"                 \
  , "B_65x39_Caseless_Blue"               \
  , "B_65x39_Caseless_Orange"             \
  , "B_762x51_Tracer_Blue"                \
  , "B_762x51_Tracer_Orange"              \
  , "OPTRE_B_5x23_Caseless_Tracer_Blue"   \
  , "OPTRE_B_5x23_Caseless_Tracer_Green"  \
  , "OPTRE_B_5x23_Caseless_Tracer_Orange" \
  , "OPTRE_B_762x51_Tracer_Green"         \
  , "OPTRE_B_762x51_Ball_Tracer_Blue"     \
  , "OPTRE_B_762x51_Ball_Tracer_Orange"   \
  , "OPTRE_B_95x40_Tracer_Blue"           \
  , "OPTRE_B_95x40_Tracer_Orange"         \
  , "OPTRE_B_95x40_Tracer_Green"

class CfgAmmo {
  class B_65x39_Case;
  class B_65x39_Caseless;
  class B_762x51_Ball;
  class OPTRE_B_5x23_Caseless;
  class OPTRE_B_762x51_Tracer;
  class OPTRE_B_95x40_Tracer;

  // Base game 6.5x39 Case - Used for MSBS - Red (Base), Green and yellow already exist.
  // Tracer format is B_65x39_Case_COLOR : B_65x39_Case
  class B_65x39_Case_Blue : B_65x39_Case {
    model = QPATHTOF_TRACER_BLUE;
  };
  class B_65x39_Case_Orange : B_65x39_Case {
    model = QPATHTOF_TRACER_ORANGE;
  };

  // Base game 6.5x39mm Caseless - Used for MX - Green and Yellow already exist
  // Tracer format is B_65x39_Case_COLOR : B_65x39_Caseless
  class B_65x39_Caseless_Blue : B_65x39_Caseless {
    model = QPATHTOF_TRACER_BLUE;
  };
  class B_65x39_Caseless_Orange : B_65x39_Caseless {
    model = QPATHTOF_TRACER_ORANGE;
  };

  // Base game 7.62x51 ammo - White (base), Red, Green, and Yellow already exist.
  // Tracer Format is B_762x51_Tracer_COLOR : B_762x51_Ball
  class B_762x51_Tracer_Blue : B_762x51_Ball {
    model = QPATHTOF_TRACER_BLUE;
  };
  class B_762x51_Tracer_Orange : B_762x51_Ball {
    model = QPATHTOF_TRACER_ORANGE;
  };

  // 5x23mm - M7 SMG - Red and Yellow exist
  // Tracer format is OPTRE_B_5x23_Caseless_Tracer_COLOR : OPTRE_B_5x23_Caseless
  class OPTRE_B_5x23_Caseless_Tracer_Blue : OPTRE_B_5x23_Caseless {
    model = QPATHTOF_TRACER_BLUE;
  };
  class OPTRE_B_5x23_Caseless_Tracer_Green : OPTRE_B_5x23_Caseless {
    model = QPATHTOF_TRACER_GREEN;
  };
  class OPTRE_B_5x23_Caseless_Tracer_Orange : OPTRE_B_5x23_Caseless {
    model = QPATHTOF_TRACER_ORANGE;
  };

  // OPTRE 7.62x51 ammo - used by M247, MA5, MA37 - Red (base) and yellow already exist
  // Tracer format is OPTRE_B_762x51_Tracer_COLOR : OPTRE_B_762x51_Tracer
  class OPTRE_B_762x51_Tracer_Green : OPTRE_B_762x51_Tracer {
    model = QPATHTOF_TRACER_GREEN;
  };
  class OPTRE_B_762x51_Ball_Tracer_Blue : OPTRE_B_762x51_Tracer {
    model = QPATHTOF_TRACER_BLUE;
  };
  class OPTRE_B_762x51_Ball_Tracer_Orange : OPTRE_B_762x51_Tracer {
    model = QPATHTOF_TRACER_ORANGE;
  };

  // OPTRE 9.5x40mm  - Used by SBR-55, M58S SAR -  Red (base) and yellow already exist
  // Tracer format is OPTRE_B_95x40_Tracer_COLOR : OPTRE_B_95x40_Tracer
  class OPTRE_B_95x40_Tracer_Blue : OPTRE_B_95x40_Tracer {
    model = QPATHTOF_TRACER_GREEN;
  };
  class OPTRE_B_95x40_Tracer_Orange : OPTRE_B_95x40_Tracer {
    model = QPATHTOF_TRACER_BLUE;
  };
  class OPTRE_B_95x40_Tracer_Green : OPTRE_B_95x40_Tracer {
    model = QPATHTOF_TRACER_ORANGE;
  };
};
