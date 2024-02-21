class CfgVehicles
{
  class Helicopter_Base_H;
  class OPTRE_Hornet_Base : Helicopter_Base_H
  {
    irTargetSize = 0.8;
    radarTargetSize = 0.8;
    visualTargetSize = 0.9;
    magazines[] = {"OPTRE_2000Rnd_20mm_HEIAP","OPTRE_2000Rnd_20mm_HEIAP","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries"};
  };
  class OPTRE_UNSC_hornet_CAP: OPTRE_Hornet_Base
  {
    magazines[] = {"OPTRE_2000Rnd_20mm_HEIAP","OPTRE_2000Rnd_20mm_HEIAP","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries","OPTRE_8Rnd_C2GMLS_missiles","OPTRE_8Rnd_C2GMLS_missiles"};
  };
  class OPTRE_UNSC_hornet: OPTRE_UNSC_hornet_CAP
  {
    magazines[] = {"OPTRE_2000Rnd_20mm_HEIAP","OPTRE_2000Rnd_20mm_HEIAP","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries","OPTRE_8Rnd_C2GMLS_missiles","OPTRE_8Rnd_C2GMLS_missiles","OPTRE_16Rnd_Anvil1_missiles","OPTRE_16Rnd_Anvil1_missiles"};
  };
};
