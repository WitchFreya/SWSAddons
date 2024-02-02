class SWS_V_APC_M107_Beaver_Base : B_APC_Tracked_01_CRV_F
{
	ITEM_META(0);
	displayName = QNAME(M107 Beaver - Base);
	faction = "SWS_UNSC";
	side = 1;
    crew = "OPTRE_UNSC_Marine_Soldier_Crewman";
    typicalCargo[] = { "OPTRE_UNSC_ODST_Soldier" };
    editorPreview = QPATHTOF(data\beaver\editor_preview.jpg);

	ace_cargo_space = 10;

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
		A3_TEX_CAMONET_GREEN
    };

	class TextureSources : TextureSources
    {
		class SWS_Basic
		{
			displayName = QNAME(SWS);
			author = QUOTE(AUTHOR);
			textures[] = {
				QPATHTOF(data\beaver\chassis.paa),
				QPATHTOF(data\beaver\body.paa),
				QPATHTOF(data\beaver\turret.paa),
				QPATHTOF(data\beaver\crane.paa),
				A3_TEX_CAMONET_GREEN
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
                A3_TEX_CAMONET_CSAT
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
        QPATHTOF(data\camonet_snow.paa)
			};
		};
	};

    class TransportMagazines
    {
        MACRO_ADDMAGAZINE(SmokeShell,2);
        MACRO_ADDMAGAZINE(SmokeShellGreen,2);
		MACRO_ADDMAGAZINE(3rnd_UGL_FlareWhite_F,2);
		MACRO_ADDMAGAZINE(SWS_Magazine_3Rnd_FlareSmoke_Green,2);
        MACRO_ADDMAGAZINE(30Rnd_65x39_caseless_msbs_mag,2);
    };
    class TransportWeapons
    {
        MACRO_ADDWEAPON(SWS_Weapon_AR0M37_GL,2);
        MACRO_ADDWEAPON(SWS_Weapon_M24RL_D_Loaded,4);
    };
    class TransportItems
    {
        MACRO_ADDITEM(ACE_PersonalAidKit,2);
        MACRO_ADDITEM(ACE_elasticBandage,60);
        MACRO_ADDITEM(ACE_tourniquet,8);
        MACRO_ADDITEM(ACE_surgicalKit,2);
        MACRO_ADDITEM(ACE_splint,8);
		MACRO_ADDITEM(ACE_bloodIV,6);
        MACRO_ADDITEM(ToolKit,2);
        MACRO_ADDITEM(ACE_wirecutter,2);
        MACRO_ADDITEM(ACE_UAVBattery,2);
        MACRO_ADDITEM(ACE_Fortify,4);
        MACRO_ADDITEM(MineDetector,3);
        MACRO_ADDITEM(B_UavTerminal,2);
		MACRO_ADDITEM(SWS_Bag_UAV_SMQ94,1);
		MACRO_ADDITEM(SWS_Bag_UAV_MiniPelican,1);
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
