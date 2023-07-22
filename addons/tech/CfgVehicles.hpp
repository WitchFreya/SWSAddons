#define CLASSES_VEHICLE \
    QVEH_UAV(SMQ94), \
    QVEH_UAV(DOUBLES(SMQ94,Maid))

class UAV_01_base_F;
class Turrets;
class MainTurret;
class HitPoints;
class HitHull;

class CfgVehicles {
    class VEH_UAV(SMQ94): UAV_01_base_F {
        META;
        _generalMacro = QVEH_UAV(SMQ94);
        scope = 2;
        displayName = QNAME(SMQ-94 Recon);
        faction = "SWS_UNSC";
        fuelCapacity = 100;
        side = 1;
		model = "\DMNS\DMNS_Air\MQ_94\MQ_94.p3d";
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
        crew = "B_UAV_AI";
        hiddenSelectionsTextures[] = {
			"DMNS\DMNS_Air\MQ_94\data\MQ_94_co.paa"
		};
		typicalCargo[] = {
			"B_UAV_AI"
		};
        weapons[] = { QWEAPON(LaserDesignator) };
	    magazines[] = { "LaserBatteries" };

        class HitPoints: HitPoints {
            class HitHull : HitHull {
                armor = 1.1;
            };
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerOpticsModel = QPATHTOF(data\optics\melb_flir_w2.p3d);
			    turretInfoType = "Rsc_MELB_Turret_UnitInfo";

                class OpticsIn {
	                class Wide {
                        opticsDisplayName = "W";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.5;
                        minFov = 0.5;
                        maxFov = 0.5;
                        directionStabilized = 1;
                        visionMode[] = {"Normal", "NVG", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = QPATHTOF(data\optics\melb_flir_wf.p3d);
                    };

                    class Medium : Wide {
                        opticsDisplayName = "M";
                        initFov = 0.1;
                        minFov = 0.1;
                        maxFov = 0.1;
                        gunnerOpticsModel = QPATHTOF(data\optics\melb_flir_w.p3d);
                    };

                    class Narrow : Wide {
                        opticsDisplayName = "N";
                        initFov = 0.05;
                        minFov = 0.05;
                        maxFov = 0.05;
                        gunnerOpticsModel = QPATHTOF(data\optics\melb_flir_w2.p3d);
                    };

                    class UNarrow : Wide {
                        opticsDisplayName = "U";
                        initFov = 0.01;
                        minFov = 0.01;
                        maxFov = 0.01;
                        gunnerOpticsModel = QPATHTOF(data\optics\melb_flir_n.p3d);
                    };

                    class SNarrow : Wide {
                        opticsDisplayName = "S";
                        initFov = 0.005;
                        minFov = 0.005;
                        maxFov = 0.005;
                        gunnerOpticsModel = QPATHTOF(data\optics\melb_flir_n2.p3d);
                    };
                };
            };
        };

        class SimpleObject {
            eden = 1;
            animate[] = {
                { "damagehide", 0 },
                { "rotorimpacthide", 0 },
                { "tailrotorimpacthide", 0 },
                { "propeller1_rotation", 0 },
                { "propeller1_blur_rotation", 0 },
                { "propeller2_rotation", 0 },
                { "propeller2_blur_rotation", 0 },
                { "propeller3_rotation", 0 },
                { "propeller3_blur_rotation", 0 },
                { "propeller4_rotation", 0 },
                { "propeller4_blur_rotation", 0 },
                { "propeller1_hide", 0 },
                { "propeller1_blur_hide", 0 },
                { "propeller2_hide", 0 },
                { "propeller2_blur_hide", 0 },
                { "propeller3_hide", 0 },
                { "propeller3_blur_hide", 0 },
                { "propeller4_hide", 0 },
                { "propeller4_blur_hide", 0 },
                { "mainturret", 0 },
                { "maingun", -0.05 }
            };
            hide[] = {
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
            verticalOffset = 0.15;
			verticalOffsetWorld = -0.001;
			init = "''";
        };
        class AssembleInfo {
            primary = 1;
            base = "";
            assembleTo = "";
            displayName = "";
            dissasembleTo[] = {
                QBAG(VEH_UAV(SMQ94))
            };
        };
        textureList[] = { "Blufor",	1 };
    };

    class VEH_UAV(DOUBLES(SMQ94,Maid)): VEH_UAV(SMQ94) {
        displayName = QNAME(SMQ-94 Recon - Maid);
        hiddenSelectionsTextures[] = {
			QPATHTOF(data\smq_94_maid_co.paa)
		};

        class AssembleInfo : AssembleInfo {
            dissasembleTo[] = {
                QBAG(VEH_UAV(DOUBLES(SMQ94,Maid)))
            };
        };
    };
};
