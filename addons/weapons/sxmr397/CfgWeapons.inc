#define CLASSES_WEAPONS \
  "SWS_Weapon_SxMR397"

class CfgWeapons {
  class OPTRE_M393_DMR;

  class SWS_Weapon_SxMR397 : OPTRE_M393_DMR {
    ITEM_META(2);
    displayName = QNAME(SxMR-397 Longshot);
    magazines[] = {"SWS_Magazine_15rnd_338_Abyssal"};
    magazineWell[] = { "XMR_Abyssal" };
    recoil = "recoil_dmr_02";
    recoilProne = "recoil_ebr";
    baseWeapon = "SWS_Weapon_SXMR397";
    class Single : Single {
      reloadTime = 0.2;
    };

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot {
        class CompatibleItems : SWS_Scopes_65mm {
          OPTRE_M7_Sight = FALSE;
          OPTRE_M73_SmartLink = FALSE;
          OPTRE_M12_Optic = FALSE;
          OPTRE_M12_Optic_Green = FALSE;
          OPTRE_M12_Optic_Red = FALSE;

          OPTRE_BR45_Scope = TRUE;
          OPTRE_M392_Scope = TRUE;
          OPTRE_M393_Scope = TRUE;
          OPTRE_BMR_Scope = TRUE;

          optic_KHS_blk = TRUE;
          optic_KHS_hex = TRUE;
          optic_KHS_tan = TRUE;
          optic_SOS = TRUE;
          ACE_optic_SOS_2D = TRUE;
          optic_SOS_khk_F = TRUE;
          ACE_optic_SOS_PIP = TRUE;
          optic_LRPS = TRUE;
          ACE_optic_LRPS_2D = TRUE;
          optic_LRPS_ghex_F = TRUE;
          optic_LRPS_tna_F = TRUE;
          ACE_optic_LRPS_PIP = TRUE;
          optic_Nightstalker = TRUE;
          optic_NVS = TRUE;
          OPTRE_SRM_Sight = TRUE;
          optic_tws = TRUE;
          Optic_AMS = TRUE;
          optic_AMS_khk = TRUE;
          optic_AMS_snd = TRUE;
          optic_DMS = TRUE;
          optic_DMS_weathered_Kir_F = TRUE;
          optic_DMS_ghex_F = TRUE;
          SWS_Optic_SxMR10 = TRUE;
        };
      };

      class MuzzleSlot : MuzzleSlot {
        class CompatibleItems : CompatibleItems {
          optre_m6c_compensator = FALSE;
        };
      };

      class PointerSlot : PointerSlot {
        class CompatibleItems {
          OPTRE_BMR_Laser = TRUE;
          OPTRE_BMR_Vis_Red_Laser = TRUE;
          OPTRE_BMR_MEQ_Flashlight = TRUE;
        };
      };
    };

    class XtdGearInfo {
      model = "SWS_Weapon_DMR";
      underbarrel = "None";
      body = "SxMR-397";
      variant = "Standard";
    };
  };
};
