#define CLASSES_WEAPONS \
  "SWS_Weapon_AR0M37" \
  , "SWS_Weapon_AR0M37_GL" \
  , "SWS_Weapon_AR0M37_SHT" \
  , "SWS_Weapon_AR0M37S_Hound" \
  , "SWS_Weapon_AR0M37S_Hound_GL" \
  , "SWS_Weapon_AR0M37S_Hound_SHT"

class CfgWeapons
{
  class LM_OPCAN_AR0M37;
  class LM_OPCAN_AR0M37_GL;
  class LM_OPCAN_AR0M37_SHT;

  #define HUD_SETUP \
    ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR"; \
    HUD_BulletInARows = 2; \
    HUD_TotalPosibleBullet = 60; \
    pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR_IRON.paa"

  class SWS_Weapon_AR0M37 : LM_OPCAN_AR0M37
  {
    WEAPON_META(AR0M37,2);
    displayName = QNAME(AR-0M37S 6.5mm);
    picture = QPATHTOF(data\icons\msbs65_ca.paa);
    HUD_SETUP;

    recoil = "recoil_mxm";
    recoilProne = "assaultRifleBase";

    class Single : Single
    {
      recoil = "recoil_single_mx";
      recoilProne = "recoil_single_prone_mx";
      dispersion = 0.00068;
    };

    class FullAuto :  FullAuto
    {
      recoil = "recoil_auto_mx";
      recoilProne = "recoil_auto_prone_mx";
      dispersion = 0.0007;
    };

    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      mass = 45;

      class CowsSlot : CowsSlot
      {
        delete compatibleItems;
        class CompatibleItems : SWS_Scopes_65mm {};
      };

      class PointerSlot : PointerSlot
      {
        compatibleItems[] = {
          "acc_flashlight"
          , "acc_pointer_IR"
          , "ACE_acc_pointer_red"
          , "ACE_acc_pointer_green_IR"
          , "ACE_acc_pointer_green"
          , ATT_POINTER_OPTRE_RAIL_M12
        };
      };
    };
  };

  class SWS_Weapon_AR0M37_GL : LM_OPCAN_AR0M37_GL
  {
    WEAPON_META(AR0M37_GL,2);
    displayName = QNAME(AR-0M37S UGL 6.5mm);
    picture = QPATHTOF(data\icons\msbs65_barrel_ca.paa);
    HUD_SETUP;

    recoil = "recoil_mxm";
    recoilProne = "assaultRifleBase";

    class Single : Single
    {
      recoil = "recoil_single_mx";
      recoilProne = "recoil_single_prone_mx";
      dispersion = 0.00068;
    };

    class FullAuto : FullAuto
    {
      recoil = "recoil_auto_mx";
      recoilProne = "recoil_auto_prone_mx";
      dispersion = 0.0007;
    };

    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class CowsSlot : CowsSlot
      {
        delete compatibleItems;
        class CompatibleItems : SWS_Scopes_65mm {};
      };

      class PointerSlot : PointerSlot
      {
        compatibleItems[] = {
          "acc_flashlight"
          , "acc_pointer_IR"
          , "ACE_acc_pointer_red"
          , "ACE_acc_pointer_green_IR"
          , "ACE_acc_pointer_green"
          , ATT_POINTER_OPTRE_RAIL_M12
        };
      };
    };
  };

  class SWS_Weapon_AR0M37_SHT : LM_OPCAN_AR0M37_SHT
  {
    WEAPON_META(AR0M37_SHT,2);
    displayName = QNAME(AR-0M37S Breacher 6.5mm);
    picture = QPATHTOF(data\icons\msbs65_barrel_ca.paa);
    HUD_SETUP;

    recoil = "recoil_mxm";
    recoilProne = "assaultRifleBase";

    class Single : Single
    {
      recoil = "recoil_single_mx";
      recoilProne = "recoil_single_prone_mx";
      dispersion = 0.00068;
    };

    class FullAuto : FullAuto
    {
      recoil = "recoil_auto_mx";
      recoilProne = "recoil_auto_prone_mx";
      dispersion = 0.0007;
    };

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class CowsSlot : CowsSlot
      {
        delete compatibleItems;
        class CompatibleItems : SWS_Scopes_65mm {};
      };

      class PointerSlot : PointerSlot {
        compatibleItems[] = {
          "acc_flashlight"
          , "acc_pointer_IR"
          , "ACE_acc_pointer_red"
          , "ACE_acc_pointer_green_IR"
          , "ACE_acc_pointer_green"
          , ATT_POINTER_OPTRE_RAIL_M12
        };
      };
    };
  };

  class SWS_Weapon_AR0M37S_Hound : SWS_Weapon_AR0M37
  {
    baseWeapon = "SWS_Weapon_AR0M37S_Hound";
    displayName = QNAME(AR-0M37S 6.5mm (Hound));
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\ar0m37s\hound_co.paa)
      , "\LM_OPCAN3.0\WEP\VAN\AR0M37_2.paa"
      , QPATHTOF(data\ar0m37s\hound_underbarrel_co.paa)
    };
  };

  class SWS_Weapon_AR0M37S_Hound_GL : SWS_Weapon_AR0M37_GL
  {
    baseWeapon = "SWS_Weapon_AR0M37S_Hound_GL";
    displayName = QNAME(AR-0M37S UGL 6.5mm (Hound));
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\ar0m37s\hound_co.paa)
      , "\LM_OPCAN3.0\WEP\VAN\AR0M37_2.paa"
      , QPATHTOF(data\ar0m37s\hound_underbarrel_co.paa)
    };
  };

  class SWS_Weapon_AR0M37S_Hound_SHT : SWS_Weapon_AR0M37_SHT
  {
    baseWeapon = "SWS_Weapon_AR0M37S_Hound_SHT";
    displayName = QNAME(AR-0M37S Breacher 6.5mm (Hound));
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\ar0m37s\hound_co.paa)
      , "\LM_OPCAN3.0\WEP\VAN\AR0M37_2.paa"
      , QPATHTOF(data\ar0m37s\hound_underbarrel_co.paa)
    };
  };

  #undef HUD_SETUP
};
