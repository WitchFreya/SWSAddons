class WEAPON(AR0M37): LM_OPCAN_AR0M37 {
    WEAPON_META(AR0M37,2);
    displayName = QNAME(AR-0M37 6.5mm);
    picture = QPATHTOF(data\icons\msbs65_ca.paa);

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
    displayName = QNAME(AR-0M37 GL 6.5mm);
    picture = QPATHTOF(data\icons\msbs65_barrel_ca.paa);
    class XtdGearInfo {
        model = QWEAPON(AR0M37);
        underbarrel = "GL";
    };

    class WeaponSlotInfo : WeaponSlotInfo {
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
    displayName = QNAME(AR-0M37 Breacher 6.5mm);
    picture = QPATHTOF(data\icons\msbs65_barrel_ca.paa);
    class XtdGearInfo {
        model = QWEAPON(AR0M37);
        underbarrel = "SHT";
    };

     class WeaponSlotInfo : WeaponSlotInfo {
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
