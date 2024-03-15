#define CLASSES_VEHICLES \
  "SWS_V_Bag_ILCS_Manny"

#define HS_CAMO "camo1"
#define HS_AMMO_PACKS "AP_Heavy"
#define HS_BIOFOAM "biofoam"

class CfgVehicles {
  class OPTRE_ILCS_Rucksack_Black;

  class SWS_V_Bag_ILCS_Base : OPTRE_ILCS_Rucksack_Black {
    ITEM_META(0);
    displayName = "-";
    hiddenSelections[] = {HS_CAMO};
    // Matches our medical bag standard.
    maximumLoad = 250;
    mass = 20;
  };

  class SWS_V_Bag_ILCS_Manny : SWS_V_Bag_ILCS_Base {
    SCOPE(2);
    displayName = QNAME(ILCS Rucksack (Manny));
    hiddenSelections[] = {HS_CAMO, HS_BIOFOAM, HS_AMMO_PACKS};
    hiddenSelectionsTextures[] = {QPATHTOF(data\bag_ilcs\manny_co.paa), QPATHTOF(data\biofoam_co.paa)};
  };
};

#undef HS_CAMO
#undef HS_AMMO_PACKS
#undef HS_BIOFOAM
