class CBA_Extended_EventHandlers_Base;

#define CBA_PATCH                                                               \
    class EventHandlers {                                                       \
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {};   \
    }

class CfgVehicles {
    class 19_M12_APC_Medical;
    class 19_M808S;
    class 1stMEU_pelican_armed;
    class 1stMEU_pelican_armed_single_seat;
    class 1stMEU_pelican_unarmed;
    class 1stMEU_pelican_unarmed_single_seat;
    class AllVehicles;
    class B_APC_Wheeled_01_cannon_F;
    class B_CTRG_Soldier_AR_tna_F;
    class B_CTRG_Soldier_Exp_tna_F;
    class B_CTRG_Soldier_JTAC_tna_F;
    class B_CTRG_Soldier_LAT2_tna_F;
    class B_CTRG_Soldier_LAT_tna_F;
    class B_CTRG_Soldier_Medic_tna_F;
    class B_CTRG_Soldier_M_tna_F;
    class B_CTRG_Soldier_TL_tna_F;
    class B_CTRG_Soldier_tna_F;
    class B_diver_exp_F;
    class B_diver_F;
    class B_diver_TL_F;
    class B_engineer_F;
    class B_GEN_Commander_F;
    class B_MBT_01_cannon_F;
    class B_medic_F;
    class B_officer_F;
    class B_Plane_CAS_01_F;
    class B_RangeMaster_F;
    class B_soldier_AR_F;
    class B_soldier_exp_F;
    class B_Soldier_lite_F;
    class B_soldier_M_F;
    class B_soldier_repair_F;
    class B_Soldier_SL_F;
    class B_Soldier_Survival_F;
    class B_Soldier_TL_F;
    class B_soldier_UAV_F;
    class B_Survivor_F;
    class B_T_diver_exp_F;
    class B_T_diver_F;
    class B_T_diver_TL_F;
    class B_T_engineer_F;
    class B_T_medic_F;
    class B_T_officer_F;
    class B_T_soldier_AR_F;
    class B_T_soldier_exp_F;
    class B_T_soldier_M_F;
    class B_T_soldier_repair_F;
    class B_T_soldier_SL_F;
    class B_T_soldier_TL_F;
    class B_T_soldier_UAV_F;
    class B_W_engineer_F;
    class B_W_medic_F;
    class B_W_officer_F;
    class B_W_soldier_AR_F;
    class B_W_soldier_exp_F;
    class B_W_soldier_M_F;
    class B_W_soldier_repair_F;
    class B_W_soldier_SL_F;
    class B_W_soldier_TL_F;
    class B_W_soldier_UAV_F;
    class C_IDAP_Man_AidWorker_05_F;
    class C_Journalist_01_War_F;
    class C_journalist_F;
    class C_man_1_1_F;
    class C_Man_casual_1_F;
    class C_Man_Paramedic_01_F;
    class C_Marshal_F;
    class Helicopter_Base_F;
    class Helicopter_Base_H;
    class I_diver_exp_F;
    class I_diver_F;
    class I_diver_TL_F;
    class I_E_Uniform_01_sweater_F;
    class I_G_Soldier_LAT_F;
    class I_L_Looter_Pistol_F;
    class I_L_Looter_Rifle_F;
    class I_L_Looter_SG_F;
    class I_L_Looter_SMG_F;
    class I_medic_F;
    class I_Soldier_02_F;
    class I_Soldier_AA_F;
    class I_Soldier_A_F;
    class I_Soldier_AR_F;
    class I_Soldier_exp_F;
    class I_soldier_F;
    class I_Soldier_lite_F;
    class I_Soldier_repair_F;
    class I_Soldier_SL_F;
    class Items_base_F;
    class I_UAV_01_F;
    class MEU_Sentinel_A;
    class N19_D77HTCI;
    class N19_D77HTCI_A;
    class O_diver_exp_F;
    class O_diver_F;
    class O_diver_TL_F;
    class OPTRE_FC_AA_Wraith;
    class OPTRE_FC_Type26B_Banshee;
    class OPTRE_FC_Type26N_Banshee;
    class OPTRE_FC_Wraith;
    class OPTRE_HEV;
    class OPTRE_M12_CIV;
    class OPTRE_M12_FAV;
    class OPTRE_M12_FAV_APC;
    class OPTRE_M494;
    class OPTRE_Pelican_armed;
    class OPTRE_Pelican_unarmed;
    class OPTRE_UNSC_falcon;
    class OPTRE_UNSC_falcon_armed;
    class OPTRE_UNSC_falcon_armed_s;
    class OPTRE_UNSC_falcon_s;
    class O_T_diver_exp_F;
    class O_T_diver_F;
    class O_T_diver_TL_F;
    class O_V_Soldier_Exp_ghex_F;
    class O_V_Soldier_Exp_hex_F;
    class O_V_Soldier_ghex_F;
    class O_V_Soldier_hex_F;
    class O_V_Soldier_jtac_ghex_F;
    class O_V_Soldier_jtac_hex_F;
    class O_V_Soldier_lat_ghex_F;
    class O_V_Soldier_lat_hex_F;
    class O_V_Soldier_Medic_ghex_F;
    class O_V_Soldier_Medic_hex_F;
    class O_V_Soldier_m_ghex_F;
    class O_V_Soldier_m_hex_F;
    class O_V_Soldier_TL_ghex_F;
    class O_V_Soldier_TL_hex_F;
    class Plane_Base_F;
    class PlaneWreck;
    class StaticMGWeapon;
    class StaticMortar;
    class TCGM_f_Swimsuit_Maya_civil;
    class VTOL_Base_F;

    //== Fix OPAEX missing the right path for OPTRE icons
    class OPAEX_VTOL_Hornet_base : VTOL_Base_F {
        delete icon;
        delete picture;
        icon = "OPTRE_Vehicles_Air\Falcon\Data\icon.paa";
		picture = "OPTRE_Vehicles_Air\Falcon\Data\icon2.paa";
    };

    class VES_M12_APC_Base : OPTRE_M12_FAV_APC {
        CBA_PATCH;
    };
    class VES_IFV76_A : B_APC_Wheeled_01_cannon_F {
        CBA_PATCH;
    };
    class VES_M494_ORYX : OPTRE_M494 {
        CBA_PATCH;
    };
    class VES_UH144 : OPTRE_UNSC_falcon {
        CBA_PATCH;
    };
    class VES_UH144_A : OPTRE_UNSC_falcon_armed {
        CBA_PATCH;
    };
    class VES_UH144S : OPTRE_UNSC_falcon_s {
        CBA_PATCH;
    };
    class VES_UH144S_A : OPTRE_UNSC_falcon_armed_s {
        CBA_PATCH;
    };
    class VES_D77HTCI_A : OPTRE_Pelican_armed {
        CBA_PATCH;
    };
    class VES_D77HTCIS_A : VES_D77HTCI_A {
        CBA_PATCH;
    };
    class VES_D77HTCI : OPTRE_Pelican_unarmed {
        CBA_PATCH;
    };
    class VES_D77HTCIS : VES_D77HTCI {
        CBA_PATCH;
    };
    class TCGM_f_underwear_soldier : B_Survivor_F {
        CBA_PATCH;
    };
    class TCGM_f_PantiesBlack_soldier : C_Man_casual_1_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_MTP_Soldier_AR : B_soldier_AR_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_TNA_Soldier_AR : B_T_soldier_AR_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_WDL_Soldier_AR : B_W_soldier_AR_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_MTP_Medic : B_medic_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_TNA_Medic : B_T_medic_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_WDL_Medic : B_W_medic_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_MTP_engineer : B_engineer_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_TNA_engineer : B_T_engineer_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_WDL_engineer : B_W_engineer_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_MTP_soldier_exp : B_soldier_exp_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_TNA_soldier_exp : B_T_soldier_exp_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_WDL_soldier_exp : B_W_soldier_exp_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_MTP_Soldier_M : B_soldier_M_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_TNA_Soldier_M : B_T_soldier_M_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_WDL_Soldier_M : B_W_soldier_M_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_MTP_officer : B_officer_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_TNA_officer : B_T_officer_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_WDL_officer : B_W_officer_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_MTP_soldier_repair : B_soldier_repair_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_TNA_soldier_repair : B_T_soldier_repair_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_WDL_soldier_repair : B_W_soldier_repair_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_MTP_Soldier_LT : B_Soldier_lite_F {
        CBA_PATCH;
    };
    class TCGM_Bra_B_MTP_Soldier_SL : B_Soldier_SL_F {
        CBA_PATCH;
    };
    class TCGM_Bra_B_TNA_Soldier_SL : B_T_soldier_SL_F {
        CBA_PATCH;
    };
    class TCGM_Bra_B_WDL_Soldier_SL : B_W_soldier_SL_F {
        CBA_PATCH;
    };
    class TCGM_Bra_B_MTP_soldier_TL : B_Soldier_TL_F {
        CBA_PATCH;
    };
    class TCGM_Bra_B_TNA_soldier_TL : B_T_soldier_TL_F {
        CBA_PATCH;
    };
    class TCGM_Bra_B_WDL_soldier_TL : B_W_soldier_TL_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_MTP_soldier_UAV : B_soldier_UAV_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_TNA_soldier_UAV : B_T_soldier_UAV_F {
        CBA_PATCH;
    };
    class TCGM_RollUp_B_WDL_soldier_UAV : B_W_soldier_UAV_F {
        CBA_PATCH;
    };
    class TCGM_Bra_I_Sage_Looter_SMG : I_L_Looter_SMG_F {
        CBA_PATCH;
    };
    class TCGM_Bra_I_M81_Looter_Pistol : I_L_Looter_Pistol_F {
        CBA_PATCH;
    };
    class TCGM_Bra_I_M81_Looter_Rifle : I_L_Looter_Rifle_F {
        CBA_PATCH;
    };
    class TCGM_Bra_I_M81_Looter_Shotgun : I_L_Looter_SG_F {
        CBA_PATCH;
    };
    class TCGM_Stealth_B_CTRG_Soldier_TL : B_CTRG_Soldier_TL_tna_F {
        CBA_PATCH;
    };
    class TCGM_Stealth_B_CTRG_Soldier_AR : B_CTRG_Soldier_AR_tna_F {
        CBA_PATCH;
    };
    class TCGM_Stealth_B_CTRG_Soldier_SC : B_CTRG_Soldier_tna_F {
        CBA_PATCH;
    };
    class TCGM_Stealth_B_CTRG_Soldier_M : B_CTRG_Soldier_M_tna_F {
        CBA_PATCH;
    };
    class TCGM_Stealth_B_CTRG_Soldier_Exp : B_CTRG_Soldier_Exp_tna_F {
        CBA_PATCH;
    };
    class TCGM_Stealth_B_CTRG_Soldier_Medic : B_CTRG_Soldier_Medic_tna_F {
        CBA_PATCH;
    };
    class TCGM_Stealth_B_CTRG_Soldier_JTAC : B_CTRG_Soldier_JTAC_tna_F {
        CBA_PATCH;
    };
    class TCGM_Stealth_B_CTRG_Soldier_LAT2 : B_CTRG_Soldier_LAT2_tna_F {
        CBA_PATCH;
    };
    class TCGM_Stealth_B_CTRG_Soldier_LAT : B_CTRG_Soldier_LAT_tna_F {
        CBA_PATCH;
    };
    class TCGM_F_B_Mini_Range : B_RangeMaster_F {
        CBA_PATCH;
    };
    class TCGM_F_C_Mini_Journalist : C_journalist_F {
        CBA_PATCH;
    };
    class TCGM_F_C_Mini_JournalistWar : C_Journalist_01_War_F {
        CBA_PATCH;
    };
    class TCGM_F_C_Mini_Marshal : C_Marshal_F {
        CBA_PATCH;
    };
    class TCGM_F_C_Mini_IDAP : C_IDAP_Man_AidWorker_05_F {
        CBA_PATCH;
    };
    class TCGM_F_C_Mini_Navy : C_Man_casual_1_F {
        CBA_PATCH;
    };
    class TCGM_F_C_Sport_1 : C_man_1_1_F {
        CBA_PATCH;
    };
    class TCGM_Survival_Bra_B_MTP_Soldier : B_Soldier_Survival_F {
        CBA_PATCH;
    };
    class TCGM_Survival_Bra_B_TNA_Soldier : TCGM_Survival_Bra_B_MTP_Soldier {
        CBA_PATCH;
    };
    class TCGM_Viper_O_AHex_Soldier : O_V_Soldier_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_GHex_Soldier : O_V_Soldier_ghex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_UHex_Soldier : O_V_Soldier_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_TL_Hex_Soldier : O_V_Soldier_TL_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_TL_GHex_Soldier : O_V_Soldier_TL_ghex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_TL_UHex_Soldier : O_V_Soldier_TL_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_m_Hex_Soldier : O_V_Soldier_m_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_m_GHex_Soldier : O_V_Soldier_m_ghex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_m_UHex_Soldier : O_V_Soldier_m_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_Exp_Hex_Soldier : O_V_Soldier_Exp_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_Exp_GHex_Soldier : O_V_Soldier_Exp_ghex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_Exp_UHex_Soldier : O_V_Soldier_Exp_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_Medic_Hex_Soldier : O_V_Soldier_Medic_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_Medic_GHex_Soldier : O_V_Soldier_Medic_ghex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_Medic_UHex_Soldier : O_V_Soldier_Medic_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_lat_Hex_Soldier : O_V_Soldier_lat_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_lat_GHex_Soldier : O_V_Soldier_lat_ghex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_lat_UHex_Soldier : O_V_Soldier_lat_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_jtac_Hex_Soldier : O_V_Soldier_jtac_hex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_jtac_GHex_Soldier : O_V_Soldier_jtac_ghex_F {
        CBA_PATCH;
    };
    class TCGM_Viper_O_jtac_UHex_Soldier : O_V_Soldier_jtac_hex_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_B : B_diver_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_B_T : B_T_diver_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_O : O_diver_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_O_T : O_T_diver_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_I : I_diver_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_B_TL : B_diver_TL_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_B_T_TL : B_T_diver_TL_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_O_TL : O_diver_TL_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_O_T_TL : O_T_diver_TL_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_I_TL : I_diver_TL_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_B_Exp : B_diver_exp_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_B_T_Exp : B_T_diver_exp_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_O_Exp : O_diver_exp_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_O_T_Exp : O_T_diver_exp_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_I_Exp : I_diver_exp_F {
        CBA_PATCH;
    };
    class TCGM_F_DiverShort_B : B_diver_F {
        CBA_PATCH;
    };
    class TCGM_F_DiverShort_B_T : B_T_diver_F {
        CBA_PATCH;
    };
    class TCGM_F_DiverShort_O : O_diver_F {
        CBA_PATCH;
    };
    class TCGM_F_DiverShort_O_T : O_T_diver_F {
        CBA_PATCH;
    };
    class TCGM_F_DiverShort_I : I_diver_F {
        CBA_PATCH;
    };
    class TCGM_F_Diver_Blu_C : TCGM_f_Swimsuit_Maya_civil {
        CBA_PATCH;
    };
    class TCGM_F_Soldier_GEN_B : B_GEN_Commander_F {
        CBA_PATCH;
    };
    class TCGM_F_Soldier1_LAT_I : I_G_Soldier_LAT_F {
        CBA_PATCH;
    };
    class TCGM_F_Soldier2_I : I_E_Uniform_01_sweater_F {
        CBA_PATCH;
    };
    class TCGM_F_Paramedic_C : C_Man_Paramedic_01_F {
        CBA_PATCH;
    };
    class TCGM_F_Soldier02_I : I_soldier_F {
        CBA_PATCH;
    };
    class TCGM_F_Soldier02_RollUp_I : I_Soldier_02_F {
        CBA_PATCH;
    };
    class TCGM_F_Soldier02_RollUp_lite_I : I_Soldier_lite_F {
        CBA_PATCH;
    };
    class TCGM_F_Soldier02_RollUp_A_I : I_Soldier_A_F {
        CBA_PATCH;
    };
    class TCGM_F_Soldier02_RollUp_AR_I : I_Soldier_AR_F {
        CBA_PATCH;
    };
    class TCGM_F_Soldier02_RollUp_SL_I : I_Soldier_SL_F {
        CBA_PATCH;
    };
    class TCGM_F_Soldier02_RollUp_AA_I : I_Soldier_AA_F {
        CBA_PATCH;
    };
    class TCGM_F_Soldier02_RollUp_medic_I : I_medic_F {
        CBA_PATCH;
    };
    class TCGM_F_Soldier02_RollUp_repair_I : I_Soldier_repair_F {
        CBA_PATCH;
    };
    class TCGM_F_Soldier02_RollUp_exp_I : I_Soldier_exp_F {
        CBA_PATCH;
    };
    class N19_D77HTCI_OCimport_01 : N19_D77HTCI {
        CBA_PATCH;
    };
    class N19_D77HTCI_A_OCimport_01 : N19_D77HTCI_A {
        CBA_PATCH;
    };
    class 19_M808S_OCimport_01 : 19_M808S {
        CBA_PATCH;
    };
    class 19_M12_APC_Medical_OCimport_01 : 19_M12_APC_Medical {
        CBA_PATCH;
    };
    class DMNS_Shortsword_01_wreck_F : PlaneWreck {
        CBA_PATCH;
    };
    class Land_OPTRE_barrel_hydrogen : Items_base_F {
        CBA_PATCH;
    };
    class Land_OPTRE_fusion_coil : Items_base_F {
        CBA_PATCH;
    };
    class OPTRE_M12_CIV : OPTRE_M12_FAV {
        CBA_PATCH;
    };
    class OPTRE_HEV : StaticMGWeapon {
        CBA_PATCH;
    };
    class OPTRE_Pelican_F : Helicopter_Base_H {
        CBA_PATCH;
    };
    class OPTRE_Objects_Wreck_Pelican : PlaneWreck {
        CBA_PATCH;
    };
    class OPTRE_EscapePod_Base : Plane_Base_F {
        CBA_PATCH;
    };
    class OPTRE_RCHog : OPTRE_M12_CIV {
        CBA_PATCH;
    };
    class OPTRE_Sabre_Wreck_F : PlaneWreck {
        CBA_PATCH;
    };
    class unscdrone_wreck_F : PlaneWreck {
        CBA_PATCH;
    };
    class OPTRE_Objects_Wreck_Falcon : PlaneWreck {
        CBA_PATCH;
    };
    class DMNS_SOEIV : StaticMGWeapon {
        CBA_PATCH;
    };
    class OPTRE_FC_Type26B_Banshee : B_Plane_CAS_01_F {
        CBA_PATCH;
    };
    class OPTRE_FC_Type26N_Banshee : OPTRE_FC_Type26B_Banshee {
        CBA_PATCH;
    };
    class OPTRE_FC_Type27_Banshee : OPTRE_FC_Type26N_Banshee {
        CBA_PATCH;
    };
    class OPTRE_FC_Wraith : B_MBT_01_cannon_F {
        CBA_PATCH;
    };
    class OPTRE_FC_AA_Wraith : OPTRE_FC_Wraith {
        CBA_PATCH;
    };
    class OPTRE_FC_AA_Wraith_NOFLAK : OPTRE_FC_AA_Wraith {
        CBA_PATCH;
    };
    class OPTRE_FC_AA_Wraith_Needle : OPTRE_FC_Wraith {
        CBA_PATCH;
    };
    class OPTRE_FC_Wraith_Tank : OPTRE_FC_Wraith {
        CBA_PATCH;
    };
    class MEU_Squad_pod : OPTRE_HEV {
        CBA_PATCH;
    };
    class MEU_Shadow : B_MBT_01_cannon_F {
        CBA_PATCH;
    };
    class MEU_Sentinel_A : I_UAV_01_F {
        CBA_PATCH;
    };
    class MEU_Sentinel_S : MEU_Sentinel_A {
        CBA_PATCH;
    };
    class MEU_Sentinel_E : MEU_Sentinel_A {
        CBA_PATCH;
    };
    class OPTRE_FC_Spectre_AI_Base : B_MBT_01_cannon_F {
        CBA_PATCH;
    };
    class OPTRE_FC_Spirit_F : Helicopter_Base_F {
        CBA_PATCH;
    };
    class 1stMEU_pelican_armed : OPTRE_Pelican_armed {
        CBA_PATCH;
    };
    class 1stMEU_pelican_armed_mg : 1stMEU_pelican_armed {
        CBA_PATCH;
    };
    class 1stMEU_pelican_armed_single_seat : OPTRE_Pelican_armed {
        CBA_PATCH;
    };
    class 1stMEU_pelican_armed_mg_single_seat : 1stMEU_pelican_armed_single_seat {
        CBA_PATCH;
    };
    class 1stMEU_pelican_unarmed : OPTRE_Pelican_unarmed {
        CBA_PATCH;
    };
    class 1stMEU_pelican_unarmed_mg : 1stMEU_pelican_unarmed {
        CBA_PATCH;
    };
    class 1stMEU_pelican_unarmed_single_seat : OPTRE_Pelican_unarmed {
        CBA_PATCH;
    };
    class 1stMEU_pelican_unarmed_mg_single_seat : 1stMEU_pelican_unarmed_single_seat {
        CBA_PATCH;
    };
    class 11_Mortar_base : StaticMortar {
        CBA_PATCH;
    };

};
