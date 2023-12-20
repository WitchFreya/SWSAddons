#define CLASSES_AMMO    \
  "SWS_B_Grenade_M3Sx"  \
  , "SWS_B_Grenade_M3Sx_40mm_Shell"

class CfgAmmo
{
  class OPTRE_G_M9_Frag;
  class M319_HE;

  class SWS_B_Grenade_M3Sx : OPTRE_G_M9_Frag
  {
    META;
    hit = 40;
    indirectHit = 40;
    indirectHitRange = 7;
    ace_frag_gurney_c = 3000;
    ace_frag_gurney_k = "1/2";
    ace_frag_classes[] = {"ACE_frag_small_HD"};
    ace_frag_metal = 180;
    ace_frag_charge = 300;
    ace_frag_enabled = 1;
  };

  class SWS_B_Grenade_M3Sx_40mm_Shell: M319_HE
  {
    META;
    hit = 40;
    indirectHit = 40;
    indirectHitRange = 7;
    ace_frag_gurney_c = 3000;
    ace_frag_gurney_k = "1/2";
    ace_frag_classes[] = {"ACE_frag_small_HD"};
    ace_frag_metal = 180;
    ace_frag_charge = 300;
    ace_frag_enabled = 1;
  };
};


