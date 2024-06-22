#define CLASSES_WEAPONS \
  "SWS_Weapon_MA5BSx" \
  , "SWS_Weapon_MA5BSx_GL"


class CfgWeapons {
  class OPTRE_MA5B;
  class OPTRE_MA5BGL;

  class SWS_Weapon_MA5BSx : OPTRE_MA5B {
    ITEM_META(2);
    baseWeapon = "SWS_Weapon_MA5BSx";
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(MA5B-Sx);
    cursor = "SWS_Weapon_SmartLink";
    descriptionShort = "An experimental variant of the MA5B.";
    hiddenSelectionsTextures[] = {
      "optre_weapons\ar\data\weapon_co.paa"
      , "optre_weapons\ar\data\smartlink_co.paa"
      , "optre_weapons\ar\data\cover_co.paa"
      , QPATHTOEF(tech,data\optic_smartlink\reticle_ca.paa)
    };

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot {
        class CompatibleItems : SWS_Scopes_762mm { };
      };

      class PointerSlot : PointerSlot {
        compatibleItems[] = {ATT_POINTER_OPTRE_RAIL};
      };
    };

    class XtdGearInfo {
      model = "SWS_Weapon_Autorifles";
      underbarrel = "None";
      body = "MA5BSx";
      variant = "Standard";
    };
  };

  class SWS_Weapon_MA5BSx_GL : OPTRE_MA5BGL {
    ITEM_META(2);
    baseWeapon = "SWS_Weapon_MA5BSx_GL";
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(MA5B-Sx + M301-Sx UGL);
    cursor = "SWS_Weapon_SmartLink";
    descriptionShort = "An experimental variant of the MA5B.";
    hiddenSelectionsTextures[] = {
      "optre_weapons\ar\data\weapon_co.paa"
      , "optre_weapons\ar\data\smartlink_co.paa"
      , "optre_weapons\ar\data\cover_co.paa"
      , QPATHTOEF(tech,data\optic_smartlink\reticle_ca.paa)
    };

    class OPTRE_M301UGL : OPTRE_M301UGL {
      magazineWell[] += {"3UGL_40x36","CBA_40mm_3GL"};
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
      class CowsSlot: CowsSlot {
        class CompatibleItems : SWS_Scopes_762mm {
          optre_recon_sight = TRUE;
          optre_recon_sight_desert = TRUE;
          optre_recon_sight_green = TRUE;
          optre_recon_sight_red = TRUE;
          optre_recon_sight_snow = TRUE;
          optre_recon_sight_unsc = TRUE;
        };
      };

      class PointerSlot : PointerSlot {
        compatibleItems[] = {ATT_POINTER_OPTRE_RAIL};
      };
    };

    class XtdGearInfo {
      model = "SWS_Weapon_Autorifles";
      underbarrel = "GL";
      body = "MA5BSx";
      variant = "Standard";
    };
  };
};
