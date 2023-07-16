#define CLASSES_AMMO \
    QAMMO(762x51_Ball), \
    QGRENADE(Frag), \
    QGRENADE(M9Sx), \
    QGRENADE(M3Sx), \
    QSHELL(M3Sx_40mm), \
    QGRENADE(DOUBLES(M9Sx,OnImpact)), \
    QGRENADE(DOUBLES(M9Sx,OnExp)), \
    QSHELL(M9Sx_40mm), \
    QGRENADE(9Bang), \
    QGRENADE(DOUBLES(9Bang,NoFuse)), \
    QSHELL(9Bang), \
    QAMMO(Hopper)

class CfgAmmo {
    //== Bullets
    class OPTRE_B_762x51_Ball;

    #include "CfgAmmo\762x51.inc"

    //== Grenades & Shells
    class OPTRE_G_M9_Frag;
    class ACE_G_CTS9;
    class G_40mm_HE;
    class M319_HE;
    class M319_HEDP;

    #include "CfgAmmo\M3Sx.inc"
    #include "CfgAmmo\M9Sx.inc"
    #include "CfgAmmo\9Bang.inc"

    //== Rockets
    class R_MRAAWS_HE_F;

    #include "CfgAmmo\Hopper.inc"
};
