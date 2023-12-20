#define CLASSES_AMMO \
    "SWS_B_762x51_Ball", \
    "SWS_B_Grenade_Frag", \
    "SWS_B_Grenade_M3Sx", \
    "SWS_Magazine_Grenade_M3Sx_40mm_Shell", \
    "SWS_B_Grenade_M9Sx_40mm_Shell", \
    "SWS_B_C7Sx_Sticky", \
    "SWS_B_C7Sx_Sticky_Explosion", \
    "SWS_B_8Gauge_Incendiary", \
    "SWS_B_8Gauge_Incendiary_Submunition"

class CfgAmmo {
    //== Bullets
    class OPTRE_B_762x51_Ball;
    class BulletBase;

    #include "CfgAmmo\762x51.inc"
    #include "CfgAmmo\65x39_Caseless.inc"

    //== Grenades & Shells
    class OPTRE_G_M9_Frag;
    class G_40mm_HE;
    class M319_HE;
    class M319_HEDP;

    #include "CfgAmmo\M3Sx.inc"
    #include "CfgAmmo\M9Sx.inc"

    //== Explosives
    class OPTRE_c7_remote_ammo_thrown_sticky;
    class OPTRE_sticky_c7_explosion;

    #include "CfgAmmo\C7Sx.inc"

    //== Shotgun
    class B_12Gauge_Pellets_Submunition;
    class B_12Gauge_Pellets_Submunition_Deploy;

    #include "CfgAmmo\Incendiary.inc"
};
