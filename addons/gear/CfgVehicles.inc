#define CLASSES_VEHICLES \
  "SWS_Bag_UAV_Demining" \
  , "SWS_Bag_UAV_MiniPelican" \
  , "SWS_Bag_UAV_SMQ94_Maid" \
  , "SWS_Bag_UAV_SMQ94" \
  , "SWS_V_Bag_Hardcase_Bait" \
  , "SWS_V_Bag_Hardcase_Base" \
  , "SWS_V_Bag_Hardcase_Blue" \
  , "SWS_V_Bag_Hardcase_Chrome" \
  , "SWS_V_Bag_Hardcase_Medical" \
  , "SWS_V_Bag_Hardcase_Polaris" \
  , "SWS_V_Bag_Hardcase_Sawbones" \
  , "SWS_V_Bag_Hardcase_Snare" \
  , "SWS_V_Bag_Hardcase_Spritz" \
  , "SWS_V_Bag_Hardcase_Vertigo" \
  , "SWS_V_Bag_Messenger_Tiger" \
  , "SWS_V_Bag_Messenger_Tiger_Radio" \
  , "SWS_V_Bag_Messenger_Tiger_Hammerspace" \
  , "SWS_V_Bag_Messenger"

class AssembleInfo;

class CfgVehicles
{
  class B_Messenger_IDAP_F;
  class B_UAV_06_Backpack_F;
  class C_IDAP_UAV_06_antimine_backpack_F;
  class DMNS_UAV_01_backpack_F;
  class OPTRE_ONI_Researcher_Suitcase;
  class SWS_V_UAV_Demining_Base;
  class SWS_V_UAV_MiniPelican_Base;
  class SWS_V_UAV_SMQ94_Base;

  //== Bags
  #include "CfgVehicles\Bag_Hardcase.inc"
  #include "CfgVehicles\Bag_Messenger.inc"
  #include "CfgVehicles\Bag_UAV_Demining.inc"
  #include "CfgVehicles\Bag_UAV_MiniPelican.inc"
  #include "CfgVehicles\Bag_UAV_SMQ94.inc"
};
