/** Increase the ammunition and decrease the target size of the Hornets. */
class CfgVehicles {
  class Helicopter_Base_H;

  class OPTRE_Hornet_Base : Helicopter_Base_H {
    irTargetSize = 0.8;
    radarTargetSize = 0.8;
    visualTargetSize = 0.9;
    magazines[] = {
      MACRO_X2("OPTRE_2000Rnd_20mm_HEIAP")
      , "168Rnd_CMFlare_Chaff_Magazine"
      , "Laserbatteries"
    };
  };

  class OPTRE_UNSC_Hornet_CAP: OPTRE_Hornet_Base {
    magazines[] = {
      MACRO_X2("OPTRE_2000Rnd_20mm_HEIAP")
      , "168Rnd_CMFlare_Chaff_Magazine"
      , "Laserbatteries"
      , MACRO_X2("OPTRE_8Rnd_C2GMLS_missiles")
    };
  };

  class OPTRE_UNSC_Hornet: OPTRE_UNSC_Hornet_CAP {
    magazines[] = {
      MACRO_X2("OPTRE_2000Rnd_20mm_HEIAP")
      , "168Rnd_CMFlare_Chaff_Magazine"
      , "Laserbatteries"
      , MACRO_X2("OPTRE_8Rnd_C2GMLS_missiles")
      , MACRO_X2("OPTRE_16Rnd_Anvil1_missiles")
    };
  };
};
