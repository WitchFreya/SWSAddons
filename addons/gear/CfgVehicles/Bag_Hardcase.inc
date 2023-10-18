
#define C_HARDCASE(var0,var1) class SWS_V_Bag_Hardcase_##var0 : SWS_V_Bag_Hardcase_Medical \
{ \
    ITEM_META(2); \
    displayName = QNAME(Medical Satchel (var0)); \
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\##var1##_co)}; \
    class XtdGearInfo : XtdGearInfo { variant = QUOTE(var0); }; \
}

class SWS_V_Bag_Hardcase_Base : OPTRE_ONI_Researcher_Suitcase
{
    ITEM_META(0);
};

class SWS_V_Bag_Hardcase_Medical : SWS_V_Bag_Hardcase_Base
{
    ITEM_META(2);
    displayName = QNAME(Medical Satchel);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\medical_co)};
    maximumLoad = 400;

    class XtdGearInfo
    {
        model = "SWS_Bag_Hardcase";
        variant = "Medical";
    };
};

C_HARDCASE(Sawbones,sawbones);
C_HARDCASE(Blue,blue);
C_HARDCASE(Vertigo,vertigo);
C_HARDCASE(Bait,bait);

#undef C_HARDCASE
