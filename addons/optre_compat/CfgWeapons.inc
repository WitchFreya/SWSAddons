class CfgWeapons {
  class ACC_Pointer_IR;
  class ARifle_Mk20_F;
  class InventoryFlashLightItem_Base_F;
  class ItemCore;
  class OPTRE_M12_Laser;
  class OPTRE_Rifle_Base;
  class ACC_Flashlight;

  #pragma region Remove class flashlights to avoid conflict with CBA flashlights
  class OPTRE_MA37K : ARifle_Mk20_F {
    delete FlashLight;
  };

  class OPTRE_MA5B : OPTRE_Rifle_Base {
    delete FlashLight;
  };

  #pragma region Their attachments are a mess.
  class OPTRE_M7_Laser : ACC_Pointer_IR {};

  class OPTRE_M7_Flashlight : ItemCore {
    scope = 1;
    scopeArsenal = 1;
  };

  class OPTRE_M7_Vis_Red_Laser : OPTRE_M7_Laser {
    scope = 1;
  };

  // The BMR MEQ Variant
  class OPTRE_BMR_Laser : ACC_Pointer_IR {};
  class OPTRE_BMR_MEQ_Flashlight : OPTRE_BMR_Laser { scope = 1; };
  class OPTRE_BMR_Vis_Red_Laser : OPTRE_BMR_Laser { scope = 1; };

  // The BMR standard variant
  class OPTRE_BMR_Flashlight : ACC_Flashlight {};
  class OPTRE_BMR_Flashlight_Laser : OPTRE_BMR_Flashlight { scope = 1; };
  class OPTRE_BMR_Flashlight_Vis_Red_Laser : OPTRE_BMR_Flashlight { scope = 1; };

  class OPTRE_M6G_Flashlight : ItemCore {};
  class OPTRE_M6G_Laser : OPTRE_M6G_Flashlight { scope = 1; };
  class OPTRE_M6G_Vis_Red_Laser : OPTRE_M6G_Flashlight { scope = 1; };

  class OPTRE_M6C_Laser : ACC_Pointer_IR {};
  class OPTRE_M6C_Vis_Red_Laser : OPTRE_M6C_Laser { scope = 1; };
  // patch the flashlight to inherit from the right object and avoid breaking CBA switching.
  class OPTRE_M6C_Flashlight : OPTRE_M6C_Laser {
    displayName = "M6C Laser (Flashlight)";
    scope = 1;
    MRT_switchItemHintText = "Flashlight";
    MRT_SwitchItemNextClass = "OPTRE_M6C_Laser";
    MRT_SwitchItemPrevClass = "OPTRE_M6C_Vis_Red_Laser";
    class ItemInfo : InventoryFlashLightItem_Base_F {
      mass = 1;
      class FlashLight {
        color[] = {180,156,120};
        ambient[] = {0.9,0.78,0.6};
        intensity = 5;
        size = 1;
        innerAngle = 20;
        outerAngle = 80;
        coneFadeCoef = 5;
        position = "laser dir";
        direction = "laser";
        useFlare = TRUE;
        flareSize = 1.4;
        flareMaxDistance = "100.0f";
        dayLight = 0;
        scale[] = {0};
        class Attenuation {
          start = 0.5;
          constant = 0;
          linear = 0;
          quadratic = 1.1;
          hardLimitStart = 20;
          hardLimitEnd = 30;
        };
      };
    };
  };

  class OPTRE_M12_Flashlight : OPTRE_M12_Laser {
    scope = 1;
    MRT_SwitchItemNextClass = "OPTRE_M12_Laser";
    MRT_SwitchItemPrevClass = "OPTRE_M12_Vis_Red_Laser";
    MRT_switchItemHintText = "Flashlight";
    class ItemInfo : InventoryFlashLightItem_Base_F {
      mass = 1;
      class FlashLight {
        color[] = {180,160,130};
        ambient[] = {0.9,0.8,0.7};
        intensity = 100;
        size = 1;
        innerAngle = 5;
        outerAngle = 100;
        coneFadeCoef = 10;
        position = "laser dir";
        direction = "laser";
        useFlare = TRUE;
        flareSize = 1.5;
        flareMaxDistance = 100;
        dayLight = 0;
        scale[] = {0};
        class Attenuation {
          start = 0;
          constant = 0.5;
          linear = 0.1;
          quadratic = 0.2;
          hardLimitStart = 27;
          hardLimitEnd = 34;
        };
      };
    };
  };
  class OPTRE_M12_Vis_Red_Laser : OPTRE_M12_Laser { scope = 1; };


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
