	class B_762x51_Minigun_Tracer_Blue_SxLB: B_762x51_Minigun_Tracer_Red
	{
		submunitionAmmo = "B_762x51_Ball_SxLB";
        tracerScale = 0.2;
        tracerStartTime = 0.1;
        tracerEndTime = 6.0;
	};

	class B_762x51_Ball_SXLB: B_762x51_Ball
	{
		cost = 1;
		hit = 14;
		caliber = 1.8;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red"; // needs blue, hmm
		aiAmmoUsageFlags = "64 + 128";
        tracerScale = 0.2;
        tracerStartTime = 0.1;
        tracerEndTime = 6.0;
	};


