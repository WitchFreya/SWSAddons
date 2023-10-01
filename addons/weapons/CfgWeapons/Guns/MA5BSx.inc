class SWS_Weapon_MA5BSx: OPTRE_MA5B {
    WEAPON_META(MA5BSx,2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(MA5B-Sx);
    cursor = "SWS_Weapon_Smartlink";
    descriptionShort = "An experimental variant of the MA5B.";
    hiddenSelectionsTextures[] = {
        "optre_weapons\ar\data\weapon_co.paa",
        "optre_weapons\ar\data\smartlink_co.paa",
        "optre_weapons\ar\data\cover_co.paa",
        QPATHTOF(data\ma5_reticle_ca.paa)
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: CowsSlot {
            compatibleItems[] = {
                "optic_aco",
                "optic_ACO_grn",
                "OPTRE_MA5_BUIS",
                "OPTRE_MA5_SmartLink",
                "OPTRE_MA5C_SmartLink",
                "SWS_Optic_Smartlink"
            };
        };

        class PointerSlot : PointerSlot {
            compatibleItems[] = {
                ATT_POINTER_OPTRE_RAIL
            };
        };
    };

    class XtdGearInfo {
        model = "SWS_Weapon_MA5BSx";
        underbarrel = "None";
    };
    class FlashLight {};
};

class SWS_Weapon_MA5BSx_GL : OPTRE_MA5BGL {
    WEAPON_META(MA5BSx_GL,2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(MA5B-Sx + M301-Sx UGL);
    cursor = "SWS_Weapon_Smartlink";
    descriptionShort = "An experimental variant of the MA5B.";
    hiddenSelectionsTextures[] = {
        "optre_weapons\ar\data\weapon_co.paa",
        "optre_weapons\ar\data\smartlink_co.paa",
        "optre_weapons\ar\data\cover_co.paa",
        QPATHTOF(data\ma5_reticle_ca.paa)
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: CowsSlot {
            compatibleItems[] = {
                "optic_aco",
                "optic_ACO_grn",
                "OPTRE_MA5_BUIS",
                "OPTRE_MA5_SmartLink",
                "OPTRE_MA5C_SmartLink",
                "SWS_Optic_Smartlink"
            };
        };

        class PointerSlot : PointerSlot {
            compatibleItems[] = {
                ATT_POINTER_OPTRE_RAIL
            };
        };
    };

    class XtdGearInfo {
        model = "SWS_Weapon_MA5BSx";
        underbarrel = "GL";
    };
};
