#define CLASSES_AMMO \
    QAMMO(762x51_Ball), \
    QGRENADE(Frag), \
    QGRENADE(M9Sx), \
    QGRENADE(DOUBLES(M9Sx,OnImpact)), \
    QGRENADE(DOUBLES(M9Sx,OnExp)), \
    QGRENADE(TRIPLES(M9Sx,40mm,Shell))

#define MODEL_A3_TRACER_YELLOW \A3\Weapons_f\Data\bullettracer\tracer_yellow

class CfgAmmo {

    //== Bullets
    class OPTRE_B_762x51_Ball;

    class AMMO(762x51_Ball): OPTRE_B_762x51_Ball {
        META;
        hit = 34;
        typicalSpeed = 950;
        caliber = 6.0;
        model = QUOTE(MODEL_A3_TRACER_YELLOW);
    };

    //== Grenades
    class OPTRE_G_M9_Frag;

    class GRENADE(M3Sx): OPTRE_G_M9_Frag {
        META;
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

    class GRENADE(M9Sx): OPTRE_G_M9_Frag {
        META;
        hit = 300;
		timeToLive = 4;
		indirectHit = 300;
		indirectHitRange = 2;
		rhs_submunition = QGRENADE(DOUBLES(M9Sx,OnImpact));
		rhs_fuseTime[] = {1,1.3,1.8};
		rhs_selfDestructTime[] = {3.2,3.6,4.2};
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
		ace_frag_force = 0;
    };

    class GRENADE(DOUBLES(M9Sx,OnImpact)): GRENADE(M9Sx)
	{
        META;
		rhs_submunition = QGRENADE(DOUBLES(M9Sx,OnExp));
		explosionTime = -1;
	};

	class GRENADE(DOUBLES(M9Sx,OnExp)): GRENADE(M9Sx)
	{
        META;
		simulation = "shotShell";
		explosionTime = 0.001;
	};

    //== Shells
    class M319_HE;
    class M319_HEDP;

    class GRENADE(TRIPLES(M3Sx,40mm,Shell)): M319_HE {
        META;
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

    class GRENADE(TRIPLES(M9Sx,40mm,Shell)): M319_HEDP {
        META;
        hit = 300;
		indirectHit = 300;
		indirectHitRange = 2;
		ace_frag_enabled = 0;
    };
};
