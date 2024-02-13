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
			initElev=7;
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
				defaultUserMFDvalues[] = {0.082,0.408,0.039,1};
		class MFD
		{
			class ShrikeHud
			{
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.0325,0.0325,0.1};
				helmetRight[] = {0.065,0,0};
				helmetDown[] = {0,-0.065,0};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.04,0.8,0.02,1};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class Pos10Vector
					{
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {1.225,1.1};
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class PlaneOrientation
					{
						type = "vector";
						source = "forward";
						pos[] = {0.5,0.5};
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weaponToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class Target
					{
						type = "vector";
						source = "targetToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class TargetingPodDir
					{
						source = "pilotcameratoview";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class TargetingPodTarget
					{
						source = "pilotcameratargettoview";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class CCIP
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class NormalizeBombCircle
					{
						type = "normalizedorsmaller";
						limit = 0.08;
						aspectRatio = 0.985402;
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1,0.1,0.9,0.9};
					};
					class LimitWaypoint
					{
						type = "limit";
						limits[] = {0.2,0.1,0.8,0.1};
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPoint";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class WPPointToView: WPPoint
					{
						source = "WPPointToView";
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5,0.5};
						min = "-rad(30)";
						max = "rad(30)";
						minAngle = "180.25-30";
						maxAngle = "180.75+30";
						aspectRatio = 1;
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.5,0.5};
						pos10[] = {0.884,0.88};
						type = "horizontoview";
						angle = 0;
					};
					class LevelP5: Level0
					{
						angle = 5;
					};
					class LevelM5: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
					class LevelP60: Level0
					{
						angle = 60;
					};
					class LevelM60: Level0
					{
						angle = -60;
					};
					class LevelP70: Level0
					{
						angle = 70;
					};
					class LevelM70: Level0
					{
						angle = -70;
					};
					class LevelP80: Level0
					{
						angle = 80;
					};
					class LevelM80: Level0
					{
						angle = -80;
					};
					class LevelP90: Level0
					{
						angle = 90;
					};
					class LevelM90: Level0
					{
						angle = -90;
					};
					class LarAmmoMax
					{
						type = "linear";
						source = "LarAmmoMax";
						sourceScale = 1;
						min = 0;
						max = 1;
						minPos[] = {0,1};
						maxPos[] = {0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source = "LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source = "LarTargetDist";
					};
				};
				class Draw
				{
					width = 1;
					alpha = "200";
					color[] = {0.04,0.8,0.04,1};
					condition = "(1 - (cameraHeadingDiffY<=-40) + (abs(cameraHeadingDiffX)>=30))*on";
					class PlaneW
					{
						alpha = 100;
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						width = 3;
						points[] = {{"PlaneOrientation",{-0.04,0},1},{"PlaneOrientation",{-0.015,0},1},{"PlaneOrientation",{-0.0075,0.015},1},{"PlaneOrientation",{0,0},1},{"PlaneOrientation",{0.0075,0.015},1},{"PlaneOrientation",{0.015,0},1},{"PlaneOrientation",{0.04,0},1}};
					};
					class Rockets
					{
						condition="rocket";
						class Cross
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0393162},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
					};
					class WeaponsText
					{
						condition = "1- mgun";
						class WeaponsText
						{
							type = "text";
							source = "weapon";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.032,0.84},1};
							right[] = {{0.087,0.84},1};
							down[] = {{0.032,0.885},1};
						};
					};
					class MGunText
					{
						condition = "mgun";
						class WeaponsText
						{
							type = "text";
							source = "static";
							text = "GUN";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.032,0.84},1};
							right[] = {{0.087,0.84},1};
							down[] = {{0.032,0.885},1};
						};
					};
					class AmmoText
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.032,0.88},1};
						right[] = {{0.087,0.88},1};
						down[] = {{0.032,0.925},1};
					};
					class TargetLocking
					{
						condition = "missilelocking";
						blinkingPattern[] = {0.2,0.2};
						blinkingStartsOn = 1;
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target",1,"Limit0109",1,{0,-0.029562},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.029562},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.029562},1}};
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target",1,"Limit0109",1,{0,-0.029562},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.029562},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.029562},1}};
						};
					};
					class IncomingMissile
					{
						condition = "incomingmissile";
						blinkingPattern[] = {0.3,0.3};
						blinkingStartsOn = 1;
						color[] = {1,0,0};
						class Text
						{
							type = "text";
							source = "static";
							text = "!INCOMING MISSILE!";
							align = "center";
							scale = 1;
							pos[] = {{0.485,0.216788},1};
							right[] = {{0.545,0.216788},1};
							down[] = {{0.485,0.266058},1};
						};
					};
					class TargetingPodGroup
					{
						condition = "1-pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] = {{"TargetingPodDir",1,{0.0208056,0.00407807},1},{"TargetingPodDir",1,{0.0208056,-0.00407807},1},{},{"TargetingPodDir",1,{0.0176381,-0.0116134},1},{"TargetingPodDir",1,{0.0117854,-0.0173806},1},{},{"TargetingPodDir",1,{0.00413849,-0.0205019},1},{"TargetingPodDir",1,{-0.00413849,-0.0205019},1},{},{"TargetingPodDir",1,{-0.0117854,-0.0173806},1},{"TargetingPodDir",1,{-0.0176381,-0.0116134},1},{},{"TargetingPodDir",1,{-0.0208056,-0.00407807},1},{"TargetingPodDir",1,{-0.0208056,0.00407808},1},{},{"TargetingPodDir",1,{-0.0176381,0.0116134},1},{"TargetingPodDir",1,{-0.0117854,0.0173806},1},{},{"TargetingPodDir",1,{-0.00413849,0.0205019},1},{"TargetingPodDir",1,{0.00413849,0.0205019},1},{},{"TargetingPodDir",1,{0.0117854,0.0173806},1},{"TargetingPodDir",1,{0.0176381,0.0116134},1},{},{"TargetingPodDir",1,{0.0208056,0.00407807},1},{"TargetingPodDir",1,{0.0208056,-0.00407808},1},{},{"TargetingPodDir",1,{0.0176381,-0.0116134},1},{"TargetingPodDir",1,{0.0117854,-0.0173807},1},{},{"TargetingPodDir",1,{0.00413849,-0.0205019},1},{"TargetingPodDir",1,{-0.0041385,-0.0205019},1},{},{"TargetingPodDir",1,{-0.0117854,-0.0173806},1},{"TargetingPodDir",1,{-0.0176381,-0.0116134},1},{},{}};
						};
					};
					class TargetingPodGroupOn
					{
						condition = "pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] = {{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,-0.00407807},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,-0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,-0.0173806},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,-0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.00413849,-0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,-0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,-0.0116134},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0208056,-0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0208056,0.00407808},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,0.0173806},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.00413849,0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,0.0116134},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,-0.00407808},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,-0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,-0.0173807},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,-0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0041385,-0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,-0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,-0.0116134},1},{},{}};
						};
					};
					class MainCenterLineL
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW",{-0.49,"0 + 0.025"},1},{"PlaneW",{-0.49,0},1},{"PlaneW",{-0.25,0},1}};
					};
					class MainCenterLineR
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW",{0.49,"0 + 0.025"},1},{"PlaneW",{0.49,0},1},{"PlaneW",{0.25,0},1}};
					};
					class SpeedIndicatorBox
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW",{-0.49,-0.25},1},{"PlaneW",{-0.49,-0.2},1},{"PlaneW",{-0.3,-0.2},1},{"PlaneW",{-0.3,-0.25},1},{"PlaneW",{-0.49,-0.25},1}};
					};
					class SpeedGroup
					{
						type = "group";
						condition = "speed < 285";
						class SpeedNumber
						{
							type = "text";
							source = "speed";
							sourceScale = 3.6;
							align = "center";
							scale = 1;
							pos[] = {"PlaneW",{-0.4,-0.25},1};
							right[] = {"PlaneW",{-0.3,-0.25},1};
							down[] = {"PlaneW",{-0.4,-0.2},1};
						};
					};
					class Grid
					{
						condition = "on";
						class CoordXNumber
						{
							type = "text";
							source = "coordinateX";
							sourceScale = 0.01;
							sourceLength = 3;
							sourceOffset = -0.5;
							align = "left";
							scale = 1;
							pos[] = {{0.906,0.854},1};
							right[] = {{0.954,0.854},1};
							down[] = {{0.906,0.899},1};
						};
						class CoordYNumber: CoordXNumber
						{
							source = "coordinateY";
							align = "right";
							pos[] = {{0.922,0.854},1};
							right[] = {{0.967,0.854},1};
							down[] = {{0.922,0.899},1};
						};
					};
					class AltitudeIndicatorBox
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW",{0.49,-0.25},1},{"PlaneW",{0.49,-0.2},1},{"PlaneW",{0.3,-0.2},1},{"PlaneW",{0.3,-0.25},1},{"PlaneW",{0.49,-0.25},1}};
					};
					class AltitudeNumber
					{
						type = "text";
						source = "altitudeAGL";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {"PlaneW",{0.4,-0.25},1};
						right[] = {"PlaneW",{0.48,-0.25},1};
						down[] = {"PlaneW",{0.4,-0.2},1};
					};
					class ClimbText
					{
						type = "text";
						source = "static";
						text = "C:";
						align = "left";
						scale = 1;
						sourceScale = 1;

						pos[] = {"PlaneW",{0.42,-0.19},1};
						right[] = {"PlaneW",{"+0.32 + 0.04",-0.19},1};
						down[] = {"PlaneW",{0.42,"-0.192 + 0.041"},1};
					};
					class ClimbSpeed
					{
						type = "text";
						source = "vspeed";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {"PlaneW",{0.48,-0.19},1};
						right[] = {"PlaneW",{0.54,-0.19},1};
						down[] = {"PlaneW",{0.48,-0.15},1};
					};
					class HeadingArrow
					{
						type = "line";
						width = 3;
						points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.02,0.042},1},{"WPPoint",1,"LimitWaypoint",1,{0,0.022},1},{"WPPoint",1,"LimitWaypoint",1,{0.02,0.042},1}};
					};
					class WP
					{
						condition = "wpvalid";
						class WPdist
						{
							type = "text";
							source = "wpdist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.924,0.605018},1};
							down[] = {{0.924,0.642464},1};
							right[] = {{0.964,0.605018},1};
						};
						class WPIndex
						{
							type = "text";
							source = "wpIndex";
							sourceScale = 1;
							sourceLength = 2;
							align = "right";
							scale = 1;
							pos[] = {{0.877,0.605018},1};
							right[] = {{0.917,0.605018},1};
							down[] = {{0.877,0.642464},1};
						};
						class WPstatic
						{
							type = "text";
							source = "static";
							text = "WP";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.825+0.01",0.6065},1};
							right[] = {{0.875,0.6065},1};
							down[] = {{"0.825+0.01",0.6415},1};
						};
						class WPKM
						{
							type = "text";
							source = "static";
							text = ":";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.825+0.09",0.6065},1};
							right[] = {{0.955,0.6065},1};
							down[] = {{"0.825+0.09",0.6415},1};
						};
					};
					class HeadingRotation
					{
						condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type = "text";
							source = "cameraDir";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{"0.80-0.302","0.082+0.065"},1};
							right[] = {{"0.83-0.302","0.082+0.065"},1};
							down[] = {{"0.80-0.302","0.113+0.065"},1};
						};
						class HeadingArrow
						{
							type = "line";
							width = 3;
							points[] = {{{0.488,0.141},1},{{0.512,0.141},1},{{0.542,0.161},1},{{0.512,0.181},1},{{0.488,0.181},1},{{0.458,0.161},1},{{0.488,0.141},1},{}};
						};
					};
					class HeadingScale
					{
						type = "scale";
						NeverEatSeaWeed = 1;
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 3;
						top = 0.1;
						center = 0.5;
						bottom = 0.9;
						lineXleft = 0.105;
						lineYright = 0.115;
						lineXleftMajor = 0.095;
						lineYrightMajor = 0.115;
						majorLineEach = 5;
						numberEach = 5;
						step = "18 / 9";
						stepSize = "(0.70 - 0.3) / 15";
						align = "center";
						scale = 1;
						pos[] = {0.096,0.0546};
						right[] = {0.143,0.0546};
						down[] = {0.096,0.093};
					};
					class HeadingIndicatorBox
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW",{-0.035,-0.455},1},{"PlaneW",{-0.035,-0.5},1},{"PlaneW",{0.035,-0.5},1},{"PlaneW",{0.035,-0.455},1},{"PlaneW",{-0.035,-0.455},1}};
					};
					class HeadingIndicatorArrow
					{
						type = "polygon";
						points[] = {{{"PlaneW",{-0.015,-0.455},1},{"PlaneW",{0,-0.445},1},{"PlaneW",{0.015,-0.455},1}}};
					};
					class HeadingNumber
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {"PlaneW",{0,"(-0.5   )"},1};
						right[] = {"PlaneW",{0.03,"(-0.5   )"},1};
						down[] = {"PlaneW",{0,"(-0.5 + 0.045 )"},1};
					};
					class HorizonBankRot
					{
						type = "line";
						width = 2;
						points[] = {{"HorizonBankRot",{0,"0.39421001-0.109"},1},{"HorizonBankRot",{0.01,"0.41673699-0.109"},1},{"HorizonBankRot",{-0.01,"0.41673699-0.109"},1},{"HorizonBankRot",{0,"0.39421001-0.109"},1}};
					};
					class HorizonBankRotLines
					{
						type = "line";
						width = 3;
						points[] = {{{0.619959,0.712986},1},{{0.631439,0.744203},1},{},{{0.58291,0.739019},1},{{0.588087,0.760778},1},{},{{0.540574,0.748504},1},{{0.543184,0.770838},1},{},{{0.4975,0.740421},1},{{0.4975,0.77421},1},{},{{0.454426,0.748504},1},{{0.451816,0.770838},1},{},{{0.41209,0.739019},1},{{0.406913,0.760778},1},{},{{0.375041,0.712986},1},{{0.363561,0.744203},1}};
					};
					class Horizont
					{
						clipTL[] = {0.2,0.2};
						clipBR[] = {0.8,0.8};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								width = 3;
								points[] = {{"Level0",{0.75,0},1},{"Level0",{0.065,0},1},{},{"Level0",{-0.065,0},1},{"Level0",{-0.75,0},1}};
							};
						};
						class HideOnTurn
						{
							condition = "20-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=340)) ";
							class Limiter
							{
								class Level0
								{
									type = "line";
									width = 2;
									points[] = {};
								};
								class LevelM5: Level0
								{
									type = "line";
									points[] = {{"LevelM5",{-0.235,-0.02},1},{"LevelM5",{-0.235,0},1},{},{"LevelM5",{-0.22,0},1},{"LevelM5",{-0.205,0},1},{},{"LevelM5",{-0.19,0},1},{"LevelM5",{-0.175,0},1},{},{"LevelM5",{-0.16,0},1},{"LevelM5",{-0.145,0},1},{},{"LevelM5",{-0.13,0},1},{"LevelM5",{-0.115,0},1},{},{"LevelM5",{-0.1,0},1},{"LevelM5",{-0.085,0},1},{},{"LevelM5",{-0.07,0},1},{"LevelM5",{-0.055,0},1},{},{},{"LevelM5",{0.235,-0.02},1},{"LevelM5",{0.235,0},1},{},{"LevelM5",{0.22,0},1},{"LevelM5",{0.205,0},1},{},{"LevelM5",{0.19,0},1},{"LevelM5",{0.175,0},1},{},{"LevelM5",{0.16,0},1},{"LevelM5",{0.145,0},1},{},{"LevelM5",{0.13,0},1},{"LevelM5",{0.115,0},1},{},{"LevelM5",{0.1,0},1},{"LevelM5",{0.085,0},1},{},{"LevelM5",{0.07,0},1},{"LevelM5",{0.055,0},1},{}};
								};
								class VALM_1_5
								{
									type = "text";
									source = "static";
									text = -5;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM5",{-0.26,-0.032},1};
									right[] = {"LevelM5",{-0.2,-0.032},1};
									down[] = {"LevelM5",{-0.26,0.018},1};
								};
								class VALM_1_5_R
								{
									type = "text";
									source = "static";
									text = -5;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM5",{0.26,-0.032},1};
									right[] = {"LevelM5",{0.32,-0.032},1};
									down[] = {"LevelM5",{0.26,0.018},1};
								};
								class LevelP5: Level0
								{
									type = "line";
									points[] = {{"LevelP5",{"-0.22-0.015",0.02},1},{"LevelP5",{"-0.22-0.015",0},1},{"LevelP5",{-0.06,0},1},{},{"LevelP5",{0.06,0},1},{"LevelP5",{"+0.22+0.015",0},1},{"LevelP5",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_5
								{
									type = "text";
									source = "static";
									text = "5";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP5",{-0.26,-0.017},1};
									right[] = {"LevelP5",{-0.2,-0.017},1};
									down[] = {"LevelP5",{-0.26,0.033},1};
								};
								class VALP_1_5_R
								{
									type = "text";
									source = "static";
									text = "5";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP5",{0.26,-0.017},1};
									right[] = {"LevelP5",{0.32,-0.017},1};
									down[] = {"LevelP5",{0.26,0.033},1};
								};
								class LevelM10: Level0
								{
									type = "line";
									points[] = {{"LevelM10",{-0.235,-0.02},1},{"LevelM10",{-0.235,0},1},{},{"LevelM10",{-0.22,0},1},{"LevelM10",{-0.205,0},1},{},{"LevelM10",{-0.19,0},1},{"LevelM10",{-0.175,0},1},{},{"LevelM10",{-0.16,0},1},{"LevelM10",{-0.145,0},1},{},{"LevelM10",{-0.13,0},1},{"LevelM10",{-0.115,0},1},{},{"LevelM10",{-0.1,0},1},{"LevelM10",{-0.085,0},1},{},{"LevelM10",{-0.07,0},1},{"LevelM10",{-0.055,0},1},{},{},{"LevelM10",{0.235,-0.02},1},{"LevelM10",{0.235,0},1},{},{"LevelM10",{0.22,0},1},{"LevelM10",{0.205,0},1},{},{"LevelM10",{0.19,0},1},{"LevelM10",{0.175,0},1},{},{"LevelM10",{0.16,0},1},{"LevelM10",{0.145,0},1},{},{"LevelM10",{0.13,0},1},{"LevelM10",{0.115,0},1},{},{"LevelM10",{0.1,0},1},{"LevelM10",{0.085,0},1},{},{"LevelM10",{0.07,0},1},{"LevelM10",{0.055,0},1},{}};
								};
								class VALM_1_10
								{
									type = "text";
									source = "static";
									text = -10;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM10",{-0.26,-0.032},1};
									right[] = {"LevelM10",{-0.2,-0.032},1};
									down[] = {"LevelM10",{-0.26,0.018},1};
								};
								class VALM_1_10_R
								{
									type = "text";
									source = "static";
									text = -10;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM10",{0.26,-0.032},1};
									right[] = {"LevelM10",{0.32,-0.032},1};
									down[] = {"LevelM10",{0.26,0.018},1};
								};
								class LevelP10: Level0
								{
									type = "line";
									points[] = {{"LevelP10",{"-0.22-0.015",0.02},1},{"LevelP10",{"-0.22-0.015",0},1},{"LevelP10",{-0.06,0},1},{},{"LevelP10",{0.06,0},1},{"LevelP10",{"+0.22+0.015",0},1},{"LevelP10",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_10
								{
									type = "text";
									source = "static";
									text = "10";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP10",{-0.26,-0.017},1};
									right[] = {"LevelP10",{-0.2,-0.017},1};
									down[] = {"LevelP10",{-0.26,0.033},1};
								};
								class VALP_1_10_R
								{
									type = "text";
									source = "static";
									text = "10";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP10",{0.26,-0.017},1};
									right[] = {"LevelP10",{0.32,-0.017},1};
									down[] = {"LevelP10",{0.26,0.033},1};
								};
								class LevelM15: Level0
								{
									type = "line";
									points[] = {{"LevelM15",{-0.235,-0.02},1},{"LevelM15",{-0.235,0},1},{},{"LevelM15",{-0.22,0},1},{"LevelM15",{-0.205,0},1},{},{"LevelM15",{-0.19,0},1},{"LevelM15",{-0.175,0},1},{},{"LevelM15",{-0.16,0},1},{"LevelM15",{-0.145,0},1},{},{"LevelM15",{-0.13,0},1},{"LevelM15",{-0.115,0},1},{},{"LevelM15",{-0.1,0},1},{"LevelM15",{-0.085,0},1},{},{"LevelM15",{-0.07,0},1},{"LevelM15",{-0.055,0},1},{},{},{"LevelM15",{0.235,-0.02},1},{"LevelM15",{0.235,0},1},{},{"LevelM15",{0.22,0},1},{"LevelM15",{0.205,0},1},{},{"LevelM15",{0.19,0},1},{"LevelM15",{0.175,0},1},{},{"LevelM15",{0.16,0},1},{"LevelM15",{0.145,0},1},{},{"LevelM15",{0.13,0},1},{"LevelM15",{0.115,0},1},{},{"LevelM15",{0.1,0},1},{"LevelM15",{0.085,0},1},{},{"LevelM15",{0.07,0},1},{"LevelM15",{0.055,0},1},{}};
								};
								class VALM_1_15
								{
									type = "text";
									source = "static";
									text = -15;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM15",{-0.26,-0.032},1};
									right[] = {"LevelM15",{-0.2,-0.032},1};
									down[] = {"LevelM15",{-0.26,0.018},1};
								};
								class VALM_1_15_R
								{
									type = "text";
									source = "static";
									text = -15;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM15",{0.26,-0.032},1};
									right[] = {"LevelM15",{0.32,-0.032},1};
									down[] = {"LevelM15",{0.26,0.018},1};
								};
								class LevelP15: Level0
								{
									type = "line";
									points[] = {{"LevelP15",{"-0.22-0.015",0.02},1},{"LevelP15",{"-0.22-0.015",0},1},{"LevelP15",{-0.06,0},1},{},{"LevelP15",{0.06,0},1},{"LevelP15",{"+0.22+0.015",0},1},{"LevelP15",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_15
								{
									type = "text";
									source = "static";
									text = "15";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP15",{-0.26,-0.017},1};
									right[] = {"LevelP15",{-0.2,-0.017},1};
									down[] = {"LevelP15",{-0.26,0.033},1};
								};
								class VALP_1_15_R
								{
									type = "text";
									source = "static";
									text = "15";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP15",{0.26,-0.017},1};
									right[] = {"LevelP15",{0.32,-0.017},1};
									down[] = {"LevelP15",{0.26,0.033},1};
								};
								class LevelM20: Level0
								{
									type = "line";
									points[] = {{"LevelM20",{-0.235,-0.02},1},{"LevelM20",{-0.235,0},1},{},{"LevelM20",{-0.22,0},1},{"LevelM20",{-0.205,0},1},{},{"LevelM20",{-0.19,0},1},{"LevelM20",{-0.175,0},1},{},{"LevelM20",{-0.16,0},1},{"LevelM20",{-0.145,0},1},{},{"LevelM20",{-0.13,0},1},{"LevelM20",{-0.115,0},1},{},{"LevelM20",{-0.1,0},1},{"LevelM20",{-0.085,0},1},{},{"LevelM20",{-0.07,0},1},{"LevelM20",{-0.055,0},1},{},{},{"LevelM20",{0.235,-0.02},1},{"LevelM20",{0.235,0},1},{},{"LevelM20",{0.22,0},1},{"LevelM20",{0.205,0},1},{},{"LevelM20",{0.19,0},1},{"LevelM20",{0.175,0},1},{},{"LevelM20",{0.16,0},1},{"LevelM20",{0.145,0},1},{},{"LevelM20",{0.13,0},1},{"LevelM20",{0.115,0},1},{},{"LevelM20",{0.1,0},1},{"LevelM20",{0.085,0},1},{},{"LevelM20",{0.07,0},1},{"LevelM20",{0.055,0},1},{}};
								};
								class VALM_1_20
								{
									type = "text";
									source = "static";
									text = -20;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM20",{-0.26,-0.032},1};
									right[] = {"LevelM20",{-0.2,-0.032},1};
									down[] = {"LevelM20",{-0.26,0.018},1};
								};
								class VALM_1_20_R
								{
									type = "text";
									source = "static";
									text = -20;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM20",{0.26,-0.032},1};
									right[] = {"LevelM20",{0.32,-0.032},1};
									down[] = {"LevelM20",{0.26,0.018},1};
								};
								class LevelP20: Level0
								{
									type = "line";
									points[] = {{"LevelP20",{"-0.22-0.015",0.02},1},{"LevelP20",{"-0.22-0.015",0},1},{"LevelP20",{-0.06,0},1},{},{"LevelP20",{0.06,0},1},{"LevelP20",{"+0.22+0.015",0},1},{"LevelP20",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_20
								{
									type = "text";
									source = "static";
									text = "20";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP20",{-0.26,-0.017},1};
									right[] = {"LevelP20",{-0.2,-0.017},1};
									down[] = {"LevelP20",{-0.26,0.033},1};
								};
								class VALP_1_20_R
								{
									type = "text";
									source = "static";
									text = "20";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP20",{0.26,-0.017},1};
									right[] = {"LevelP20",{0.32,-0.017},1};
									down[] = {"LevelP20",{0.26,0.033},1};
								};
								class LevelM25: Level0
								{
									type = "line";
									points[] = {{"LevelM25",{-0.235,-0.02},1},{"LevelM25",{-0.235,0},1},{},{"LevelM25",{-0.22,0},1},{"LevelM25",{-0.205,0},1},{},{"LevelM25",{-0.19,0},1},{"LevelM25",{-0.175,0},1},{},{"LevelM25",{-0.16,0},1},{"LevelM25",{-0.145,0},1},{},{"LevelM25",{-0.13,0},1},{"LevelM25",{-0.115,0},1},{},{"LevelM25",{-0.1,0},1},{"LevelM25",{-0.085,0},1},{},{"LevelM25",{-0.07,0},1},{"LevelM25",{-0.055,0},1},{},{},{"LevelM25",{0.235,-0.02},1},{"LevelM25",{0.235,0},1},{},{"LevelM25",{0.22,0},1},{"LevelM25",{0.205,0},1},{},{"LevelM25",{0.19,0},1},{"LevelM25",{0.175,0},1},{},{"LevelM25",{0.16,0},1},{"LevelM25",{0.145,0},1},{},{"LevelM25",{0.13,0},1},{"LevelM25",{0.115,0},1},{},{"LevelM25",{0.1,0},1},{"LevelM25",{0.085,0},1},{},{"LevelM25",{0.07,0},1},{"LevelM25",{0.055,0},1},{}};
								};
								class VALM_1_25
								{
									type = "text";
									source = "static";
									text = -25;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM25",{-0.26,-0.032},1};
									right[] = {"LevelM25",{-0.2,-0.032},1};
									down[] = {"LevelM25",{-0.26,0.018},1};
								};
								class VALM_1_25_R
								{
									type = "text";
									source = "static";
									text = -25;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM25",{0.26,-0.032},1};
									right[] = {"LevelM25",{0.32,-0.032},1};
									down[] = {"LevelM25",{0.26,0.018},1};
								};
								class LevelP25: Level0
								{
									type = "line";
									points[] = {{"LevelP25",{"-0.22-0.015",0.02},1},{"LevelP25",{"-0.22-0.015",0},1},{"LevelP25",{-0.06,0},1},{},{"LevelP25",{0.06,0},1},{"LevelP25",{"+0.22+0.015",0},1},{"LevelP25",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_25
								{
									type = "text";
									source = "static";
									text = "25";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP25",{-0.26,-0.017},1};
									right[] = {"LevelP25",{-0.2,-0.017},1};
									down[] = {"LevelP25",{-0.26,0.033},1};
								};
								class VALP_1_25_R
								{
									type = "text";
									source = "static";
									text = "25";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP25",{0.26,-0.017},1};
									right[] = {"LevelP25",{0.32,-0.017},1};
									down[] = {"LevelP25",{0.26,0.033},1};
								};
								class LevelM30: Level0
								{
									type = "line";
									points[] = {{"LevelM30",{-0.235,-0.02},1},{"LevelM30",{-0.235,0},1},{},{"LevelM30",{-0.22,0},1},{"LevelM30",{-0.205,0},1},{},{"LevelM30",{-0.19,0},1},{"LevelM30",{-0.175,0},1},{},{"LevelM30",{-0.16,0},1},{"LevelM30",{-0.145,0},1},{},{"LevelM30",{-0.13,0},1},{"LevelM30",{-0.115,0},1},{},{"LevelM30",{-0.1,0},1},{"LevelM30",{-0.085,0},1},{},{"LevelM30",{-0.07,0},1},{"LevelM30",{-0.055,0},1},{},{},{"LevelM30",{0.235,-0.02},1},{"LevelM30",{0.235,0},1},{},{"LevelM30",{0.22,0},1},{"LevelM30",{0.205,0},1},{},{"LevelM30",{0.19,0},1},{"LevelM30",{0.175,0},1},{},{"LevelM30",{0.16,0},1},{"LevelM30",{0.145,0},1},{},{"LevelM30",{0.13,0},1},{"LevelM30",{0.115,0},1},{},{"LevelM30",{0.1,0},1},{"LevelM30",{0.085,0},1},{},{"LevelM30",{0.07,0},1},{"LevelM30",{0.055,0},1},{}};
								};
								class VALM_1_30
								{
									type = "text";
									source = "static";
									text = -30;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM30",{-0.26,-0.032},1};
									right[] = {"LevelM30",{-0.2,-0.032},1};
									down[] = {"LevelM30",{-0.26,0.018},1};
								};
								class VALM_1_30_R
								{
									type = "text";
									source = "static";
									text = -30;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM30",{0.26,-0.032},1};
									right[] = {"LevelM30",{0.32,-0.032},1};
									down[] = {"LevelM30",{0.26,0.018},1};
								};
								class LevelP30: Level0
								{
									type = "line";
									points[] = {{"LevelP30",{"-0.22-0.015",0.02},1},{"LevelP30",{"-0.22-0.015",0},1},{"LevelP30",{-0.06,0},1},{},{"LevelP30",{0.06,0},1},{"LevelP30",{"+0.22+0.015",0},1},{"LevelP30",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_30
								{
									type = "text";
									source = "static";
									text = "30";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP30",{-0.26,-0.017},1};
									right[] = {"LevelP30",{-0.2,-0.017},1};
									down[] = {"LevelP30",{-0.26,0.033},1};
								};
								class VALP_1_30_R
								{
									type = "text";
									source = "static";
									text = "30";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP30",{0.26,-0.017},1};
									right[] = {"LevelP30",{0.32,-0.017},1};
									down[] = {"LevelP30",{0.26,0.033},1};
								};
								class LevelM35: Level0
								{
									type = "line";
									points[] = {{"LevelM35",{-0.235,-0.02},1},{"LevelM35",{-0.235,0},1},{},{"LevelM35",{-0.22,0},1},{"LevelM35",{-0.205,0},1},{},{"LevelM35",{-0.19,0},1},{"LevelM35",{-0.175,0},1},{},{"LevelM35",{-0.16,0},1},{"LevelM35",{-0.145,0},1},{},{"LevelM35",{-0.13,0},1},{"LevelM35",{-0.115,0},1},{},{"LevelM35",{-0.1,0},1},{"LevelM35",{-0.085,0},1},{},{"LevelM35",{-0.07,0},1},{"LevelM35",{-0.055,0},1},{},{},{"LevelM35",{0.235,-0.02},1},{"LevelM35",{0.235,0},1},{},{"LevelM35",{0.22,0},1},{"LevelM35",{0.205,0},1},{},{"LevelM35",{0.19,0},1},{"LevelM35",{0.175,0},1},{},{"LevelM35",{0.16,0},1},{"LevelM35",{0.145,0},1},{},{"LevelM35",{0.13,0},1},{"LevelM35",{0.115,0},1},{},{"LevelM35",{0.1,0},1},{"LevelM35",{0.085,0},1},{},{"LevelM35",{0.07,0},1},{"LevelM35",{0.055,0},1},{}};
								};
								class VALM_1_35
								{
									type = "text";
									source = "static";
									text = -35;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM35",{-0.26,-0.032},1};
									right[] = {"LevelM35",{-0.2,-0.032},1};
									down[] = {"LevelM35",{-0.26,0.018},1};
								};
								class VALM_1_35_R
								{
									type = "text";
									source = "static";
									text = -35;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM35",{0.26,-0.032},1};
									right[] = {"LevelM35",{0.32,-0.032},1};
									down[] = {"LevelM35",{0.26,0.018},1};
								};
								class LevelP35: Level0
								{
									type = "line";
									points[] = {{"LevelP35",{"-0.22-0.015",0.02},1},{"LevelP35",{"-0.22-0.015",0},1},{"LevelP35",{-0.06,0},1},{},{"LevelP35",{0.06,0},1},{"LevelP35",{"+0.22+0.015",0},1},{"LevelP35",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_35
								{
									type = "text";
									source = "static";
									text = "35";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP35",{-0.26,-0.017},1};
									right[] = {"LevelP35",{-0.2,-0.017},1};
									down[] = {"LevelP35",{-0.26,0.033},1};
								};
								class VALP_1_35_R
								{
									type = "text";
									source = "static";
									text = "35";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP35",{0.26,-0.017},1};
									right[] = {"LevelP35",{0.32,-0.017},1};
									down[] = {"LevelP35",{0.26,0.033},1};
								};
								class LevelM40: Level0
								{
									type = "line";
									points[] = {{"LevelM40",{-0.235,-0.02},1},{"LevelM40",{-0.235,0},1},{},{"LevelM40",{-0.22,0},1},{"LevelM40",{-0.205,0},1},{},{"LevelM40",{-0.19,0},1},{"LevelM40",{-0.175,0},1},{},{"LevelM40",{-0.16,0},1},{"LevelM40",{-0.145,0},1},{},{"LevelM40",{-0.13,0},1},{"LevelM40",{-0.115,0},1},{},{"LevelM40",{-0.1,0},1},{"LevelM40",{-0.085,0},1},{},{"LevelM40",{-0.07,0},1},{"LevelM40",{-0.055,0},1},{},{},{"LevelM40",{0.235,-0.02},1},{"LevelM40",{0.235,0},1},{},{"LevelM40",{0.22,0},1},{"LevelM40",{0.205,0},1},{},{"LevelM40",{0.19,0},1},{"LevelM40",{0.175,0},1},{},{"LevelM40",{0.16,0},1},{"LevelM40",{0.145,0},1},{},{"LevelM40",{0.13,0},1},{"LevelM40",{0.115,0},1},{},{"LevelM40",{0.1,0},1},{"LevelM40",{0.085,0},1},{},{"LevelM40",{0.07,0},1},{"LevelM40",{0.055,0},1},{}};
								};
								class VALM_1_40
								{
									type = "text";
									source = "static";
									text = -40;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM40",{-0.26,-0.032},1};
									right[] = {"LevelM40",{-0.2,-0.032},1};
									down[] = {"LevelM40",{-0.26,0.018},1};
								};
								class VALM_1_40_R
								{
									type = "text";
									source = "static";
									text = -40;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM40",{0.26,-0.032},1};
									right[] = {"LevelM40",{0.32,-0.032},1};
									down[] = {"LevelM40",{0.26,0.018},1};
								};
								class LevelP40: Level0
								{
									type = "line";
									points[] = {{"LevelP40",{"-0.22-0.015",0.02},1},{"LevelP40",{"-0.22-0.015",0},1},{"LevelP40",{-0.06,0},1},{},{"LevelP40",{0.06,0},1},{"LevelP40",{"+0.22+0.015",0},1},{"LevelP40",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_40
								{
									type = "text";
									source = "static";
									text = "40";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP40",{-0.26,-0.017},1};
									right[] = {"LevelP40",{-0.2,-0.017},1};
									down[] = {"LevelP40",{-0.26,0.033},1};
								};
								class VALP_1_40_R
								{
									type = "text";
									source = "static";
									text = "40";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP40",{0.26,-0.017},1};
									right[] = {"LevelP40",{0.32,-0.017},1};
									down[] = {"LevelP40",{0.26,0.033},1};
								};
								class LevelM45: Level0
								{
									type = "line";
									points[] = {{"LevelM45",{-0.235,-0.02},1},{"LevelM45",{-0.235,0},1},{},{"LevelM45",{-0.22,0},1},{"LevelM45",{-0.205,0},1},{},{"LevelM45",{-0.19,0},1},{"LevelM45",{-0.175,0},1},{},{"LevelM45",{-0.16,0},1},{"LevelM45",{-0.145,0},1},{},{"LevelM45",{-0.13,0},1},{"LevelM45",{-0.115,0},1},{},{"LevelM45",{-0.1,0},1},{"LevelM45",{-0.085,0},1},{},{"LevelM45",{-0.07,0},1},{"LevelM45",{-0.055,0},1},{},{},{"LevelM45",{0.235,-0.02},1},{"LevelM45",{0.235,0},1},{},{"LevelM45",{0.22,0},1},{"LevelM45",{0.205,0},1},{},{"LevelM45",{0.19,0},1},{"LevelM45",{0.175,0},1},{},{"LevelM45",{0.16,0},1},{"LevelM45",{0.145,0},1},{},{"LevelM45",{0.13,0},1},{"LevelM45",{0.115,0},1},{},{"LevelM45",{0.1,0},1},{"LevelM45",{0.085,0},1},{},{"LevelM45",{0.07,0},1},{"LevelM45",{0.055,0},1},{}};
								};
								class VALM_1_45
								{
									type = "text";
									source = "static";
									text = -45;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM45",{-0.26,-0.032},1};
									right[] = {"LevelM45",{-0.2,-0.032},1};
									down[] = {"LevelM45",{-0.26,0.018},1};
								};
								class VALM_1_45_R
								{
									type = "text";
									source = "static";
									text = -45;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM45",{0.26,-0.032},1};
									right[] = {"LevelM45",{0.32,-0.032},1};
									down[] = {"LevelM45",{0.26,0.018},1};
								};
								class LevelP45: Level0
								{
									type = "line";
									points[] = {{"LevelP45",{"-0.22-0.015",0.02},1},{"LevelP45",{"-0.22-0.015",0},1},{"LevelP45",{-0.06,0},1},{},{"LevelP45",{0.06,0},1},{"LevelP45",{"+0.22+0.015",0},1},{"LevelP45",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_45
								{
									type = "text";
									source = "static";
									text = "45";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP45",{-0.26,-0.017},1};
									right[] = {"LevelP45",{-0.2,-0.017},1};
									down[] = {"LevelP45",{-0.26,0.033},1};
								};
								class VALP_1_45_R
								{
									type = "text";
									source = "static";
									text = "45";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP45",{0.26,-0.017},1};
									right[] = {"LevelP45",{0.32,-0.017},1};
									down[] = {"LevelP45",{0.26,0.033},1};
								};
								class LevelM50: Level0
								{
									type = "line";
									points[] = {{"LevelM50",{-0.235,-0.02},1},{"LevelM50",{-0.235,0},1},{},{"LevelM50",{-0.22,0},1},{"LevelM50",{-0.205,0},1},{},{"LevelM50",{-0.19,0},1},{"LevelM50",{-0.175,0},1},{},{"LevelM50",{-0.16,0},1},{"LevelM50",{-0.145,0},1},{},{"LevelM50",{-0.13,0},1},{"LevelM50",{-0.115,0},1},{},{"LevelM50",{-0.1,0},1},{"LevelM50",{-0.085,0},1},{},{"LevelM50",{-0.07,0},1},{"LevelM50",{-0.055,0},1},{},{},{"LevelM50",{0.235,-0.02},1},{"LevelM50",{0.235,0},1},{},{"LevelM50",{0.22,0},1},{"LevelM50",{0.205,0},1},{},{"LevelM50",{0.19,0},1},{"LevelM50",{0.175,0},1},{},{"LevelM50",{0.16,0},1},{"LevelM50",{0.145,0},1},{},{"LevelM50",{0.13,0},1},{"LevelM50",{0.115,0},1},{},{"LevelM50",{0.1,0},1},{"LevelM50",{0.085,0},1},{},{"LevelM50",{0.07,0},1},{"LevelM50",{0.055,0},1},{}};
								};
								class VALM_1_50
								{
									type = "text";
									source = "static";
									text = -50;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM50",{-0.26,-0.032},1};
									right[] = {"LevelM50",{-0.2,-0.032},1};
									down[] = {"LevelM50",{-0.26,0.018},1};
								};
								class VALM_1_50_R
								{
									type = "text";
									source = "static";
									text = -50;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM50",{0.26,-0.032},1};
									right[] = {"LevelM50",{0.32,-0.032},1};
									down[] = {"LevelM50",{0.26,0.018},1};
								};
								class LevelP50: Level0
								{
									type = "line";
									points[] = {{"LevelP50",{"-0.22-0.015",0.02},1},{"LevelP50",{"-0.22-0.015",0},1},{"LevelP50",{-0.06,0},1},{},{"LevelP50",{0.06,0},1},{"LevelP50",{"+0.22+0.015",0},1},{"LevelP50",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_50
								{
									type = "text";
									source = "static";
									text = "50";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP50",{-0.26,-0.017},1};
									right[] = {"LevelP50",{-0.2,-0.017},1};
									down[] = {"LevelP50",{-0.26,0.033},1};
								};
								class VALP_1_50_R
								{
									type = "text";
									source = "static";
									text = "50";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP50",{0.26,-0.017},1};
									right[] = {"LevelP50",{0.32,-0.017},1};
									down[] = {"LevelP50",{0.26,0.033},1};
								};
								class LevelM60: Level0
								{
									type = "line";
									points[] = {{"LevelM60",{-0.235,-0.02},1},{"LevelM60",{-0.235,0},1},{},{"LevelM60",{-0.22,0},1},{"LevelM60",{-0.205,0},1},{},{"LevelM60",{-0.19,0},1},{"LevelM60",{-0.175,0},1},{},{"LevelM60",{-0.16,0},1},{"LevelM60",{-0.145,0},1},{},{"LevelM60",{-0.13,0},1},{"LevelM60",{-0.115,0},1},{},{"LevelM60",{-0.1,0},1},{"LevelM60",{-0.085,0},1},{},{"LevelM60",{-0.07,0},1},{"LevelM60",{-0.055,0},1},{},{},{"LevelM60",{0.235,-0.02},1},{"LevelM60",{0.235,0},1},{},{"LevelM60",{0.22,0},1},{"LevelM60",{0.205,0},1},{},{"LevelM60",{0.19,0},1},{"LevelM60",{0.175,0},1},{},{"LevelM60",{0.16,0},1},{"LevelM60",{0.145,0},1},{},{"LevelM60",{0.13,0},1},{"LevelM60",{0.115,0},1},{},{"LevelM60",{0.1,0},1},{"LevelM60",{0.085,0},1},{},{"LevelM60",{0.07,0},1},{"LevelM60",{0.055,0},1},{}};
								};
								class VALM_1_60
								{
									type = "text";
									source = "static";
									text = -60;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM60",{-0.26,-0.032},1};
									right[] = {"LevelM60",{-0.2,-0.032},1};
									down[] = {"LevelM60",{-0.26,0.018},1};
								};
								class VALM_1_60_R
								{
									type = "text";
									source = "static";
									text = -60;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM60",{0.26,-0.032},1};
									right[] = {"LevelM60",{0.32,-0.032},1};
									down[] = {"LevelM60",{0.26,0.018},1};
								};
								class LevelP60: Level0
								{
									type = "line";
									points[] = {{"LevelP60",{"-0.22-0.015",0.02},1},{"LevelP60",{"-0.22-0.015",0},1},{"LevelP60",{-0.06,0},1},{},{"LevelP60",{0.06,0},1},{"LevelP60",{"+0.22+0.015",0},1},{"LevelP60",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_60
								{
									type = "text";
									source = "static";
									text = "60";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP60",{-0.26,-0.017},1};
									right[] = {"LevelP60",{-0.2,-0.017},1};
									down[] = {"LevelP60",{-0.26,0.033},1};
								};
								class VALP_1_60_R
								{
									type = "text";
									source = "static";
									text = "60";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP60",{0.26,-0.017},1};
									right[] = {"LevelP60",{0.32,-0.017},1};
									down[] = {"LevelP60",{0.26,0.033},1};
								};
								class LevelM70: Level0
								{
									type = "line";
									points[] = {{"LevelM70",{-0.235,-0.02},1},{"LevelM70",{-0.235,0},1},{},{"LevelM70",{-0.22,0},1},{"LevelM70",{-0.205,0},1},{},{"LevelM70",{-0.19,0},1},{"LevelM70",{-0.175,0},1},{},{"LevelM70",{-0.16,0},1},{"LevelM70",{-0.145,0},1},{},{"LevelM70",{-0.13,0},1},{"LevelM70",{-0.115,0},1},{},{"LevelM70",{-0.1,0},1},{"LevelM70",{-0.085,0},1},{},{"LevelM70",{-0.07,0},1},{"LevelM70",{-0.055,0},1},{},{},{"LevelM70",{0.235,-0.02},1},{"LevelM70",{0.235,0},1},{},{"LevelM70",{0.22,0},1},{"LevelM70",{0.205,0},1},{},{"LevelM70",{0.19,0},1},{"LevelM70",{0.175,0},1},{},{"LevelM70",{0.16,0},1},{"LevelM70",{0.145,0},1},{},{"LevelM70",{0.13,0},1},{"LevelM70",{0.115,0},1},{},{"LevelM70",{0.1,0},1},{"LevelM70",{0.085,0},1},{},{"LevelM70",{0.07,0},1},{"LevelM70",{0.055,0},1},{}};
								};
								class VALM_1_70
								{
									type = "text";
									source = "static";
									text = -70;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM70",{-0.26,-0.032},1};
									right[] = {"LevelM70",{-0.2,-0.032},1};
									down[] = {"LevelM70",{-0.26,0.018},1};
								};
								class VALM_1_70_R
								{
									type = "text";
									source = "static";
									text = -70;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM70",{0.26,-0.032},1};
									right[] = {"LevelM70",{0.32,-0.032},1};
									down[] = {"LevelM70",{0.26,0.018},1};
								};
								class LevelP70: Level0
								{
									type = "line";
									points[] = {{"LevelP70",{"-0.22-0.015",0.02},1},{"LevelP70",{"-0.22-0.015",0},1},{"LevelP70",{-0.06,0},1},{},{"LevelP70",{0.06,0},1},{"LevelP70",{"+0.22+0.015",0},1},{"LevelP70",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_70
								{
									type = "text";
									source = "static";
									text = "70";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP70",{-0.26,-0.017},1};
									right[] = {"LevelP70",{-0.2,-0.017},1};
									down[] = {"LevelP70",{-0.26,0.033},1};
								};
								class VALP_1_70_R
								{
									type = "text";
									source = "static";
									text = "70";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP70",{0.26,-0.017},1};
									right[] = {"LevelP70",{0.32,-0.017},1};
									down[] = {"LevelP70",{0.26,0.033},1};
								};
								class LevelM80: Level0
								{
									type = "line";
									points[] = {{"LevelM80",{-0.235,-0.02},1},{"LevelM80",{-0.235,0},1},{},{"LevelM80",{-0.22,0},1},{"LevelM80",{-0.205,0},1},{},{"LevelM80",{-0.19,0},1},{"LevelM80",{-0.175,0},1},{},{"LevelM80",{-0.16,0},1},{"LevelM80",{-0.145,0},1},{},{"LevelM80",{-0.13,0},1},{"LevelM80",{-0.115,0},1},{},{"LevelM80",{-0.1,0},1},{"LevelM80",{-0.085,0},1},{},{"LevelM80",{-0.07,0},1},{"LevelM80",{-0.055,0},1},{},{},{"LevelM80",{0.235,-0.02},1},{"LevelM80",{0.235,0},1},{},{"LevelM80",{0.22,0},1},{"LevelM80",{0.205,0},1},{},{"LevelM80",{0.19,0},1},{"LevelM80",{0.175,0},1},{},{"LevelM80",{0.16,0},1},{"LevelM80",{0.145,0},1},{},{"LevelM80",{0.13,0},1},{"LevelM80",{0.115,0},1},{},{"LevelM80",{0.1,0},1},{"LevelM80",{0.085,0},1},{},{"LevelM80",{0.07,0},1},{"LevelM80",{0.055,0},1},{}};
								};
								class VALM_1_80
								{
									type = "text";
									source = "static";
									text = -80;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM80",{-0.26,-0.032},1};
									right[] = {"LevelM80",{-0.2,-0.032},1};
									down[] = {"LevelM80",{-0.26,0.018},1};
								};
								class VALM_1_80_R
								{
									type = "text";
									source = "static";
									text = -80;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM80",{0.26,-0.032},1};
									right[] = {"LevelM80",{0.32,-0.032},1};
									down[] = {"LevelM80",{0.26,0.018},1};
								};
								class LevelP80: Level0
								{
									type = "line";
									points[] = {{"LevelP80",{"-0.22-0.015",0.02},1},{"LevelP80",{"-0.22-0.015",0},1},{"LevelP80",{-0.06,0},1},{},{"LevelP80",{0.06,0},1},{"LevelP80",{"+0.22+0.015",0},1},{"LevelP80",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_80
								{
									type = "text";
									source = "static";
									text = "80";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP80",{-0.26,-0.017},1};
									right[] = {"LevelP80",{-0.2,-0.017},1};
									down[] = {"LevelP80",{-0.26,0.033},1};
								};
								class VALP_1_80_R
								{
									type = "text";
									source = "static";
									text = "80";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP80",{0.26,-0.017},1};
									right[] = {"LevelP80",{0.32,-0.017},1};
									down[] = {"LevelP80",{0.26,0.033},1};
								};
								class LevelM90: Level0
								{
									type = "line";
									points[] = {{"LevelM90",{-0.235,-0.02},1},{"LevelM90",{-0.235,0},1},{},{"LevelM90",{-0.22,0},1},{"LevelM90",{-0.205,0},1},{},{"LevelM90",{-0.19,0},1},{"LevelM90",{-0.175,0},1},{},{"LevelM90",{-0.16,0},1},{"LevelM90",{-0.145,0},1},{},{"LevelM90",{-0.13,0},1},{"LevelM90",{-0.115,0},1},{},{"LevelM90",{-0.1,0},1},{"LevelM90",{-0.085,0},1},{},{"LevelM90",{-0.07,0},1},{"LevelM90",{-0.055,0},1},{},{},{"LevelM90",{0.235,-0.02},1},{"LevelM90",{0.235,0},1},{},{"LevelM90",{0.22,0},1},{"LevelM90",{0.205,0},1},{},{"LevelM90",{0.19,0},1},{"LevelM90",{0.175,0},1},{},{"LevelM90",{0.16,0},1},{"LevelM90",{0.145,0},1},{},{"LevelM90",{0.13,0},1},{"LevelM90",{0.115,0},1},{},{"LevelM90",{0.1,0},1},{"LevelM90",{0.085,0},1},{},{"LevelM90",{0.07,0},1},{"LevelM90",{0.055,0},1},{}};
								};
								class VALM_1_90
								{
									type = "text";
									source = "static";
									text = -90;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM90",{-0.26,-0.032},1};
									right[] = {"LevelM90",{-0.2,-0.032},1};
									down[] = {"LevelM90",{-0.26,0.018},1};
								};
								class VALM_1_90_R
								{
									type = "text";
									source = "static";
									text = -90;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM90",{0.26,-0.032},1};
									right[] = {"LevelM90",{0.32,-0.032},1};
									down[] = {"LevelM90",{0.26,0.018},1};
								};
								class LevelP90: Level0
								{
									type = "line";
									points[] = {{"LevelP90",{"-0.22-0.015",0.02},1},{"LevelP90",{"-0.22-0.015",0},1},{"LevelP90",{-0.06,0},1},{},{"LevelP90",{0.06,0},1},{"LevelP90",{"+0.22+0.015",0},1},{"LevelP90",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_90
								{
									type = "text";
									source = "static";
									text = "90";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP90",{-0.26,-0.017},1};
									right[] = {"LevelP90",{-0.2,-0.017},1};
									down[] = {"LevelP90",{-0.26,0.033},1};
								};
								class VALP_1_90_R
								{
									type = "text";
									source = "static";
									text = "90";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP90",{0.26,-0.017},1};
									right[] = {"LevelP90",{0.32,-0.017},1};
									down[] = {"LevelP90",{0.26,0.033},1};
								};
							};
						};
						class UnhideOnTurn
						{
							condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=340)-20";
							class Cross
							{
								type = "line";
								width = 3;
								points[] = {{"PlaneW",{-0.02,0},1},{"PlaneW",{-0.04,0},1},{},{"PlaneW",{0.02,0},1},{"PlaneW",{0.04,0},1},{},{"PlaneW",{0,-0.019708},1},{"PlaneW",{0,-0.0394161},1},{},{"PlaneW",{0,0.019708},1},{"PlaneW",{0,0.0394161},1},{}};
							};
						};
					};
				};
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
