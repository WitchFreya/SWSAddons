#define CAMO_NET_TEXTURE QUOTE(A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa)

class SWS_V_MBT_M700_Viper : I_MBT_03_cannon_F {
    ITEM_META(2);
    displayName = QNAME(M700 Viper);
    faction = "SWS_UNSC";
    side = 1;
    crew = "OPTRE_UNSC_Marine_Soldier_Crewman";
    typicalCargo[] = { "OPTRE_UNSC_Marine_Soldier" };

    class Turrets: Turrets {
        class MainTurret: MainTurret {
            class Turrets: Turrets {
                class CommanderOptics: CommanderOptics
                {
                    // memoryPointGunnerOutOptics="gunneroutview";
                    isPersonTurret = 0;
                    weapons[] =
                    {
                        "HMG_127_APC",
                        "SmokeLauncher"
                    };
                    magazines[] =
                    {
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        "SmokeLauncherMag",
                        "SmokeLauncherMag",
                        "SmokeLauncherMag",
                        "SmokeLauncherMag",
                        "SmokeLauncherMag"
                    };
                };
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