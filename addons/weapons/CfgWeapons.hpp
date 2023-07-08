#define CLASSES_WEAPON      \
    QWEAPON(AR0M37),        \
    QWEAPON(AR0M37_GL),     \
    QWEAPON(AR0M37_SHT),    \
    QWEAPON(SM247)

class CfgWeapons {
    class LM_OPCAN_AR0M37;
    class LM_OPCAN_AR0M37_GL;
    class LM_OPCAN_AR0M37_SHT;
    class Dmns_M247_GPMG;
    class 19th_br_55_gl;
    class WEAPON(Dmns_M247_GPMG): Dmns_M247_GPMG {
        WEAPON_META(Dmns_M247_GPMG,0);
        class Single;
        class FullAuto;
    };

    class WEAPON(AR0M37): LM_OPCAN_AR0M37 {
        WEAPON_META(AR0M37,2);
        displayName = NAME(AR-0M37 6.5mm);
        picture = QPATHTOF(data\icons\msbs65_ca.paa);

        class XtdGearInfo {
            model = QWEAPON(AR0M37);
            underbarrel = "None";
        };
    };
    class WEAPON(AR0M37_GL): LM_OPCAN_AR0M37_GL {
        WEAPON_META(AR0M37_GL,2);
        displayName = NAME(AR-0M37 GL 6.5mm);
        picture = QPATHTOF(data\icons\msbs65_barrel_ca.paa);
        class XtdGearInfo {
            model = QWEAPON(AR0M37);
            underbarrel = "GL";
        };
    };
    class WEAPON(AR0M37_SHT): LM_OPCAN_AR0M37_SHT {
        WEAPON_META(AR0M37_SHT,2);
        displayName = NAME(AR-0M37 Breacher 6.5mm);
        picture = QPATHTOF(data\icons\msbs65_barrel_ca.paa);
        class XtdGearInfo {
            model = QWEAPON(AR0M37);
            underbarrel = "SHT";
        };
    };

    class WEAPON(SM247): WEAPON(Dmns_M247_GPMG) {
        // TODO: Define https://ace3.acemod.org/wiki/framework/advanced-ballistics-framework.html if we ever use Ace's ABM.
        WEAPON_META(SM247,2);
        displayName = NAME(SM247);
        model = "\OPTRE_Weapons\MG\M247.p3d";
        hiddenSelections[] = {
            "mainbody1",
            "mainbody2",
            "magazine",
            "stock",
            "details",
            "barrel_sights"
        };
        hiddenSelectionsTextures[] = {
            "\OPTRE_Weapons\MG\data\M247_mainbody1_CO.paa",
            "\OPTRE_Weapons\MG\data\M247_mainbody2_CO.paa",
            "\OPTRE_Weapons\MG\data\M247_magazine_CO.paa",
            "\OPTRE_Weapons\MG\data\M247_stock_CO.paa",
            "\OPTRE_Weapons\MG\data\M247_details_CO.paa",
            "\OPTRE_Weapons\MG\data\M247_barrel_sights_CO.paa"
        };
        magazineWell[] = {
            "OPTRE_Magwell_MA5B",
            "OPTRE_Magwell_MA5A"
        };
        magazines[] = {
			QMAGAZINE(100Rnd_762x51_Mag),
            QMAGAZINE(100Rnd_762x51_Mag_Tracer),
            QMAGAZINE(200Rnd_762x51_Mag),
            QMAGAZINE(200Rnd_762x51_Mag_Tracer),
            QMAGAZINE(400Rnd_762x51_Mag),
            QMAGAZINE(400Rnd_762x51_Mag_Tracer)
		};

        class Single: Single {
            dispersion = 0.00064;
            reloadTime = 0.082;
        };

        class FullAuto: FullAuto {
            dispersion = 0.00065;
            reloadTime = 0.082;
        };
    };

    //== Grenades

    class GrenadeLauncher;
    class Throw : GrenadeLauncher {
        muzzles[] += {
            QMUZZLE(M3Sx),
            QMUZZLE(M9Sx),
            QMUZZLE(9Bang),
            QMUZZLE(DOUBLES(9Bang,NoFuse))
        };
        class ThrowMuzzle;
        class MUZZLE(M3Sx): ThrowMuzzle {
            magazines[] = {QGMAGAZINE(M3Sx)};
        };
        class MUZZLE(M9Sx): ThrowMuzzle {
            magazines[] = {QGMAGAZINE(M9Sx)};
        };
        class MUZZLE(9Bang): ThrowMuzzle {
            magazines[] = {QGMAGAZINE(9Bang)};
        };
        class MUZZLE(DOUBLES(9Bang,NoFuse)): ThrowMuzzle {
            magazines[] = {QGMAGAZINE(DOUBLES(9Bang,NoFuse))};
        };
    };
};
