#define CLASSES_WEAPONS \
  "SWS_Weapon_MA5BSx" \
  , "SWS_Weapon_MA5BSx_GL"


class CfgWeapons
{
  class OPTRE_MA5B;
  class OPTRE_MA5BGL;

  class SWS_Weapon_MA5BSx: OPTRE_MA5B
  {
    WEAPON_META(MA5BSx,2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(MA5B-Sx);
    cursor = "SWS_Weapon_SmartLink";
    descriptionShort = "An experimental variant of the MA5B.";
    hiddenSelectionsTextures[] = {
      "optre_weapons\ar\data\weapon_co.paa",
      "optre_weapons\ar\data\smartlink_co.paa",
      "optre_weapons\ar\data\cover_co.paa",
      QPATHTOF(data\ma5_reticle_ca.paa)
    };

    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        delete compatibleItems;
        class CompatibleItems : SWS_Scopes_762mm { };
      };

      class PointerSlot : PointerSlot
      {
        compatibleItems[] = {ATT_POINTER_OPTRE_RAIL};
      };
    };

    class FlashLight {};
  };

  class SWS_Weapon_MA5BSx_GL : OPTRE_MA5BGL
  {
    WEAPON_META(MA5BSx_GL,2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(MA5B-Sx + M301-Sx UGL);
    cursor = "SWS_Weapon_SmartLink";
    descriptionShort = "An experimental variant of the MA5B.";
    hiddenSelectionsTextures[] = {
      "optre_weapons\ar\data\weapon_co.paa",
      "optre_weapons\ar\data\smartlink_co.paa",
      "optre_weapons\ar\data\cover_co.paa",
      QPATHTOF(data\ma5_reticle_ca.paa)
    };

    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        class CompatibleItems : SWS_Scopes_762mm
        {
          optre_recon_sight = 1;
          optre_recon_sight_desert = 1;
          optre_recon_sight_green = 1;
          optre_recon_sight_red = 1;
          optre_recon_sight_snow = 1;
          optre_recon_sight_unsc = 1;
        };
      };

      class PointerSlot : PointerSlot
      {
        compatibleItems[] = {ATT_POINTER_OPTRE_RAIL};
      };
    };
  };
};
