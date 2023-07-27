class CfgAmmo {
    class OPTRE_M_Jackknife_LGM;
    class OPTRE_G_M9_Frag;


    #ifdef INCLUDE_MEU
    class M_Scalpel_AT;
    class Icarus_M_Jackknife_LGM : M_Scalpel_AT {
        delete flightProfiles;
        flightProfiles[]=
		{
			"Direct",
			"LOALDistance",
            "TopDown"
		};
        class Direct {};
    };
    class MEU_Fury_ammo_thrown: OPTRE_G_M9_Frag {};
    #endif

    // Optre Ordnance Expansion
    class SAG6_Vendetta : OPTRE_M_Jackknife_LGM {
        delete tracerColor;
        delete tracerColorR;
        tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
    };
};
