#define CLASSES_VEHICLE \
    QVEH_UAV(SMQ94), \
    QVEH_UAV(DOUBLES(SMQ94,Maid))

class UAV_01_base_F;
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

        class HitPoints: HitPoints {
            class HitHull : HitHull {
                armor = 1.1;
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
