class WEAPON(MA5BSx): OPTRE_MA5B {
    WEAPON_META(MA5BSx,2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(MA5B-Sx);
    descriptionShort = "An experimental variant of the MA5B.";
    hiddenSelectionsTextures[] = {
        "optre_weapons\ar\data\weapon_co.paa",
        "optre_weapons\ar\data\smartlink_co.paa",
        "optre_weapons\ar\data\cover_co.paa",
        QPATHTOF(data\ma5_reticle.paa)
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: CowsSlot {
            compatibleItems[] = {
                "optic_aco",
                "optic_ACO_grn",
                "OPTRE_MA5_BUIS",
                "OPTRE_MA5_SmartLink",
                "OPTRE_MA5C_SmartLink",
                QOPTIC(Smartlink)
            };
        };

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
        model = QWEAPON(MA5BSx);
        underbarrel = "None";
    };
};

class WEAPON(DOUBLES(MA5BSx,GL)): OPTRE_MA5BGL {
    WEAPON_META(DOUBLES(MA5BSx,GL),2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(MA5B-Sx + M301-Sx UGL);
    descriptionShort = "An experimental variant of the MA5B.";
    hiddenSelectionsTextures[] = {
        "optre_weapons\ar\data\weapon_co.paa",
        "optre_weapons\ar\data\smartlink_co.paa",
        "optre_weapons\ar\data\cover_co.paa",
        QPATHTOF(data\ma5_reticle.paa)
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: CowsSlot {
            compatibleItems[] = {
                "optic_aco",
                "optic_ACO_grn",
                "OPTRE_MA5_BUIS",
                "OPTRE_MA5_SmartLink",
                "OPTRE_MA5C_SmartLink",
                QOPTIC(Smartlink)
            };
        };

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
        model = QWEAPON(MA5BSx);
        underbarrel = "GL";
    };
};
