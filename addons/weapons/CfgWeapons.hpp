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

    class WEAPON(SM247): Dmns_M247_GPMG {
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
        magazines[] = {
			QMAGAZINE(100Rnd_762x51_Mag),
            QMAGAZINE(100Rnd_762x51_Mag_Tracer),
            QMAGAZINE(200Rnd_762x51_Mag),
            QMAGAZINE(200Rnd_762x51_Mag_Tracer),
            QMAGAZINE(400Rnd_762x51_Mag),
            QMAGAZINE(400Rnd_762x51_Mag_Tracer),
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"
		};
    };

    //== Grenades

    class GrenadeLauncher;
    class Throw : GrenadeLauncher {
        muzzles[] += { QMUZZLE(M9Sx_HEDP) };
        class ThrowMuzzle;
        class MUZZLE(M9Sx_HEDP): ThrowMuzzle {
            magazines[] = {QMAGAZINE(M9Sx_HEDP)};
        };
    };
};
