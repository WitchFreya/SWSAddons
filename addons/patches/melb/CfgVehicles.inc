#define CLASSES_VEHICLES  \
  "SWS_V_Heli_Shrike"\
  , "SWS_V_Heli_Magpie"



class CfgVehicles
{
	class Helicopter_Base_H;
    class MELB_base : Helicopter_Base_H 
	{
		crew = "B_UNSCAF_Pilot_01";
		typicalCargo[] = { "B_UNSCAF_Pilot_01" };
		ace_cargo_space = 6;
		ace_cargo_loadMasterTurrets[] = {{-1},{0}};
		irTargetSize = 0.6;
		radarTargetSize = 0.45;
		startDuration = 15;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class TransportMagazines
		{
			MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_MSBS,8);
			MACRO_ADDMAGAZINE(OPTRE_SignalSmokeY,1);
			MACRO_ADDMAGAZINE(OPTRE_SignalSmokeB,1);
			MACRO_ADDMAGAZINE(SmokeShell,6);
		};
		class TransportWeapons
		{
			MACRO_ADDWEAPON(SWS_Weapon_AR0M37_GL,2);
		};
		class TransportItems
		{
			MACRO_ADDITEM(ACE_BloodIV,2);
			MACRO_ADDITEM(ACE_ElasticBandage,10);
			MACRO_ADDITEM(ACE_QuikClot,5);
			MACRO_ADDITEM(Toolkit,1);
			MACRO_ADDITEM(OPTRE_M7_Sight,2);
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent : SensorTemplateDataLink { };
				};
			};
		};
		memoryPointDriverOptics="commanderview";
		driverWeaponsInfoType="RscOptics_Heli_Attack_02_pilot";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(60 / 120)";
					minFov="(30 / 120)";
					maxFov="(60 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn=-120;
			maxTurn=120;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=1;
			maxMouseYRotSpeed=1;
			pilotOpticsShowCursor=1;
			controllable=1;
		};

	};
    class MELB_MH6M: MELB_base
    {
        scope = 1;
        scopeCurator = 1;

    };
    class MELB_H6M: MELB_base
    {
        scope = 1;
        scopeCurator = 1;
    };
    class MELB_AH6M: MELB_base
    {
        scope = 2;
        scopeCurator = 1;
    };

    class SWS_V_Heli_Shrike: MELB_AH6M
    {
        displayName = QNAME(Sx-6A Shrike);
		ITEM_META(2);
		faction = "SWS_UNSC";
		side = 1;
        class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				UIPicture = "melb\data\ui\melb_eden_ca.paa";
				class Pylons
				{
					class R_Pylon
					{
						hardpoints[] = {"RightMount_MELB", "DAR"};
						attachment = "Pylon_S260L_MELB";
						maxweight = 200;
						UIposition[] = {0.125,0.4};
					};
					class R_Rockets_12x
					{
						hardpoints[] = {"12x_Rockets_SWSLB"};
						attachment = "";
						priority = 3;
						maxweight = 300;
						UIposition[] = {0.04,0.1};
					};
					class R_Rockets_4x: R_Rockets_12x
					{
						hardpoints[] = {"4x_Rockets_SWSLB"};
						attachment = "Pylon_Talon_4x_MELB";
						priority = 2;
						maxweight = 200;
						UIposition[] = {0.04,0.15};
					};
					class R_Rockets_3x: R_Rockets_12x
					{
						hardpoints[] = {"3x_Rockets_SWSLB"};
						attachment = "Pylon_Talon_3x_MELB";
						priority = 1;
						maxweight = 200;
						UIposition[] = {0.04,0.2};
					};
					class R_HellfireRack_R_slot: R_Pylon
					{
						turret[] = {"CopilotTurret"};
						hardpoints[] = {"SWS_Hellfires"};
						attachment = "";
						maxweight = 85;
						UIposition[] = {0.04,0.45};
					};
					class R_HellfireRack_L_slot: R_HellfireRack_R_slot
					{
						UIposition[] = {0.225,0.45};
                        hardpoints[] = {"SWS_Hellfires"};
					};
					class R_Minigun: R_Pylon
					{
						hardpoints[] = {"Right_MinigunMount_MELB"};
						attachment = "Pylon_R_3000Rnd_M134_MELB";
						priority = 5;
						maxweight = 100;
						UIposition[] = {0.225,0.325};
					};
					class L_Minigun: R_Minigun
					{
						hardpoints[] = {"Left_MinigunMount_MELB"};
						attachment = "Pylon_L_3000Rnd_M134_MELB";
						UIposition[] = {0.415,0.325};
					};
					class L_HellfireRack_R_slot: R_HellfireRack_R_slot
					{
						UIposition[] = {0.405,0.45};
                        hardpoints[] = {"SWS_Hellfires"};
						mirroredMissilePos = 6;
					};
					class L_HellfireRack_L_slot: R_HellfireRack_R_slot
					{
						UIposition[] = {0.6,0.45};
                        hardpoints[] = {"SWS_Hellfires"};
						mirroredMissilePos = 5;
					};
					class L_Rockets_3x: R_Rockets_3x
					{
						hardpoints[] = {"3x_Rockets_SWSLB"};
						UIposition[] = {0.6,0.2};
						priority = 1;
						mirroredMissilePos = 4;
					};
					class L_Rockets_4x: R_Rockets_4x
					{
						hardpoints[] = {"4x_Rockets_SWSLB"};
						UIposition[] = {0.6,0.15};
						priority = 2;
						mirroredMissilePos = 3;
					};
					class L_Rockets_12x: R_Rockets_12x
					{
						hardpoints[] = {"12x_Rockets_SWSLB"};
						UIposition[] = {0.6,0.1};
						priority = 3;
						mirroredMissilePos = 2;
					};
					class L_Pylon: R_Pylon
					{
						hardpoints[] = {"LeftMount_MELB", "DAR"};
                        attachment = "Pylon_S260L_MELB";
						UIposition[] = {0.4925,0.4};
						mirroredMissilePos = 1;
					};
				};
				class presets
				{
					class HEAP
					{
						displayName = "38x RAKE-HE + M134";
						attachment[] = {"Pylon_S261L_MELB","Pylon_Rake_12x_MELB","Pylon_Rake_4x_MELB","Pylon_Rake_3x_MELB","","","Pylon_R_3000Rnd_M134_MELB","Pylon_L_3000Rnd_M134_MELB","","","Pylon_Rake_3x_MELB","Pylon_Rake_4x_MELB","Pylon_Rake_12x_MELB","Pylon_S261L_MELB"};
					};
                    class Default
                    {
                        displayName = "14x TALON-HEDP + M134";
                        attachment[] = {"Pylon_S260L_MELB","","Pylon_Talon_4x_MELB","Pylon_Talon_3x_MELB","","","Pylon_R_3000Rnd_M134_MELB","Pylon_L_3000Rnd_M134_MELB","","","Pylon_Talon_3x_MELB","Pylon_Talon_4x_MELB","","Pylon_S260L_MELB"};
                    };
					class Hellfires
					{
						displayName = "SxAGM-114K + M134";
						attachment[] = {"Pylon_HellfireLauncher_MELB","","","","SWS_AGM114K_Bare","SWS_AGM114K_Bare","Pylon_R_3000Rnd_M134_MELB","Pylon_L_3000Rnd_M134_MELB","SWS_AGM114K_Bare","SWS_AGM114K_Bare","","","","Pylon_HellfireLauncher_MELB"};
					};
					class DoubleGuns
					{
						displayName = "GAU + M134";
						attachment[] = {"Pylon_R_1300Rnd_GAU19_MELB","","","","","","Pylon_R_3000Rnd_M134_MELB","Pylon_L_3000Rnd_M134_MELB","","","","","","Pylon_L_1300Rnd_GAU19_MELB"};
					};
                    class empty
					{
						displayName = "empty";
						attachment[] = {};
                    };
				};
			};
        };
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				maxHorizontalRotSpeed = 2;
				maxMouseXRotSpeed = 2;
				maxVerticalRotSpeed = 1.2;
				maxMouseYRotSpeed = 1.2;
			};
		};
    };

    class SWS_V_Heli_Magpie: MELB_MH6M
    {
        displayName = QNAME(Sx-6M Magpie);
		ITEM_META(2);
		faction = "SWS_UNSC";
		side = 1;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				maxHorizontalRotSpeed = 2;
				maxMouseXRotSpeed = 2;
				maxVerticalRotSpeed = 1.2;
				maxMouseYRotSpeed = 1.2;
			};
		};
    };
};
