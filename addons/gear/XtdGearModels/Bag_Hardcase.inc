class VEHICLE(Bag_Hardcase) {
    label = QNAME(Hardcase);
    author = QUOTE(AUTHOR);
    options[] = {"Variant"};

    class Variant {
        label = "Variant";
        values[] = {"Medical", "Sawbones"};

        class Medical {
            label = "Medical";
            description = "Medical Hardcase";
        };

        class Sawbones {
            label = "Sawbones";
            description = "A modified medical satchel for Rory ""Sawbones"" Aldrich";
        };
    };
};
