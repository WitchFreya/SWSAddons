class CfgAmmo {
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
};
