
#define CLASS_BASE Bag_Hardcase
class VEHICLE(DOUBLES(CLASS_BASE,Base)) : OPTRE_ONI_Researcher_Suitcase {
    ITEM_META(0);
};

class VEHICLE(DOUBLES(CLASS_BASE,Medical)) : VEHICLE(DOUBLES(CLASS_BASE,Base)) {
    ITEM_META(2);
    displayName = QNAME(Medical Satchel);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\medical)};
    maximumLoad = 400;

    class XtdGearInfo {
        model = QVEHICLE(CLASS_BASE);
        variant = "Medical";
    };
};

class VEHICLE(DOUBLES(CLASS_BASE,Sawbones)) : VEHICLE(DOUBLES(CLASS_BASE,Medical)) {
    ITEM_META(2);
    displayName = QNAME(Medical Satchel (Sawbones));
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\sawbones)};
    maximumLoad = 400;

    class XtdGearInfo : XtdGearInfo {
        variant = "Sawbones";
    };
};

#undef CLASS_BASE
