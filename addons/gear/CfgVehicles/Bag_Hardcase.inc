
#define C_HARDCASE(var0,var1) class SWS_V_Bag_Hardcase_##var0 : SWS_V_Bag_Hardcase_Medical \
{ \
  ITEM_META(2); \
  displayName = QNAME(Medical Satchel (var0)); \
  hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\##var1##_co)}; \
}

class SWS_V_Bag_Hardcase_Base : OPTRE_ONI_Researcher_Suitcase
{
  ITEM_META(0);
  hiddenSelections[] = {"camo"};
  maximumLoad = 400;
};

class SWS_V_Bag_Hardcase_Medical : SWS_V_Bag_Hardcase_Base
{
  SCOPE(2);
  displayName = QNAME(Medical Satchel);
  hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\medical_co)};
};

C_HARDCASE(Bait,bait);
C_HARDCASE(Blue,blue);
C_HARDCASE(Chrome,chrome);
C_HARDCASE(Egg,egg);
C_HARDCASE(Polaris,polaris);
C_HARDCASE(Sawbones,sawbones);
C_HARDCASE(Snare,snare);
C_HARDCASE(Spritz,spritz);
C_HARDCASE(Vertigo,vertigo);

#undef C_HARDCASE
