#define CLASSES_AMMO \
    "SWS_M_120mm_cannon_ATGM"

class CfgAmmo
{
    class 5000Rnd_762x51_Belt;
    class B_762x51_Ball;
    class B_762x51_Minigun_Tracer_Red;
    #include "CfgAmmo\ShrikeAmmo.inc"

    //== ATGMs
    class M_120mm_cannon_ATGM_LG;

    #include "CfgAmmo\ViperATGM.inc"
};