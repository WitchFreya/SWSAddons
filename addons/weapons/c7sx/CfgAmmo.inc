#define CLASSES_AMMO    \
  "SWS_B_C7Sx_Sticky"  \
  , "SWS_B_C7Sx_Sticky_Explosion"

class CfgAmmo
{
  class OPTRE_C7_Remote_Ammo_Thrown_Sticky;
  class OPTRE_Sticky_C7_Explosion;

  class SWS_B_C7Sx_Sticky : OPTRE_C7_Remote_Ammo_Thrown_Sticky
  {
    ITEM_META(2);
    defaultMagazine = "SWS_Magazine_C7Sx_Sticky";
  };

  class SWS_B_C7Sx_Sticky_Explosion : OPTRE_Sticky_C7_Explosion
  {
    indirectHitRange = 2;
    indirectHit = 2500;
  };
};


