class XtdGearModels {
  class SWS_BaseGearModel;

  class CfgWeapons {
    class SWS_Weapon_Autorifles : SWS_BaseGearModel {
      label = QNAME(AR);
      options[] = {"Body","Underbarrel","Variant"};
      class Body {
        alwaysSelectable = TRUE;
        label = "Body Configuration";
        values[] = {"0M37S", "MXS","MA5BSx","SMA37K"};

        class 0M37S { description = "AR-0M37S"; };
        class MXS { description = "ARMXS"; };
        class MA5BSx {};
        class XMA37K { description = "SMA-37k";};
      };

      class Underbarrel {
        alwaysSelectable = TRUE;
        label = "Underbarrel Attachment";
        values[] = {"None", "GL","SHT"};
        class None {};
        class GL { description = "Underbarrel grenade launcher."; };
        class SHT { description = "Underbarrel shotgun."; };
      };

      class Variant {
        alwaysSelectable = TRUE;
        label = "Variant";
        values[] = {"Standard", "Hound", "Rabbit"};
        class Standard {};
        class Hound {};
        class Rabbit {};
      };
    };

    class SWS_Weapon_PDW : SWS_BaseGearModel {
      label = QNAME(PDW);
      options[] = {"Weapon"};
      class Weapon {
        alwaysSelectable = TRUE;
        label = "Weapon";
        values[] = {"Sx90", "SxC90", "M7Sx"};
        class Sx90 { label = "Sx-90"; };
        class SxC90 {
          label = "SxC-90";
          description = "A longer barrel variant of the Sx-90 providing additional accuracy.";
        };

        class M7Sx {
          label = "M7-Sx";
          description = "An SMG useful for close combat.";
        };
      };
    };

    class SWS_Weapon_DMR : SWS_BaseGearModel {
      label = QNAME(Marksman & Battle Rifles);
      options[] = {"Body"};
      class Body {
        label = "Body Configuration";
        values[] = {"SBR55","SxMR397"};
        class SBR55 { label = "SBR-55"; };
        class SxMR397 {
          label = "SxMR-397";
          description = "Longshot";
        };
      };
    };
  };
};
