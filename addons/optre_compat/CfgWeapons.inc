class CfgWeapons {
  class ARifle_Mk20_F;
  class OPTRE_Rifle_Base;

  #pragma region Remove class flashlights to avoid conflict with CBA flashlights
  class OPTRE_MA37K : ARifle_Mk20_F {
    delete FlashLight;
  };

  class OPTRE_MA5B : OPTRE_Rifle_Base {
    delete FlashLight;
  };
};
