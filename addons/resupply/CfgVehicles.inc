#define CLASSES_VEHICLES \
    "SWS_Ammo_SupplyPod_Empty", \
    "SWS_Ammo_SupplyPod_Basic", \
    "SWS_Ammo_SupplyPod_Medical", \
    "SWS_Ammo_SupplyPod_Howdy", \
    "SWS_Ammo_SupplyPod_Spnkr", \
    "SWS_Ammo_SupplyPod_SM247", \
    "Box_SWS_TeamBox"


class CfgVehicles
{
    class NATO_Box_Base;
    class OPTRE_Ammo_SupplyPod_Empty;

	class Box_SWS_TeamBox : NATO_Box_Base {
        displayName = QNAME(Team Supply Box);
        icon = "iconCrateWpns";
        ITEM_META(2);
        OBJ_CATEGORY(SWSResupply);
        side = 3;

        maximumLoad = 8000;
        transportMaxWeapons = 14;
        transportMaxMagazines = 144;
        transportMaxBackpacks = 12;

        transportAmmo = 0;
        transportRepair = 0;
        transportFuel = 0;
        supplyRadius = -1;
        armor = 10000;

        model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";

        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f\ammoboxes\data\supplydrop_co.paa"};

        ace_dragging_canDrag = 1;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;  
        ace_dragging_ignoreWeightCarry = 1;
        
        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;

        class TransportMagazines {
                MACRO_ADDMAGAZINE(OPTRE_60Rnd_762x51_Mag,80);
                MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_msbs,40);
                MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_msbs_Tracers_Blue,15);
                MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless,40);
                MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_Tracers_Blue,15);
                MACRO_ADDMAGAZINE(OPTRE_36Rnd_95x40_Mag,20);
                MACRO_ADDMAGAZINE(OPTRE_60Rnd_5x23mm_Mag,30);
                MACRO_ADDMAGAZINE(OPTRE_15Rnd_762x51_Mag,20);
                MACRO_ADDMAGAZINE(SWS_Magazine_Grenade_M3Sx,16);
                MACRO_ADDMAGAZINE(HandGrenade,16);
                MACRO_ADDMAGAZINE(SmokeShell,16);
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_bloodIV,30);
            MACRO_ADDITEM(ACE_elasticBandage,100);
            MACRO_ADDITEM(ACE_quikclot,40);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(SWS_Weapon_M24RL_D_Loaded,8);
        };
    };

    class SWS_Ammo_SupplyPod_Empty : OPTRE_Ammo_SupplyPod_Empty {
        displayName = QNAME(Supply Pod (Empty));
        icon = "iconCrateWpns";

        ITEM_META(2);
        OBJ_CATEGORY(SWSResupply);
        side = 3;

        transportMaxWeapons = 8;
        transportMaxMagazines = 40;
        transportMaxBackpacks = 4;
        maximumLoad = 4000;

        transportAmmo = 0;
        transportRepair = 0;
        transportFuel = 0;

        supplyRadius = -1;
        armor = 10000;

        model = "\OPTRE_misc\crates\Supply_pod.p3d";

		hiddenselections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_base_co.paa)};

        ace_dragging_canDrag = 1;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;  
        ace_dragging_ignoreWeightCarry = 1;

        ace_cargo_size = 2;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;

        class TransportMagazines{};
        class TransportWeapons{};
        class TransportItems{};
    };
    class SWS_Ammo_SupplyPod_Basic : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(Basic Resupply);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_ammo_co.paa)};
        class TransportMagazines
            {
                MACRO_ADDMAGAZINE(OPTRE_60Rnd_762x51_Mag,30);
                MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_msbs,10);
                MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_msbs_Tracers_Blue,5);
                MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless,10);
                MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_Tracers_Blue,5);
                MACRO_ADDMAGAZINE(OPTRE_36Rnd_95x40_Mag,8);
                MACRO_ADDMAGAZINE(OPTRE_60Rnd_5x23mm_Mag,10);
                MACRO_ADDMAGAZINE(OPTRE_15Rnd_762x51_Mag,8);
                MACRO_ADDMAGAZINE(SWS_Magazine_Grenade_M3Sx,4);
                MACRO_ADDMAGAZINE(HandGrenade,8);
                MACRO_ADDMAGAZINE(SmokeShell,8);
            };
    };
    class SWS_Ammo_SupplyPod_Medical : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(Medical Resupply);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_medical_co.paa)};
        class TransportItems
        {
            MACRO_ADDITEM(ACE_bloodIV,10);
            MACRO_ADDITEM(ACE_elasticBandage,40);
            MACRO_ADDITEM(ACE_quikclot,10);
        };
    };
    class SWS_Ammo_SupplyPod_Howdy : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(Howdy Resupply);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_base_co.paa)};
        class TransportWeapons
        {
            MACRO_ADDWEAPON(SWS_Weapon_M24RL_D_Loaded,4);
        };
    };
    class SWS_Ammo_SupplyPod_Spnkr : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(SPNKR Resupply);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_spnkr_co.paa)};
        class TransportWeapons
        {
            MACRO_ADDWEAPON(OPTRE_M41_SSR,1);
        };
        class TransportMagazines
        {
            MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HE_Thermal_ProximityFuse,2);
            MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HEAT_SACLOS,4);
            MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HEAT_SALH,2);
            MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HEAT_Guided,2);
            MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HEAP,2);
            MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HEAT,2);
        };
    };
    class SWS_Ammo_SupplyPod_SM247 : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(SM247 Resupply);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_mg_co.paa)};
        class TransportMagazines
        {
            MACRO_ADDMAGAZINE(SWS_Magazine_200Rnd_762x51_Mag,4);
            MACRO_ADDMAGAZINE(SWS_Magazine_200Rnd_762x51_Mag_Tracer,4);
            MACRO_ADDMAGAZINE(SWS_Magazine_400Rnd_762x51_Mag,2);
            MACRO_ADDMAGAZINE(SWS_Magazine_400Rnd_762x51_Mag_Tracer,2);
        };
    };
    class SWS_Ammo_SupplyPod_Eng_Mines : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(Sabotage);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_ammo_co.paa)};
        class TransportMagazines
        {
            MACRO_ADDMAGAZINE(APERSMineDispenser_Mag,6);
            MACRO_ADDMAGAZINE(APERSTripMine_Wire_Mag,6);
            MACRO_ADDMAGAZINE(ATMine_Range_Mag,6);
        };
        class TransportItems 
        {
            MACRO_ADDITEM(ACE_DefusalKit,1);
            MACRO_ADDITEM(ACE_Clacker,1);
            MACRO_ADDITEM(ace_marker_flags_red,10);
            MACRO_ADDITEM(ace_marker_flags_white,10);
            MACRO_ADDITEM(MineDetector,2);
        };
    };
    class SWS_Ammo_SupplyPod_Eng_Demo : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(Demolitions);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_ammo_co.paa)};
        class TransportMagazines
        {
            MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,8);
            MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,4);
            MACRO_ADDMAGAZINE(C7_Remote_Mag,6);
        };
        class TransportItems 
        {
            MACRO_ADDITEM(ACE_DefusalKit,2);
            MACRO_ADDITEM(ACE_Clacker,4);
            MACRO_ADDITEM(ACE_DeadManSwitch,1);
        };
    };
        class SWS_Ammo_SupplyPod_Eng_Support : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(Engineering);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_ammo_co.paa)};

        class TransportItems 
        {
            MACRO_ADDITEM(ACE_DefusalKit,2);
            MACRO_ADDITEM(ACE_Clacker,2);
            MACRO_ADDITEM(ace_marker_flags_red,20);
            MACRO_ADDITEM(ace_marker_flags_white,20);
            MACRO_ADDITEM(MineDetector,4);
            MACRO_ADDITEM(ACE_wirecutter,2);
            MACRO_ADDITEM(ACE_Fortify,4);
            MACRO_ADDITEM(ToolKit,2);

        };
    };
};
