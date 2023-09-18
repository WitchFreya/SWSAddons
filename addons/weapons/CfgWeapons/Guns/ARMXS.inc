#define HUD_SETUP \
  ODST_1 = "OPTRE_ODST_HUD_AmmoCount_AR"; \
    HUD_BulletInARows = 2; \
    HUD_TotalPosibleBullet = 60; \
    pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR_IRON.paa"

class WEAPON(ARMXS): LM_OPCAN_ARMX
{
    WEAPON_META(ARMXS,2);
    displayName = QNAME(ARMXS 6.5mm);
    HUD_SETUP;

    class WeaponSlotsInfo : WeaponSlotsInfo {
        class PointerSlot : PointerSlot {
            compatibleItems[] = {
                "acc_flashlight",
                "acc_pointer_IR",
                "ACE_acc_pointer_red",
                "ACE_acc_pointer_green_IR",
                "ACE_acc_pointer_green",
                ATT_POINTER_OPTRE_RAIL_M12
            };
        };
    };

    class XtdGearInfo
    {
        model = QWEAPON(Autorifles);
        underbarrel = "None";
        body = "MXS";
    };
};

class WEAPON(ARMXS_GL): LM_OPCAN_ARMX_GL
{
    WEAPON_META(ARMXS_GL,2);
    displayName = QNAME(ARMXS UGL 6.5mm);
    HUD_SETUP;

    class WeaponSlotsInfo : WeaponSlotsInfo {
        class PointerSlot : PointerSlot {
            compatibleItems[] = {
                "acc_flashlight",
                "acc_pointer_IR",
                "ACE_acc_pointer_red",
                "ACE_acc_pointer_green_IR",
                "ACE_acc_pointer_green",
                ATT_POINTER_OPTRE_RAIL_M12
            };
        };
    };

    class XtdGearInfo
    {
        model = QWEAPON(Autorifles);
        underbarrel = "GL";
        body = "MXS";
    };
};

#undef HUD_SETUP
