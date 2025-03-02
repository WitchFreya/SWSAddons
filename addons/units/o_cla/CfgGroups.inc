class CfgGroups {
    class EAST {

        class O_CLA {
            name = "[SWS] CLA";

            class Infantry {
                name = "Infantry";

                class o_cla_infantry_fireteam {
                    name = "[SWS] Fireteam";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Rifleperson_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Rifleperson_02";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Medic_01";
                    };
                };

                class o_cla_lightInfantry_fireteam {
                    name = "Ragtag Fireteam";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_LightRifle_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_LightRifle_02";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_LightRifle_03";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_LightRifle_04";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_LightRifle_05";
                    };
                };

                class o_cla_lightmg_team {
                    name = "Ragtag MG Team";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_LightRifle_05";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_LightMG_01";
                    };
                };

                class o_cla_lightSniper_team {
                    name = "Ragtag Sniper Team";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_LightRifle_04";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_LightSniper_01";
                    };
                };

                class o_cla_lightAT_team {
                    name = "Ragtag RPG Team";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_LightRifle_04";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_LightAT_01";
                    };
                };

                class o_cla_infantry_squad {
                    name = "[SWS] Squad";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Medic_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Rifleperson_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Autorifle_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Rifleperson_02";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Grenadier_01";
                    };
                };

                class o_cla_infantry_elite_fireteam {
                    name = "[SWS] Elite Fireteam";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Rifleperson_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Rifleperson_02";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Medic_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Autorifle_01";
                    };
                };

                class o_cla_infantry_elite_squad {
                    name = "[SWS] Elite Squad";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Rifleperson_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Rifleperson_02";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_AntiArmor_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Medic_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Autorifle_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Rifleperson_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Rifleperson_02";
                    };
                };

                class o_cla_infantry_mg_section {
                    name = "[SWS] MG Section";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Autorifle_01";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Autorifle_01";
                    };
                };

                class o_cla_infantry_elite_mg_section {
                    name = "[SWS] Elite MG Section";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Autorifle_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Autorifle_01";
                    };
                };

                class o_cla_infantry_sniper_team {
                    name = "[SWS] Sniper Team";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Sniper_01";
                    };
                };

                class o_cla_infantry_patrol {
                    name = "[SWS] Patrol";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Rifleperson_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Rifleperson_02";
                    };
                };

                class o_cla_infantry_crew {
                    name = "[SWS] Crew";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Crew_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Crew_02";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Crew_01";
                    };
                };

                class o_cla_infantry_elite_at_team {
                    name = "[SWS] Elite AT Team";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_AntiArmor_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Elite_AntiArmor_01";
                    };
                };

            };

            class SpecOps {
                name = "SpecOps";

                class o_cla_specops_reaper_fireteam {
                    name = "[SWS] Reaper Fireteam";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Autorifle_01";
                    };
                    class Unit3 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_01";
                    };
                    class Unit4 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_AntiArmor_01";
                    };
                };

                class o_cla_specops_reaper_mg_team {
                    name = "[SWS] Reaper MG Team";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Autorifle_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Autorifle_01";
                    };
                };

                class o_cla_specops_reaper_aa_team {
                    name = "[SWS] Reaper AA Team";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_AntiAir_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_AntiAir_01";
                    };
                };

                class o_cla_specops_reaper_breachers {
                    name = "[SWS] Reaper Breachers";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_01";
                    };
                    class Unit2 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_01";
                    };
                    class Unit3 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Medic_01";
                    };
                    class Unit4 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Breacher_01";
                    };
                    class Unit5 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Breacher_01";
                    };
                };

                class o_cla_specops_reaper_snipers {
                    name = "[SWS] Reaper Snipers";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Sniper_01";
                    };
                };

                class o_cla_specops_reaper_command {
                    name = "[SWS] Reaper Command";
                    side = SIDE_OPFOR;
                    faction = "O_CLA";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "MAJOR";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Officer_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Medic_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Autorifle_01";
                    };
                };

                class o_cla_specops_reaper_at_team {
                    name = "[SWS] Reaper AT Team";
                    side = SIDE_OPFOR;
                    faction = "O_CLA";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Teamlead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Missile_Specialist_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Reaper_Autorifle_01";
                    };
                };

            };

            class Motorized {
                name = "Motorized";

                class o_cla_motorized_warthog_patrol {
                    name = "[SWS] Warthog Patrol";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Warthog_MG_01";
                    };
                    class Unit1 {
                        position[] = {-5,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Warthog_FAV_01";
                    };
                    class Unit2 {
                        position[] = {5,-10,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Warthog_FAV_01";
                    };
                };

                class o_cla_motorized_puma_patrol {
                    name = "[SWS] Puma Patrol";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Minigun_01";
                    };
                    class Unit1 {
                        position[] = {5,-9,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Puma_01";
                    };
                    class Unit2 {
                        position[] = {-5,-9,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Puma_01";
                    };
                };

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support";

            };

            class Mechanized {
                name = "Mechanized";

                class o_cla_mechanized_ferret_platoon {
                    name = "[SWS] Ferret Platoon";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_SWS_Ferret_01";
                    };
                    class Unit1 {
                        position[] = {9,-15,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_SWS_Ferret_01";
                    };
                    class Unit2 {
                        position[] = {-9,-15,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_SWS_Ferret_01";
                    };
                };

            };

            class Armored {
                name = "Armored";

                class o_cla_armored_t14 {
                    name = "[SWS] T-14 Platoon";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_T14k_01";
                    };
                    class Unit1 {
                        position[] = {11,-18,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_T14_MBT_01";
                    };
                    class Unit2 {
                        position[] = {-11,-18,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_T14_MBT_01";
                    };
                    class Unit3 {
                        position[] = {22,-29,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_T14_MBT_01";
                    };
                };

            };

            class Artillery {
                name = "Artillery";

                class o_cla_artillery_mortar_team {
                    name = "[SWS] Mortar Team";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Mortar_Bipod_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Mortar_Tube_01";
                    };
                };

                class o_ocla_infantry_static_hmg {
                    name = "[SWS] Static HMG Team";
                    side = SIDE_OPFOR;
                    faction = "o_cla";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_Disassembeled_MG_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = SIDE_OPFOR;
                        vehicle = "O_CLA_MG_Tripod_01";
                    };
                };

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};
