#define CLASSES_MAGAZINES \
    "SWS_Magazine_100Rnd_762x51_Mag", \
    "SWS_Magazine_100Rnd_762x51_Mag_Tracer", \
    "SWS_Magazine_200Rnd_762x51_Mag", \
    "SWS_Magazine_200Rnd_762x51_Mag_Tracer", \
    "SWS_Magazine_400Rnd_762x51_Mag", \
    "SWS_Magazine_400Rnd_762x51_Mag_Tracer", \
    "SWS_Magazine_Grenade_M3Sx", \
    "SWS_Magazine_Grenade_M3Sx_1Rnd_Shell", \
    "SWS_Magazine_Grenade_M3Sx_3Rnd_Shell", \
    "SWS_Magazine_C7Sx_Sticky", \
    "SWS_Magazine_6Rnd_Shotgun_Incendiary", \
    "SWS_Magazine_12_Rnd_Shotgun_Incendiary", \
    "SWS_Magazine_60Rnd_65x39_Caseless_msbs",\
    "SWS_Magazine_60Rnd_65x39_Caseless_msbs_tracers", \
    "SWS_Magazine_60Rnd_65x39_Caseless_msbs_tracers_blue", \
    "SWS_Magazine_60Rnd_65x39_Caseless_msbs_tracers_green", \
    "SWS_Magazine_60Rnd_65x39_Caseless_msbs_tracers_yellow", \
    "SWS_Magazine_60Rnd_65x39_Caseless", \
    "SWS_Magazine_60Rnd_65x39_Caseless_tracers", \
    "SWS_Magazine_60Rnd_65x39_Caseless_tracers_yellow", \
    "SWS_Magazine_60Rnd_65x39_Caseless_tracers_blue", \
    "SWS_Magazine_60Rnd_65x39_Caseless_tracers_green", \
    "SWS_Magazine_3Rnd_FlareSmoke_Blue", \
    "SWS_Magazine_3Rnd_FlareSmoke_Green", \
    "SWS_Magazine_3Rnd_FlareSmoke_Orange", \
    "SWS_Magazine_3Rnd_FlareSmoke_Purple", \
    "SWS_Magazine_3Rnd_FlareSmoke_Red", \
    "SWS_Magazine_3Rnd_FlareSmoke_Yellow"

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
    class M319_HEDP_Grenade_Shell;
    class OPTRE_c7_remote_throwable_sticky_mag;
    class OPTRE_signalSmokeB;
    class OPTRE_signalSmokeG;
    class OPTRE_signalSmokeO;
    class OPTRE_signalSmokeP;
    class OPTRE_signalSmokeR;
    class OPTRE_signalSmokeY;

    #include "CfgMagazines\M3Sx.inc"
    #include "CfgMagazines\C7Sx.inc"
    #include "CfgMagazines\UGLSmokeFlares.inc"

    // Shotguns
    class OPTRE_6Rnd_8Gauge_Pellets;
    #include "CfgMagazines\Incendiary.inc"
};
