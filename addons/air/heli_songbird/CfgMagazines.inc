class CfgMagazines
{
	class VehicleMagazine; // Roll new magazines from scratch. MELB does it, so can we.
  class Pylon_M260_MELB;
	class Pylon_M261_MELB;
	class PylonMissile_1Rnd_ACE_Hellfire_AGM114K;
	class PylonMissile_1Rnd_ACE_Hellfire_AGM114N;
	class PylonMissile_1Rnd_ACE_Hellfire_AGM114L;

  class SWS_Magazine_MELB: VehicleMagazine {
		ITEM_META(0);
		initSpeed = 0;
		maxLeadSpeed = 300;
		nameSound = "rockets";
		sound[] = {"A3\sounds_f\weapons\rockets\explosion_missile_01",1.0,1,1200};
		reloadSound[] = {"",0.00031622773,1};
		muzzleImpulseFactor[] = {2,2};
	};

	class Talon_Magazine_MELB: SWS_Magazine_MELB {
		ITEM_META(2);
		count = 1;
		ammo = "SWS_M_Talon";
		displayName = "Sx260 Experimental HEDP Rocket";
		displayNameShort = "Sx260 HEDP";
		descriptionShort = "HEDP Rocket";
		weight = 14;
	};

	class Rake_Magazine_MELB: SWS_Magazine_MELB {
		ITEM_META(2);
		count = 1;
		ammo = "SWS_M_Rake";
		displayName = "Sx260 Experimental HE-AP Rocket";
		displayNameShort = "Sx261 HE";
		descriptionShort = "HE Rocket";
		weight = 12;
	};

	class Pylon_Talon_3x_MELB: Talon_Magazine_MELB {
		count = 3;
		displayName = "3x Talon (HEDP)";
		model = "melb\proxies\pylon_m260_3x.p3d";
		hardpoints[] = {"3x_Rockets_SWSLB"};
		pylonWeapon = "SWS_TalonLauncher";
		mass = 42;
	};

	class Pylon_Talon_4x_MELB: Pylon_Talon_3x_MELB {
		count = 4;
		displayName = "4x Talon (HEDP)";
		model = "melb\proxies\pylon_m260_4x.p3d";
		hardpoints[] = {"4x_Rockets_SWSLB"};
		mass = 56;
	};

	class Pylon_Rake_3x_MELB: Rake_Magazine_MELB {
		displayName = "3x Rake (HE)";
		model = "melb\proxies\pylon_m261_3x.p3d";
		hardpoints[] = {"3x_Rockets_SWSLB"};
		pylonWeapon = "SWS_RakeLauncher";
		count = 3;
		weight = 36;
	};

	class Pylon_Rake_4x_MELB: Pylon_Rake_3x_MELB {
		count = 4;
		displayName = "4x Rake (HE)";
		model = "melb\proxies\pylon_m261_4x.p3d";
		hardpoints[] = {"4x_Rockets_SWSLB"};
		mass = 48;
	};

	class Pylon_Rake_12x_MELB: Pylon_Rake_3x_MELB {
		count = 12;
		displayName = "12x Rake (HE)";
		model = "melb\proxies\pylon_m261_12x.p3d";
		hardpoints[] = {"12x_Rockets_SWSLB"};
		mass = 144;
	};

	class Pylon_S260L_MELB: Pylon_M260_MELB {
		ITEM_META(2);
		count = 0;
		displayName = "Talon Missile (HEDP)";
		description = "TALON System launch tubes. Fires missiles good against clustered infantry and light armor.";
		model = "melb\proxies\pylon_m260.p3d";
		pylonWeapon = "";
		hardpoints[] = {"RightMount_MELB","LeftMount_MELB"};
		mass = 16;
	};

	class Pylon_S261L_MELB: Pylon_M261_MELB {
		ITEM_META(2);
		count = 0;
		displayName = "Rake Missile (HEAP)";
		description = "RAKE System launch tubes. Fires missiles good against infantry and cars. High damage radius.";
		model = "melb\proxies\pylon_m261.p3d";
		pylonWeapon = "";
		hardpoints[] = {"RightMount_MELB","LeftMount_MELB"};
		mass = 40;
	};

	class SWS_AGM114K_Bare: PylonMissile_1Rnd_ACE_Hellfire_AGM114K {
		displayName = "[SWS] AGM-114K";
		model = "melb\proxies\pylon_agm_114k.p3d";
		hardpoints[] = {"SWS_Hellfires"};
	};

	class SWS_AGM114N_Bare: PylonMissile_1Rnd_ACE_Hellfire_AGM114N {
		displayName = "[SWS] AGM-114N";
		model = "melb\proxies\pylon_agm_114k.p3d";
		hardpoints[] = {"SWS_Hellfires"};
	};

	class SWS_AGM114L_Bare: PylonMissile_1Rnd_ACE_Hellfire_AGM114L {
		displayName = "[SWS] AGM-114L";
		model = "melb\proxies\pylon_agm_114k.p3d";
		hardpoints[] = {"SWS_Hellfires"};
	};
};
