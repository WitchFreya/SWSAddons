class CfgVehicles
{
    class SWS_Bag_Drone : SWS_BaseGearModel
    {
        label = QNAME(UAV Bags);
        options[] = {"Variant", "Pattern"};
        class Pattern
        {
            label = "Pattern";
            values[] = {"Default","Maid"};

            class Default { description = "Standard design."; };
            class Maid { description = "Maid's custom design."; };
        };

        class Variant
        {
            label = "Variant";
            values[] = {"SMQ94","Demining","MiniPelican"};
            class SMQ94
            {
                label = "SMQ-94";
                description = "A powerful reconnaissance drone.";
            };
            class Demining
            {
                description = "A drone with grenades that can be dropped.";
            };
            class MiniPelican
            {
                label = "Mini-Pelican";
                description = "A drone with extra storage capacity.";
            };
        };
    };

    class SWS_Bag_Hardcase : SWS_BaseGearModel
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

    class SWS_Bag_Messenger : SWS_BaseGearModel
    {
        label = QNAME(Messenger Bag);
        options[] = {"Variant", "Purpose"};
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

        class Purpose
        {
            values[] = {
                "Standard"
                , "Heavy"
                , "RTO"
            };

            class Standard
            {
                description = "A general purpose bag.";
            };

            class Heavy
            {
                description = "A curiously deep bag that weighs more.";
            };

            class RTO
            {
                description = "Oddly, this bag has a radio hookup in its front pocket and seems to be putting out a signal.";
            };
        };
    };
};
