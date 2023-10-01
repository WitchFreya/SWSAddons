
#define CLASS_BASE Bag_Hardcase

#define C_HARDCASE(var0,var1) class VEHICLE(DOUBLES(CLASS_BASE,var0)) : VEHICLE(DOUBLES(CLASS_BASE,Medical)) \
{ \
    ITEM_META(2); \
    displayName = QNAME(Medical Satchel (var0)); \
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\##var1##_co)}; \
    class XtdGearInfo : XtdGearInfo { variant = QUOTE(var0); }; \
}

class VEHICLE(DOUBLES(CLASS_BASE,Base)) : OPTRE_ONI_Researcher_Suitcase {
    ITEM_META(0);
};

class VEHICLE(DOUBLES(CLASS_BASE,Medical)) : VEHICLE(DOUBLES(CLASS_BASE,Base)) {
    ITEM_META(2);
    displayName = QNAME(Medical Satchel);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\medical_co)};
    maximumLoad = 400;

    class XtdGearInfo {
        model = "SWS_Bag_Hardcase";
        variant = "Medical";
    };
};

C_HARDCASE(Sawbones,sawbones);
C_HARDCASE(Blue,blue);
C_HARDCASE(Vertigo,vertigo);

#undef C_HARDCASE
#undef CLASS_BASE
