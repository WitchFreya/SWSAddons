class WEAPON(SBR55) : 19th_br_55 {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(SBR-55);
    descriptionShort = "An elegant weapon for a more civilized SDM.";
    magazineWell[] = {"OPTRE_Magwell_BR55"};
    baseWeapon = QWEAPON(SBR55);

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
        model = QWEAPON(SBR55);
        underbarrel = "None";
    };
};

class WEAPON(DOUBLES(SBR55,UGL)) : 19th_br_55_gl {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(SBR-55 UGL);
    descriptionShort = "An elegant weapon for a more civilized SDM who likes grenades.";
    magazineWell[] = {"OPTRE_Magwell_BR55"};
    baseWeapon = QWEAPON(DOUBLES(SBR55,UGL));

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

    class XtdGearInfo {
        model = QWEAPON(SBR55);
        underbarrel = "GL";
    };
};
