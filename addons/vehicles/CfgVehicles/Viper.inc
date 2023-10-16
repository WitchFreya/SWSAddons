class SWS_Vehicle_M700_Viper_MBT : I_MBT_03_cannon_F {
    ITEM_META(2);
    displayName = QNAME(M700 Viper);
    _generalMacro = "SWS_Vehicle_M700_Viper_MBT";
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_MBT_03_cannon_F.jpg";
    side = 1;
    faction = "SWS_UNSC";
    crew = "OPTRE_UNSC_Marine_Soldier_Crewman";
    typicalCargo[] = {
        "OPTRE_UNSC_Marine_Soldier"
    };

    class Turrets: Turrets {
        class MainTurret: MainTurret {
            class Turrets: Turrets {
                class CommanderOptics: CommanderOptics
                {
                    weapons[]=
                    {
                        "HMG_127_APC",
                        "SmokeLauncher"
                    };
                    magazines[]=
                    {
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        "SmokeLauncherMag",
                        "SmokeLauncherMag",
                        "SmokeLauncherMag"
                    };
                };
            };
        };
    };
};