class SWS_V_APC_M107_Beaver_Base : B_APC_Tracked_01_CRV_F
{
	ITEM_META(0);
	displayName = QNAME(M107 Beaver - Base);
	faction = "SWS_UNSC";
	side = 1;
    crew = "OPTRE_UNSC_Marine_Soldier_Crewman";
    typicalCargo[] = { "OPTRE_UNSC_ODST_Soldier" };
    editorPreview = QPATHTOF(data\beaver\editor_preview.jpg);
	
    textureList[] = {
        "SWS_Basic", 1,
        "SWS_Flecktarn", 0,
        "SWS_Winter", 0
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\beaver\chassis.paa),
        QPATHTOF(data\beaver\body.paa),
        QPATHTOF(data\beaver\turret.paa),
        QPATHTOF(data\beaver\crane.paa),
		GREEN_NET_TEXTURE
    };

	class TextureSources : TextureSources{
		class SWS_Basic
		{
			displayName = QNAME(SWS);
			author = QUOTE(AUTHOR);
			textures[] = {
				QPATHTOF(data\beaver\chassis.paa),
				QPATHTOF(data\beaver\body.paa),
				QPATHTOF(data\beaver\turret.paa),
				QPATHTOF(data\beaver\crane.paa),
				GREEN_NET_TEXTURE
			};
		};
		class SWS_Flecktarn
		{
			displayName = QNAME(SWS (Flecktarn Camo));
			author = QUOTE(AUTHOR);
			textures[] = {
				QPATHTOF(data\beaver\chassis_fleck.paa),
				QPATHTOF(data\beaver\body_fleck.paa),
				QPATHTOF(data\beaver\turret_fleck.paa),
				QPATHTOF(data\beaver\crane_fleck.paa),
                CSAT_NET_TEXTURE
			};
		};
		class SWS_Winter
		{
			displayName = QNAME(SWS (Winter));
			author = QUOTE(AUTHOR);
			textures[] = {
				QPATHTOF(data\beaver\chassis_winter.paa),
				QPATHTOF(data\beaver\body_winter.paa),
				QPATHTOF(data\beaver\turret_winter.paa),
				QPATHTOF(data\beaver\crane_winter.paa),
                QPATHTOF(data\shared\camonet_snow.paa)
			};
		};
	};

    class TransportMagazines
    {
        MACRO_ADDMAGAZINE(SmokeShell, 2);
        MACRO_ADDMAGAZINE(SmokeShellGreen, 2);
        MACRO_ADDMAGAZINE(30Rnd_65x39_caseless_msbs_mag, 2);
    };
    class TransportWeapons
    {
        MACRO_ADDWEAPON(SWS_Weapon_AR0M37, 2);
        MACRO_ADDWEAPON(SWS_Weapon_M24RL_D_Loaded, 4);
    };
    class TransportItems
    {
        MACRO_ADDITEM(ACE_PersonalAidKit, 1);
        MACRO_ADDITEM(ACE_elasticBandage, 20);
        MACRO_ADDITEM(ToolKit, 1);
    };

    class EventHandlers : EventHandlers
    {
        init = "if (local (_this select 0)) then {[(_this select 0), """", [], nil] call bis_fnc_initVehicle;};";
		killed = "if (local (_this select 0)) then {[(_this select 0), nil, [], false] call bis_fnc_initVehicle;};";
    };
};

class SWS_V_APC_M107_Beaver : SWS_V_APC_M107_Beaver_Base
{
    SCOPE(2);
    displayName = QNAME(M107 Beaver);
    textureList[] = {"SWS_Basic", 1};
};
class SWS_V_APC_M107_Beaver_Flecktarn : SWS_V_APC_M107_Beaver_Base
{
    SCOPE(0);
    displayName = QNAME(M107 Beaver (Flecktarn));
    textureList[] = {"SWS_Flecktarn", 1};
};
class SWS_V_APC_M107_Beaver_Winter : SWS_V_APC_M107_Beaver_Base
{
    SCOPE(0);
    displayName = QNAME(M107 Beaver (Winter));
    textureList[] = {"SWS_Winter", 1};
};