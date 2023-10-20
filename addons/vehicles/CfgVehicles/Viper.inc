#define CAMO_NET_TEXTURE "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"

class SWS_V_MBT_M700_Viper_Base : I_MBT_03_cannon_F
{
    ITEM_META(0);
    displayName = QNAME(M700 Viper - Base);
    faction = "SWS_UNSC";
    side = 1;
    crew = "OPTRE_UNSC_Marine_Soldier_Crewman";
    typicalCargo[] = { "OPTRE_UNSC_ODST_Soldier" };
    editorPreview = QPATHTOF(data\viper\editor_preview.jpg);

    radarType = 2;
    reportRemoteTargets = 1;
    reportOwnPosition = 1;
    receiveRemoteTargets = 1;

    textureList[] = {
        "SWS_01", 1,
        "SWS_02", 1,
        "SWS_03", 0.1,
        "Indep_01", 0,
        "Indep_02", 0,
        "Indep_03", 0
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\viper\body_co.paa),
        QPATHTOF(data\viper\turret_co.paa),
        QPATHTOF(data\viper\turret_mg_co.paa),
        CAMO_NET_TEXTURE
    };

    class Components: Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class DataLinkSensorComponent: SensorTemplateDataLink
                {
                    class AirTarget : SWS_SensorTargetTemplate {};
                    class GroundTarget : SWS_SensorTargetTemplate {};
                };
                class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
                {
                    class AirTarget : SWS_SensorTargetTemplate {};
                    class GroundTarget : SWS_SensorTargetTemplate {};
                };
            };
        };
    };

    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            weapons[] = {
                "cannon_120mm_long",
                "LMG_coax"
            };
            magazines[] =
            {
                "20Rnd_120mm_APFSDS_shells_Tracer_Yellow",
                "12Rnd_120mm_HEAT_MP_T_Yellow",
                "12Rnd_120mm_HE_shells_Tracer_Yellow",
                "4Rnd_120mm_LG_cannon_missiles",
                MACRO_X10("200Rnd_762x51_Belt_Yellow")
            };
            class Turrets: Turrets
            {
                class CommanderOptics: CommanderOptics
                {
                    weapons[] = {
                        "HMG_127_APC",
                        "SmokeLauncher"
                    };
                    magazines[] = {
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        "200Rnd_127x99_mag_Tracer_Yellow",
                        MACRO_X5("SmokeLauncherMag")
                    };
                    class Components
                    {
                        class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
                        {
                            class Components: Components
                            {
                                class SensorDisplay : SWS_SensorDisplayTemplate {};
                            };
                        };
                        class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
                        {
                            defaultDisplay = "SensorDisplay";
                            class Components: Components
                            {
                                class SensorDisplay : SWS_SensorDisplayTemplate {};
                            };
                        };
                    };
                };
            };
        };
    };

    class TextureSources : TextureSources
    {
        class SWS_01
        {
            displayName = "SWS";
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_co.paa),
                QPATHTOF(data\viper\turret_co.paa),
                QPATHTOF(data\viper\turret_mg_co.paa),
                CAMO_NET_TEXTURE
            };
            factions[] = {"SWS_UNSC"};
        };
        class SWS_02
        {
            displayName = "SWS (Flecktarn Camo)";
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_flecktarn_co.paa),
                QPATHTOF(data\viper\turret_flecktarn_co.paa),
                QPATHTOF(data\viper\turret_mg_flecktarn_co.paa),
                CAMO_NET_TEXTURE
            };
            factions[] = {"SWS_UNSC"};
        };
        class SWS_03
        {
            // TODO: Create an in-game change texture system to avoid this being the selected texture if Cobra isn't the team in it.
            displayName = "SWS (Cobra Team)";
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_cobra_co.paa),
                QPATHTOF(data\viper\turret_cobra_co.paa),
                QPATHTOF(data\viper\turret_mg_co.paa),
                CAMO_NET_TEXTURE
            };
            factions[] = {"SWS_UNSC"};
        };
    };

    class TransportMagazines
    {
        MACRO_ADDMAGAZINE(SmokeShell,2);
        MACRO_ADDMAGAZINE(SmokeShellGreen,2);
        MACRO_ADDMAGAZINE(30Rnd_65x39_caseless_msbs_mag,2);
    };
    class TransportWeapons
    {
        MACRO_ADDWEAPON(SWS_Weapon_AR0M37,2);
    };
    class TransportItems
    {
        MACRO_ADDITEM(ACE_PersonalAidKit,1);
        MACRO_ADDITEM(ACE_elasticBandage,20);
        MACRO_ADDITEM(ToolKit,1);
    };

    class EventHandlers : EventHandlers
    {
        init = "if (local (_this select 0)) then {[(_this select 0), """", [], nil] call bis_fnc_initVehicle;};";
		killed = "if (local (_this select 0)) then {[(_this select 0), nil, [], false] call bis_fnc_initVehicle;};";
    };
};

class SWS_V_MBT_M700_Viper : SWS_V_MBT_M700_Viper_Base
{
    SCOPE(2);
    displayName = QNAME(M700 Viper);
    textureList[] = {"SWS_UNSC_01", 1};
};

class SWS_V_MBT_M700_Viper_Flecktarn : SWS_V_MBT_M700_Viper
{
    SCOPE(0);
    displayName = QNAME(M700 Viper (Flecktarn));
    textureList[] = {"SWS_UNSC_02", 1};
};

class SWS_V_MBT_M700_Viper_Cobra : SWS_V_MBT_M700_Viper
{
    SCOPE(0);
    displayName = QNAME(M700 Viper (Cobra));
    textureList[] = {"SWS_UNSC_03", 1};
};
