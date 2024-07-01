class CfgVehicles {
    class B_AFV_Wheeled_01_cannon_F;
    class B_AFV_Wheeled_01_up_cannon_F;
    class B_MBT_01_arty_F;
    class B_MBT_01_mlrs_F;
    class I_HMG_02_high_F;
    class I_LT_01_AA_F;
    class I_Mortar_01_F;
    class I_Plane_Fighter_04_F;
    class LM_OPCAN_M350_INS_WDL;
    class LM_OPCAN_MBTB_KOS;
    class LM_OPCAN_Meerkat_KOS_HMG;
    class O_APC_Wheeled_02_rcws_v2_F;
    class O_T_Boat_Armed_01_hmg_F;
    class O_T_MBT_02_railgun_ghex_F;
    class O_T_MBT_04_cannon_F;
    class O_T_MBT_04_command_F;
    class O_V_Soldier_hex_F;
    class O_V_Soldier_TL_hex_F;
    class OPTRE_AT_puma_02;
    class OPTRE_ferret_02;
    class OPTRE_ins_falcon_unarmed;
    class OPTRE_Ins_URF_Autorifleman;
    class OPTRE_Ins_URF_Breacher;
    class OPTRE_Ins_URF_Grenadier;
    class OPTRE_Ins_URF_Medic_IND;
    class OPTRE_Ins_URF_Rifleman_AR_IND;
    class OPTRE_Ins_URF_Rifleman_AT;
    class OPTRE_Ins_URF_Rifleman_BR;
    class OPTRE_Ins_URF_Sniper;
    class OPTRE_Ins_URF_TeamLead;
    class OPTRE_m1015_mule_ins;
    class OPTRE_M12_FAV_ins_IND;
    class OPTRE_M12_ins_APC;
    class OPTRE_M12_LRV_ins;
    class OPTRE_M494_INS;
    class OPTRE_Pelican_armed_70mm_ins;
    class OPTRE_Pelican_unarmed_ins;
    class OPTRE_salamanderagl_02;
    class OPTRE_tarantula_02;
    class OPTRE_unarmed_puma_02_IND;
    class OPTRE_UNSC_falcon_S_ins;
    class OPTRE_VTOLI_02;
    class OPTRE_VTOLV_02;

    class O_CLA_Rifleman_01 : OPTRE_Ins_URF_TeamLead {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] CLA Rifleman";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_Ins_ER_rolled_OD_blknred";

        linkedItems[] = {"V_PlateCarrier2_blk","H_Shemag_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_Shemag_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"OPTRE_MA5A"};
        respawnWeapons[] = {"OPTRE_MA5A"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};

        backpack = "B_AssaultPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5A","","","",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{},{},{"OPTRE_Ins_ER_rolled_OD_blknred",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1}}},{"V_PlateCarrier2_blk",{{"OPTRE_M2_Smoke",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",6,32},{"ACE_M84",2,1},{"HandGrenade",3,1}}},{"B_AssaultPack_blk",{{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",5,32}}},"H_Shemag_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Teamlead_01 : OPTRE_Ins_URF_TeamLead {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] CLA Teamlead";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_TCGM_Girls_Asian","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "U_I_G_Story_Protagonist_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","VES_CH252_WDL_Light","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","VES_CH252_WDL_Light","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_MA5AGL"};
        respawnWeapons[] = {"OPTRE_MA5AGL"};

        magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell"};

        backpack = "B_AssaultPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5AGL","","","OPTRE_M393_EOTECH",{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",32},{"1Rnd_HE_Grenade_shell",1},""},{},{},{"U_I_G_Story_Protagonist_F",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",1,32}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",5,32},{"1Rnd_HE_Grenade_shell",4,3},{"OPTRE_M2_Smoke",3,1}}},{"B_AssaultPack_blk",{{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",4,32}}},"VES_CH252_WDL_Light","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Medic_01 : OPTRE_Ins_URF_Medic_IND {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] CLA Medic";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_Ins_ER_jacket_surplus_brown";

        linkedItems[] = {"V_PlateCarrier1_blk","OPTRE_Ins_URF_Helmet2","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"V_PlateCarrier1_blk","OPTRE_Ins_URF_Helmet2","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_MA37K"};
        respawnWeapons[] = {"OPTRE_MA37K"};

        magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};

        backpack = "OPTRE_B_TacticalPack_blk_Medic";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA37K","","OPTRE_BMR_Laser","OPTRE_M12_Optic",{"OPTRE_32Rnd_762x51_Mag",32},{},""},{},{},{"OPTRE_Ins_ER_jacket_surplus_brown",{}},{"V_PlateCarrier1_blk",{{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",8,32},{"ACE_M84",2,1},{"MiniGrenade",3,1}}},{"OPTRE_B_TacticalPack_blk_Medic",{{"OPTRE_Medigel",10},{"OPTRE_MedKit",1},{"ACE_bloodIV",5},{"ACE_bloodIV_500",4},{"ACE_elasticBandage",35},{"ACE_tourniquet",10},{"ACE_epinephrine",15},{"ACE_morphine",10},{"OPTRE_M2_Smoke",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",1,32},{"MiniGrenade",1,1}}},"OPTRE_Ins_URF_Helmet2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Breacher_01 : OPTRE_Ins_URF_Breacher {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] CLA Breacher";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "U_I_G_resistanceLeader_F";

        linkedItems[] = {"OPTRE_Vest_CMA_Heavy","H_HelmetB_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"OPTRE_Vest_CMA_Heavy","H_HelmetB_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_M45","OPTRE_M6G_SF","Binocular"};
        respawnWeapons[] = {"OPTRE_M45","OPTRE_M6G_SF","Binocular"};

        magazines[] = {"OPTRE_6Rnd_8Gauge_Pellets","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_8Rnd_127x40_Mag_Tracer"};
        respawnMagazines[] = {"OPTRE_6Rnd_8Gauge_Pellets","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_8Rnd_127x40_Mag_Tracer"};

        backpack = "B_AssaultPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M45","","","",{"OPTRE_6Rnd_8Gauge_Pellets",6},{},""},{},{"OPTRE_M6G_SF","","","",{"OPTRE_8Rnd_127x40_Mag_Tracer",8},{},""},{"U_I_G_resistanceLeader_F",{{"OPTRE_Biofoam",1},{"OPTRE_8Rnd_127x40_Mag_Tracer",1,8}}},{"OPTRE_Vest_CMA_Heavy",{{"OPTRE_12Rnd_8Gauge_Pellets",3,12},{"OPTRE_12Rnd_8Gauge_Slugs",6,12},{"OPTRE_8Rnd_127x40_Mag",2,8}}},{"B_AssaultPack_blk",{{"ACE_quikclot",15},{"OPTRE_8Rnd_127x40_Mag",2,8},{"OPTRE_M2_Smoke",3,1},{"ACE_M84",2,1},{"HandGrenade",4,1},{"OPTRE_12Rnd_8Gauge_Pellets",2,12},{"OPTRE_12Rnd_8Gauge_Slugs",2,12}}},"H_HelmetB_black","G_Shades_Blue",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Rifleperson_01 : OPTRE_Ins_URF_Rifleman_BR {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] CLA Rifleperson";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"max_WS5","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "U_I_C_Soldier_Para_4_F";

        linkedItems[] = {"OPTRE_Vest_CMA_Light","H_MilCap_wdl","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"OPTRE_Vest_CMA_Light","H_MilCap_wdl","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"OPTRE_BR55HB_ScopedRifle"};
        respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle"};

        magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow"};
        respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow"};

        backpack = "B_AssaultPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_BR55HB_ScopedRifle","","","OPTRE_BR55HB_Scope",{"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",36},{},""},{},{},{"U_I_C_Soldier_Para_4_F",{}},{"OPTRE_Vest_CMA_Light",{{"ACE_quikclot",15},{"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",9,36},{"OPTRE_M2_Smoke",3,1},{"ACE_M84",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_blk",{}},"H_MilCap_wdl","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Autorifle_01 : OPTRE_Ins_URF_Autorifleman {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] CLA Autorifle";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_TK","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "U_C_Mechanic_01_F";

        linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetCrew_I","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetCrew_I","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"OPTRE_M73"};
        respawnWeapons[] = {"OPTRE_M73"};

        magazines[] = {"OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow"};
        respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow"};

        backpack = "OPTRE_B_TacticalPack_blk_M73";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M73","","","OPTRE_M393_Scope",{"OPTRE_100Rnd_95x40_Box_Tracer_Yellow",100},{},"bipod_01_F_blk"},{},{},{"U_C_Mechanic_01_F",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"OPTRE_M2_Smoke",1,1}}},{"V_PlateCarrier2_blk",{{"OPTRE_100Rnd_95x40_Box_Tracer",3,100}}},{"OPTRE_B_TacticalPack_blk_M73",{{"ACE_quikclot",10},{"OPTRE_200Rnd_95x40_Box",3,200}}},"H_HelmetCrew_I","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Sniper_01 : OPTRE_Ins_URF_Sniper {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] CLA Sniper";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_Enoch","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_Ins_ER_rolled_OD_crimson";

        linkedItems[] = {"V_PlateCarrier1_blk","LM_OPCAN_Cap_PD","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"V_PlateCarrier1_blk","LM_OPCAN_Cap_PD","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Binocular"};
        respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Binocular"};

        magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag_Tracer"};
        respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag_Tracer"};

        backpack = "B_AssaultPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_SRS99D_SC_LS","","","OPTRE_SRS99_Scope",{"OPTRE_4Rnd_145x114_APFSDS_Mag",4},{},""},{},{"OPTRE_M6G_SF","","","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag_Tracer",8},{},""},{"OPTRE_Ins_ER_rolled_OD_crimson",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"ACE_quikclot",10},{"ACE_tourniquet",2}}},{"V_PlateCarrier1_blk",{{"OPTRE_4Rnd_145x114_HVAP_Mag",8,4},{"OPTRE_8Rnd_127x40_Mag",2,8}}},{"B_AssaultPack_blk",{{"OPTRE_4Rnd_145x114_HVAP_Mag",8,4},{"OPTRE_8Rnd_127x40_Mag",2,8}}},"LM_OPCAN_Cap_PD","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Rifleperson_02 : OPTRE_Ins_URF_Rifleman_AT {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] CLA Rifleperson 2";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"max_WS1","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "U_BG_Guerilla1_2_F";

        linkedItems[] = {"V_PlateCarrier2_blk","OPTRE_h_PatrolCap_Brown","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","OPTRE_h_PatrolCap_Brown","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"OPTRE_MA5A","OPTRE_M41_SSR"};
        respawnWeapons[] = {"OPTRE_MA5A","OPTRE_M41_SSR"};

        magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};
        respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M41_Twin_HEAT","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};

        backpack = "OPTRE_B_TacticalPack_blk_M41";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5A","","","OPTRE_M7_Sight",{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",32},{},""},{"OPTRE_M41_SSR","","","",{"OPTRE_M41_Twin_HEAT",2},{},""},{},{"U_BG_Guerilla1_2_F",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",1,32},{"OPTRE_M2_Smoke",1,1}}},{"V_PlateCarrier2_blk",{{"ACE_quikclot",15},{"ACE_tourniquet",4},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",7,32},{"OPTRE_M9_Frag",2,1}}},{"OPTRE_B_TacticalPack_blk_M41",{{"OPTRE_M41_Twin_HEAT",1,2},{"OPTRE_M41_Twin_HEAP",1,2},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",2,32}}},"OPTRE_h_PatrolCap_Brown","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Grenadier_01 : OPTRE_Ins_URF_Grenadier {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] CLA Grenadier";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"max_WS10","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "TCGM_F_SoldierParamilitary2";

        linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_MA5AGL"};
        respawnWeapons[] = {"OPTRE_MA5AGL"};

        magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell"};

        backpack = "B_AssaultPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5AGL","","","OPTRE_M7_Sight",{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",32},{"1Rnd_HE_Grenade_shell",1},""},{},{},{"TCGM_F_SoldierParamilitary2",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",1,32}}},{"V_PlateCarrier2_blk",{{"ACE_quikclot",10},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",4,32},{"1Rnd_HE_Grenade_shell",1,3},{"OPTRE_32Rnd_762x51_Mag_Tracer",3,32}}},{"B_AssaultPack_blk",{{"1Rnd_HE_Grenade_shell",4,1},{"OPTRE_32Rnd_762x51_Mag_Tracer",8,32},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1},{"3Rnd_UGL_FlareWhite_F",1,3},{"1Rnd_HE_Grenade_shell",1,3}}},"H_HelmetB_light_black","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Elite_Rifleperson_01 : OPTRE_Ins_URF_Rifleman_AR_IND {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Elite Rifleperson";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};

        weapons[] = {"OPTRE_MA5A"};
        respawnWeapons[] = {"OPTRE_MA5A"};

        magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};
        respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};

        backpack = "B_FieldPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5A","","","OPTRE_M7_Sight",{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",32},{},""},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",1,32},{"OPTRE_M2_Smoke",1,1}}},{"OPTRE_UNSC_M52A_Armor_Soft",{{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",7,32}}},{"B_FieldPack_blk",{{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",5,32},{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1}}},"OPTRE_Ins_URF_Helmet1","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Elite_Rifleperson_02 : O_CLA_Elite_Rifleperson_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Elite Rifleperson 2";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"max_WS10","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};

        weapons[] = {"OPTRE_MA5A"};
        respawnWeapons[] = {"OPTRE_MA5A"};

        magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};
        respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};

        backpack = "B_FieldPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5A","","","OPTRE_M7_Sight",{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",32},{},""},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",1,32},{"OPTRE_M2_Smoke",1,1}}},{"OPTRE_UNSC_M52A_Armor_Soft",{{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",7,32}}},{"B_FieldPack_blk",{{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",5,32},{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1}}},"OPTRE_Ins_URF_Helmet1","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Elite_Teamlead_01 : O_CLA_Elite_Rifleperson_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Elite Teamlead";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_TCGM_Girls_White","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};

        weapons[] = {"OPTRE_MA5AGL","Binocular"};
        respawnWeapons[] = {"OPTRE_MA5AGL","Binocular"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell"};

        backpack = "B_FieldPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5AGL","","","OPTRE_M7_Sight",{"OPTRE_60Rnd_762x51_Mag",60},{"1Rnd_HE_Grenade_shell",1},""},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"ACE_quikclot",10},{"OPTRE_M2_Smoke",1,1},{"1Rnd_HE_Grenade_shell",5,1}}},{"OPTRE_UNSC_M52A_Armor_Soft",{{"OPTRE_32Rnd_762x51_Mag_Tracer",6,32}}},{"B_FieldPack_blk",{{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer",4,32}}},"OPTRE_Ins_URF_Helmet1","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Elite_Breacher_01 : O_CLA_Elite_Rifleperson_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Elite Breacher";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};

        weapons[] = {"OPTRE_M45"};
        respawnWeapons[] = {"OPTRE_M45"};

        magazines[] = {"OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets"};
        respawnMagazines[] = {"OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets"};

        backpack = "B_FieldPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M45","","acc_pointer_IR","OPTRE_M393_EOTECH",{"OPTRE_6Rnd_8Gauge_Pellets",6},{},""},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_M2_Smoke",1,1},{"OPTRE_6Rnd_8Gauge_Pellets",3,6}}},{"OPTRE_UNSC_M52A_Armor_Soft",{{"ACE_quikclot",10},{"ACE_tourniquet",2},{"OPTRE_12Rnd_8Gauge_Slugs",2,12},{"OPTRE_12Rnd_8Gauge_Pellets",2,12}}},{"B_FieldPack_blk",{{"ACE_tourniquet",2},{"ACE_quikclot",5},{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1},{"OPTRE_12Rnd_8Gauge_Pellets",1,12},{"OPTRE_12Rnd_8Gauge_Slugs",7,12}}},"OPTRE_Ins_URF_Helmet2","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Elite_AntiArmor_01 : O_CLA_Elite_Rifleperson_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Elite AntiArmor";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet4","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet4","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};

        weapons[] = {"OPTRE_MA5A","launch_RPG32_green_F"};
        respawnWeapons[] = {"OPTRE_MA5A","launch_RPG32_green_F"};

        magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","RPG32_F","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};
        respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","RPG32_F","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};

        backpack = "B_FieldPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5A","","","OPTRE_M7_Sight",{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",32},{},""},{"launch_RPG32_green_F","","","",{"RPG32_F",1},{},""},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",1,32},{"OPTRE_M2_Smoke",1,1}}},{"OPTRE_UNSC_M52A_Armor_Soft",{{"ACE_quikclot",5},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",6,32},{"ACE_M84",1,1},{"HandGrenade",1,1}}},{"B_FieldPack_blk",{{"ACE_quikclot",5},{"ACE_tourniquet",2},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",3,32},{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1},{"RPG32_F",2,1}}},"OPTRE_Ins_URF_Helmet4","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Elite_Medic_01 : O_CLA_Elite_Rifleperson_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Elite Medic";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_TCGM_Girls_BlackCiv","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};

        weapons[] = {"OPTRE_M7"};
        respawnWeapons[] = {"OPTRE_M7"};

        magazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag"};

        backpack = "B_FieldPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M7","","","OPTRE_M7_Sight",{"OPTRE_60Rnd_5x23mm_Mag",60},{},""},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_M2_Smoke",1,1},{"OPTRE_60Rnd_5x23mm_Mag",3,60}}},{"OPTRE_UNSC_M52A_Armor_Soft",{{"OPTRE_48Rnd_5x23mm_Mag_tracer",10,48},{"ACE_M84",1,1},{"OPTRE_M2_Smoke",3,1}}},{"B_FieldPack_blk",{{"ACE_elasticBandage",40},{"ACE_tourniquet",15},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_bloodIV",5},{"ACE_bloodIV_500",2},{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1}}},"OPTRE_Ins_URF_Helmet1","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Elite_Autorifle_01 : O_CLA_Elite_Rifleperson_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Elite Autorifle";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_Tanoan","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet3","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","OPTRE_Ins_URF_Helmet3","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"};

        weapons[] = {"OPTRE_M247"};
        respawnWeapons[] = {"OPTRE_M247"};

        magazines[] = {"OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box"};
        respawnMagazines[] = {"OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M247","","","OPTRE_M393_ACOG",{"OPTRE_100Rnd_762x51_Box",100},{},"bipod_01_F_blk"},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_M2_Smoke",1,1}}},{"OPTRE_UNSC_M52A_Armor_Soft",{{"ACE_quikclot",15},{"ACE_tourniquet",4},{"ACE_morphine",1},{"ACE_epinephrine",1},{"OPTRE_100Rnd_762x51_Box",1,100}}},{"B_Kitbag_cbr",{{"OPTRE_400Rnd_762x51_Box_Tracer",2,400},{"OPTRE_100Rnd_762x51_Box",1,100}}},"OPTRE_Ins_URF_Helmet3","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Green"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Crew_01 : O_CLA_Rifleman_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] CLA Crew";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_Ins_ER_uniform_GGod";

        linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetSpecB","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetSpecB","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"OPTRE_M7"};
        respawnWeapons[] = {"OPTRE_M7"};

        magazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag"};

        backpack = "B_AssaultPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M7","","","OPTRE_M7_Sight",{"OPTRE_60Rnd_5x23mm_Mag",60},{},""},{},{},{"OPTRE_Ins_ER_uniform_GGod",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_60Rnd_5x23mm_Mag",3,60}}},{"V_PlateCarrier2_blk",{{"OPTRE_M2_Smoke",2,1},{"HandGrenade",2,1},{"OPTRE_60Rnd_5x23mm_Mag_tracer",8,60}}},{"B_AssaultPack_blk",{{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",1},{"OPTRE_60Rnd_5x23mm_Mag_tracer",5,60}}},"H_HelmetSpecB","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Crew_02 : O_CLA_Crew_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] CLA Crew 2";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_TCGM_Girls_AsianCiv","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_Ins_ER_uniform_GAgreen";

        linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetCrew_I_E","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetCrew_I_E","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"OPTRE_M7"};
        respawnWeapons[] = {"OPTRE_M7"};

        magazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag"};

        backpack = "B_AssaultPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M7","","","OPTRE_M7_Sight",{"OPTRE_60Rnd_5x23mm_Mag",60},{},""},{},{},{"OPTRE_Ins_ER_uniform_GAgreen",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_60Rnd_5x23mm_Mag",3,60}}},{"V_PlateCarrier2_blk",{{"OPTRE_M2_Smoke",2,1},{"HandGrenade",2,1},{"OPTRE_60Rnd_5x23mm_Mag_tracer",8,60}}},{"B_AssaultPack_blk",{{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",1},{"OPTRE_60Rnd_5x23mm_Mag_tracer",5,60}}},"H_HelmetCrew_I_E","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Reaper_01 : O_CLA_Elite_Rifleperson_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Reaper";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"SWS_Weapon_MA5BSx"};
        respawnWeapons[] = {"SWS_Weapon_MA5BSx"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};

        backpack = "B_ViperLightHarness_blk_F";

        ALiVE_orbatCreator_loadout[] = {{"SWS_Weapon_MA5BSx","OPTRE_MA5Suppressor","","SWS_Optic_SmartLink",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"ACE_quikclot",10},{"OPTRE_M2_Smoke",1,1},{"OPTRE_60Rnd_762x51_Mag",1,60}}},{"OPTRE_UNSC_M52A_Armor_Rifleman_URB",{{"OPTRE_60Rnd_762x51_Mag",4,60},{"OPTRE_M2_Smoke",2,1},{"HandGrenade",2,1},{"ACE_M84",2,1}}},{"B_ViperLightHarness_blk_F",{{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1},{"OPTRE_60Rnd_762x51_Mag",7,60}}},"OPTRE_UNSC_VX16_Helmet_MaskS","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Reaper_Teamlead_01 : O_CLA_Reaper_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Reaper Teamlead";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"SWS_Weapon_MA5BSx_GL","Binocular"};
        respawnWeapons[] = {"SWS_Weapon_MA5BSx_GL","Binocular"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell"};

        backpack = "B_ViperLightHarness_blk_F";

        ALiVE_orbatCreator_loadout[] = {{"SWS_Weapon_MA5BSx_GL","OPTRE_MA5Suppressor","","SWS_Optic_SmartLink",{"OPTRE_60Rnd_762x51_Mag",60},{"1Rnd_HE_Grenade_shell",1},""},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"ACE_quikclot",10},{"OPTRE_M2_Smoke",1,1},{"OPTRE_60Rnd_762x51_Mag",1,60}}},{"OPTRE_UNSC_M52A_Armor_Rifleman_URB",{{"OPTRE_M2_Smoke",2,1},{"HandGrenade",2,1},{"ACE_M84",2,1},{"OPTRE_60Rnd_762x51_Mag",3,60},{"1Rnd_HE_Grenade_shell",3,1}}},{"B_ViperLightHarness_blk_F",{{"ACE_quikclot",15},{"ACE_tourniquet",4},{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_60Rnd_762x51_Mag",4,60},{"1Rnd_HE_Grenade_shell",10,1},{"OPTRE_M2_Smoke",4,1}}},"OPTRE_UNSC_VX16_Helmet_MaskS","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'OPTRE_Insignia_ins'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "OPTRE_Insignia_ins";

    };

    class O_CLA_Reaper_Autorifle_01 : O_CLA_Reaper_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Reaper Autorifle";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_HelmetV","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_HelmetV","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"Dmns_CM_12_Insurgent"};
        respawnWeapons[] = {"Dmns_CM_12_Insurgent"};

        magazines[] = {"DMNS_150Rnd_30x06_Mag","DMNS_150Rnd_30x06_Mag"};
        respawnMagazines[] = {"DMNS_150Rnd_30x06_Mag","DMNS_150Rnd_30x06_Mag"};

        backpack = "B_ViperLightHarness_blk_F";

        ALiVE_orbatCreator_loadout[] = {{"Dmns_CM_12_Insurgent","","acc_pointer_IR","OPTRE_M393_Scope",{"DMNS_150Rnd_30x06_Mag",150},{},"bipod_01_F_blk"},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"ACE_quikclot",10},{"OPTRE_M2_Smoke",1,1}}},{"OPTRE_UNSC_M52A_Armor_Rifleman_URB",{{"ACE_tourniquet",4},{"ACE_morphine",2},{"ACE_epinephrine",2},{"OPTRE_M2_Smoke",1,1},{"HandGrenade",2,1},{"ACE_M84",2,1},{"DMNS_150Rnd_30x06_Mag_Tracer",1,150}}},{"B_ViperLightHarness_blk_F",{{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1},{"DMNS_150Rnd_30x06_Mag_Tracer",5,150}}},"OPTRE_UNSC_VX16_HelmetV","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Reaper_AntiArmor_01 : O_CLA_Reaper_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Reaper AntiArmor";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"SWS_Weapon_MA5BSx","launch_RPG32_green_F"};
        respawnWeapons[] = {"SWS_Weapon_MA5BSx","launch_RPG32_green_F"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","RPG32_F","OPTRE_60Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","RPG32_F","OPTRE_60Rnd_762x51_Mag"};

        backpack = "B_ViperLightHarness_blk_F";

        ALiVE_orbatCreator_loadout[] = {{"SWS_Weapon_MA5BSx","OPTRE_MA5Suppressor","","SWS_Optic_SmartLink",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{"launch_RPG32_green_F","","","",{"RPG32_F",1},{},""},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"ACE_quikclot",12},{"ACE_tourniquet",4},{"ACE_morphine",1},{"ACE_epinephrine",1},{"OPTRE_M2_Smoke",1,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",1,32}}},{"OPTRE_UNSC_M52A_Armor_Rifleman_URB",{{"OPTRE_M2_Smoke",2,1},{"HandGrenade",2,1},{"ACE_M84",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",7,32}}},{"B_ViperLightHarness_blk_F",{{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1},{"RPG32_F",3,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",3,32}}},"OPTRE_UNSC_VX16_Helmet_MaskS","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Puma_01 : OPTRE_unarmed_puma_02_IND {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Puma";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "OPTRE_Ins_URF_Rifleman_AR";
        class Turrets : Turrets {
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Reaper_Sniper_01 : O_CLA_Reaper_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Reaper Sniper";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_SRS99D"};
        respawnWeapons[] = {"OPTRE_SRS99D"};

        magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag"};
        respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag"};

        backpack = "B_ViperLightHarness_blk_F";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_SRS99D","OPTRE_SRS99D_Suppressor","","OPTRE_SRS99_Scope",{"OPTRE_4Rnd_145x114_APFSDS_Mag",4},{},""},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"ACE_EarPlugs",1},{"ACE_quikclot",15},{"ACE_tourniquet",4},{"ACE_splint",1},{"ACE_epinephrine",2},{"ACE_morphine",2},{"OPTRE_M2_Smoke",2,1}}},{"OPTRE_UNSC_M52A_Armor_Rifleman_URB",{{"OPTRE_M2_Smoke",2,1},{"HandGrenade",2,1},{"ACE_M84",2,1},{"OPTRE_4Rnd_145x114_HVAP_Mag",4,4}}},{"B_ViperLightHarness_blk_F",{{"HandGrenade",2,1},{"OPTRE_M2_Smoke",1,1},{"OPTRE_4Rnd_145x114_HVAP_Mag",12,4}}},"OPTRE_UNSC_VX16_Helmet_MaskS","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Reaper_Breacher_01 : O_CLA_Reaper_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Reaper Breacher";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_TCGM_Girls_WhiteWarrior","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskSV","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskSV","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_M45ATAC"};
        respawnWeapons[] = {"OPTRE_M45ATAC"};

        magazines[] = {"OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_8Gauge_Pellets"};
        respawnMagazines[] = {"OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_8Gauge_Pellets"};

        backpack = "B_ViperLightHarness_blk_F";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M45ATAC","","","",{"OPTRE_12Rnd_8Gauge_Pellets",12},{},""},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"ACE_quikclot",10},{"OPTRE_M2_Smoke",1,1},{"SWS_Magazine_12_Rnd_Shotgun_Incendiary",1,12}}},{"OPTRE_UNSC_M52A_Armor_Rifleman_URB",{{"OPTRE_M2_Smoke",2,1},{"HandGrenade",2,1},{"ACE_M84",2,1},{"SWS_Magazine_12_Rnd_Shotgun_Incendiary",2,12}}},{"B_ViperLightHarness_blk_F",{{"ACE_M84",2,1},{"HandGrenade",3,1},{"OPTRE_M2_Smoke",2,1},{"OPTRE_12Rnd_8Gauge_Slugs",4,12},{"SWS_Magazine_12_Rnd_Shotgun_Incendiary",7,12}}},"OPTRE_UNSC_VX16_Helmet_MaskSV","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Reaper_AntiAir_01 : O_CLA_Reaper_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Reaper AntiAir";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"SWS_Weapon_MA5BSx","launch_B_Titan_olive_F"};
        respawnWeapons[] = {"SWS_Weapon_MA5BSx","launch_B_Titan_olive_F"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","Titan_AA","OPTRE_60Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","Titan_AA","OPTRE_60Rnd_762x51_Mag"};

        backpack = "B_ViperLightHarness_blk_F";

        ALiVE_orbatCreator_loadout[] = {{"SWS_Weapon_MA5BSx","OPTRE_MA5Suppressor","","SWS_Optic_SmartLink",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{"launch_B_Titan_olive_F","","","",{"Titan_AA",1},{},""},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"ACE_quikclot",15},{"ACE_tourniquet",4},{"OPTRE_M2_Smoke",1,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",1,32}}},{"OPTRE_UNSC_M52A_Armor_Rifleman_URB",{{"OPTRE_M2_Smoke",2,1},{"HandGrenade",2,1},{"ACE_M84",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",8,32}}},{"B_ViperLightHarness_blk_F",{{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1},{"Titan_AA",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",2,32}}},"OPTRE_UNSC_VX16_Helmet_MaskS","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Reaper_Medic_01 : O_CLA_Reaper_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Reaper Medic";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"SWS_Weapon_MA5BSx"};
        respawnWeapons[] = {"SWS_Weapon_MA5BSx"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};

        backpack = "B_ViperLightHarness_blk_F";

        ALiVE_orbatCreator_loadout[] = {{"SWS_Weapon_MA5BSx","OPTRE_MA5Suppressor","","SWS_Optic_SmartLink",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"ACE_quikclot",10},{"OPTRE_M2_Smoke",1,1},{"OPTRE_60Rnd_762x51_Mag",1,60}}},{"OPTRE_UNSC_M52A_Armor_Rifleman_URB",{{"OPTRE_60Rnd_762x51_Mag",4,60},{"OPTRE_M2_Smoke",2,1},{"HandGrenade",2,1},{"ACE_M84",2,1}}},{"B_ViperLightHarness_blk_F",{{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1},{"OPTRE_60Rnd_762x51_Mag",7,60}}},"OPTRE_UNSC_VX16_Helmet_MaskS","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Disassembeled_MG_01 : O_CLA_Rifleman_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] CLA Disassembled MG";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_Ins_ER_rolled_OD_blknred";

        linkedItems[] = {"V_PlateCarrier2_blk","H_Shemag_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_Shemag_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"OPTRE_MA5A"};
        respawnWeapons[] = {"OPTRE_MA5A"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};

        backpack = "I_HMG_02_high_weapon_F";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5A","","","",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{},{},{"OPTRE_Ins_ER_rolled_OD_blknred",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1}}},{"V_PlateCarrier2_blk",{{"OPTRE_M2_Smoke",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",6,32},{"ACE_M84",2,1},{"HandGrenade",3,1}}},{"I_HMG_02_high_weapon_F",{}},"H_Shemag_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Warthog_FAV_01 : OPTRE_M12_FAV_ins_IND {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Warthog (FAV)";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Rifleman_01";
        class Turrets : Turrets {
            class CargoGunner_1 : CargoGunner_1 { gunnerType = "O_CLA_Teamlead_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_CLA_Rifleperson_02"; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = "O_CLA_Rifleperson_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Oryx_IFV_01 : OPTRE_M494_INS {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Oryx IFV";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Truck_01 : OPTRE_m1015_mule_ins {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Truck";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Warthog_APC_01 : OPTRE_M12_ins_APC {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Warthog APC";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Rifleman_01";
        class Turrets : Turrets {
            class CargoGunner_1 : CargoGunner_1 { gunnerType = "O_CLA_Teamlead_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_CLA_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_SWS_Ferret_01 : OPTRE_ferret_02 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Ferret";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Warthog_MG_01 : OPTRE_M12_LRV_ins {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Warthog (MG)";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class CargoGunner_1 : CargoGunner_1 { gunnerType = "O_CLA_Crew_02"; };
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa'];_unit setObjectTextureGlobal [1,'\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa'];_unit setObjectTextureGlobal [2,'\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins3_co.paa'];_unit setObjectTextureGlobal [3,'\OPTRE_Vehicles\warthog\data\decals_ca.paa'];_unit setObjectTextureGlobal [4,'\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa'];_unit setObjectTextureGlobal [5,'\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa'];_unit setObjectTextureGlobal [6,'\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Innie";

    };

    class O_CLA_Recluse_MBT_01 : LM_OPCAN_M350_INS_WDL {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Recluse MBT";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Falcon_01 : OPTRE_ins_falcon_unarmed {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Falcon (Unarmed)";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_02";
        class Turrets : Turrets {
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OCLA_Falcon_02 : OPTRE_UNSC_falcon_S_ins {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Falcon (Door Guns)";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class LeftDoorGun : LeftDoorGun { gunnerType = "O_CLA_Rifleman_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "O_CLA_Rifleperson_02"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Salamander_GMG_01 : OPTRE_salamanderagl_02 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Salamander  (AGL)";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
            class CommanderTurret : CommanderTurret { gunnerType = "O_CLA_Crew_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa'];_unit setObjectTextureGlobal [1,'\a3\data_f\vehicles\turret_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Blufor";

    };

    class O_CLA_Pelican_01 : OPTRE_Pelican_unarmed_ins {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Pelican";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "O_CLA_Crew_02"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_HMG_Raised_01 : I_HMG_02_high_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] HMG (Raised)";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "I_Soldier_F";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Mortar_01 : I_Mortar_01_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Mortar";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "I_soldier_F";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Tarantula_01 : OPTRE_tarantula_02 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Tarantula";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_02";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Wyvern_01 : OPTRE_VTOLI_02 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Wyvern (IT)";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class GunnerTurret : GunnerTurret { gunnerType = "O_CLA_Crew_02"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Mortar_Tube_01 : O_CLA_Rifleperson_02 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Mortar Tube";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"max_WS1","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "U_BG_Guerilla1_2_F";

        linkedItems[] = {"V_PlateCarrier2_blk","OPTRE_h_PatrolCap_Brown","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","OPTRE_h_PatrolCap_Brown","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"OPTRE_MA5A"};
        respawnWeapons[] = {"OPTRE_MA5A"};

        magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};
        respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};

        backpack = "I_Mortar_01_weapon_F";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5A","","","OPTRE_M7_Sight",{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",32},{},""},{},{},{"U_BG_Guerilla1_2_F",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",1,32},{"OPTRE_M2_Smoke",1,1}}},{"V_PlateCarrier2_blk",{{"ACE_quikclot",15},{"ACE_tourniquet",4},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",7,32},{"OPTRE_M9_Frag",2,1}}},{"I_Mortar_01_weapon_F",{}},"OPTRE_h_PatrolCap_Brown","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Mortar_Bipod_01 : O_CLA_Mortar_Tube_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Mortar Bipod";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Tanker","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "U_BG_Guerilla1_1";

        linkedItems[] = {"V_PlateCarrier2_blk","OPTRE_h_PatrolCap_Brown","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","OPTRE_h_PatrolCap_Brown","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"OPTRE_MA5A"};
        respawnWeapons[] = {"OPTRE_MA5A"};

        magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};
        respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow"};

        backpack = "I_Mortar_01_support_F";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5A","","","OPTRE_M7_Sight",{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",32},{},""},{},{},{"U_BG_Guerilla1_1",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",1,32},{"OPTRE_M2_Smoke",1,1}}},{"V_PlateCarrier2_blk",{{"ACE_quikclot",15},{"ACE_tourniquet",4},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",7,32},{"OPTRE_M9_Frag",2,1}}},{"I_Mortar_01_support_F",{}},"OPTRE_h_PatrolCap_Brown","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Rooikat_01 : B_AFV_Wheeled_01_cannon_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Rooikat";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa'];_unit setObjectTextureGlobal [2,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa'];_unit setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Green_CO.paa'];_unit setObjectTextureGlobal [4,'A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Green";

    };

    class O_CLA_Rooikat_UP_01 : B_AFV_Wheeled_01_up_cannon_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Rooikat UP";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_02";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa'];_unit setObjectTextureGlobal [2,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa'];_unit setObjectTextureGlobal [3,'A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa'];_unit setObjectTextureGlobal [4,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_CO.paa'];_unit setObjectTextureGlobal [5,'a3\Armor_F\Data\camonet_NATO_Green_CO.paa'];_unit setObjectTextureGlobal [6,'A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Green";

    };

    class O_CLA_Sholef_01 : B_MBT_01_arty_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Sholef";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_Exp\MBT_01\data\MBT_01_scorcher_olive_CO.paa'];_unit setObjectTextureGlobal [2,'A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa'];_unit setObjectTextureGlobal [3,'A3\Armor_F\Data\camonet_NATO_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Olive";

    };

    class O_CLA_Seara_01 : B_MBT_01_mlrs_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Seara";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_Exp\MBT_01\data\MBT_01_MLRS_olive_co.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F\Data\camonet_NATO_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Olive";

    };

    class O_CLA_Minigun_01 : LM_OPCAN_Meerkat_KOS_HMG {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Puma (Minigun)";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "LM_OPCAN_KOS_Rifleman";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Beetle_MBT_01 : LM_OPCAN_MBTB_KOS {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Beetle MBT";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Reaper_Demolitionist_01 : O_CLA_Reaper_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Reaper Demolitionist";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"SWS_Weapon_MA5BSx"};
        respawnWeapons[] = {"SWS_Weapon_MA5BSx"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};

        backpack = "B_ViperLightHarness_blk_F";

        ALiVE_orbatCreator_loadout[] = {{"SWS_Weapon_MA5BSx","OPTRE_MA5Suppressor","","SWS_Optic_SmartLink",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"ACE_quikclot",10},{"OPTRE_M2_Smoke",1,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",2,32}}},{"OPTRE_UNSC_M52A_Armor_Rifleman_URB",{{"ACE_M26_Clacker",1},{"ACE_DefusalKit",1},{"OPTRE_M2_Smoke",2,1},{"HandGrenade",2,1},{"ACE_M84",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",6,32}}},{"B_ViperLightHarness_blk_F",{{"ToolKit",1},{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1},{"SWS_Magazine_C7Sx_Sticky",4,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",4,32},{"ClaymoreDirectionalMine_Remote_Mag",2,1}}},"OPTRE_UNSC_VX16_Helmet_MaskS","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Puma_AT_01 : OPTRE_AT_puma_02 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Puma (AT)";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_02";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Wyvern_VT_01 : OPTRE_VTOLV_02 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Wyvern (VT)";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class GunnerTurret : GunnerTurret { gunnerType = "O_CLA_Crew_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_T14_MBT_01 : O_T_MBT_04_cannon_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] T-14 MBT";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F\Data\camonet_CSAT_Stripe_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Jungle";

    };

    class O_CLA_T14k_01 : O_T_MBT_04_command_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] T-14k MBT";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F\Data\camonet_CSAT_Stripe_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Jungle";

    };

    class O_CLA_T100X_MBT_01 : O_T_MBT_02_railgun_ghex_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] T-100X MBT";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Decade\MBT_02\Data\MBT_02_body_expo_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Decade\MBT_02\Data\MBT_02_turret_expo_CO.paa'];_unit setObjectTextureGlobal [2,'a3\Armor_F_Decade\MBT_02\Data\MBT_02_expo_CO.paa'];_unit setObjectTextureGlobal [3,'A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Grey";

    };

    class O_CLA_Pelican_70mm_01 : OPTRE_Pelican_armed_70mm_ins {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Pelican (70mm)";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "O_CLA_Crew_02"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_MG_Tripod_01 : O_CLA_Disassembeled_MG_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] MG Tripod";
        side = SIDE_OPFOR;
        faction = "o_cla";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_Ins_ER_rolled_surplus_black";

        linkedItems[] = {"V_PlateCarrier2_blk","H_Shemag_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_Shemag_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"OPTRE_MA5A"};
        respawnWeapons[] = {"OPTRE_MA5A"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};

        backpack = "I_HMG_02_support_high_F";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5A","","","",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{},{},{"OPTRE_Ins_ER_rolled_surplus_black",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1}}},{"V_PlateCarrier2_blk",{{"OPTRE_M2_Smoke",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",6,32},{"ACE_M84",2,1},{"HandGrenade",3,1}}},{"I_HMG_02_support_high_F",{}},"H_Shemag_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Assault_Boat_01 : O_T_Boat_Armed_01_hmg_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Assault Boat";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class FrontTurret : FrontTurret { gunnerType = "O_CLA_Crew_02"; };
            class RearTurret : RearTurret { gunnerType = "O_CLA_Crew_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Boat_F\Boat_Armed_01\Data\Boat_Armed_01_ext_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa'];_unit setObjectTextureGlobal [2,'\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_blufor_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Blufor";

    };


    class O_CLA_Otokar_01 : O_APC_Wheeled_02_rcws_v2_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Otokar";
        side = SIDE_OPFOR;
        faction = "o_cla";
        crew = "O_CLA_Crew_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_ghex_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_ghex_CO.paa'];_unit setObjectTextureGlobal [2,'a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa'];_unit setObjectTextureGlobal [3,'A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa'];_unit setObjectTextureGlobal [4,'A3\armor_f\data\cage_csat_green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "GreenHex";

    };

    class O_CLA_Viper_01 : O_V_Soldier_hex_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Viper";
        side = SIDE_OPFOR;
        faction = "O_CLA";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_O_V_Soldier_Viper_hex_F";

        linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"SWS_Weapon_AR0M37"};
        respawnWeapons[] = {"SWS_Weapon_AR0M37"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag"};

        backpack = "B_ViperHarness_hex_M_F";

        ALiVE_orbatCreator_loadout[] = {{"SWS_Weapon_AR0M37","OPTRE_MA5Suppressor","OPTRE_M12_Laser","optic_Nightstalker",{"30Rnd_65x39_caseless_msbs_mag",30},{},""},{},{},{"U_O_V_Soldier_Viper_hex_F",{{"FirstAidKit",1},{"Chemlight_red",2,1},{"30Rnd_65x39_caseless_msbs_mag",1,30}}},{},{"B_ViperHarness_hex_M_F",{{"MiniGrenade",2,1},{"SWS_Magazine_60Rnd_65x39_Caseless_msbs",8,60},{"SmokeShell",1,1},{"ACE_M84",2,1},{"SWS_Magazine_Grenade_M3Sx",1,1}}},"H_HelmetO_ViperSP_hex_F","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Reaper_Officer_01 : O_V_Soldier_TL_hex_F {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Reaper Officer";
        side = SIDE_OPFOR;
        faction = "O_CLA";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "OPTRE_FC_Marines_Uniform_SNO";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor2_URB","TCGM_Helmet_Viper_O_UHex","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor2_URB","TCGM_Helmet_Viper_O_UHex","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"SWS_Weapon_AR0M37","Rangefinder"};
        respawnWeapons[] = {"SWS_Weapon_AR0M37","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag"};

        backpack = "B_ViperLightHarness_blk_F";

        ALiVE_orbatCreator_loadout[] = {{"SWS_Weapon_AR0M37","OPTRE_MA5Suppressor","OPTRE_M12_Laser","optic_Nightstalker",{"30Rnd_65x39_caseless_msbs_mag",30},{},""},{},{},{"OPTRE_FC_Marines_Uniform_SNO",{{"FirstAidKit",1},{"Chemlight_red",2,1},{"30Rnd_65x39_caseless_msbs_mag",3,30}}},{"OPTRE_UNSC_M52A_Armor2_URB",{}},{"B_ViperLightHarness_blk_F",{{"MiniGrenade",2,1},{"SmokeShell",2,1},{"SWS_Magazine_60Rnd_65x39_Caseless_msbs",8,60},{"ACE_M84",2,1},{"SWS_Magazine_Grenade_M3Sx",1,1}}},"TCGM_Helmet_Viper_O_UHex","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_CLA_Reaper_Missile_Specialist_01 : O_CLA_Reaper_AntiAir_01 {
        author = "Bernard ""Egg"" Teller";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWS] Reaper Missile Specialist";
        side = SIDE_OPFOR;
        faction = "O_CLA";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "OPTRE_FC_Marines_Uniform_WDL";

        linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_URB","OPTRE_UNSC_VX16_Helmet_MaskS","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"SWS_Weapon_MA5BSx","launch_O_Titan_short_F"};
        respawnWeapons[] = {"SWS_Weapon_MA5BSx","launch_O_Titan_short_F"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","Titan_AT","OPTRE_60Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","Titan_AT","OPTRE_60Rnd_762x51_Mag"};

        backpack = "B_ViperLightHarness_blk_F";

        ALiVE_orbatCreator_loadout[] = {{"SWS_Weapon_MA5BSx","OPTRE_MA5Suppressor","","SWS_Optic_SmartLink",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{"launch_O_Titan_short_F","","","",{"Titan_AT",1},{},""},{},{"OPTRE_FC_Marines_Uniform_WDL",{{"OPTRE_Biofoam",1},{"ACE_EarPlugs",1},{"ACE_quikclot",15},{"ACE_tourniquet",4},{"OPTRE_M2_Smoke",1,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",1,32}}},{"OPTRE_UNSC_M52A_Armor_Rifleman_URB",{{"OPTRE_M2_Smoke",2,1},{"HandGrenade",2,1},{"ACE_M84",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",8,32}}},{"B_ViperLightHarness_blk_F",{{"ACE_M84",2,1},{"HandGrenade",2,1},{"OPTRE_M2_Smoke",2,1},{"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",2,32},{"Titan_AT",2,1}}},"OPTRE_UNSC_VX16_Helmet_MaskS","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
          class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

          class ALiVE_orbatCreator {
            init = QUOTE(_this call FUNC(aliveOnInit));
          };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};
