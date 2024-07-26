class cfgVehicles {
  class Helicopter_Base_H;
  class OPTRE_Pelican_F: Helicopter_Base_H {
    class PilotCamera {
			class OpticsIn {
				class Wide {
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]= {"Normal","NVG","Ti"};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide {
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide {
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn=-140;
			maxTurn=140;
			initTurn=0;
			minElev=-10;
			maxElev=85;
			initElev=10;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=1;
			maxMouseYRotSpeed=1;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
  };
};