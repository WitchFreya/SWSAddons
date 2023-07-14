class CfgAmmo {
    class M_Scalpel_AT;
    class OPTRE_M_Jackknife_LGM;

    // 1st MEU
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

    // Optre Ordnance Expansion
    class SAG6_Vendetta : OPTRE_M_Jackknife_LGM {
        delete tracerColor;
        delete tracerColorR;
        tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
    };
};
