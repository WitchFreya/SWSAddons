class Components;
class TransportPylonsComponent;
class Pylons;
class CfgVehicles
{
    class MELB_base;
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
        scope = 1;
        scopeCurator = 1;
    };

    class SWS_Shrike: MELB_AH6M 
    {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        displayName = "SWS Shrike";

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
					class Spam
					{
						displayName = "38x RAKE-HE + M134";
						attachment[] = {"Pylon_S261L_MELB","Pylon_Talon_12x_MELB","Pylon_Talon_4x_MELB","Pylon_Talon_3x_MELB","","","Pylon_R_3000Rnd_M134_MELB","Pylon_L_3000Rnd_M134_MELB","","","Pylon_Talon_3x_MELB","Pylon_Talon_4x_MELB","Pylon_Talon_12x_MELB","Pylon_S261L_MELB"};
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
    };

    class SWS_Magpie: MELB_MH6M
    {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        displayName = "SWS Magpie";
    };
};
