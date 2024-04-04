class XtdGearModels
{
  class SWS_BaseGearModel;

  class CfgWeapons
  {
    class SWS_Weapon_Autorifles : SWS_BaseGearModel
    {
      label = QNAME(AR);
      options[] = {"Body","Underbarrel","Variant"};
      class Body
      {
        label = "Body Configuration";
        values[] = {"0M37S", "MXS","MA5BSx","XMA37K"};

        class 0M37S { description = "AR-0M37S"; };
        class MXS { description = "ARMXS"; };
        class MA5BSx {};
        class XMA37K { description = "xMA-37k";};
      };

      class Underbarrel
      {
        label = "Underbarrel Attachment";
        values[] = {"None", "GL","SHT"};
        class None {};
        class GL { description = "Underbarrel grenade launcher."; };
        class SHT { description = "Underbarrel shotgun."; };
      };

      class Variant
      {
        label = "Variant";
        values[] = {"Standard", "Hound", "Rabbit"};
        class Standard {};
        class Hound {};
        class Rabbit {};
      };
    };
  };
};
