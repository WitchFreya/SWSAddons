#define CLASSES_MAGAZINE \
    QMAGAZINE(100Rnd_762x51_Mag), \
    QMAGAZINE(100Rnd_762x51_Mag_Tracer), \
    QMAGAZINE(200Rnd_762x51_Mag), \
    QMAGAZINE(200Rnd_762x51_Mag_Tracer), \
    QMAGAZINE(400Rnd_762x51_Mag), \
    QMAGAZINE(400Rnd_762x51_Mag_Tracer), \
    QGMAGAZINE(M9Sx), \
    QGSMAGAZINE(M9Sx,1Rnd), \
    QGMAGAZINE(M3Sx), \
    QGSMAGAZINE(M3Sx,1Rnd), \
    QGSMAGAZINE(M3Sx,3Rnd), \
    QGMAGAZINE(9Bang), \
    QGMAGAZINE(DOUBLES(9Bang,NoFuse)), \
    QGSMAGAZINE(9Bang,1Rnd), \
    QGSMAGAZINE(9Bang,3Rnd)

class CfgMagazines {

    //= 762x51 START
    class 150Rnd_762x51_Box;

    #define NAME_762x51(count) count##Rnd 7.62x51 Box Magazine
    class MAGAZINE(100Rnd_762x51_Mag): 150Rnd_762x51_Box {
        CLEARANCE(RESTRICTED/DECEMBER WHITE);
        ITEM_META(2);
        model = "\OPTRE_Weapons\MG\M247_Mag_Proxy.p3d";
		modelSpecial = "\OPTRE_Weapons\MG\M247_Mag_Proxy.p3d";
		modelSpecialIsProxy = 1;
        hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"\optre_weapons\mg\data\m247_magazine_co.paa"
		};

		displayName = QUOTE(NAME_762x51(100));
		displayNameShort = "7.62x51";
		ammo = QAMMO(762x51_Ball);
		count = 100;
		initSpeed = 950;
		picture = "\DMNS\Weapons\Ammo\Data\CM12_AMMO_Icon.paa";
		descriptionShort = "100 Round Magazine<SM247>7.62x51 Carbine<SM247>";
		mass = 40;
		tracersEvery = 0;
		lastRoundsTracer = 5;
    };

    class MAGAZINE(100Rnd_762x51_Mag_Tracer): MAGAZINE(100Rnd_762x51_Mag) {
        CLEARANCE(RESTRICTED/DECEMBER WHITE);
        displayName = QUOTE(NAME_762x51(100) (Tracers));
        displayNameShort = "7.62x51-T";
        tracersEvery = 1;
        lastRoundsTracer = 100;
        descriptionShort = "100 Round Tracer Magazine<SM247>7.62x51 Carbine<SM247>";
    };

    class MAGAZINE(200Rnd_762x51_Mag): MAGAZINE(100Rnd_762x51_Mag) {
        CLEARANCE(RESTRICTED/DECEMBER WHITE);
        displayName = QUOTE(NAME_762x51(200));
        mass = 60;
        count = 200;
        descriptionShort = "200 Round Magazine<SM247>7.62x51 Carbine<SM247>";
    };

    class MAGAZINE(200Rnd_762x51_Mag_Tracer): MAGAZINE(200Rnd_762x51_Mag) {
        CLEARANCE(RESTRICTED/DECEMBER WHITE);
        displayName = QUOTE(NAME_762x51(200) (Tracers));
        displayNameShort = "7.62x51-T";
        tracersEvery = 1;
        lastRoundsTracer = 200;
        descriptionShort = "200 Round Tracer Magazine<SM247>7.62x51 Carbine<SM247>";
    };

    class MAGAZINE(400Rnd_762x51_Mag): MAGAZINE(100Rnd_762x51_Mag) {
        CLEARANCE(RESTRICTED/DECEMBER WHITE);
        displayName = QUOTE(NAME_762x51(400));
        mass = 90;
        count = 400;
        descriptionShort = "400 Round Magazine<SM247>7.62x51 Carbine<SM247>";
    };

    class MAGAZINE(400Rnd_762x51_Mag_Tracer): MAGAZINE(400Rnd_762x51_Mag) {
        CLEARANCE(RESTRICTED/DECEMBER WHITE);
        displayName = QUOTE(NAME_762x51(400) (Tracers));
        displayNameShort = "7.62x51-T";
        tracersEvery = 1;
        lastRoundsTracer = 400;
        descriptionShort = "400 Round Tracer Magazine<SM247>7.62x51 Carbine<SM247>";
    };
    //= 762x51 END

    //= Grenades
    class ACE_CTS9;
    class OPTRE_M9_Frag;

    class GMAGAZINE(M3Sx): OPTRE_M9_Frag {
        CLEARANCE(RESTRICTED/DECEMBER WHITE);
        ITEM_META(2);
        displayName = NAME(M3Sx (Frag));
        mass = 11;
        ammo = QGRENADE(M3Sx);
        displayNameShort = "M3Sx (Frag)";
        descriptionShort = "Type: Concussion Grenade<br />Rounds: 1<br />Used in: Hand";
    };

    class GMAGAZINE(M9Sx): OPTRE_M9_Frag {
        CLEARANCE(RESTRICTED/DECEMBER WHITE);
        ITEM_META(2);
		displayName = NAME(M9Sx (HE-DP));
		mass = 22;
		typicalSpeed = 10;
		ammo = QGRENADE(M9Sx);
		displayNameShort = "M9Sx (HE-DP)";
		descriptionShort = "Type: AT Grenade<br />Rounds: 1<br />Used in: Hand";
	};

    class GMAGAZINE(M9Sx): OPTRE_M9_Frag {
        CLEARANCE(RESTRICTED/DECEMBER WHITE);
        ITEM_META(2);
		displayName = NAME(M9Sx (HE-DP));
		mass = 22;
		typicalSpeed = 10;
		ammo = QGRENADE(M9Sx);
		displayNameShort = "M9Sx (HE-DP)";
		descriptionShort = "Type: AT Grenade<br />Rounds: 1<br />Used in: Hand";
	};

    class GMAGAZINE(9Bang): ACE_CTS9 {
        ITEM_META(2);
        displayName = NAME(9-Bang (Stun));
        descriptionShort = NAME(Experimental 9-Bang (Stun));
        displayNameShort = "S9B";
        ammo = QGRENADE(9Bang);
    };

    class GMAGAZINE(DOUBLES(9Bang,NoFuse)): ACE_CTS9 {
        ITEM_META(2);
        displayName = NAME(9-Bang (Stun/No Fuse));
        descriptionShort = NAME(Experimental 9-Bang (Stun/No Fuse));
        displayNameShort = "S9B-NF";
        ammo = QGRENADE(DOUBLES(9Bang,NoFuse));
    };

    //== Shells
    class M319_HE_Grenade_Shell;
    class M319_HEDP_Grenade_Shell;

    class GSMAGAZINE(M3Sx,1Rnd): M319_HEDP_Grenade_Shell {
        CLEARANCE(RESTRICTED/DECEMBER WHITE);
        ITEM_META(2);
        displayName = NAME(1Rnd M3Sx (Frag) Shell);
        displayNameShort = "M3Sx (Frag)";
		descriptionShort = "Type: Concussion Grenade<br />Rounds: 1<br />Used in: EGLM, 1GL";
        mass = 12;
		ammo = QSHELL(M3Sx_40mm);
    };

    class GSMAGAZINE(M3Sx,3Rnd): M319_HEDP_Grenade_Shell {
        CLEARANCE(RESTRICTED/DECEMBER WHITE);
        ITEM_META(2);
        displayName = NAME(3Rnd M3Sx (Frag) Shell);
        displayNameShort = "M3Sx (Frag)";
		descriptionShort = "Type: Concussion Grenade<br />Rounds: 3<br />Used in: EGLM, 3GL";
        mass = 26;
        count = 3;
		ammo = QSHELL(M3Sx_40mm);
    };

    class GSMAGAZINE(M9Sx,1Rnd): M319_HEDP_Grenade_Shell {
        CLEARANCE(RESTRICTED/DECEMBER WHITE);
        ITEM_META(2);
        displayName = NAME(1Rnd M9Sx (HE-DP) Shell);
        displayNameShort = "M9Sx (HE-DP)";
		descriptionShort = "Type: AT Grenade<br />Rounds: 1<br />Used in: EGLM, 1GL";
        mass = 24;
		ammo = QSHELL(M9Sx_40mm);
    };

    class GSMAGAZINE(9Bang,1Rnd): M319_HE_Grenade_Shell {
        ITEM_META(2);
        displayName = NAME(1Rnd 9Bang (Stun) Shell);
        displayNameShort = "S9B (Stun)";
		descriptionShort = "Type: Stun Grenade<br />Rounds: 1<br />Used in: EGLM, 1GL";
        initSpeed = 100;
        mass = 6;
        fuseDistance = 3;
        picture = "\z\ace\addons\grenades\UI\ACE_m84_x_ca.paa";
        ammo = QSHELL(9Bang);
    };

    class GSMAGAZINE(9Bang,3Rnd): M319_HE_Grenade_Shell {
        ITEM_META(2);
        displayName = NAME(3Rnd 9Bang (Stun) Shell);
        displayNameShort = "S9B (Stun)";
		descriptionShort = "Type: Stun Grenade<br />Rounds: 1<br />Used in: EGLM, 3GL";
        count = 3;
        initSpeed = 100;
        mass = 6;
        fuseDistance = 3;
        picture = "\z\ace\addons\grenades\UI\ACE_m84_x_ca.paa";
        ammo = QSHELL(9Bang);
    };
};
