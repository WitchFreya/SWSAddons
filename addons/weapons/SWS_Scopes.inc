// Scopes for Team Leads
class SWS_Scopes_65mm
{
  optic_aco = 1;
  optic_aco_grn = 1;
  optic_aco_smg = 1;
  optic_aco_grn_smg = 1;

  optic_arco = 1;
  optic_arco_blk_f = 1;
  optic_arco_ghex_f = 1;

  optic_holosight = 1;
  optic_holosight_blk_f = 1;
  optic_holosight_khk_f = 1;

  optic_holosight_smg = 1;
  optic_holosight_smg_blk_f = 1;
  optic_holosight_smg_khk_f = 1;

  optic_mrco = 1;

  optic_hamr = 1;
  optic_hamr_khk_f = 1;

  optic_erco_blk_F = 1;
  optic_erco_khk_f = 1;
  optic_erco_snd_f = 1;

  optre_recon_sight = 1;
  optre_recon_sight_desert = 1;
  optre_recon_sight_green = 1;
  optre_recon_sight_red = 1;
  optre_recon_sight_snow = 1;
  optre_recon_sight_unsc = 1;
};

class SWS_Scopes_762mm : SWS_Scopes_65mm
{
  optre_recon_sight = 0;
  optre_recon_sight_desert = 0;
  optre_recon_sight_green = 0;
  optre_recon_sight_red = 0;
  optre_recon_sight_snow = 0;
  optre_recon_sight_unsc = 0;

  optre_ma5_buis = 1;
  optre_ma5_smartlink = 1;
  optre_ma5c_smartlink = 1;
  sws_optic_smartlink = 1;
};
