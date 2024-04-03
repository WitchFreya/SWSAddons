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
  OPTRE_BR45_Scope = 1;
  OPTRE_M392_Scope = 1;
  OPTRE_M393_Scope = 1;
  OPTRE_M12_Optic = 1;
  OPTRE_M12_Optic_Green = 1;
  OPTRE_M12_Optic_Red = 1;
  OPTRE_BMR_Scope = 1;
  OPTRE_M7_Sight = 1;
  OPTRE_M73_SmartLink = 1;
  optic_KHS_blk = 1;
  optic_KHS_hex = 1;
  optic_KHS_tan = 1;
  optic_SOS = 1;
  ACE_optic_SOS_2D = 1;
  optic_SOS_khk_F = 1;
  ACE_optic_SOS_PIP = 1;
  optic_LRPS = 1;
  ACE_optic_LRPS_2D = 1;
  optic_LRPS_ghex_F = 1;
  optic_LRPS_tna_F = 1;
  ACE_optic_LRPS_PIP = 1;
  optic_Nightstalker = 1;
  optic_NVS = 1;
  OPTRE_SRM_Sight = 1;
  optic_tws = 1;
  optic_AMS = 1;
  optic_AMS_khk = 1;
  optic_AMS_snd = 1;
  optic_DMS = 1;
  optic_DMS_weathered_Kir_F = 1;
  optic_DMS_ghex_F = 1;
  SWS_Optic_SxAMS = 1;
};