class XtdGearModels {
    class CfgWeapons {
        class OPTRE_Shotgun {
            label = "Shotguns";
            author = "OPTRE";
            options[] = {"Version", "Variant"};

            class Version {
                label = "Version";
                values[] = {"M45", "M45A", "M45E", "M90A"};
                class M45 {
                    label = "M45";
                };
                class M45A {
                    label = "M45A";
                };
                class M45E {
                    label = "M45E";
                };
                class M90 {
                    label = "M90";
                };
            };

            class Variant {
                label = "Variant";
                values[] = {"Standard", "Tactical"};
                class Standard {
                    label = "Standard";
                };

                class Tactical {
                    label = "Tactical";
                };
            };
        };

        class 19th_br_55 {
            label = "[19th] BR-55";
            options[] = {"Underbarrel"};
            class Underbarrel {
                label = "Underbarrel Attachment";
                values[] = {"None", "GL"};

                class None {
                    description = "Standard loadout.";
                };

                class GL {
                    description = "Underbarrel grendade launcher.";
                };
            };
        };
    };
};
