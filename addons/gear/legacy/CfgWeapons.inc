#define CLASSES_WEAPONS     \
  QWEAPONS_FN(Ashes),       \
  QWEAPONS_FN(Bait),        \
  QWEAPONS_FN(Blue),        \
  QWEAPONS_FN(Butler),      \
  QWEAPONS_FN(Chrome),      \
  QWEAPONS_FN(CLS),         \
  QWEAPONS_FN(Demon),       \
  QWEAPONS_FN(Egg),         \
  QWEAPONS_FN(Gold),        \
  QWEAPONS_FN(Green),       \
  QWEAPONS_FN(Hound),       \
  QWEAPONS_FN(Hurricane),   \
  QWEAPONS_FN(Maid),        \
  QWEAPONS_FN(Manny),       \
  QWEAPONS_FN(Orange),      \
  QWEAPONS_FN(Polaris),     \
  QWEAPONS_FN(Purple),      \
  QWEAPONS_FN(Rabbit),      \
  QWEAPONS_FN(Red),         \
  QWEAPONS_FN(Rifleman),    \
  QWEAPONS_FN(Roman),       \
  QWEAPONS_FN(Sawbones),    \
  QWEAPONS_FN(Snare),       \
  QWEAPONS_FN(Sonic),       \
  QWEAPONS_FN(Sula),        \
  QWEAPONS_FN(Tiger),       \
  QWEAPONS_FN(Vertigo)

#define C_GEAR(varName,varVisorColor) \
    C_HELMET(varName,varVisorColor);  \
    C_VEST(varName)

class CfgWeapons {
  class SWS_Helmet_Base;
  class SWS_Vest_Base;

  class SWS_Helmet_Legacy_Base : SWS_Helmet_Base {
    descriptionShort = "Armor Level: ODST";
    hiddenSelectionsMaterials[] = {MATERIAL(odsthud)};
    hiddenSelectionsTextures[] = {
      "optre_unsc_units\army\data\odst_helmet_co.paa"
      , "optre_unsc_units\army\data\odst_helmet_visor_co.paa"
      , "optre_unsc_units\army\data\ghillie_woodland_co.paa"
      , "optre_unsc_units\army\data\soft_packs_co.paa"
    };
    hiddenSelections[] = {HELMET_SELECTIONS_BASE, "H_Ghillie", HELMET_SELECTIONS_COLLAR};

    class ItemInfo : ItemInfo {
      hiddenSelectionsMaterials[] = {MATERIAL(odsthud)};
      hiddenSelectionsTextures[] = {
        "optre_unsc_units\army\data\odst_helmet_co.paa"
        , "optre_unsc_units\army\data\odst_helmet_visor_co.paa"
        , "optre_unsc_units\army\data\ghillie_woodland_co.paa"
        , "optre_unsc_units\army\data\soft_packs_co.paa"
      };
      hiddenSelections[] = {HELMET_SELECTIONS_BASE, "H_Ghillie", HELMET_SELECTIONS_COLLAR};
    };
  };

  class SWS_Helmet_Legacy_Base_dp : SWS_Helmet_Legacy_Base {
    model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
    hiddenSelections[] = {HELMET_SELECTIONS_BASE_DP, "H_Ghillie", HELMET_SELECTIONS_COLLAR};
    hiddenSelectionsTextures[] = {
      "optre_unsc_units\army\data\odst_helmet_co.paa"
      , QPATHTOF(data\textures\visr_clr_ca.paa)
    };
    class ItemInfo : ItemInfo {
      uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
      hiddenSelections[] = {HELMET_SELECTIONS_BASE_DP, "H_Ghillie", HELMET_SELECTIONS_COLLAR};
      hiddenSelectionsTextures[] = {
        "optre_unsc_units\army\data\odst_helmet_co.paa"
        , QPATHTOF(data\textures\visr_clr_ca.paa)
      };
    };
  };

  class SWS_Vest_Legacy_Base : SWS_Vest_Base {
    ITEM_META(0);
    hiddenSelectionsMaterials[] = {
      MATERIAL(Vest)
      , MATERIAL(Armor)
      , MATERIAL(Legs)
      , MATERIAL(ODST)
    };

    class ItemInfo : ItemInfo {
      hiddenSelections[] = {VEST_SELECTIONS_STANDARD, "A_Ghillie"};
    };
  };

  //== BASE
  C_GEAR(Rifleman,grey);

  //== OPERATIVES
  C_GEAR(Ashes,silver);
  C_GEAR(Bait,red);
  C_GEAR(Butler,purple);
  C_GEAR(Chrome,defiant);
  C_GEAR(Demon,purple);
  C_GEAR(Egg,egg);
  C_GEAR(Hound,hound);
  C_GEAR(Hurricane,purple);
  C_GEAR(Maid,sepia);
  C_GEAR(Manny,manny);
  C_GEAR(Polaris,pink);
  C_GEAR(Rabbit,rabbit);
  C_GEAR(Roman,grey);
  C_GEAR(Sawbones,sawbones);
  C_GEAR(Snare,snare);
  C_GEAR(Sonic,defiant);
  C_GEAR(Spritz,spritz);
  C_GEAR(Sula,sula);
  C_GEAR(Tiger,tiger);
  C_GEAR(Vertigo,gold);

  //== COLORS
  C_GEAR(Blue,blue);
  C_GEAR(Gold,gold);
  C_GEAR(Green,green);
  C_GEAR(Orange,orange);
  C_GEAR(Purple,purple);
  C_GEAR(Red,red);

  C_GEAR(CLS,red);
};

