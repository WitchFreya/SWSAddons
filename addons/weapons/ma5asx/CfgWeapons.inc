#define CLASSES_WEAPONS \
  "SWS_Weapon_MA5ASx"   \
  , "SWS_Weapon_MA5ASx_GL"

class CfgWeapons {
  class 19_UNSC_MA5A;
  class 19_UNSC_MA5A_GL;

  class SWS_Weapon_MA5ASx : 19_UNSC_MA5A {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(MA5A-Sx);
    baseWeapon = "SWS_MA5ASx";
    descriptionShort = "An experimental variant of the MA5A.";

    class XtdGearInfo {
      model = "SWS_Weapon_Autorifles";
      underbarrel = "None";
      body = "MA5ASx";
      variant = "Standard";
    };
  };

  class SWS_Weapon_MA5ASx_GL : 19_UNSC_MA5A_GL {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(MA5A-Sx + M301-Sx UGL);
    baseWeapon = "SWS_Weapon_MA5ASx_GL";
    descriptionShort = "An experimental variant of the MA5A with an underbarrel grenade launcher.";

    class GL_3GL_F : GL_3GL_F {
      magazineWell[] += {"3UGL_40x36","CBA_40mm_3GL"};
    };

    class XtdGearInfo {
      model = "SWS_Weapon_Autorifles";
      underbarrel = "GL";
      body = "MA5ASx";
      variant = "Standard";
    };
  };
};
