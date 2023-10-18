#define CAMO_NET_TEXTURE QUOTE(A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa)

class SWS_V_MBT_M700_Viper : I_MBT_03_cannon_F {
    ITEM_META(2);
    displayName = QNAME(M700 Viper);
    faction = "SWS_UNSC";
    side = 1;
    crew = "OPTRE_UNSC_Marine_Soldier_Crewman";
    typicalCargo[] = { "OPTRE_UNSC_Marine_Soldier" };
    editorPreview = QPATHTOF(data\viper\editor_preview.jpg);
    
    radarType=2;
    reportRemoteTargets=1;
    reportOwnPosition=1;
    receiveRemoteTargets=1;
    class Components: Components {
        class SensorsManagerComponent {
            class Components {
                class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {
                    class AirTarget {
                        minRange=8000;
                        maxRange=8000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };
                    class GroundTarget {
                        minRange=8000;
                        maxRange=8000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };
                };
                class DataLinkSensorComponent: SensorTemplateDataLink { };
                class SensorTemplateAntiRadiation: SensorTemplateAntiRadiation { };
            };
        };
    };

    class Turrets: Turrets {
        class MainTurret: MainTurret {
            class Turrets: Turrets {
                class CommanderOptics: CommanderOptics {
                    weapons[] = {
                        "HMG_127_APC",
                        "Laserdesignator_mounted",
                        "SmokeLauncher"
                    };
                    magazines[] = {
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        "SmokeLauncherMag",
                        "SmokeLauncherMag",
                        "SmokeLauncherMag",
                        "SmokeLauncherMag",
                        "SmokeLauncherMag",
                        "Laserbatteries"
                    };
                    class Components {
                        class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander {
                            class Components: components {
                                class SensorDisplay {
                                    componentType="SensorsDisplayComponent";
                                    range[]={4000,2000,1000,8000};
                                    resource="RscCustomInfoSensors";
                                };
                            };
                        };
                        class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander {
                            defaultDisplay="SensorDisplay";
                            class Components: components {
                                class SensorDisplay {
                                    componentType="SensorsDisplayComponent";
                                    range[]={4000,2000,1000,8000};
                                    resource="RscCustomInfoSensors";
                                };
                            };
                        };
                    };
                };
            };
            weapons[] = {
                "cannon_120mm_long",
                "LMG_coax"
            };
            magazines[] = {
                "32Rnd_120mm_APFSDS_shells_Tracer_Yellow",
                "12Rnd_120mm_HEAT_MP_T_Yellow",
                "12Rnd_120mm_HE_shells_Tracer_Yellow",
                "4Rnd_120mm_LG_cannon_missiles",
                "200Rnd_762x51_Belt_Yellow",
                "200Rnd_762x51_Belt_Yellow",
                "200Rnd_762x51_Belt_Yellow",
                "200Rnd_762x51_Belt_Yellow",
                "200Rnd_762x51_Belt_Yellow",
                "200Rnd_762x51_Belt_Yellow",
                "200Rnd_762x51_Belt_Yellow",
                "200Rnd_762x51_Belt_Yellow",
                "200Rnd_762x51_Belt_Yellow",
                "200Rnd_762x51_Belt_Yellow"
            };
        };
    };

    textureList[] = {
        "SWS_01", 1,
        "SWS_02", 1,
        "SWS_03", 1
    };
    class TextureSources {
        class SWS_01 {
            displayName = "Emblem";
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_texture_emblem),
                QPATHTOF(data\viper\turret_texture_emblem),
                QPATHTOF(data\viper\turret_mg_texture),
                CAMO_NET_TEXTURE
            };
            factions[] = {
                "SWS_UNSC"
            };
        };
        class SWS_02 {
            displayName = "Flat";
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_texture),
                QPATHTOF(data\viper\turret_texture),
                QPATHTOF(data\viper\turret_mg_texture),
                CAMO_NET_TEXTURE
            };
            factions[] = {
                "SWS_UNSC"
            };
        };
        class SWS_03 {
            displayName = "Flecktarn";
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_texture_flecktarn),
                QPATHTOF(data\viper\turret_texture_flecktarn),
                QPATHTOF(data\viper\turret_mg_texture_flecktarn),
                CAMO_NET_TEXTURE
            };
            factions[] = {
                "SWS_UNSC"
            };
        };
    };

    hiddenSelectionsTextures[] = {
        QPATHTOF(data\viper\body_texture),
        QPATHTOF(data\viper\turret_texture),
        QPATHTOF(data\viper\turret_mg_texture),
        CAMO_NET_TEXTURE
    };
    class TransportMagazines {
        class _xx_SmokeShell {
            magazine="SmokeShell";
            count=2;
        };
        class _xx_SmokeShellGreen {
            magazine="SmokeShellGreen";
            count=2;
        };
        class _xx_30Rnd_65x39_caseless_msbs_mag {
            magazine="30Rnd_65x39_caseless_msbs_mag";
            count=4;
        };
    };
    class TransportWeapons {
        class _xx_SWS_Weapon_AR0M37 {
            weapon = "SWS_Weapon_AR0M37";
            count = 2;
        };
    };
    class TransportItems {
        class _xx_ACE_PersonalAidKit {
            name = "ACE_PersonalAidKit";
            count = 1;
        };
        class _xx_ACE_elasticBandage {
            name = "ACE_elasticBandage";
            count = 20;
        };
        class _xx_ToolKit {
            name = "ToolKit";
            count = 1;
        };
    };
};