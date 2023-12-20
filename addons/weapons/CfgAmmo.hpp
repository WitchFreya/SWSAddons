#define CLASSES_AMMO \
    "SWS_B_762x51_Ball", \
    "SWS_B_8Gauge_Incendiary", \
    "SWS_B_8Gauge_Incendiary_Submunition"

class CfgAmmo {
    //== Bullets
    class OPTRE_B_762x51_Ball;
    class BulletBase;

    #include "CfgAmmo\762x51.inc"
    #include "CfgAmmo\65x39_Caseless.inc"

    //== Shotgun
    class B_12Gauge_Pellets_Submunition;
    class B_12Gauge_Pellets_Submunition_Deploy;

    #include "CfgAmmo\Incendiary.inc"
};
