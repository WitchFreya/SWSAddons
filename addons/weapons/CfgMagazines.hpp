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
    QMAGAZINE(M24RL_D)

class CfgMagazines {

    //= Ammo
    class 150Rnd_762x51_Box;

    #include "CfgMagazines\762x51.inc"

    //= Grenades & Shells
    class ACE_CTS9;
    class OPTRE_M9_Frag;
    class M319_HE_Grenade_Shell;
    class M319_HEDP_Grenade_Shell;

    #include "CfgMagazines\M3Sx.inc"
    #include "CfgMagazines\M9Sx.inc"
    #include "CfgMagazines\9Bang.inc"

    // Rockets
    class MRAWS_HEAT_F;

    #include "CfgMagazines\M24RL_D.inc"
};
