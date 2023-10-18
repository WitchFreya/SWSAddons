#define CLASSES_MAGAZINES \
    QUOTE(MAGAZINE(100Rnd_762x51_Mag)), \
    QUOTE(MAGAZINE(100Rnd_762x51_Mag_Tracer)), \
    QUOTE(MAGAZINE(200Rnd_762x51_Mag)), \
    QUOTE(MAGAZINE(200Rnd_762x51_Mag_Tracer)), \
    QUOTE(MAGAZINE(400Rnd_762x51_Mag)), \
    QUOTE(MAGAZINE(400Rnd_762x51_Mag_Tracer)), \
    QGMAGAZINE(M9Sx), \
    QGSMAGAZINE(M9Sx,1Rnd), \
    QGMAGAZINE(M3Sx), \
    QGSMAGAZINE(M3Sx,1Rnd), \
    QGSMAGAZINE(M3Sx,3Rnd), \
    QGMAGAZINE(9Bang), \
    QGMAGAZINE(DOUBLES(9Bang,NoFuse)), \
    QGSMAGAZINE(9Bang,1Rnd), \
    QGSMAGAZINE(9Bang,3Rnd), \
    QUOTE(MAGAZINE(M24RL_D)), \
    QUOTE(MAGAZINE(DOUBLES(C7Sx,Sticky))), \
    QUOTE(MAGAZINE(6Rnd_Shotgun_Incendiary)), \
    QUOTE(MAGAZINE(12_Rnd_Shotgun_Incendiary)), \
    QUOTE(MAGAZINE(60Rnd_65x39_Caseless_msbs)),\
    QUOTE(MAGAZINE(60Rnd_65x39_Caseless_msbs_tracers)), \
    QUOTE(MAGAZINE(60Rnd_65x39_Caseless_msbs_tracers_blue)), \
    QUOTE(MAGAZINE(60Rnd_65x39_Caseless_msbs_tracers_green)), \
    QUOTE(MAGAZINE(60Rnd_65x39_Caseless_msbs_tracers_yellow)), \
    QUOTE(MAGAZINE(60Rnd_65x39_Caseless)), \
    QUOTE(MAGAZINE(60Rnd_65x39_Caseless_tracers)), \
    QUOTE(MAGAZINE(60Rnd_65x39_Caseless_tracers_yellow)), \
    QUOTE(MAGAZINE(60Rnd_65x39_Caseless_tracers_blue)), \
    QUOTE(MAGAZINE(60Rnd_65x39_Caseless_tracers_green)), \
    QUOTE(MAGAZINE(3Rnd_FlareSmoke_Blue)), \
    QUOTE(MAGAZINE(3Rnd_FlareSmoke_Green)), \
    QUOTE(MAGAZINE(3Rnd_FlareSmoke_Orange)), \
    QUOTE(MAGAZINE(3Rnd_FlareSmoke_Purple)), \
    QUOTE(MAGAZINE(3Rnd_FlareSmoke_Red)), \
    QUOTE(MAGAZINE(3Rnd_FlareSmoke_Yellow))

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
