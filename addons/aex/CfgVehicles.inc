class CfgVehicles
{
    class SWS_V_UAV_SMQ94 : BaseGearModel
    {
        label = QNAME(UAV Bags);
        options[] = {"Variant"};
        class Variant
        {
            label = "Variant";
            values[] = {"Default","Maid"};

            class Default { description = "Standard SMQ-94 design."; };
            class Maid { description = "Maid's custom SMQ-94 design."; };
        };
    };

    class SWS_Bag_Hardcase : BaseGearModel
    {
        label = QNAME(Hardcases);
        options[] = {"Variant"};

        class Variant
        {
            values[] = {"Medical", "Sawbones", "Blue", "Vertigo", "Bait"};
            class Medical { description = "Standard issue medical hardcase."; };
            #define C_VALUE(name) class name { description = QUOTE(A modified medical satchel for name.); }
            C_VALUE(Blue);
            C_VALUE(Sawbones);
            C_VALUE(Vertigo);
            C_VALUE(Bait);
            #undef C_VALUE
        };
    };
};
