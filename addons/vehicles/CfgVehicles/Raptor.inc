
#undef AUTHOR
#define AUTHOR Demon

class SWS_V_Heli_Raptor_Base : Heli_Attack_02_dynamicLoadout_base_F
    {
    ITEM_META(0);
    displayName = QNAME(Sx-48 Raptor - Base);
    faction = "SWS_UNSC";
    side = 1;
    crew = "B_UNSCAF_Pilot_01";
    typicalCargo[] = { "B_UNSCAF_Pilot_01" };

    hiddenSelectionsTextures[] = {
        QPATHTOF(data\raptor\raptor_body1_black_co.paa),
        QPATHTOF(data\raptor\raptor_body2_black_co.paa)
    };
    class TextureSources : TextureSources
    {
        class SWS_Basic
        {
            displayName = QNAME(SWS);
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_sws_co.paa),
                QPATHTOF(data\viper\turret_co.paa),
                QPATHTOF(data\viper\turret_mg_co.paa),
                CAMO_NET_TEXTURE
            };
            factions[] = {"SWS_UNSC"};
        };
        class SWS_Ritual
        {
            displayName = QNAME(SWS (Ritual Bindings));
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_sticker_co.paa),
                QPATHTOF(data\viper\turret_sticker_co.paa),
                QPATHTOF(data\viper\turret_mg_co.paa),
            };
            factions[] = {"SWS_UNSC"};
        };
        class CLA
        {
            displayName = QNAME(CLA (Captured));
            author = QUOTE(AUTHOR);
            textures[] = {
                QPATHTOF(data\viper\body_flecktarn_co.paa),
                QPATHTOF(data\viper\turret_flecktarn_captured_co.paa),
                QPATHTOF(data\viper\turret_mg_flecktarn_co.paa),
            };
            factions[] = {"O_CLA"};
        };
    };
    class Components: Components
    {
        class TransportPylonsComponent
        {
            uiPicture = "\A3\Air_F_Beta\Heli_Attack_02\Data\UI\Heli_Attack_02_3DEN_CA.paa";
            				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_4Rnd_ACE_Hellfire_AGM114K";
						priority=5;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
							"UNI_SCALPEL",
                            "DAGR"
						};
						turret[]={0};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="PylonRack_20Rnd_Rocket_03_HE_F";
						priority=4;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
							"UNI_SCALPEL",
                            "DAGR"
						};
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.56999999,0.34999999};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.58999997,0.40000001};
					};
				};
            class Presets
            {
                class Default
                {
                    displayName="$STR_vehicle_default";
                    attachment[]=
                    {
                        "PylonRack_4Rnd_ACE_Hellfire_AGM114K",
                        "PylonRack_20Rnd_Rocket_03_HE_F",
                        "PylonRack_20Rnd_Rocket_03_HE_F",
                        "PylonRack_4Rnd_ACE_Hellfire_AGM114K"
                    };
                };
                class AT
                {
                    displayName="AT (Laser/Radar)";
                    attachment[]=
                    {
                        "PylonRack_4Rnd_ACE_Hellfire_AGM114K",
                        "PylonRack_4Rnd_ACE_Hellfire_AGM114L",
                        "PylonRack_4Rnd_ACE_Hellfire_AGM114L",
                        "PylonRack_4Rnd_ACE_Hellfire_AGM114K"
                    };
                };
                class MULTI
                {
                    displayName="AA/AT";
                    attachment[]=
                    {
                        "PylonRack_4Rnd_ACE_Hellfire_AGM114K",
                        "PylonRack_1Rnd_Missile_AA_03_F",
                        "PylonRack_1Rnd_Missile_AA_03_F",
                        "PylonRack_4Rnd_ACE_Hellfire_AGM114K"
                    };
                };
            };
        };
    };
};

class SWS_V_Heli_Raptor : SWS_V_Heli_Raptor_Base
{
    SCOPE(2);
    displayName = QNAME(Sx-48 Raptor);
};