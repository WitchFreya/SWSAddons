#define CAMO_NET_TEXTURE QUOTE(A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa)

class SWS_V_MBT_M700_Viper : I_MBT_03_cannon_F {
    ITEM_META(2);
    displayName = QNAME(M700 Viper);
    faction = "SWS_UNSC";
    side = 1;
    crew = "OPTRE_UNSC_Marine_Soldier_Crewman";
    typicalCargo[] = { "OPTRE_UNSC_Marine_Soldier" };
    
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
                        "200Rnd_127x99_mag_Tracer_Red",
                        "200Rnd_127x99_mag_Tracer_Red",
                        "200Rnd_127x99_mag_Tracer_Red",
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
                "cannon_125mm_advanced",
                "LMG_coax",
            };
            magazines[] = {
                "20Rnd_125mm_APFSDS_T_Red",
                "12Rnd_125mm_HEAT_T_Red",
                "12Rnd_125mm_HE_T_Red",
                "4Rnd_125mm_cannon_missiles",
                "200Rnd_762x51_Belt_Red",
                "200Rnd_762x51_Belt_Red",
                "200Rnd_762x51_Belt_Red",
                "200Rnd_762x51_Belt_Red",
                "200Rnd_762x51_Belt_Red",
                "200Rnd_762x51_Belt_Red",
                "200Rnd_762x51_Belt_Red",
                "200Rnd_762x51_Belt_Red",
                "200Rnd_762x51_Belt_Red",
                "200Rnd_762x51_Belt_Red"
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
        class SWS_02 {
            displayName = "Digi";
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_texture_digi),
                QPATHTOF(data\viper\turret_texture_digi),
                QPATHTOF(data\viper\turret_mg_texture_digi),
                CAMO_NET_TEXTURE
            };
            factions[] = {
                "SWS_UNSC"
            };
        };
        class SWS_03 {
            displayName = "Mud";
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_texture_mud),
                QPATHTOF(data\viper\turret_texture),
                QPATHTOF(data\viper\turret_mg_texture),
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
};