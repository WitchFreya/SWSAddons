class XtdGearModels {
    class CfgWeapons {
        class WEAPON(AR0M37) {
            label = NAME(AR-0M37 6.5mm);
            icon = "\sws_main\data\icon_sws_ca.paa";
            options[] = {"Underbarrel"};

            class Underbarrel {
                label = "Underbarrel Attachment";
                values[] = {"None", "GL", "SHT"};

                class None {
                    description = "Standard loadout.";
                };

                class GL {
                    description = "Underbarrel grendade launcher.";
                };

                class SHT {
                    description = "Underbarrel shotgun.";
                };
            };
        };
    };
};
