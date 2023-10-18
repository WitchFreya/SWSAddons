 class SWS_Optic_SmartLink : OPTRE_MA5_SmartLink
 {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(SmartLink-Sx);

    model = QPATHTOF(data\ma5c_smartlink.p3d);
    class ItemInfo: InventoryOpticsItem_Base_F
    {
        mass = 1;
        opticType = 1;
        optics = 1;
        modelOptics = "\OPTRE_Weapons\AR\MA5_smartlink.p3d";
        inertia = 0.1;
        class OpticsModes {
            class SWS_Optic_SmartLink {
                opticsID = 1;
                useModelOptics = 0;
                opticsPPEffects[] = { "" };
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                opticsZoomMin = 0.375;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                memoryPointCamera="eye";
                visionMode[] = {};
                distanceZoomMin = 400;
                distanceZoomMax = 400;
                cameraDir = "";
                discreteDistance[] = { 100,200,300,400,500 };
                discreteDistanceInitIndex = 1;
            };
            class SWS_Optic_SmartLink_Zoom : SWS_Optic_SmartLink {
                opticsID = 2;
                opticsZoomMin = 0.125;
                opticsZoomMax=0.125;
                opticsZoomInit=0.125;
                discreteFov[] = {0.125};
                discreteInitIndex = 0;
                useModelOptics = 1;
                discreteDistance[] = {100,200,300,400,500};
                discreteDistanceInitIndex = 1;
                modelOptics[] = {
                    "\OPTRE_Weapons\smg\M7_Optic_2x.p3d"
                };
            };
        };
    };
};
