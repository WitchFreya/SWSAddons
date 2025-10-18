
class CfgVehicles {
	class Helicopter_Base_H;
	class MELB_Base : Helicopter_Base_H {
		SCOPE(0);
		ace_cargo_space = 6;
		ace_cargo_loadMasterTurrets[] = {{-1},{0}};
		irTargetSize = 0.6;
		radarTargetSize = 0.45;
		startDuration = 15;
		memoryPointDriverOptics="commanderview";
		driverWeaponsInfoType="RscOptics_Heli_Attack_02_Pilot";

		class PilotCamera {
      minTurn   = -120;
			maxTurn = 120;
			initTurn   = 0;
			minElev = -10;
			maxElev = 90;
			initElev = 7;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			maxMouseXRotSpeed = 1;
			maxMouseYRotSpeed = 1;
			pilotOpticsShowCursor = TRUE;
			controllable = TRUE;
			class OpticsIn {
				class Wide {
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.5;
					minFov = 0.25;
					maxFov = 0.5;
					directionStabilized = TRUE;
					visionMode[] = {
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};

				class Medium : Wide {
					opticsDisplayName = "MFOV";
					initFov = 0.5;
					minFov = 0.5;
					maxFov = 0.5;
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide {
					opticsDisplayName = "NFOV";
					initFov = (2 / 120);
					minFov = (2 / 120);
					maxFov = (2 / 120);
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
		};
	};

	class MELB_AH6M: MELB_Base {
		class AnimationSources: AnimationSources {
			class AddCrosshair {
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
		};
	};

  class MELB_H6M : MELB_Base {
    displayName = "OH-6M Little Bird";
  };
};

