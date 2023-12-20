#define CLASSES_AMMO \
  "SWS_B_Grenade_M9Sx_40mm_Shell"

class CfgAmmo
{
  class M319_HEDP;
  class SWS_B_Grenade_M9Sx_40mm_Shell : M319_HEDP
  {
    META;
    hit = 300;
    indirectHit = 300;
    indirectHitRange = 2;
    ace_frag_enabled = 0;
  };
};


