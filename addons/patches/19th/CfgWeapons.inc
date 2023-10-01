class CowsSlot;
class PointerSlot;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_UGL_F : Rifle {
        class WeaponSlotsInfo;
    };

    class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};

    //== Missing optic from OPTRE update
    class arifle_19th_br_55_gl_Base_F : Rifle_Base_UGL_F {
        magazineWell[] = {"OPTRE_Magwell_BR55"};
        cursor = "OPTRE_BR55";
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

            class PointerSlot : PointerSlot {
                compatibleItems[] = {
                    ATT_POINTER_OPTRE_RAIL
                };
            };
        };
    };

    class 19th_br_55_gl : arifle_19th_br_55_gl_Base_F {
        magazineWell[] = {"OPTRE_Magwell_BR55"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : CowsSlot {
                compatibleItems[] = {
					"optic_MRCO",
					"OPTRE_BR55HB_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_BR45_Scope",
					"OPTRE_M392_Scope",
					"19th_br_scope"
				};
            };
            class PointerSlot : PointerSlot {
                compatibleItems[] = {
                    ATT_POINTER_OPTRE_RAIL
                };
            };
        };
    };

    class 19th_br_55 : 19th_br_55_gl {
        magazineWell[] = {"OPTRE_Magwell_BR55"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 45;
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
            class PointerSlot : PointerSlot {
                compatibleItems[] = {
                    ATT_POINTER_OPTRE_RAIL
                };
            };
        };
    };

    //== Incorrect weight on launcher
    class DMNS_M96_LAW : Launcher_Base_F {
        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 100;
        };
    };

    class ACE_DMNS_M96_LAW_ready_F : DMNS_M96_LAW {

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 55;
        };
    };

    class ACE_DMNS_M96_LAW_used_F : DMNS_M96_LAW {
        magazines[] = {"CBA_FakeLauncherMagazine"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 55;
        };
    };
};
