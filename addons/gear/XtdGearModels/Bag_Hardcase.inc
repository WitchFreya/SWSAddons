#define C_VARIANT(var0,var1) class var0 { label = QUOTE(var0); description = QUOTE(A modified medical satchel for var1.); }

class VEHICLE(Bag_Hardcase) {
    label = QNAME(Hardcase);
    author = QUOTE(AUTHOR);
    options[] = {"Variant"};

    class Variant {
        label = "Variant";
        values[] = {"Medical", "Sawbones", "Blue", "Vertigo"};

        class Medical {
            label = "Medical";
            description = "Medical Hardcase";
        };

        C_VARIANT(Blue,Blue);
        C_VARIANT(Sawbones,Rory ""Sawbones"" Aldrich);
        C_VARIANT(Vertigo,Vertigo);
    };
};

#undef C_VARIANT
