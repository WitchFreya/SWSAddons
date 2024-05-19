class CfgMagazines {
  class 30Rnd_120mm_HE_Shells;

  class SWS_127x99_M41Sx_Base : 30Rnd_120mm_HE_Shells {
    ITEM_META(0);
    displayName = "-";
    displayNameShort = "12.7x99mm Ball";
    ammo = "OPTRE_B_127x99_Ball"; // TODO: Consider homebrewed ammo type.
    tracersEvery = 1;
    lastRoundsTracer = 0;
    muzzleImpulseFactor[] = {0,0};
    initSpeed = 900;
    count = 0;
    pylonWeapon = "SWS_M41Sx_LAAG";
  };

  class SWS_127x99_M41Sx_HE_Base : SWS_127x99_M41Sx_Base {
    ammo = "OPTRE_B_127x99_HE";
    displayNameShort = "12.7x99mm HE";
  };

  class SWS_127x99_M41Sx_2500Rnd : SWS_127x99_M41Sx_Base {
    SCOPE(1);
    displayName = "2500x M41-Sx 12.7x99mm LAAG";
    count = 2500;
    hardpoints[] = {"SWS_Pelican_Nose_Cannon"};
  };

  class SWS_127x99_M41Sx_HE_2500Rnd : SWS_127x99_M41Sx_HE_Base {
    SCOPE(1);
    displayName = "2500x M41-Sx 12.7x99mm LAAG (HE)";
    count = 2500;
    hardpoints[] = {"SWS_Pelican_Nose_Cannon"};
  };
};
