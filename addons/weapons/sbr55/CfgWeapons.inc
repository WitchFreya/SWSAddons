#define CLASSES_WEAPONS \
  "SWS_Weapon_SBR55"

class CfgWeapons {
  class OPTRE_BR55;

  class SWS_Weapon_SBR55 : OPTRE_BR55 {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(SBR-55);
    descriptionShort = "An elegant weapon for a more civilized SDM.";
    magazineWell[] = {"OPTRE_Magwell_BR55"};
    baseWeapon = "SWS_Weapon_SBR55";
    model = "\OPTRE_Weapons\BR\BR";
    cursor = "SWS_Weapon_SmartLink";

    recoil = "recoil_dmr_05";
    recoilProne = "assaultRifleBase";

    class WeaponSlotsInfo : WeaponSlotsInfo {
      mass = 45;
      class PointerSlot : PointerSlot {
        compatibleItems[] = {
          ATT_POINTER_ACE
          , ATT_POINTER_OPTRE_RAIL
        };
      };
    };

    class Single : Single {
      recoil = "recoil_single_dmr";
      recoilProne = "recoil_single_prone_dmr";
      dispersion = 0.0005;
      minRange = 0;
      minRangeProbab = 0.8;
      midRange = 500;
      midRangeProbab = 0.9;
      maxRange = 1000;
      maxRangeProbab = 0.6;
      aiRateOfFire = 2;
      aiRateOfFireDistance = 20;
    };

    class Burst : Burst {
      soundBurst = 0;
      burst = 3;
      reloadTime = 0.06;
      recoil = "recoil_auto_dmr";
      recoilProne = "recoil_auto_prone_dmr";
      dispersion = 0.0005;
      minRange = 1;
      minRangeProbab = 0.8;
      midRange = 500;
      midRangeProbab = 0.9;
      maxRange = 1000;
      maxRangeProbab = 0.6;
      aiRateOfFire = 1;
      aiRateOfFireDistance = 10;
    };
  };
};

#undef HUD_SETUP
