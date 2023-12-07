

class SWS_V_Heli_Shrike_Base : MELB_AH6M
    {
    ITEM_META(2);
    displayName = QNAME(Sx-6A Shrike - Base);
    faction = "SWS_UNSC";
    side = 1;
    crew = "B_UNSCAF_Pilot_01";
    typicalCargo[] = { "B_UNSCAF_Pilot_01" };
    hiddenSelections[] = {"camo1","d_sn"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\shrike\melb_ext_co.paa),
        QPATHTOF(data\shrike\decals\blank_ca.paa)
    };
    weapons[] = {"CMFlareLauncher"};
    magazines[] = {"192Rnd_CMFlare_Chaff_Magazine","192Rnd_CMFlare_Chaff_Magazine"};
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
        weapons[] = {"Laserdesignator_MELB","CMFlareLauncher"};
        magazines[] = {"Laserbatteries","192Rnd_CMFlare_Chaff_Magazine"};
        };
    };   /*  
    !! This whole section is full of fuckery, do not gaze upon it, it was written at 4AM !!
    class Components: Components
    {
        class TransportPylonsComponent
        {
            UIPicture = "melb\data\ui\melb_eden_ca.paa";
            class pylons
            {
                class R_Pylon
                {
                    hardpoints[] = {"RightMount_MELB"};
                    attachment = "Pylon_M260_MELB";
                    maxweight = 200;
                    UIposition[] = {0.125,0.4};
                };
                class R_Rockets_12x
                {
                    hardpoints[] = {"12x_Rockets_MELB"};
                    attachment = "";
                    priority = 3;
                    maxweight = 300;
                    UIposition[] = {0.04,0.2};
                };
                class R_Rockets_4x: R_Rockets_12x
                {
                    hardpoints[] = {"4x_Rockets_MELB"};
                    attachment = "Pylon_HE_4x_M260_MELB";
                    priority = 2;
                    maxweight = 200;
                    UIposition[] = {0.04,0.25};
                };
                class R_Rockets_3x: R_Rockets_12x
                {
                    hardpoints[] = {"3x_Rockets_MELB"};
                    attachment = "Pylon_HE_3x_M260_MELB";
                    priority = 1;
                    maxweight = 200;
                    UIposition[] = {0.04,0.3};
                };
                class R_HellfireRack_R_slot: R_Pylon
                {
                    turret[] = {"CopilotTurret"};
                    hardpoints[] = {"HellfireRail_MELB"};
                    attachment = "";
                    maxweight = 80;
                    UIposition[] = {0.04,0.45};
                };
                class R_HellfireRack_L_slot: R_HellfireRack_R_slot
                {
                    UIposition[] = {0.225,0.45};
                };
                class R_Minigun: R_Pylon
                {
                    hardpoints[] = {"Right_MinigunMount_SXLB"};
                    attachment = "Pylon_R_6000Rnd_M134_SXLB";
                    priority = 5;
                    maxweight = 100;
                    UIposition[] = {0.225,0.325};
                };
                class L_Minigun: R_Minigun
                {
                    hardpoints[] = {"Left_MinigunMount_SXLB"};
                    attachment = "Pylon_L_6000Rnd_M134_SXLB";
                    UIposition[] = {0.415,0.325};
                };
                class L_HellfireRack_R_slot: R_HellfireRack_R_slot
                {
                    UIposition[] = {0.405,0.45};
                    mirroredMissilePos = 6;
                };
                class L_HellfireRack_L_slot: R_HellfireRack_R_slot
                {
                    UIposition[] = {0.58,0.45};
                    mirroredMissilePos = 5;
                };
                class L_Rockets_3x: R_Rockets_3x
                {
                    hardpoints[] = {"3x_Rockets_MELB"};
                    UIposition[] = {0.58,0.3};
                    priority = 1;
                    mirroredMissilePos = 4;
                };
                class L_Rockets_4x: R_Rockets_4x
                {
                    hardpoints[] = {"4x_Rockets_MELB"};
                    UIposition[] = {0.58,0.25};
                    priority = 2;
                    mirroredMissilePos = 3;
                };
                class L_Rockets_12x: R_Rockets_12x
                {
                    hardpoints[] = {"12x_Rockets_MELB"};
                    UIposition[] = {0.58,0.2};
                    priority = 3;
                    mirroredMissilePos = 2;
                };
                class L_Pylon: R_Pylon
                {
                    hardpoints[] = {"LeftMount_MELB"};
                    UIposition[] = {0.4925,0.4};
                    mirroredMissilePos = 1;
                };
            };
            class presets
            {
                class empty
                {
                    displayName = "empty";
                    attachment[] = {};
                };
                class M260HE_M134 
                {
                    displayName = "14x HE - 2x M134";
                    attachment[] = {"Pylon_M260_MELB","","Pylon_HE_4x_M260_MELB","Pylon_HE_3x_M260_MELB","","","Pylon_L_6000Rnd_M134_SXLB","Pylon_L_6000Rnd_M134_SXLB","","","Pylon_HE_3x_M260_MELB","Pylon_HE_4x_M260_MELB","","Pylon_M260_MELB"};
                };
                class M260HE_M134_GAU
                {
                    displayName = "7x HE - M134 - GAU-19";
                    attachment[] = {"Pylon_M260_MELB","","Pylon_HE_4x_M260_MELB","Pylon_HE_3x_M260_MELB","","","Pylon_R_3000Rnd_M134_MELB","","","","","","","Pylon_L_1300Rnd_GAU19_MELB"};
                };
                class GAU_M134_DAGR
                {
                    displayName = "8x DAGR - M134 - GAU-19";
                    attachment[] = {"Pylon_R_1300Rnd_GAU19_MELB","","","","","","Pylon_R_3000Rnd_M134_MELB","","Pylon_DAGR_MELB","Pylon_DAGR_MELB","","","","Pylon_HellfireLauncher_MELB"};
                };
                class Hellfires
                {
                    displayName = "4x Hellfires";
                    attachment[] = {"Pylon_HellfireLauncher_MELB","","","","Pylon_AGM_114K_MELB","Pylon_AGM_114K_MELB","","","Pylon_AGM_114K_MELB","Pylon_AGM_114K_MELB","","","","Pylon_HellfireLauncher_MELB"};
                };
            };
        };
    }; */
};






