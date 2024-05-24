// Scopes for Team Leads
class SWS_Scopes_65mm {
  optic_aco = TRUE;
  optic_aco_grn = TRUE;
  optic_aco_smg = TRUE;
  optic_aco_grn_smg = TRUE;

  optic_arco = TRUE;
  optic_arco_blk_f = TRUE;
  optic_arco_ghex_f = TRUE;

  optic_holosight = TRUE;
  optic_holosight_blk_f = TRUE;
  optic_holosight_khk_f = TRUE;

  optic_holosight_smg = TRUE;
  optic_holosight_smg_blk_f = TRUE;
  optic_holosight_smg_khk_f = TRUE;

  optic_mrco = TRUE;

  optic_hamr = TRUE;
  optic_hamr_khk_f = TRUE;

  optic_erco_blk_F = TRUE;
  optic_erco_khk_f = TRUE;
  optic_erco_snd_f = TRUE;

  optre_recon_sight = TRUE;
  optre_recon_sight_desert = TRUE;
  optre_recon_sight_green = TRUE;
  optre_recon_sight_red = TRUE;
  optre_recon_sight_snow = TRUE;
  optre_recon_sight_unsc = TRUE;
};

class SWS_Scopes_PDW {
  optic_aco = TRUE;
  optic_aco_grn = TRUE;
  optic_aco_smg = TRUE;
  optic_aco_grn_smg = TRUE;

  optic_holosight = TRUE;
  optic_holosight_blk_f = TRUE;
  optic_holosight_khk_f = TRUE;

  optic_holosight_smg = TRUE;
  optic_holosight_smg_blk_f = TRUE;
  optic_holosight_smg_khk_f = TRUE;

  optic_mrco = TRUE;

  optre_recon_sight = TRUE;
  optre_recon_sight_desert = TRUE;
  optre_recon_sight_green = TRUE;
  optre_recon_sight_red = TRUE;
  optre_recon_sight_snow = TRUE;
  optre_recon_sight_unsc = TRUE;
};

class SWS_Scopes_762mm : SWS_Scopes_65mm {
  optre_recon_sight = FALSE;
  optre_recon_sight_desert = FALSE;
  optre_recon_sight_green = FALSE;
  optre_recon_sight_red = FALSE;
  optre_recon_sight_snow = FALSE;
  optre_recon_sight_unsc = FALSE;

  optre_ma5_buis = TRUE;
  optre_ma5_smartlink = TRUE;
  optre_ma5c_smartlink = TRUE;
  sws_optic_smartlink = TRUE;
};
class SWS_Scopes_Marksman : SWS_Scopes_65mm
{

  OPTRE_M7_Sight = FALSE;
  OPTRE_M73_SmartLink = FALSE;
  OPTRE_M12_Optic = FALSE;
  OPTRE_M12_Optic_Green = FALSE;
  OPTRE_M12_Optic_Red = FALSE;

  OPTRE_BR45_Scope = TRUE;
  OPTRE_M392_Scope = TRUE;
  OPTRE_M393_Scope = TRUE;
  OPTRE_BMR_Scope = TRUE;

  optic_KHS_blk = TRUE;
  optic_KHS_hex = TRUE;
  optic_KHS_tan = TRUE;
  optic_SOS = TRUE;
  ACE_optic_SOS_2D = TRUE;
  optic_SOS_khk_F = TRUE;
  ACE_optic_SOS_PIP = TRUE;
  optic_LRPS = TRUE;
  ACE_optic_LRPS_2D = TRUE;
  optic_LRPS_ghex_F = TRUE;
  optic_LRPS_tna_F = TRUE;
  ACE_optic_LRPS_PIP = TRUE;
  optic_Nightstalker = TRUE;
  optic_NVS = TRUE;
  OPTRE_SRM_Sight = TRUE;
  optic_tws = TRUE;
  optic_AMS = TRUE;
  optic_AMS_khk = TRUE;
  optic_AMS_snd = TRUE;
  optic_DMS = TRUE;
  optic_DMS_weathered_Kir_F = TRUE;
  optic_DMS_ghex_F = TRUE;
  SWS_Optic_AMSx = TRUE;
};