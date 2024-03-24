#define CLASSES_VEHICLES          \
  "SWS_Bag_UAV_MiniPelican"       \
  , "SWS_V_Bag_Hardcase_Bait"     \
  , "SWS_V_Bag_Hardcase_Base"     \
  , "SWS_V_Bag_Hardcase_Blue"     \
  , "SWS_V_Bag_Hardcase_Carver"   \
  , "SWS_V_Bag_Hardcase_Chrome"   \
  , "SWS_V_Bag_Hardcase_Medical"  \
  , "SWS_V_Bag_Hardcase_Sawbones" \
  , "SWS_V_Bag_Hardcase_Snare"    \
  , "SWS_V_Bag_Hardcase_Spritz"   \
  , "SWS_V_Bag_Hardcase_Vertigo"

class AssembleInfo;

class CfgVehicles {
  class B_UAV_06_Backpack_F;
  class OPTRE_ONI_Researcher_Suitcase;
  class SWS_V_UAV_MiniPelican_Base;

  //== Bags
  #include "CfgVehicles\Bag_Hardcase.inc"
  #include "CfgVehicles\Bag_UAV_MiniPelican.inc"
};
