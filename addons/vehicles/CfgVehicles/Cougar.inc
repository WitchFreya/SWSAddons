class SWS_V_APC_M35_Cougar_Base : I_APC_Wheeled_03_cannon_F
{
    ITEM_META(0);
    displayName = QNAME(M35 Cougar - Base);
    faction = "SWS_UNSC";
    side = 1;
    crew = "OPTRE_UNSC_Marine_Soldier_Crewman";
    typicalCargo[] = { "OPTRE_UNSC_ODST_Soldier" };
    editorPreview = QPATHTOF(data\cougar\editor_preview.jpg);

    armor = 650;
    enginePower = 525;
    crewCrashProtection = 0.05;

    reportRemoteTargets = 1;
    reportOwnPosition = 1;
    receiveRemoteTargets = 1;

    textureList[] = {
        "SWS_Basic", 1,
        "SWS_Flecktarn", 1,
        "SWS_Cobra", 0,
        "Guerilla_01", 0,
        "Guerilla_02", 0,
        "Guerilla_03", 0,
        "Indep", 0
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\cougar\body.paa),
        QPATHTOF(data\cougar\body_2.paa),
        QPATHTOF(data\cougar\turret.paa),
        QPATHTOF(data\cougar\exhaust.paa),
        GREEN_NET_TEXTURE,
        QPATHTOF(data\cougar\cage.paa)
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
                class IRSensorComponent : SensorTemplateIR 
                {
                    animDirection = "mainTurret";
                };
            };
        };
    };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
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
            class Turrets: Turrets
            {
                class CommanderOptics: CommanderOptics
                {
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
        class SWS_Basic
        {
            displayName = QNAME(SWS);
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\cougar\body.paa),
                QPATHTOF(data\cougar\body_2.paa),
                QPATHTOF(data\cougar\turret.paa),
                QPATHTOF(data\cougar\exhaust.paa),
                GREEN_NET_TEXTURE,
                QPATHTOF(data\cougar\cage.paa)
            };
        };
        class SWS_Flecktarn
        {
            displayName = QNAME(SWS (Flecktarn Camo));
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\cougar\body_fleck.paa),
                QPATHTOF(data\cougar\body_2_fleck.paa),
                QPATHTOF(data\cougar\turret_fleck.paa),
                QPATHTOF(data\cougar\exhaust.paa),
                CSAT_NET_TEXTURE,
                AAF_CAGE_TEXTURE
            };
        };
        class SWS_Cobra
        {
            displayName = QNAME(SWS (Cobra));
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\cougar\body.paa),
                QPATHTOF(data\cougar\body_2.paa),
                QPATHTOF(data\cougar\turret_cobra.paa),
                QPATHTOF(data\cougar\exhaust.paa),
                GREEN_NET_TEXTURE,
                QPATHTOF(data\cougar\cage.paa)
            };
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

class SWS_V_APC_M35_Cougar : SWS_V_APC_M35_Cougar_Base
{
    SCOPE(2);
    displayName = QNAME(M35 Cougar);
    textureList[] = {"SWS_Basic", 1};
};
class SWS_V_APC_M35_Cougar_Flecktarn : SWS_V_APC_M35_Cougar_Base
{
    SCOPE(0);
    displayName = QNAME(M35 Cougar (Flecktarn));
    textureList[] = {"SWS_Flecktarn", 1};
};
class SWS_V_APC_M35_Cougar_Cobra : SWS_V_APC_M35_Cougar_Base
{
    SCOPE(0);
    displayName = QNAME(M35 Cougar (Cobra));
    textureList[] = {"SWS_Cobra", 1};
};