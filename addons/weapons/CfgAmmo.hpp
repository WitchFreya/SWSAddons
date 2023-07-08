#define CLASSES_AMMO \
    QAMMO(762x51_Ball), \
    QGRENADE(Frag), \
    QGRENADE(Pertustum), \
    QGRENADE(DOUBLES(Pertustum,OnImpact)), \
    QGRENADE(DOUBLES(Pertustum,OnExp))

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
        dlc = QPREFIX;
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

    class GRENADE(Pertustum): GrenadeHand {
        dlc = QPREFIX;
        hit = 300;
		timeToLive = 4;
		indirectHit = 300;
		indirectHitRange = 2;
		rhs_submunition = QGRENADE(DOUBLES(Pertustum,OnImpact));
		rhs_fuseTime[] = {1,1.3,1.8};
		rhs_selfDestructTime[] = {3.2,3.6,4.2};
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
		ace_frag_force = 0;
    };

    class GRENADE(DOUBLES(Pertustum,OnImpact)): GRENADE(Pertustum)
	{
        dlc = QPREFIX;
		rhs_submunition = QGRENADE(DOUBLES(Pertustum,OnExp));
		explosionTime = -1;
	};
	class GRENADE(DOUBLES(Pertustum,OnExp)): GRENADE(Pertustum)
	{
        dlc = QPREFIX;
		simulation = "shotShell";
		explosionTime = 0.001;
	};
};
