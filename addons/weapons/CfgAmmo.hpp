#define CLASSES_AMMO \
    QAMMO(762x51_Ball)

#define MODEL_A3_TRACER_YELLOW \A3\Weapons_f\Data\bullettracer\tracer_yellow

class CfgAmmo {
    class GrenadeHand;
    class OPTRE_B_762x51_Ball;

    //== Bullets
    class AMMO(762x51_Ball): OPTRE_B_762x51_Ball {
        dlc = QPREFIX;
        hit = 34;
        typicalSpeed = 950;
        caliber = 6.0;
        model = QUOTE(MODEL_A3_TRACER_YELLOW);
    };

    //== Grenades
    class GRENADE(Frag): GrenadeHand {
        hit = 40;
        indirectHit = 40;
        indirectHitRange = 7;
        ace_frag_gurney_c = 3000;
		ace_frag_gurney_k = "1/2";
		ace_frag_classes[] = {"ACE_frag_small_HD"};
		ace_frag_metal = 180;
		ace_frag_charge = 300;
		ace_frag_enabled = 1;
    };
};
