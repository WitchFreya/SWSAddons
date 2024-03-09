class CfgVehicles
{
  class SWS_Bag_Drone : SWS_BaseGearModel
  {
    label = QNAME(UAV Bags);
    options[] = {"Variant", "Pattern"};
    class Pattern
    {
      label = "Pattern";
      values[] = {"Default","Maid"};

      class Default { description = "Standard design."; };
      class Maid { description = "Maid's custom design."; };
    };

    class Variant
    {
      label = "Variant";
      values[] = {"SMQ94","Demining","MiniPelican"};
      class SMQ94
      {
        label = "SMQ-94";
        description = "A powerful reconnaissance drone.";
      };
      class Demining
      {
        description = "A drone with grenades that can be dropped.";
      };
      class MiniPelican
      {
        label = "Mini-Pelican";
        description = "A drone with extra storage capacity.";
      };
    };
  };

  class SWS_Bag_Hardcase : SWS_BaseGearModel
  {
    label = QNAME(Hardcases);
    options[] = {"Variant"};

    class Variant
    {
      values[] = {
        "Medical"
        , "Bait"
        , "Blue"
        , "Carver"
        , "Chrome"
        , "Egg"
        , "Sawbones"
        , "Snare"
        , "Spritz"
        , "Vertigo"
      };
      class Medical { description = "Standard issue medical hardcase."; };
      #define C_VALUE(name) class name { description = QUOTE(A modified medical satchel for name.); }
      C_VALUE(Bait);
      C_VALUE(Blue);
      C_VALUE(Carver);
      C_VALUE(Chrome);
      C_VALUE(Egg);
      C_VALUE(Sawbones);
      C_VALUE(Snare);
      C_VALUE(Vertigo);
      #undef C_VALUE
    };
  };
};
