class XtdGearModels {
    class CfgWeapons {
        class SWS_Weapon_NVG_NeuralLace {
            label = QNAME(NeuralLace Implant);
            author = QUOTE(AUTHOR);
            options[] = {"Clearance"};

            class Clearance {
                label = "Clearance";
                values[] = {"ODST", "ONI"};

                class ODST {
                    label = "ODST";
                    description = "Standard SWS NeuralLace design.";
                };

                class ONI {
                    label = "ONI";
                    description = "ONI NeuralLace Design";
                };
            };
        };
    };
};
