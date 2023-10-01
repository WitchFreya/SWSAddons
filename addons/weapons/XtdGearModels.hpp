class XtdGearModels {
    class CfgWeapons {
        class SWS_Weapon_Autorifles {
            label = QNAME(AR);
            icon = "\sws_main\data\icon_sws_ca.paa";
            options[] = {"Body","Underbarrel"};

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

            class Body
            {
                label = "Body Configuration";
                values[] = {"0M37S", "MXS"};

                class 0M37S
                {
                    description = "AR-0M37S";
                };

                class MXS
                {
                    description = "ARMXS";
                };
            };
        };

        class SWS_Weapon_MA5BSx {
            label = QNAME(MA5BSx);
            icon = "\sws_main\data\icon_sws_ca.paa";
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
