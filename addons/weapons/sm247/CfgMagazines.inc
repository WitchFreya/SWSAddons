#define CLASSES_MAGAZINES \
  "SWS_Magazine_100Rnd_762x51_Mag", \
  "SWS_Magazine_100Rnd_762x51_Mag_Tracer", \
  "SWS_Magazine_200Rnd_762x51_Mag", \
  "SWS_Magazine_200Rnd_762x51_Mag_Tracer", \
  "SWS_Magazine_400Rnd_762x51_Mag", \
  "SWS_Magazine_400Rnd_762x51_Mag_Tracer"

#define NAME_762x51(var0) NAME(var0##Rnd 7.62x51 Box)
#define NAME_762x51_T(var0) NAME_762x51(var0) (Tracer)
#define QNAME_762x51(var0) QUOTE(NAME_762x51(var0))
#define QNAME_762x51_T(var0) QUOTE(NAME_762x51_T(var0))

class CfgMagazines {
  class 150Rnd_762x51_Box;

  class SWS_Magazine_100Rnd_762x51_Mag : 150Rnd_762x51_Box {
    CLEARANCE(RESTRICTED/DECWHI);
    ITEM_META(2);
    model = "\OPTRE_Weapons\MG\M247_Mag_Proxy.p3d";
    modelSpecial = "\OPTRE_Weapons\MG\M247_Mag_Proxy.p3d";
    modelSpecialIsProxy = 1;
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\optre_weapons\mg\data\m247_magazine_co.paa"};

    displayName = QNAME_762x51(100);
    displayNameShort = "7.62x51";
    ammo = "SWS_B_762x51_Ball";
    count = 100;
    initSpeed = 950;
    picture = "\DMNS\Weapons\Ammo\Data\CM12_AMMO_Icon.paa";
    descriptionShort = "100 Round Magazine<SM247>7.62x51 Carbine<SM247>";
    mass = 40;
    tracersEvery = 0;
    lastRoundsTracer = 5;
  };

  class SWS_Magazine_100Rnd_762x51_Mag_Tracer : SWS_Magazine_100Rnd_762x51_Mag {
    displayName = QNAME_762x51_T(100);
    displayNameShort = "7.62x51-T";
    tracersEvery = 1;
    lastRoundsTracer = 100;
    descriptionShort = "100 Round Tracer Magazine<SM247>7.62x51 Carbine<SM247>";
  };

  class SWS_Magazine_200Rnd_762x51_Mag : SWS_Magazine_100Rnd_762x51_Mag {
    displayName = QNAME_762x51(200);
    mass = 70;
    count = 200;
    descriptionShort = "200 Round Magazine<SM247>7.62x51 Carbine<SM247>";
  };

  class SWS_Magazine_200Rnd_762x51_Mag_Tracer : SWS_Magazine_200Rnd_762x51_Mag {
    displayName = QNAME_762x51_T(200);
    displayNameShort = "7.62x51-T";
    tracersEvery = 1;
    lastRoundsTracer = 200;
    descriptionShort = "200 Round Tracer Magazine<SM247>7.62x51 Carbine<SM247>";
  };

  class SWS_Magazine_400Rnd_762x51_Mag : SWS_Magazine_100Rnd_762x51_Mag {
    displayName = QNAME_762x51(400);
    mass = 110;
    count = 400;
    descriptionShort = "400 Round Magazine<SM247>7.62x51 Carbine<SM247>";
  };

  class SWS_Magazine_400Rnd_762x51_Mag_Tracer : SWS_Magazine_400Rnd_762x51_Mag {
    displayName = QNAME_762x51_T(400);
    displayNameShort = "7.62x51-T";
    tracersEvery = 1;
    lastRoundsTracer = 400;
    descriptionShort = "400 Round Tracer Magazine<SM247>7.62x51 Carbine<SM247>";
  };
};

#undef NAME_762x51
#undef NAME_762x51_T
#undef QNAME_762x51
#undef QNAME_762x51_T
