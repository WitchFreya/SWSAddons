
#define CLASS_BASE Bag_Hardcase
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
        model = QVEHICLE(CLASS_BASE);
        variant = "Medical";
    };
};

class VEHICLE(DOUBLES(CLASS_BASE,Sawbones)) : VEHICLE(DOUBLES(CLASS_BASE,Medical)) {
    ITEM_META(2);
    displayName = QNAME(Medical Satchel (Sawbones));
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\sawbones_co)};

    class XtdGearInfo : XtdGearInfo {
        variant = "Sawbones";
    };
};

// class VEHICLE(DOUBLES(CLASS_BASE,Bait)) : VEHICLE(DOUBLES(CLASS_BASE,Medical)) {
//     ITEM_META(2);
//     displayName = QNAME(Medical Satchel (Bait));
//     hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\bait_co)};
//     SWS_ArsenalHide = 1;

//     class XtdGearInfo : XtdGearInfo {
//         variant = "Bait";
//     };
// };

class VEHICLE(DOUBLES(CLASS_BASE,Vertigo)) : VEHICLE(DOUBLES(CLASS_BASE,Medical)) {
    ITEM_META(2);
    displayName = QNAME(Medical Satchel (Vertigo));
    hiddenSelectionsTextures[] = {QPATHTOF(data\Bag_Hardcase\vertigo_co)};

    class XtdGearInfo : XtdGearInfo {
        variant = "Vertigo";
    };
};

#undef CLASS_BASE
