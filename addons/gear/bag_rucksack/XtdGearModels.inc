class XtdGearModels
{
  class SWS_BaseGearModel;
  class CfgVehicles
  {
    class SWS_Bag_Rucksack : SWS_BaseGearModel
    {
      label = QNAME(Rucksacks);
      options[] = { "Variant", "Customization" };
      class Variant
      {
        values[] = { "Basic", "Medic", "Heavy" };
        class Basic {};
        class Medic {};
        class Heavy {};
      };
      class Customization
      {
        values[] = { "None", "Hound" };
        class None {};
        class Hound
        {
          description = "Hound's customized version.";
        };
      };
    };
  };
};
