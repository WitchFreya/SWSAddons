#define CLASSES_VEHICLES              \
  "SWS_V_Bag_Rucksack"                \
  , "SWS_V_Bag_Rucksack_Medic"        \
  , "SWS_V_Bag_Rucksack_Heavy"        \
  , "SWS_V_Bag_Rucksack_Hound"        \
  , "SWS_V_Bag_Rucksack_Medic_Hound"  \
  , "SWS_V_Bag_Rucksack_Heavy_Hound"

#define HS_VAR_BIOFOAM "biofoam"
#define HS_VAR_SOFTPACKS "AP_Heavy"
#define HS_BASE "camo1", HS_VAR_SOFTPACKS, HS_VAR_BIOFOAM

class CfgVehicles {
  class OPTRE_ILCS_Rucksack_Black;

  class SWS_V_Bag_Rucksack_Base : OPTRE_ILCS_Rucksack_Black {
    ITEM_META(0);
    displayName = "-";
    mass = 30;
    maximumLoad = 300;
    hiddenSelections[] = {HS_BASE};
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\bag_rucksack\standard_co.paa)
      , QPATHTOF(data\softpacks_co.paa)
      , QPATHTOF(data\biofoam_co.paa)
    };

    class XtdGearInfo {
      model = "SWS_Bag_Rucksack";
      customization = "None";
      variant = "Basic";
    };
  };

  class SWS_V_Bag_Rucksack : SWS_V_Bag_Rucksack_Base {
    SCOPE(2);
    displayName = QNAME(Rucksack);
    hiddenSelections[] = {HS_BASE, HS_VAR_SOFTPACKS, HS_VAR_BIOFOAM};
  };

  class SWS_V_Bag_Rucksack_Medic : SWS_V_Bag_Rucksack_Base {
    SCOPE(2);
    mass = 35;
    maximumLoad = 350;
    displayName = QNAME(Rucksack - Medic);
    hiddenSelections[] = {HS_BASE, HS_VAR_SOFTPACKS};
    class XtdGearInfo : XtdGearInfo { variant = "Medic"; };
  };

  class SWS_V_Bag_Rucksack_Heavy : SWS_V_Bag_Rucksack_Base {
    SCOPE(2);
    mass = 40;
    maximumLoad = 400;
    displayName = QNAME(Rucksack - Heavy);
    class XtdGearInfo : XtdGearInfo { variant = "Heavy"; };
  };

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
};

#undef HS_BASE
#undef HS_VAR_BIOFOAM
#undef HS_VAR_SOFTPACKS
