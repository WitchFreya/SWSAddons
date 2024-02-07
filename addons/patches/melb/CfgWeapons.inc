class cfgWeapons 
{
    class SmokeLauncher;
    class LWIRCM_MELB: SmokeLauncher
    {
        magazineReloadTime = 40;
    };
    class LowROF;
    class Mode_Burst;
    class Mode_SemiAuto;
    class M134_minigun;
    class M134_MELB: M134_minigun 
    {
        displayName = "Sx1337-H";
        class LowROF: LowROF
		{
            displayName = "LoBehold";
            dispersion = 0.0007; 
            recoil = "recoil_empty";  
        };
    };
    class missiles_DAR;

    class M260_MELB;
    class SWS_TalonLauncher: M260_MELB 
    {
        displayName = "Sx260 Talon HEDP";
        magazines[] =
		{
			"Pylon_Talon_3x_MELB",
			"Pylon_Talon_4x_MELB"
		};
        class Burst1: Mode_SemiAuto 
        {
            displayName = "Single";
            dispersion = 0.0002;
        };
        class Burst2: Mode_Burst 
        {
            displayName = "Burst";
            dispersion = 0.00033;
        };
    };
    class SWS_RakeLauncher: SWS_TalonLauncher 
    {
        displayName = "Sx260 Rake HE";
        magazines[] =
		{
			"Pylon_Rake_3x_MELB",
            "Pylon_Rake_4x_MELB",
			"Pylon_Rake_12x_MELB"
		};

    };
};