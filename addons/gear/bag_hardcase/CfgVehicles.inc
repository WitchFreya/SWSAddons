#define CLASSES_VEHICLES          \
  "SWS_V_Bag_Hardcase_Bait"       \
  , "SWS_V_Bag_Hardcase_Blue"     \
  , "SWS_V_Bag_Hardcase_Carver"   \
  , "SWS_V_Bag_Hardcase_Chrome"   \
  , "SWS_V_Bag_Hardcase_Medical"  \
  , "SWS_V_Bag_Hardcase_Polaris"  \
  , "SWS_V_Bag_Hardcase_Sawbones" \
  , "SWS_V_Bag_Hardcase_Snare"    \
  , "SWS_V_Bag_Hardcase_Spritz"   \
  , "SWS_V_Bag_Hardcase_Vertigo"

#define C_HARDCASE(var0,var1)                                               \
  class SWS_V_Bag_Hardcase_##var0 : SWS_V_Bag_Hardcase_Medical {            \
    ITEM_META(2);                                                           \
    displayName = QNAME(Medical Satchel (var0));                            \
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\##var1##_co)}; \
    class XtdGearInfo : XtdGearInfo { variant = QUOTE(var0); };             \
  }

class CfgVehicles {
  class OPTRE_ONI_Researcher_Suitcase;

  class SWS_V_Bag_Hardcase_Base : OPTRE_ONI_Researcher_Suitcase {
    ITEM_META(0);
    hiddenSelections[] = {"camo"};
    maximumLoad = 400;
    class XtdGearInfo { model = "SWS_Bag_Hardcase"; };
  };

  class SWS_V_Bag_Hardcase_Medical : SWS_V_Bag_Hardcase_Base {
    SCOPE(2);
    displayName = QNAME(Medical Satchel);
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\medical_co)};
    class XtdGearInfo : XtdGearInfo { variant = "Medical"; };
  };

  C_HARDCASE(Bait,bait);
  C_HARDCASE(Blue,blue);
  C_HARDCASE(Carver,Carver);
  C_HARDCASE(Chrome,chrome);
  C_HARDCASE(Egg,egg);
  C_HARDCASE(Falke,falke);
  C_HARDCASE(Sawbones,sawbones);
  C_HARDCASE(Snare,snare);
  C_HARDCASE(Spritz,spritz);
  C_HARDCASE(Polaris,polaris);
  C_HARDCASE(Vertigo,vertigo);
};

#undef C_HARDCASE

// 19th_H_ODST
