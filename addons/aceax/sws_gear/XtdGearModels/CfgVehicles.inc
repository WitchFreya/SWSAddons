class CfgVehicles
{
    class SWS_Bag_SMQ94 : BaseGearModel
    {
        label = QNAME(SMQ94 UAV Bags);
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
            values[] = {
                "Medical"
                , "Sawbones"
                , "Blue"
                , "Vertigo"
                , "Bait"
                , "Snare"
            };
            class Medical { description = "Standard issue medical hardcase."; };
            #define C_VALUE(name) class name { description = QUOTE(A modified medical satchel for name.); }
            C_VALUE(Blue);
            C_VALUE(Sawbones);
            C_VALUE(Vertigo);
            C_VALUE(Bait);
            C_VALUE(Snare);
            #undef C_VALUE
        };
    };

    class SWS_Bag_Messenger : BaseGearModel
    {
        label = QNAME(Messenger Bag);
        options[] = {"Variant"};
        class Variant
        {
            values[] = {
                "SWS"
                , "Tiger"
            };

            class SWS
            {
                description = "A messenger bag with the SWS logo.";
            };

            class Tiger
            {
                description = "Tiger's messenger bag.";
            };
        };
    };
};
