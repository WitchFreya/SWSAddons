#define CLASSES_VEHICLES                                \
  "SWS_O_URArmy_Anti_Air_Person_01"                     \
  , "SWS_O_URArmy_Anti_Tank_Person_01_01"               \
  , "SWS_O_URArmy_Automatic_Rifle_01"                   \
  , "SWS_O_URArmy_Black_Crusader_01"                    \
  , "SWS_O_URArmy_Black_Crusader_Lead_01"               \
  , "SWS_O_URArmy_Black_Eagle_01"                       \
  , "SWS_O_URArmy_Covered_Truck_01"                     \
  , "SWS_O_URArmy_Crew_01"                              \
  , "SWS_O_URArmy_HMG_Dagger_01"                        \
  , "SWS_O_URArmy_HMG_Jeep_01"                          \
  , "SWS_O_URArmy_JAS_AIR_01"                           \
  , "SWS_O_URArmy_Jeep_01"                              \
  , "SWS_O_URArmy_Kajman_01"                            \
  , "SWS_O_URArmy_Light_Marksmen_01"                    \
  , "SWS_O_URArmy_Marine_1_01"                          \
  , "SWS_O_URArmy_Marine_2_01"                          \
  , "SWS_O_URArmy_Marine_Medic_01"                      \
  , "SWS_O_URArmy_Marine_MG_01"                         \
  , "SWS_O_URArmy_Marine_Team_Lead_01"                  \
  , "SWS_O_URArmy_Marksman_01"                          \
  , "SWS_O_URArmy_Medic_01"                             \
  , "SWS_O_URArmy_Merlin_Transport_01"                  \
  , "SWS_O_URArmy_Range_Autorifle_01"                   \
  , "SWS_O_URArmy_Ranger_01_01"                         \
  , "SWS_O_URArmy_Ranger_02_01"                         \
  , "SWS_O_URArmy_Ranger_Marksmen_01"                   \
  , "SWS_O_URArmy_Ranger_Medic_01"                      \
  , "SWS_O_URArmy_Ranger_Team_Lead_01"                  \
  , "SWS_O_URArmy_Rat_AA_01"                            \
  , "SWS_O_URArmy_Rat_ATGM_01"                          \
  , "SWS_O_URArmy_Rat_Light_01"                         \
  , "SWS_O_URArmy_Red_Eagle_01"                         \
  , "SWS_O_URArmy_Rifleperson_1_01"                     \
  , "SWS_O_URArmy_Rifleperson_2_01"                     \
  , "SWS_O_URArmy_Shadow_01"                            \
  , "SWS_O_URArmy_Sniper_01"                            \
  , "SWS_O_URArmy_Spotter_01"                           \
  , "SWS_O_URArmy_Squad_Lead_01"                        \
  , "SWS_O_URArmy_Stalker_01"                           \
  , "SWS_O_URArmy_Taru_Transport_01"                    \
  , "SWS_O_URArmy_Team_Lead_01"                         \
  , "SWS_O_URArmy_Tiger_01"                             \
  , "SWS_O_URArmy_Warrior_01"                           \
  , "SWS_O_URArmy_Wildcat_01"                           \
  , "SWS_O_URArmy_YAK_CAS_01"                           \
  , "SWS_O_URArmy_Anti_Tank_Person_02_01"               \
  , "SWS_O_URArmy_B_RangerAutoRifle_ViperHarness_hex_F" \
  , "SWS_O_URArmy_B_Medic_ViperHarness_hex_F"           \
  , "SWS_O_URArmy_B_Antitank1_ViperLightHarness_blk_F"  \
  , "SWS_O_URArmy_B_RadioBag_01_black_F"                \
  , "SWS_O_URArmy_B_CombinationUnitRespirator_01_F"     \
  , "SWS_O_URArmy_B_Autorifle_Carryall_blk"             \
  , "SWS_O_URArmy_B_Marksmen_Carryall_blk"

class CfgVehicles {
  class B_MBT_01_Cannon_F;
  class B_Recon_M_F;
  class B_Soldier_Exp_F;
  class B_T_LSV_01_Armed_F;
  class I_APC_Tracked_03_Cannon_F;
  class I_C_Offroad_02_LMG_F;
  class I_Heli_Light_03_DynamicLoadout_F;
  class I_Heli_Transport_02_F;
  class I_LT_01_AA_F;
  class I_LT_01_AT_F;
  class I_LT_01_Cannon_F;
  class I_Plane_Fighter_04_F;
  class I_Soldier_AR_F;
  class I_Soldier_SL_F;
  class O_APC_Tracked_02_AA_F;
  class O_APC_Tracked_02_Cannon_F;
  class O_Heli_Attack_02_DynamicLoadout_F;
  class O_Heli_Transport_04_Covered_F;
  class O_MBT_02_Arty_F;
  class O_MBT_02_Cannon_F;
  class O_MBT_04_Cannon_F;
  class O_MBT_04_Command_F;
  class O_Plane_CAS_02_DynamicLoadout_F;
  class O_Truck_02_Covered_F;
  class C_Offroad_02_Unarmed_F;

  class B_RadioBag_01_black_F;
  class B_CombinationUnitRespirator_01_F;
  class B_Carryall_blk;
  class B_ViperLightHarness_blk_F;
  class B_ViperHarness_hex_F;

  #pragma region Bags
  class SWS_O_URArmy_B_RangerAutoRifle_ViperHarness_hex_F : B_ViperHarness_hex_F {
    ITEM_META(1);
    class TransportMagazines {
      MACRO_ADDMAGAZINE(DMNS_100Rnd_762x51_Mag,2);
    };

    class TransportItems {
      MACRO_ADDITEM(SWS_Biofoam,2);
      MACRO_ADDITEM(ACE_bloodIV,3);
      MACRO_ADDITEM(ACE_elasticBandage,10);
      MACRO_ADDITEM(ACE_tourniquet,2);
      MACRO_ADDITEM(OPTRE_M2_Smoke,1);
      MACRO_ADDITEM(HandGrenade,4);
    };
  };

  class SWS_O_URArmy_B_Medic_ViperHarness_hex_F : B_ViperHarness_hex_F {
    ITEM_META(1);

    class TransportMagazines {};
    class TransportItems {
      MACRO_ADDITEM(SWS_Biofoam,2);
      MACRO_ADDITEM(ACE_bloodIV,3);
      MACRO_ADDITEM(ACE_elasticBandage,10);
      MACRO_ADDITEM(ACE_tourniquet,4);
      MACRO_ADDITEM(OPTRE_M2_Smoke,3);
      MACRO_ADDITEM(HandGrenade,4);
    };
  };

  class SWS_O_URArmy_B_Antitank2_ViperLightHarness_blk_F : B_ViperLightHarness_blk_F {
    ITEM_META(1);
    class TransportMagazines {
      MACRO_ADDMAGAZINE(MRAWS_HEAT_F,2);
    };

    class TransportItems {
      MACRO_ADDITEM(SWS_Biofoam,2);
      MACRO_ADDITEM(ACE_bloodIV,3);
      MACRO_ADDITEM(ACE_elasticBandage,10);
      MACRO_ADDITEM(ACE_tourniquet,2);
      MACRO_ADDITEM(HandGrenade,1);
    };
  };

  class SWS_O_URArmy_B_Antitank1_ViperLightHarness_blk_F : B_ViperLightHarness_blk_F {
    ITEM_META(1);
    class TransportMagazines { MACRO_ADDMAGAZINE(Vorona_HEAT,3); };

    class TransportItems {
      MACRO_ADDITEM(SWS_Biofoam,2);
      MACRO_ADDITEM(ACE_bloodIV,3);
      MACRO_ADDITEM(ACE_elasticBandage,10);
      MACRO_ADDITEM(ACE_tourniquet,2);
      MACRO_ADDITEM(HandGrenade,1);
    };
  };

  class SWS_O_URArmy_B_AntiAir_ViperLightHarness_blk_F : B_ViperLightHarness_blk_F {
    ITEM_META(1);
    class TransportMagazines {
      MACRO_ADDMAGAZINE(Titan_AA,2);
    };

    class TransportItems {
      MACRO_ADDITEM(SWS_Biofoam,2);
      MACRO_ADDITEM(ACE_bloodIV,3);
      MACRO_ADDITEM(ACE_elasticBandage,10);
      MACRO_ADDITEM(ACE_tourniquet,2);
      MACRO_ADDITEM(HandGrenade,1);
    };
  };

  class SWS_O_URArmy_B_RadioBag_01_black_F : B_RadioBag_01_black_F {
    ITEM_META(1);
    class TransportMagazines { };

    class TransportItems {
      MACRO_ADDITEM(SWS_Biofoam,2);
      MACRO_ADDITEM(ACE_bloodIV,3);
      MACRO_ADDITEM(ACE_elasticBandage,10);
      MACRO_ADDITEM(ACE_tourniquet,4);
      MACRO_ADDITEM(OPTRE_M2_Smoke,3);
      MACRO_ADDITEM(HandGrenade,4);
    };
  };

  class SWS_O_URArmy_B_CombinationUnitRespirator_01_F : B_CombinationUnitRespirator_01_F {
    ITEM_META(1);
    class TransportMagazines { };

    class TransportItems {
      MACRO_ADDITEM(SWS_Biofoam,1);
      MACRO_ADDITEM(ACE_bloodIV,2);
      MACRO_ADDITEM(ACE_elasticBandage,10);
      MACRO_ADDITEM(ACE_tourniquet,2);
      MACRO_ADDITEM(HandGrenade,2);
    };
  };

  class SWS_O_URArmy_B_Autorifle_Carryall_blk : B_Carryall_blk {
    ITEM_META(1);
    class TransportMagazines {
      MACRO_ADDMAGAZINE(130Rnd_338_Mag,1);
    };

    class TransportItems {
      MACRO_ADDITEM(SWS_Biofoam,2);
      MACRO_ADDITEM(ACE_bloodIV,2);
      MACRO_ADDITEM(ACE_elasticBandage,10);
      MACRO_ADDITEM(ACE_tourniquet,4);
      MACRO_ADDITEM(HandGrenade,2);
    };
  };

  class SWS_O_URArmy_B_Marksmen_Carryall_blk : B_Carryall_blk {
    ITEM_META(1);
    class TransportMagazines {
      MACRO_ADDMAGAZINE(10Rnd_338_Mag,4);
    };

    class TransportItems {
      MACRO_ADDITEM(SWS_Biofoam,2);
      MACRO_ADDITEM(ACE_bloodIV,2);
      MACRO_ADDITEM(ACE_elasticBandage,10);
      MACRO_ADDITEM(ACE_tourniquet,4);
      MACRO_ADDITEM(HandGrenade,2);
      MACRO_ADDITEM(OPTRE_M2_Smoke,3);
    };
  };

  #pragma endregion

  class SWS_O_URArmy_Anti_Tank_Person_02_01 : B_Soldier_Exp_F {
    ITEM_META(2);
    displayName = "[SWS] URA Anti-Tank Person 02";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_C_CBRN_Suit_01_Blue_F";

    linkedItems[] = {"V_PlateCarrier2_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_AK_Rifle","launch_MRAWS_sand_rail_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};
    respawnWeapons[] = {"SWS_O_URArmy_AK_Rifle","launch_MRAWS_sand_rail_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};

    magazines[] = {MACRO_X3("30Rnd_762x39_AK12_Mag_F"),"MRAWS_HEAT_F","11Rnd_45ACP_Mag","Laserbatteries"};
    respawnMagazines[] = {MACRO_X3("30Rnd_762x39_AK12_Mag_F"),"MRAWS_HEAT_F","11Rnd_45ACP_Mag","Laserbatteries"};

    backpack = "SWS_O_URArmy_B_Antitank2_ViperLightHarness_blk_F";
  };

  class SWS_O_URArmy_Squad_Lead_01 : I_Soldier_SL_F {
    ITEM_META(2);
    displayName = "[SWS] URA Squad Lead";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_Blue_F";

    linkedItems[] = {"V_PlateCarrier1_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_HURS_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_HURS_CNM"};

    weapons[] = {"SWS_O_URArmy_AK_Rifle_GL","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};
    respawnWeapons[] = {"SWS_O_URArmy_AK_Rifle_GL","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};

    items[] = {MACRO_X3("FirstAidKit")};
    respawnItems[] = {MACRO_X3("FirstAidKit")};

    magazines[] = {MACRO_X4("30Rnd_762x39_AK12_Mag_F"),MACRO_X3("1Rnd_HE_Grenade_shell"),MACRO_X2("11Rnd_45ACP_Mag"),"Laserbatteries"};
    respawnMagazines[] = {MACRO_X4("30Rnd_762x39_AK12_Mag_F"),MACRO_X3("1Rnd_HE_Grenade_shell"),MACRO_X2("11Rnd_45ACP_Mag"),"Laserbatteries"};

    backpack = "SWS_O_URArmy_B_RadioBag_01_black_F";
  };


  class SWS_O_URArmy_Team_Lead_01 : SWS_O_URArmy_Squad_Lead_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Team Lead";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_Blue_F";

    linkedItems[] = {"V_PlateCarrier1_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_HURS_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_HURS_CNM"};

    weapons[] = {"SWS_O_URArmy_AK_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};
    respawnWeapons[] = {"SWS_O_URArmy_AK_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};

    magazines[] = {MACRO_X4("30Rnd_762x39_AK12_Mag_F"),MACRO_X3("11Rnd_45ACP_Mag"),"Laserbatteries"};
    respawnMagazines[] = {MACRO_X4("30Rnd_762x39_AK12_Mag_F"),MACRO_X3("11Rnd_45ACP_Mag"),"Laserbatteries"};

    backpack = "SWS_O_URArmy_B_RadioBag_01_black_F";
  };

  class SWS_O_URArmy_Rifleperson_1_01 : SWS_O_URArmy_Team_Lead_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Rifleperson 1";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F"};

    uniformClass = "U_C_CBRN_Suit_01_Blue_F";

    linkedItems[] = {"V_PlateCarrier2_blk","SWS_O_URArmy_H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier2_blk","SWS_O_URArmy_H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_AK_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};
    respawnWeapons[] = {"SWS_O_URArmy_AK_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};

    magazines[] = {MACRO_X5("30Rnd_762x39_AK12_Mag_F"),MACRO_X3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X5("30Rnd_762x39_AK12_Mag_F"),MACRO_X3("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_CombinationUnitRespirator_01_F";
  };

  class SWS_O_URArmy_Rifleperson_2_01 : SWS_O_URArmy_Rifleperson_1_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Rifleperson 2";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_Blue_F";

    linkedItems[] = {"V_PlateCarrier2_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_MA37K_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};
    respawnWeapons[] = {"SWS_O_URArmy_MA37K_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};

    magazines[] = {MACRO_X5("OPTRE_32Rnd_762x51_Mag"),MACRO_X3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X5("OPTRE_32Rnd_762x51_Mag"),MACRO_X3("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_CombinationUnitRespirator_01_F";
  };

  class SWS_O_URArmy_Automatic_Rifle_01 : SWS_O_URArmy_Rifleperson_2_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Automatic Rifle";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_Blue_F";

    linkedItems[] = {"V_PlateCarrier1_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_UL_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_MMG_02_black_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};
    respawnWeapons[] = {"SWS_O_URArmy_MMG_02_black_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};

    magazines[] = {MACRO_X3("130Rnd_338_Mag"),MACRO_X3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X3("130Rnd_338_Mag"),MACRO_X3("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_Autorifle_Carryall_blk";
  };

  class SWS_O_URArmy_Medic_01 : SWS_O_URArmy_Rifleperson_2_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Medic";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_Blue_F";

    linkedItems[] = {"V_PlateCarrier1_blk","H_PASGT_basic_white_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_UL_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_PASGT_basic_white_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_MA37K_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};
    respawnWeapons[] = {"SWS_O_URArmy_MA37K_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};

    magazines[] = {MACRO_X3("OPTRE_32Rnd_762x51_Mag"),MACRO_X3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X3("OPTRE_32Rnd_762x51_Mag"),MACRO_X3("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_CombinationUnitRespirator_01_F";
  };

  class SWS_O_URArmy_Marksman_01 : SWS_O_URArmy_Automatic_Rifle_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Marksman";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_Blue_F";

    linkedItems[] = {"V_PlateCarrier1_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_UL_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_srifle_DMR_02_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};
    respawnWeapons[] = {"SWS_O_URArmy_srifle_DMR_02_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};

    magazines[] = {MACRO_X5("10Rnd_338_Mag"),MACRO_X3("11Rnd_45ACP_Mag"),"Laserbatteries"};
    respawnMagazines[] = {MACRO_X5("10Rnd_338_Mag"),MACRO_X3("11Rnd_45ACP_Mag"),"Laserbatteries"};

    backpack = "SWS_O_URArmy_B_Marksmen_Carryall_blk";
  };

  class SWS_O_URArmy_Crew_01 : SWS_O_URArmy_Rifleperson_1_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Crew";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_Blue_F";

    linkedItems[] = {"V_PlateCarrier1_blk","H_PilotHelmetFighter_B","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_PilotHelmetFighter_B","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"hgun_PDW2000_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};
    respawnWeapons[] = {"hgun_PDW2000_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};

    magazines[] = {MACRO_X5("30Rnd_9x21_Mag"),"11Rnd_45ACP_Mag"};
    respawnMagazines[] = {MACRO_X5("30Rnd_9x21_Mag"),"11Rnd_45ACP_Mag"};

    backpack = "SWS_O_URArmy_B_CombinationUnitRespirator_01_F";
  };

  class SWS_O_URArmy_Sniper_01 : SWS_O_URArmy_Marksman_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Sniper";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_B_CBRN_Suit_01_MTP_F";

    linkedItems[] = {"V_PlateCarrier1_rgr_noflag_F","H_HelmetIA","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_UL_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier1_rgr_noflag_F","H_HelmetIA","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_srifle_GM6_ghex_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};
    respawnWeapons[] = {"SWS_O_URArmy_srifle_GM6_ghex_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};

    magazines[] = {MACRO_X5("5Rnd_127x108_Mag"),MACRO_X4("11Rnd_45ACP_Mag"),"Laserbatteries"};
    respawnMagazines[] = {MACRO_X5("5Rnd_127x108_Mag"),MACRO_X4("11Rnd_45ACP_Mag"),"Laserbatteries"};

    backpack = "SWS_O_URArmy_B_RadioBag_01_black_F";
  };

  class SWS_O_URArmy_Spotter_01 : SWS_O_URArmy_Sniper_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Spotter";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_B_CBRN_Suit_01_MTP_F";

    linkedItems[] = {"V_PlateCarrier2_rgr_noflag_F","H_HelmetIA","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_UL_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier2_rgr_noflag_F","H_HelmetIA","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UA_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_AK_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};
    respawnWeapons[] = {"SWS_O_URArmy_AK_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};

    magazines[] = {MACRO_X5("30rnd_762x39_AK12_Lush_Mag_F"),MACRO_X4("11Rnd_45ACP_Mag"),"Laserbatteries"};
    respawnMagazines[] = {MACRO_X5("30rnd_762x39_AK12_Lush_Mag_F"),MACRO_X4("11Rnd_45ACP_Mag"),"Laserbatteries"};

    backpack = "SWS_O_URArmy_B_Marksmen_Carryall_blk";
  };

  class SWS_O_URArmy_Marine_1_01 : SWS_O_URArmy_Rifleperson_1_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Marine 1";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_White_F";

    linkedItems[] = {"OPTRE_Vest_CMA_Heavy","H_PASGT_basic_white_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};
    respawnLinkedItems[] = {"OPTRE_Vest_CMA_Heavy","H_PASGT_basic_white_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_AK_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};
    respawnWeapons[] = {"SWS_O_URArmy_AK_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};

    magazines[] = {MACRO_X5("30Rnd_762x39_AK12_Mag_F"),MACRO_X3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X5("30Rnd_762x39_AK12_Mag_F"),MACRO_X3("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_CombinationUnitRespirator_01_F";
  };

  class SWS_O_URArmy_Marine_2_01 : SWS_O_URArmy_Marine_1_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Marine 2";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_White_F";

    linkedItems[] = {"OPTRE_Vest_CMA_Heavy","H_PASGT_basic_white_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};
    respawnLinkedItems[] = {"OPTRE_Vest_CMA_Heavy","H_PASGT_basic_white_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};

    weapons[] = {"OPTRE_M45ATAC","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};
    respawnWeapons[] = {"OPTRE_M45ATAC","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};

    magazines[] = {MACRO_X5("SWS_Magazine_12_Rnd_Shotgun_Incendiary"),MACRO_X5("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X5("SWS_Magazine_12_Rnd_Shotgun_Incendiary"),MACRO_X5("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_CombinationUnitRespirator_01_F";
  };

  class SWS_O_URArmy_Marine_Team_Lead_01 : SWS_O_URArmy_Marine_1_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Marine Team Lead";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_White_F";

    linkedItems[] = {"OPTRE_Vest_CMA_Heavy","H_PASGT_basic_white_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};
    respawnLinkedItems[] = {"OPTRE_Vest_CMA_Heavy","H_PASGT_basic_white_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_19_UNSC_M7","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};
    respawnWeapons[] = {"SWS_O_URArmy_19_UNSC_M7","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};

    magazines[] = {MACRO_X5("60Rnd_5x23_m7_fmj"),MACRO_X4("11Rnd_45ACP_Mag"),"Laserbatteries"};
    respawnMagazines[] = {MACRO_X5("60Rnd_5x23_m7_fmj"),MACRO_X4("11Rnd_45ACP_Mag"),"Laserbatteries"};

    backpack = "SWS_O_URArmy_B_RadioBag_01_black_F";
  };

  class SWS_O_URArmy_Marine_Medic_01 : SWS_O_URArmy_Marine_Team_Lead_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Marine Medic";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_White_F";

    linkedItems[] = {"OPTRE_Vest_CMA_Light","H_PASGT_basic_white_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};
    respawnLinkedItems[] = {"OPTRE_Vest_CMA_Light","H_PASGT_basic_white_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_19_UNSC_M7","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};
    respawnWeapons[] = {"SWS_O_URArmy_19_UNSC_M7","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};

    magazines[] = {MACRO_X5("60Rnd_5x23_m7_fmj"),MACRO_X3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X5("60Rnd_5x23_m7_fmj"),MACRO_X3("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_CombinationUnitRespirator_01_F";
  };

  class SWS_O_URArmy_Warrior_01 : I_APC_Tracked_03_Cannon_F {
    ITEM_META(2);
    displayName = "[SWS] URA Warrior";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
      "\A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa"
      , "\A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa"
      , "\A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"
      , "\A3\Armor_F_Enoch\apc_tracked_03\data\cage_EAF_CO.paa"
    };

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
    };
  };

  class SWS_O_URArmy_HMG_Dagger_01 : B_T_LSV_01_Armed_F {
    ITEM_META(2);
    displayName = "[SWS] URA HMG Dagger";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";
    crew = "SWS_O_URArmy_Team_Lead_01";
    typicalCargo[] = {"SWS_O_URArmy_Crew_01"};
    hiddenSelectionsTextures[] = {
      "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa"
      , "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa"
      , "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa"
      , "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"
      , "\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa"
      , "\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
    };

    class Turrets : Turrets {
      class TopTurret : TopTurret { gunnerType = "SWS_O_URArmy_Rifleperson_1_01"; };
      class CodRiverTurret : CodRiverTurret { gunnerType = "SWS_O_URArmy_Rifleperson_2_01"; };
      class CargoTurret_02 : CargoTurret_02 {};
      class CargoTurret_03 : CargoTurret_03 {};
    };
  };

  class SWS_O_URArmy_HMG_Jeep_01 : I_C_Offroad_02_LMG_F {
    ITEM_META(2);
    displayName = "[SWS] URA HMG Jeep";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";
    crew = "SWS_O_URArmy_Team_Lead_01";
    hiddenSelectionsTextures[] = {
      "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa"
      , "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa"
      , "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"
      , "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"
    };

    class Turrets : Turrets {
      class LMG_Turret : LMG_Turret { gunnerType = "SWS_O_URArmy_Rifleperson_1_01"; };
      class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
      class CargoTurret_02 : CargoTurret_02 {};
      class CargoTurret_03 : CargoTurret_03 {};
    };
  };

  class SWS_O_URArmy_Jeep_01 : C_Offroad_02_Unarmed_F {
    ITEM_META(2);
    displayName = "[SWS] URA Jeep";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
      "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
      , "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
      , "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
      , "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
    };

    class Turrets : Turrets {
      class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
      class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
      class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
    };
  };

  class SWS_O_URArmy_Covered_Truck_01 : O_Truck_02_Covered_F {
    ITEM_META(2);
    displayName = "[SWS] URA Covered Truck";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";
    crew = "SWS_O_URArmy_Rifleperson_1_01";
    hiddenSelectionsTextures[] = {
      "\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa"
      , "\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kuz_EAF_co.paa"
      , "\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa"
      , "\A3\soft_f_Enoch\Truck_02\Data\truck_02_chassis_EAF_CO.paa"
    };

    class Turrets : Turrets {
      class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
      class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
    };
  };

  class SWS_O_URArmy_Anti_Tank_Person_01_01 : I_Soldier_SL_F {
    ITEM_META(2);
    displayName = "[SWS] URA Anti-Tank Person 01";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_Blue_F";

    linkedItems[] = {"V_PlateCarrier2_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_MA37K_Rifle","launch_O_Vorona_brown_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};
    respawnWeapons[] = {"SWS_O_URArmy_MA37K_Rifle","launch_O_Vorona_brown_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};

    items[] = {MACRO_X3("FirstAidKit")};
    respawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};

    magazines[] = {MACRO_X4("OPTRE_32Rnd_762x51_Mag"),MACRO_X3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X4("OPTRE_32Rnd_762x51_Mag"),MACRO_X3("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_Antitank1_ViperLightHarness_blk_F";
  };

  class SWS_O_URArmy_Light_Marksmen_01 : I_Soldier_SL_F {
    ITEM_META(2);
    displayName = "[SWS] URA Light Marksmen";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_Blue_F";

    linkedItems[] = {"V_PlateCarrier2_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_srifle_EBR_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};
    respawnWeapons[] = {"SWS_O_URArmy_srifle_EBR_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};

    items[] = {MACRO_X3("FirstAidKit")};
    respawnItems[] = {MACRO_X3("FirstAidKit")};

    magazines[] = {MACRO_X5("20Rnd_762x51_Mag"),MACRO_X3("11Rnd_45ACP_Mag"),"Laserbatteries"};
    respawnMagazines[] = {MACRO_X5("20Rnd_762x51_Mag"),MACRO_X3("11Rnd_45ACP_Mag"),"Laserbatteries"};

    backpack = "SWS_O_URArmy_B_CombinationUnitRespirator_01_F";
  };

  class SWS_O_URArmy_Anti_Air_Person_01 : I_Soldier_SL_F {
    ITEM_META(2);
    displayName = "[SWS] URA Anti Air Person";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_Blue_F";

    linkedItems[] = {"V_PlateCarrier2_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};
    respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_PASGT_basic_black_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_AK_Rifle","launch_B_Titan_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};
    respawnWeapons[] = {"SWS_O_URArmy_AK_Rifle","launch_B_Titan_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight","Laserdesignator_01_khk_F"};

    items[] = {MACRO_X3("FirstAidKit")};
    respawnItems[] = {MACRO_X3("FirstAidKit")};

    magazines[] = {MACRO_X4("30Rnd_762x39_AK12_Mag_F"),MACRO_X3("11Rnd_45ACP_Mag"),"Laserbatteries","Titan_AA"};
    respawnMagazines[] = {MACRO_X4("30Rnd_762x39_AK12_Mag_F"),MACRO_X3("11Rnd_45ACP_Mag"),"Laserbatteries"};

    backpack = "SWS_O_URArmy_B_AntiAir_ViperLightHarness_blk_F";
  };

  class SWS_O_URArmy_Marine_MG_01 : I_Soldier_AR_F {
    ITEM_META(2);
    displayName = "[SWS] URA Marine MG";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";

    identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

    uniformClass = "U_C_CBRN_Suit_01_White_F";

    linkedItems[] = {"OPTRE_Vest_CMA_Heavy","H_PASGT_basic_white_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};
    respawnLinkedItems[] = {"OPTRE_Vest_CMA_Heavy","H_PASGT_basic_white_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_CNM"};

    weapons[] = {"SWS_O_URArmy_LMG_Mk200_black_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};
    respawnWeapons[] = {"SWS_O_URArmy_LMG_Mk200_black_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Flashlight"};

    items[] = {MACRO_X3("FirstAidKit")};
    respawnItems[] = {MACRO_X3("FirstAidKit")};

    magazines[] = {MACRO_X3("200Rnd_65x39_cased_Box"),MACRO_X3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X3("200Rnd_65x39_cased_Box"),MACRO_X3("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_CombinationUnitRespirator_01_F";
  };

  class SWS_O_URArmy_Stalker_01 : O_APC_Tracked_02_Cannon_F {
    ITEM_META(2);
    displayName = "[SWS] URA Stalker";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
      "\A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa"
      , "\A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa"
      , "\A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa"
      , "\A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
      , "\A3\armor_f\data\cage_csat_co.paa"
    };

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
    };
  };

  class SWS_O_URArmy_Taru_Transport_01 : O_Heli_Transport_04_Covered_F {
    ITEM_META(2);
    displayName = "[SWS] URA Taru Transport";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";
    crew = "SWS_O_URArmy_Crew_01";
    typicalCargo[] = {"SWS_O_URArmy_Crew_01"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa"
      , "\A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"
      , "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa"
      , "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
    };

    class Turrets : Turrets {
      class CopilotTurret : CopilotTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
      class LoadmasterTurret : LoadmasterTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
      class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
      class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
    };
  };

  class SWS_O_URArmy_Merlin_Transport_01 : I_Heli_Transport_02_F {
    ITEM_META(2);
    displayName = "[SWS] URA Merlin Transport";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa"
      , "\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa"
      , "\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa"
      , "\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
    };

    class Turrets : Turrets {
      class CopilotTurret : CopilotTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
      class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
      class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
    };
  };

  class SWS_O_URArmy_Wildcat_01 : I_Heli_Light_03_DynamicLoadout_F {
    ITEM_META(2);
    displayName = "[SWS] URA Wildcat";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Enoch\Heli_Light_03\data\Heli_Light_03_base_EAF_CO.paa"
      , "\a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF_CO.paa"
      , "\a3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_signs_EAF_CA.paa"
    };

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
      class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
      class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
    };
  };

  class SWS_O_URArmy_Kajman_01 : O_Heli_Attack_02_DynamicLoadout_F {
    ITEM_META(2);
    displayName = "[SWS] URA Kajman";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_black_CO.paa"
      , "\A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa"
    };

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
    };
  };

  class SWS_O_URArmy_YAK_CAS_01 : O_Plane_CAS_02_DynamicLoadout_F {
    ITEM_META(2);
    displayName = "[SWS] URA YAK CAS";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";
    crew = "SWS_O_URArmy_Crew_01";
  };

  class SWS_O_URArmy_JAS_AIR_01 : I_Plane_Fighter_04_F {
    ITEM_META(2);
    displayName = "[SWS] URA JAS AIR";
    side = SIDE_OPFOR;
    faction = "sws_o_urarmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
      "\a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_green_co.paa"
      , "\a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_green_co.paa"
      , "\a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa"
      , "\a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa"
      , "\a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa"
      , "\a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
    };
  };

  class SWS_O_URArmy_Ranger_01_01 : B_Recon_M_F {
    ITEM_META(2);
    displayName = "[SWS] URA Ranger 01";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_CombatUniform_oucamo";

    linkedItems[] = {"OPTRE_FC_M52B_Armor_Vest_URB","OPTRE_FC_VX19_Helmet_Desert","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_HUL"};
    respawnLinkedItems[] = {"OPTRE_FC_M52B_Armor_Vest_URB","OPTRE_FC_VX19_Helmet_Desert","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_HUL"};

    weapons[] = {"19_UNSC_MA5A","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full","Rangefinder"};
    respawnWeapons[] = {"19_UNSC_MA5A","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full","Rangefinder"};

    items[] = {MACRO_X3("FirstAidKit")};
    respawnItems[] = {MACRO_X3("FirstAidKit")};

    magazines[] = {MACRO_X5("32Rnd_762x51_MA5"),MACRO_X3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X5("32Rnd_762x51_MA5"),MACRO_X3("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_CombinationUnitRespirator_01_F";
  };

  class SWS_O_URArmy_Ranger_02_01 : SWS_O_URArmy_Ranger_01_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Ranger 02";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_CombatUniform_oucamo";

    linkedItems[] = {"OPTRE_FC_M52B_Armor_Vest_URB","OPTRE_FC_VX19_Helmet_Desert","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_HUL"};
    respawnLinkedItems[] = {"OPTRE_FC_M52B_Armor_Vest_URB","OPTRE_FC_VX19_Helmet_Desert","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_HUL"};

    weapons[] = {"SWS_O_URArmy_MA37K_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full","Rangefinder"};
    respawnWeapons[] = {"SWS_O_URArmy_MA37K_Rifle","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full","Rangefinder"};

    magazines[] = {MACRO_X5("OPTRE_32Rnd_762x51_Mag"),MACRO_X2("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X5("OPTRE_32Rnd_762x51_Mag"),MACRO_X2("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_CombinationUnitRespirator_01_F";
  };

  class SWS_O_URArmy_Ranger_Team_Lead_01 : SWS_O_URArmy_Ranger_01_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Ranger Team Lead";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_CombatUniform_oucamo";

    linkedItems[] = {"OPTRE_FC_M52B_Armor_Vest_URB","OPTRE_FC_VX19_Helmet_Desert","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_HUL"};
    respawnLinkedItems[] = {"OPTRE_FC_M52B_Armor_Vest_URB","OPTRE_FC_VX19_Helmet_Desert","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_HUL"};

    weapons[] = {"19_UNSC_MA5A_gl","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full","Rangefinder"};
    respawnWeapons[] = {"19_UNSC_MA5A_gl","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full","Rangefinder"};

    magazines[] = {MACRO_X5("32Rnd_762x51_MA5"),MACRO_X3("1Rnd_HE_Grenade_shell"),MACRO_X2("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X5("32Rnd_762x51_MA5"),MACRO_X3("1Rnd_HE_Grenade_shell"),MACRO_X2("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_RadioBag_01_black_F";
  };

  class SWS_O_URArmy_Range_Autorifle_01 : SWS_O_URArmy_Ranger_01_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Ranger Autorifle";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_CombatUniform_oucamo";

    linkedItems[] = {"OPTRE_UNSC_M52A_Armor4_MAR","OPTRE_FC_VX19_Helmet_Desert","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_HUL"};
    respawnLinkedItems[] = {"OPTRE_UNSC_M52A_Armor4_MAR","OPTRE_FC_VX19_Helmet_Desert","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_HUL"};

    weapons[] = {"SWS_O_URArmy_Dmns_M33_T","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full","Rangefinder"};
    respawnWeapons[] = {"SWS_O_URArmy_Dmns_M33_T","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full","Rangefinder"};

    magazines[] = {MACRO_X3("DMNS_100Rnd_762x51_Mag"),MACRO_X3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X3("DMNS_100Rnd_762x51_Mag"),MACRO_X3("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_RangerAutoRifle_ViperHarness_hex_F";
  };

  class SWS_O_URArmy_Ranger_Marksmen_01 : SWS_O_URArmy_Ranger_02_01 {
    ITEM_META(2);
    displayName = "Ranger Marksmen";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_CombatUniform_oucamo";

    linkedItems[] = {"OPTRE_FC_M52B_Armor_Vest_URB","OPTRE_FC_VX19_Helmet_Desert","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_HUL"};
    respawnLinkedItems[] = {"OPTRE_FC_M52B_Armor_Vest_URB","OPTRE_FC_VX19_Helmet_Desert","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_HUL"};

    weapons[] = {"SWS_O_URArmy_SRifle_DMR_05_Tan_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full","Rangefinder"};
    respawnWeapons[] = {"SWS_O_URArmy_SRifle_DMR_05_Tan_F","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full","Rangefinder"};

    magazines[] = {MACRO_X5("10Rnd_93x64_DMR_05_Mag"),MACRO_X3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X5("10Rnd_93x64_DMR_05_Mag"),MACRO_X3("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_CombinationUnitRespirator_01_F";
  };

  class SWS_O_URArmy_Ranger_Medic_01 : SWS_O_URArmy_Range_Autorifle_01 {
    ITEM_META(2);
    displayName = "[SWS] URA Ranger Medic";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_CombatUniform_oucamo";

    linkedItems[] = {"OPTRE_UNSC_M52A_Armor4_MAR","OPTRE_FC_VX19_Helmet_Snow","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_HUL"};
    respawnLinkedItems[] = {"OPTRE_UNSC_M52A_Armor4_MAR","OPTRE_FC_VX19_Helmet_Snow","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG_UAB_UL_HUL"};

    weapons[] = {"SWS_O_URArmy_19_UNSC_M7","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full","Rangefinder"};
    respawnWeapons[] = {"SWS_O_URArmy_19_UNSC_M7","SWS_O_URArmy_HGun_Pistol_Heavy_01_F_Full","Rangefinder"};

    magazines[] = {MACRO_X5("60Rnd_5x23_m7_fmj"),MACRO_X3("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {MACRO_X5("60Rnd_5x23_m7_fmj"),MACRO_X3("11Rnd_45ACP_Mag")};

    backpack = "SWS_O_URArmy_B_Medic_ViperHarness_hex_F";
  };

  class SWS_O_URArmy_Black_Eagle_01 : O_MBT_02_Cannon_F {
    ITEM_META(2);
    displayName = "[SWS] URA Black Eagle";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
      "\a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa"
      , "\a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa"
      , "\a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa"
      , "\A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
    };

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
    };
  };

  class SWS_O_URArmy_Black_Crusader_01 : O_MBT_04_Cannon_F {
    ITEM_META(2);
    displayName = "[SWS] URA Black Crusader";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
      "\a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_1_CO.paa"
      , "\a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_2_CO.paa"
      , "\A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
    };

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
    };
  };

  class SWS_O_URArmy_Black_Crusader_Lead_01 : O_MBT_04_Command_F {
    ITEM_META(2);
    displayName = "[SWS] URA Black Crusader Lead";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";
    crew = "O_crew_F";

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = ""; };
    };
  };

  class SWS_O_URArmy_Rat_ATGM_01 : I_LT_01_AT_F {
    ITEM_META(2);
    displayName = "[SWS] URA Rat [ATGM]";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
      "\A3\armor_f_tank\lt_01\data\lt_01_main_co.paa"
      , "\A3\armor_f_tank\lt_01\data\lt_01_at_co.paa"
      , "\A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
      , "\A3\armor_f\data\cage_aaf_co.paa"
    };

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
    };
  };

  class SWS_O_URArmy_Rat_Light_01 : I_LT_01_Cannon_F {
    ITEM_META(2);
    displayName = "[SWS] URA Rat [Light]";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";
    crew = "SWS_O_URArmy_Crew_01";

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
    };
  };

  class SWS_O_URArmy_Red_Eagle_01 : B_MBT_01_Cannon_F {
    ITEM_META(2);
    displayName = "[SWS] URA Red Eagle";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
    "\A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa"
    , "\A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_CO.paa"
    , "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
    };

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
    };
  };

  class SWS_O_URArmy_Tiger_01 : O_APC_Tracked_02_AA_F {
    ITEM_META(2);
    displayName = "[SWS] URA Tiger";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
    "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_aa_hexarid_co.paa"
    , "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa"
    , "A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_tower_opfor_co.paa"
    , "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
    , "A3\armor_f\data\cage_csat_co.paa"
    };

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
    };
  };

  class SWS_O_URArmy_Rat_AA_01 : I_LT_01_AA_F {
    ITEM_META(2);
    displayName = "[SWS] URA Rat [AA]";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";
    crew = "SWS_O_URArmy_Crew_01";

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
    };
  };

  class SWS_O_URArmy_Shadow_01 : O_MBT_02_Arty_F {
    ITEM_META(2);
    displayName = "[SWS] URA Shadow";
    side = SIDE_OPFOR;
    faction = "SWS_O_URArmy";
    crew = "SWS_O_URArmy_Crew_01";
    hiddenSelectionsTextures[] = {
      "\a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa"
      , "\a3\armor_f_gamma\mbt_01\data\mbt_01_scorcher_hexarid_co.paa"
      , "\a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa"
      , "\a3\data_f\vehicles\turret_opfor_co.paa"
      , "\A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
    };

    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "SWS_O_URArmy_Crew_01"; };
    };
  };
};
