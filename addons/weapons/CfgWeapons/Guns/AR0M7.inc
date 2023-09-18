#define HUD_SETUP \
  ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR"; \
    HUD_BulletInARows = 2; \
    HUD_TotalPosibleBullet = 60; \
    pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR_IRON.paa"

class WEAPON(AR0M37): LM_OPCAN_AR0M37 {
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

    class FullAuto : FullAuto
    {
        recoil = "recoil_auto_mx";
        recoilProne = "recoil_auto_prone_mx";
        dispersion = 0.0007;
    };

    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 45;

        class PointerSlot : PointerSlot {
            compatibleItems[] = {
                "acc_flashlight",
                "acc_pointer_IR",
                "ACE_acc_pointer_red",
                "ACE_acc_pointer_green_IR",
                "ACE_acc_pointer_green"
            };
        };
    };

    class XtdGearInfo {
        model = QWEAPON(AR0M37);
        underbarrel = "None";
    };
};

class WEAPON(AR0M37_GL): LM_OPCAN_AR0M37_GL {
    WEAPON_META(AR0M37_GL,2);
    displayName = QNAME(AR-0M37S GL 6.5mm);
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

    class XtdGearInfo {
        model = QWEAPON(AR0M37);
        underbarrel = "GL";
    };

    class WeaponSlotsInfo : WeaponSlotsInfo {
        class PointerSlot : PointerSlot {
            compatibleItems[] = {
                "acc_flashlight",
                "acc_pointer_IR",
                "ACE_acc_pointer_red",
                "ACE_acc_pointer_green_IR",
                "ACE_acc_pointer_green"
            };
        };
    };
};

class WEAPON(AR0M37_SHT): LM_OPCAN_AR0M37_SHT {
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

    class XtdGearInfo {
        model = QWEAPON(AR0M37);
        underbarrel = "SHT";
    };

     class WeaponSlotsInfo : WeaponSlotsInfo {
        class PointerSlot : PointerSlot {
            compatibleItems[] = {
                "acc_flashlight",
                "acc_pointer_IR",
                "ACE_acc_pointer_red",
                "ACE_acc_pointer_green_IR",
                "ACE_acc_pointer_green"
            };
        };
    };
};

#undef HUD_SETUP
