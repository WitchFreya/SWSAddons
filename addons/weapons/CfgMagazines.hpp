#define CLASSES_MAGAZINES \
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
    QGSMAGAZINE(9Bang,3Rnd), \
    QMAGAZINE(M24RL_D), \
    QMAGAZINE(DOUBLES(C7Sx,Sticky)), \
    QMAGAZINE(6Rnd_Shotgun_Incendiary), \
    QMAGAZINE(12_Rnd_Shotgun_Incendiary), \
    QMAGAZINE(60Rnd_65x39_Caseless_msbs),\
    QMAGAZINE(60Rnd_65x39_Caseless_msbs_tracers), \
    QMAGAZINE(60Rnd_65x39_Caseless_msbs_tracers_blue), \
    QMAGAZINE(60Rnd_65x39_Caseless_msbs_tracers_green), \
    QMAGAZINE(60Rnd_65x39_Caseless_msbs_tracers_yellow), \
    QMAGAZINE(60Rnd_65x39_Caseless), \
    QMAGAZINE(60Rnd_65x39_Caseless_tracers), \
    QMAGAZINE(60Rnd_65x39_Caseless_tracers_yellow), \
    QMAGAZINE(60Rnd_65x39_Caseless_tracers_blue), \
    QMAGAZINE(60Rnd_65x39_Caseless_tracers_green), \
    QMAGAZINE(3Rnd_FlareSmoke_Blue), \
    QMAGAZINE(3Rnd_FlareSmoke_Green), \
    QMAGAZINE(3Rnd_FlareSmoke_Orange), \
    QMAGAZINE(3Rnd_FlareSmoke_Purple), \
    QMAGAZINE(3Rnd_FlareSmoke_Red), \
    QMAGAZINE(3Rnd_FlareSmoke_Yellow)

class CfgMagazines {

    //= Ammo
    class 150Rnd_762x51_Box;
    class 30Rnd_65x39_caseless_msbs_mag;
    class 100Rnd_65x39_caseless_black_mag;

    #include "CfgMagazines\762x51.inc"
    #include "CfgMagazines\65x39_Caseless.inc"

    //= Grenades & Shells
    class ACE_CTS9;
    class OPTRE_M9_Frag;
    class M319_HE_Grenade_Shell;
    class M319_HEDP_Grenade_Shell;
    class OPTRE_c7_remote_throwable_sticky_mag;
    class OPTRE_signalSmokeB;
    class OPTRE_signalSmokeG;
    class OPTRE_signalSmokeO;
    class OPTRE_signalSmokeP;
    class OPTRE_signalSmokeR;
    class OPTRE_signalSmokeY;

    #include "CfgMagazines\M3Sx.inc"
    #include "CfgMagazines\M9Sx.inc"
    #include "CfgMagazines\9Bang.inc"
    #include "CfgMagazines\C7Sx.inc"
    #include "CfgMagazines\UGLSmokeFlares.inc"

    // Rockets
    class MRAWS_HEAT_F;

    #include "CfgMagazines\M24RL_D.inc"

    // Shotguns
    class OPTRE_6Rnd_8Gauge_Pellets;
    #include "CfgMagazines\Incendiary.inc"
};
