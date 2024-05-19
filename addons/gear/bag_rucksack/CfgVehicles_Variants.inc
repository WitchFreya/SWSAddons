class CfgVehicles {
  class SWS_V_Bag_Rucksack;
  class SWS_V_Bag_Rucksack_Medic;
  class SWS_V_Bag_Rucksack_Heavy;

  #pragma region Hound
  #define HS_TEXTURES                         \
    QPATHTOF(data\bag_rucksack\hound_co.paa)  \
    , QPATHTOF(data\softpacks_co.paa)         \
    , QPATHTOF(data\biofoam_co.paa)
  class SWS_V_Bag_Rucksack_Hound : SWS_V_Bag_Rucksack {
    displayName = QNAME(Hound's Rucksack);
    hiddenSelectionsTextures[] = {HS_TEXTURES};
    class XtdGearInfo : XtdGearInfo { customization = "Hound"; };
  };
  class SWS_V_Bag_Rucksack_Medic_Hound : SWS_V_Bag_Rucksack_Medic {
    displayName = QNAME(Hound's Rucksack - Medic);
    hiddenSelectionsTextures[] = {HS_TEXTURES};
    class XtdGearInfo : XtdGearInfo { customization = "Hound"; };
  };
  class SWS_V_Bag_Rucksack_Heavy_Hound : SWS_V_Bag_Rucksack_Heavy {
    displayName = QNAME(Hound's Rucksack - Heavy);
    hiddenSelectionsTextures[] = {HS_TEXTURES};
    class XtdGearInfo : XtdGearInfo { customization = "Hound"; };
  };
  #undef HS_TEXTURES
  #pragma endregion

  #pragma region Manny
  #define HS_TEXTURES                         \
    QPATHTOF(data\bag_rucksack\manny_co.paa)  \
    , QPATHTOF(data\softpacks_co.paa)         \
    , QPATHTOF(data\biofoam_co.paa)

    class SWS_V_Bag_Rucksack_Manny : SWS_V_Bag_Rucksack {
    displayName = QNAME(Manny's Rucksack);
    hiddenSelectionsTextures[] = {HS_TEXTURES};
    class XtdGearInfo : XtdGearInfo { customization = "Manny"; };
  };
  class SWS_V_Bag_Rucksack_Medic_Manny : SWS_V_Bag_Rucksack_Medic {
    displayName = QNAME(Manny's Rucksack - Medic);
    hiddenSelectionsTextures[] = {HS_TEXTURES};
    class XtdGearInfo : XtdGearInfo { customization = "Manny"; };
  };
  class SWS_V_Bag_Rucksack_Heavy_Manny : SWS_V_Bag_Rucksack_Heavy {
    displayName = QNAME(Manny's Rucksack - Heavy);
    hiddenSelectionsTextures[] = {HS_TEXTURES};
    class XtdGearInfo : XtdGearInfo { customization = "Manny"; };
  };
  #undef HS_TEXTURES
  #pragma endregion
};

#define CLASSES_VEHICLES_VARIANTS     \
  "SWS_V_Bag_Rucksack_Hound"          \
  , "SWS_V_Bag_Rucksack_Medic_Hound"  \
  , "SWS_V_Bag_Rucksack_Heavy_Hound"  \
  , "SWS_V_Bag_Rucksack_Manny"        \
  , "SWS_V_Bag_Rucksack_Medic_Manny"  \
  , "SWS_V_Bag_Rucksack_Heavy_Manny"
