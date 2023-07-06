#define CLASSES_VEHICLE \
    QVEHICLE(UAV_MQ94)

class CfgVehicles {
    class DMNS_UAV_01_F;
    class VEHICLE(UAV_MQ94): DMNS_UAV_01_F {
        ITEM_META(2);
        displayName = NAME(MQ-94 Recon);
        faction = "SWS_UNSC";
        class AssembleInfo {
            primary = 1;
            base = "";
            assembleTo = "";
            displayName = "";
            dissasembleTo[] = {
                QBAG(UAV_MQ94)
            };
        };
    };
};
