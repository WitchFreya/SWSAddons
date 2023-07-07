#define CLASSES_MAGAZINE \
    QMAGAZINE(100Rnd_762x51_Mag), \
    QMAGAZINE(100Rnd_762x51_Mag_Tracer), \
    QMAGAZINE(200Rnd_762x51_Mag), \
    QMAGAZINE(200Rnd_762x51_Mag_Tracer), \
    QMAGAZINE(400Rnd_762x51_Mag), \
    QMAGAZINE(400Rnd_762x51_Mag_Tracer)

class CfgMagazines {
    class 150Rnd_762x51_Box;

    //= 762x51 START
    #define NAME_762x51(count) count##Rnd 7.62x51 Box Magazine
    class MAGAZINE(100Rnd_762x51_Mag): 150Rnd_762x51_Box {
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
        displayName = QUOTE(NAME_762x51(100) (Tracers));
        displayNameShort = "7.62x51-T";
        tracersEvery = 1;
        lastRoundsTracer = 100;
        descriptionShort = "100 Round Tracer Magazine<SM247>7.62x51 Carbine<SM247>";
    };

    class MAGAZINE(200Rnd_762x51_Mag): MAGAZINE(100Rnd_762x51_Mag) {
        displayName = QUOTE(NAME_762x51(200));
        mass = 60;
        count = 200;
        descriptionShort = "200 Round Magazine<SM247>7.62x51 Carbine<SM247>";
    };

    class MAGAZINE(200Rnd_762x51_Mag_Tracer): MAGAZINE(200Rnd_762x51_Mag) {
        displayName = QUOTE(NAME_762x51(200) (Tracers));
        displayNameShort = "7.62x51-T";
        tracersEvery = 1;
        lastRoundsTracer = 200;
        descriptionShort = "200 Round Tracer Magazine<SM247>7.62x51 Carbine<SM247>";
    };

    class MAGAZINE(400Rnd_762x51_Mag): MAGAZINE(100Rnd_762x51_Mag) {
        displayName = QUOTE(NAME_762x51(400));
        mass = 90;
        count = 400;
        descriptionShort = "400 Round Magazine<SM247>7.62x51 Carbine<SM247>";
    };

    class MAGAZINE(400Rnd_762x51_Mag_Tracer): MAGAZINE(400Rnd_762x51_Mag) {
        displayName = QUOTE(NAME_762x51(400) (Tracers));
        displayNameShort = "7.62x51-T";
        tracersEvery = 1;
        lastRoundsTracer = 400;
        descriptionShort = "400 Round Tracer Magazine<SM247>7.62x51 Carbine<SM247>";
    };
    //= 762x51 END
};
