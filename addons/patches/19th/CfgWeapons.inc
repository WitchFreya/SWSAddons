class CowsSlot;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_UGL_F : Rifle {
        class WeaponSlotsInfo;
    };

    class arifle_19th_br_55_gl_Base_F : Rifle_Base_UGL_F {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : CowsSlot {
                compatibleitems[] = {
					"optic_MRCO",
					"OPTRE_BR55HB_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_BR45_Scope",
					"OPTRE_M392_Scope",
					"19th_br_scope"
				};
            };
        };
    };

    class 19th_br_55_gl : arifle_19th_br_55_gl_Base_F {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : CowsSlot {
                compatibleitems[] = {
					"optic_MRCO",
					"OPTRE_BR55HB_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_BR45_Scope",
					"OPTRE_M392_Scope",
					"19th_br_scope"
				};
            };
        };
    };

    class 19th_br_55 : 19th_br_55_gl {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : CowsSlot {
                compatibleitems[] = {
					"optic_MRCO",
					"OPTRE_BR55HB_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_BR45_Scope",
					"OPTRE_M392_Scope",
					"19th_br_scope"
				};
            };
        };
    };
};
