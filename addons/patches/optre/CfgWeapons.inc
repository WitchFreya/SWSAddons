
class Mode_FullAuto;
class CfgWeapons {
    
    class MGunCore;
    
    class M134_minigun: MGunCore {
        class LowROF: Mode_FullAuto;
    };
    class OPTRE_GUA23A: M134_minigun
	{
		displayName = "Sx-GAU/20 Autocannon";
		reloadTime = 0.05;
		class LowROF: LowROF
		{
			reloadTime = 0.05;
		};
	};
}; 