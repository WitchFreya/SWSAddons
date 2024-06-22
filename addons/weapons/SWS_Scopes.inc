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
