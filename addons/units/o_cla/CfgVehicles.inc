#define CLASSES_VEHICLES      \
  "SWS_V_MBT_M700_Viper_CLA"  \
  , "O_OCLA_Ozelot_AA_01"     \
  , "O_CLA_Gryphon_01"

class CfgVehicles {
  class B_AFV_Wheeled_01_cannon_F;
  class B_AFV_Wheeled_01_up_cannon_F;
  class B_MBT_01_arty_F;
  class B_MBT_01_mlrs_F;
  class I_HMG_02_high_F;
  class I_LT_01_AA_F;
  class I_MBT_03_Cannon_F;
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
  class SWS_V_MBT_M700_Viper_Captured;

  class SWS_V_MBT_M700_Viper_Base : I_MBT_03_Cannon_F {
    class TextureSources : TextureSources {
      class SWS_Basic;
      class INS_Captured : SWS_Basic {
        factions[] += {"O_CLA"};
      };
    };
  };

  class SWS_V_MBT_M700_Viper_CLA : SWS_V_MBT_M700_Viper_Captured {
    faction = "O_CLA";
    displayName = QNAME(M700 Viper (Captured CLA));
    crew = "O_CLA_Crew_01";
    typicalCargo[] = {"O_CLA_Crew_01"};
  };

  class O_OCLA_Ozelot_AA_01 : I_LT_01_AA_F {
    ITEM_META(2);
    displayName = QNAME(Ozelot AA);
    side = SIDE_OPFOR;
    faction = "o_cla";
    crew = "O_CLA_Crew_01";
    typicalCargo[] = {"O_CLA_Crew_01"};

    hiddenSelectionsTextures[]={
      "a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa"
      , "a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa"
      , "a3\armor_f\data\camonet_aaf_digi_green_co.paa"
      , "a3\armor_f\data\cage_olive_co.paa"
    };


    class Turrets : Turrets {
      class MainTurret : MainTurret { gunnerType = "O_CLA_Crew_02"; };
    };
  };

  class O_CLA_Gryphon_01 : I_Plane_Fighter_04_F {
    ITEM_META(2);
    displayName = QNAME(A149 Gryphon);
    side = SIDE_OPFOR;
    faction = "o_cla";
    crew = "O_CLA_Crew_01";
    typicalCargo[] = {"O_CLA_Crew_01"};
  };

  #include "faction.inc"
};
