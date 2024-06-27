class CfgGroups {
  class EAST {
    class sws_o_URArmy {
      name = "United Rebel Alliance";

      class Infantry {
        name = "Infantry";

        class sws_o_urarmy_infantry_squad {
          name = "Squad";
          side = 0;
          faction = "SWS_O_urarmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 0;
            vehicle = "SWS_O_URArmy_Squad_Lead_01";
          };
          class Unit1 {
            position[] = {5,-5,0};
            rank = "CORPORAL";
            side = 0;
            vehicle = "SWS_O_URArmy_Team_Lead_01";
          };
          class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Rifleperson_1_01";
          };
          class Unit3 {
            position[] = {10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Rifleperson_2_01";
          };
          class Unit4 {
            position[] = {-10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Automatic_Rifle_01";
          };
          class Unit5 {
            position[] = {15,-15,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Medic_01";
          };
          class Unit6 {
            position[] = {-15,-15,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Marksman_01";
          };
          class Unit7 {
            position[] = {20,-20,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Rifleperson_2_01";
          };
          class Unit8 {
            position[] = {-20,-20,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Anti_Tank_Person_02_01";
          };
          class Unit9 {
            position[] = {25,-25,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Light_Marksmen_01";
          };
        };

        class sws_o_urarmy_infantry_team {
          name = "Team";
          side = 0;
          faction = "SWS_O_urarmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 0;
            vehicle = "SWS_O_URArmy_Team_Lead_01";
          };

          class Unit1 {
            position[] = {5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Rifleperson_1_01";
          };

          class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Rifleperson_2_01";
          };

          class Unit3 {
            position[] = {10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Automatic_Rifle_01";
          };
        };

        class sws_o_urarmy_infantry_patrol {
          name = "Patrol";
          side = 0;
          faction = "SWS_O_urarmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 0;
            vehicle = "SWS_O_URArmy_Rifleperson_1_01";
          };
          class Unit1 {
            position[] = {5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Rifleperson_2_01";
          };
        };

        class sws_o_urarmy_infantry_sniper_team {
          name = "Sniper Team";
          side = 0;
          faction = "SWS_O_urarmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 0;
            vehicle = "SWS_O_URArmy_Sniper_01";
          };
          class Unit1 {
            position[] = {5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Spotter_01";
          };
        };

        class sws_o_URArmy_infantry_mg_team {
          name = "MG Team";
          side = 0;
          faction = "SWS_O_urarmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 0;
            vehicle = "SWS_O_URArmy_Squad_Lead_01";
          };
          class Unit1 {
            position[] = {5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Automatic_Rifle_01";
          };
          class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Automatic_Rifle_01";
          };
          class Unit3 {
            position[] = {10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Light_Marksmen_01";
          };
        };

        class sws_o_urarmy_infantry_marksmen_team {
          name = "Marksmen Team";
          side = 0;
          faction = "SWS_O_urarmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 0;
            vehicle = "SWS_O_URArmy_Team_Lead_01";
          };
          class Unit1 {
            position[] = {5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Marksman_01";
          };
          class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Light_Marksmen_01";
          };
          class Unit3 {
            position[] = {10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Light_Marksmen_01";
          };
        };

        class sws_o_URArmy_infantry_at_team {
          name = "AT Team";
          side = 0;
          faction = "SWS_O_urarmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Squad_Lead_01";
          };
          class Unit1 {
            position[] = {5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Anti_Tank_Person_02_01";
          };
          class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Anti_Tank_Person_01_01";
          };
          class Unit3 {
            position[] = {10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Rifleperson_2_01";
          };
        };

        class sws_o_URArmy_infantry_aa_team {
          name = "AA Team";
          side = 0;
          faction = "SWS_O_urarmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {-10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Squad_Lead_01";
          };
          class Unit1 {
            position[] = {5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Anti_Air_Person_01";
          };
          class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Anti_Air_Person_01";
          };
          class Unit3 {
            position[] = {10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Rifleperson_1_01";
          };
        };
      };

      class SpecOps {
        name = "SpecOps";

        class sws_o_urarmy_infantry_marine_team {
          name = "Marine Team";
          side = 0;
          faction = "SWS_O_urarmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 0;
            vehicle = "SWS_O_URArmy_Marine_Team_Lead_01";
          };
          class Unit1 {
            position[] = {5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Marine_1_01";
          };
          class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Marine_2_01";
          };
          class Unit3 {
            position[] = {10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Marine_Medic_01";
          };
        };

        class sws_o_URArmy_infantry_marine_squad {
          name = "Marine Squad";
          side = 0;
          faction = "SWS_O_urarmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 0;
            vehicle = "SWS_O_URArmy_Marine_Team_Lead_01";
          };
          class Unit1 {
            position[] = {5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Marine_1_01";
          };
          class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Marine_2_01";
          };
          class Unit3 {
            position[] = {10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Marine_MG_01";
          };
          class Unit4 {
            position[] = {-10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Marine_Medic_01";
          };
          class Unit5 {
            position[] = {-15,-15,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Marine_1_01";
          };
        };

        class sws_o_URArmy_specops_ranger_team {
          name = "Ranger Team";
          side = 0;
          faction = "SWS_O_URArmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 0;
            vehicle = "SWS_O_URArmy_Ranger_Team_Lead_01";
          };
          class Unit1 {
            position[] = {5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Ranger_01_01";
          };
          class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Ranger_02_01";
          };
          class Unit3 {
            position[] = {10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Range_Autorifle_01";
          };
          class Unit4 {
            position[] = {-10,-10,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Ranger_Marksmen_01";
          };
          class Unit5 {
            position[] = {15,-15,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Ranger_Medic_01";
          };
        };
      };

      class Mechanized {
        name = "Mechanized";

        class sws_o_URArmy_mechanized_apc_squad {
          name = "APC Squad";
          side = 0;
          faction = "SWS_O_urarmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 0;
            vehicle = "SWS_O_URArmy_Warrior_01";
          };
          class Unit1 {
            position[] = {8,-16,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Stalker_01";
          };
          class Unit2 {
            position[] = {-8,-16,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Stalker_01";
          };
        };
      };

      class Armored {
          name = "Armored";

        class sws_o_URArmy_armored_tank_squadron {
          name = "Tank Squad";
          side = 0;
          faction = "SWS_O_URArmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 0;
            vehicle = "SWS_O_URArmy_Black_Crusader_Lead_01";
          };
          class Unit1 {
            position[] = {11,-18,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Black_Crusader_01";
          };
          class Unit2 {
            position[] = {-11,-18,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Black_Crusader_01";
          };
          class Unit3 {
            position[] = {21,-26,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Black_Eagle_01";
          };
        };

        class sws_o_URArmy_armored_light_tank_squad {
          name = "Light Tank Squad";
          side = 0;
          faction = "SWS_O_URArmy";
          icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
          rarityGroup = 0.5;

          class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 0;
            vehicle = "SWS_O_URArmy_Red_Eagle_01";
          };
          class Unit1 {
            position[] = {5,-8,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Rat_Light_01";
          };
          class Unit2 {
            position[] = {-5,-8,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Rat_ATGM_01";
          };
          class Unit3 {
            position[] = {10,-13,0};
            rank = "PRIVATE";
            side = 0;
            vehicle = "SWS_O_URArmy_Rat_Light_01";
          };
        };
      };
    };
  };
};
