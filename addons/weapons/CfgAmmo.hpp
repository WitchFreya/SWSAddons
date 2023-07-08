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
    QSHELL(9Bang)

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
    class ACE_G_CTS9;

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

	class GRENADE(9Bang): ACE_G_CTS9
	{
		explosionTime=1.5;
		ace_flashbang_Interval=0.050000001;
	};

    class GRENADE(DOUBLES(9Bang,NoFuse)): GRENADE(9bang)
	{
		ace_flashbang_Interval=0.050000001;
		timeToLive=15;
		fuseDistance=0;
		explosionTime=0.5;
	};

    //== Shells
    class G_40mm_HE;
    class M319_HE;
    class M319_HEDP;

    class SHELL(M3Sx_40mm): M319_HE {
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

    class SHELL(M9Sx_40mm): M319_HEDP {
        META;
        hit = 300;
		indirectHit = 300;
		indirectHitRange = 2;
		ace_frag_enabled = 0;
    };

    class SHELL(9Bang): G_40mm_HE {
        hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 1;
		audibleFire = 30;
		visibleFireTime = 3;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 20;
		deflecting = 5;
		timeToLive = 10;
		airFriction = -0.001;
		fuseDistance = 999;
		ace_frag_enabled = 0;
		explosionTime = 1.5;
		typicalSpeed = 50;
		effectsSmoke = "ACE_M84FlashbangEffect";
		ace_grenades_flashbang = 1;
		ace_grenades_flashbangBangs = 9;
		ace_grenades_flashbangInterval = 0.5;
		ace_grenades_flashbangIntervalMaxDeviation = 0.1;
		model = "\z\ace\addons\grenades\models\ACE_CTS_9bang_thrown.p3d";
    };
};
