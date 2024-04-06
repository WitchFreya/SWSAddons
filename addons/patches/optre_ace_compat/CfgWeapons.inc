class CfgWeapons {
  class ARifle_Mk20_F;
  class OPTRE_Rifle_Base;

  class OPTRE_MA37K : ARifle_Mk20_F {
    // Removed to avoid conflict with CBA flashlights
    delete FlashLight;
  };

  class OPTRE_MA5B : OPTRE_Rifle_Base {
    // Removed to avoid conflict with CBA flashlights
    delete FlashLight;
  };
};
