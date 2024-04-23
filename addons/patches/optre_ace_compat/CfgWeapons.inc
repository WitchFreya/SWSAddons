class CfgWeapons {
  class ARifle_Mk20_F;
  class OPTRE_Rifle_Base;
  class ACC_Pointer_IR;
  class ItemCore;
  class ACC_Flashlight;

  #pragma region Remove class flashlights to avoid conflict with CBA flashlights
  class OPTRE_MA37K : ARifle_Mk20_F {
    delete FlashLight;
  };

  class OPTRE_MA5B : OPTRE_Rifle_Base {
    delete FlashLight;
  };
  #pragma endregion

  #pragma region Their attachments are a mess.
  class OPTRE_M7_Laser : ACC_Pointer_IR {
    ace_arsenal_uniqueBase = "OPTRE_M7_Laser";
  };
  class OPTRE_M7_Flashlight : ItemCore {
    scopeArsenal = 1;
    ace_arsenal_uniqueBase = "OPTRE_M7_Laser";
  };

  // The BMR MEQ Variant
  class OPTRE_BMR_Laser : ACC_Pointer_IR {
    ace_arsenal_uniqueBase = "OPTRE_BMR_Laser";
  };

  // The BMR standard variant, modified so the Lasers appear instead of MEQ and Flashlight.
  class OPTRE_BMR_Flashlight : ACC_Flashlight {
    scope = 2;
    scopeArsenal = 1;
    ace_arsenal_uniqueBase = "OPTRE_BMR_Flashlight_Laser";
  };
  class OPTRE_BMR_Flashlight_Laser : OPTRE_BMR_Flashlight {
    scopeArsenal = 2;
  };

  class OPTRE_M6G_Flashlight : ItemCore {
    ace_arsenal_uniqueBase = "OPTRE_M6G_Flashlight";
  };

  class OPTRE_M6C_Laser : ACC_Pointer_IR {
    ace_arsenal_uniqueBase = "OPTRE_M6C_Laser";
  };

  class OPTRE_M6C_Flashlight : OPTRE_M6G_Flashlight {
    ace_arsenal_uniqueBase = "OPTRE_M6C_Flashlight";
  };

  class OPTRE_M12_Flashlight : OPTRE_M7_Flashlight {
    ace_arsenal_uniqueBase = "OPTRE_M12_Laser";
  };

  // DMR light no variants so clearing out the invalid CBA properties and setting the appropriate ones.
  class OPTRE_DMR_Light : OPTRE_BMR_Flashlight {
    MRT_switchItemHintText = "";
    MRT_SwitchItemNextClass = "";
    MRT_SwitchItemPrevClass = "";
    scopeArsenal = 2;
    picture = "\OPTRE_Weapons\br\icons\flashlight.paa";
  };
  #pragma endregion
};
