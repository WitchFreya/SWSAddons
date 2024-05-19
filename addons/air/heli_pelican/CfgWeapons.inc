// https://community.bistudio.com/wiki/Arma_3:_Targeting_config_reference#ballisticsComputer
#define BC_ZEROING 2
#define BC_TARGET_LEAD 4
#define BC_FCS 16

class CfgWeapons {
  // Light
  class OPTRE_M41P_LAAG;
  class OPTRE_M41P_HE_LAAG;
  // 40mm
  class OPTRE_Chaingun40;
  // 70mm
  class OPTRE_M370;

  class SWS_M41Sx_LAAG : OPTRE_M41P_LAAG {
    ITEM_META(1);
    displayName = "M41-Sx Light Anti-Aircraft Gun";
    fcsMaxLeadSpeed = 50;
    ballisticsComputer = QUOTE(BC_ZEROING + BC_TARGET_LEAD + BC_FCS);
    magazines[] = {"SWS_127x99_M41Sx_2500Rnd", "SWS_127x99_M41Sx_HE_2500Rnd"};
  };
};
// ["OPTRE_2500Rnd_127x99_M41","OPTRE_2500Rnd_127x99_M41_HE","OPTRE_1200Rnd_40mm_HE","OPTRE_750Rnd_70mm_HE"]
// ["OPTRE_M41P_LAAG","OPTRE_M41P_HE_LAAG","OPTRE_CHAINGUN40","OPTRE_M370"]
