
class CfgVehicles
{
	class Helicopter_Base_H;
	class MELB_base : Helicopter_Base_H
	{
		SCOPE(0);
		ace_cargo_space = 6;
		ace_cargo_loadMasterTurrets[] = {{-1},{0}};
		irTargetSize = 0.6;
		radarTargetSize = 0.45;
		startDuration = 15;
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
		SCOPE(0);
	};
	class MELB_H6M: MELB_base
	{
		SCOPE(0);
	};
	class MELB_AH6M: MELB_base
	{
		SCOPE(1);
		class AnimationSources: AnimationSources
		{
			class Addcrosshair
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
		};
	};
};
