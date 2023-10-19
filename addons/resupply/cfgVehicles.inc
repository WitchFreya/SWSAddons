
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

        class TransportMagazines {
                MAG_XX(OPTRE_60Rnd_762x51_Mag,80);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless_msbs,40);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless_msbs_Tracers_Blue,15);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless,40);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless_Tracers_Blue,15);
                MAG_XX(OPTRE_36Rnd_95x40_Mag,20);
                MAG_XX(OPTRE_60Rnd_5x23mm_Mag,30);
                MAG_XX(OPTRE_15Rnd_762x51_Mag,20);
        };
        class TransportItems {
            ITEM_XX(ACE_bloodIV,30);
            ITEM_XX(ACE_elasticBandage,100);
            ITEM_XX(ACE_quikclot,40);
        };
        class TransportWeapons {
            WEAP_XX(SWS_Weapon_M24RL_D_Loaded,8);
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

        
        class TransportMagazines{};
        class TransportWeapons{};
        class TransportItems{};
    };
    class SWS_Ammo_SupplyPod_Basic : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(Basic Resupply);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_ammo_co.paa)};
        class TransportMagazines
            {
                MAG_XX(OPTRE_60Rnd_762x51_Mag,30);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless_msbs,10);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless_msbs_Tracers_Blue,5);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless,10);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless_Tracers_Blue,5);
                MAG_XX(OPTRE_36Rnd_95x40_Mag,8);
                MAG_XX(OPTRE_60Rnd_5x23mm_Mag,10);
                MAG_XX(OPTRE_15Rnd_762x51_Mag,8);
            };
    };
    class SWS_Ammo_SupplyPod_Medical : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(Medical Resupply);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_medical_co.paa)};
        class TransportItems 
        {
            ITEM_XX(ACE_bloodIV,10);
            ITEM_XX(ACE_elasticBandage,40);
            ITEM_XX(ACE_quikclot,10);
        };
    };
    class SWS_Ammo_SupplyPod_Howdy : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(Howdy Resupply);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_base_co.paa)};
        class TransportWeapons
        {
            WEAP_XX(SWS_Weapon_M24RL_D_Loaded,4);
        };
    };
    class SWS_Ammo_SupplyPod_Spnkr : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(SPNKR Resupply);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_spnkr_co.paa)};
        class TransportWeapons 
        {
            WEAP_XX(OPTRE_M41_SSR,1);
        };
        class TransportMagazines 
        {
            MAG_XX(OPTRE_M41_Twin_HEAT_Thermal_ProximityFuse,2);
            MAG_XX(OPTRE_M41_Twin_HEAT_SACLOS,4);
            MAG_XX(OPTRE_M41_Twin_HEAT_SALH,2);
            MAG_XX(OPTRE_M41_Twin_HEAT_Guided,2);
            MAG_XX(OPTRE_M41_Twin_HEAP,2);
            MAG_XX(OPTRE_M41_Twin_HEAT,2);
        };
    };
    class SWS_Ammo_SupplyPod_SM247 : SWS_Ammo_SupplyPod_Empty {
        displayName = QNAME(SM247 Resupply);
        hiddenSelectionsTextures[] = {QPATHTOF(data\sws_supplypod_mg_co.paa)};
        class TransportMagazines 
        {
            MAG_XX(SWS_Magazine_200Rnd_762x51_Mag,4);
            MAG_XX(SWS_Magazine_200Rnd_762x51_Mag_Tracer,4);
            MAG_XX(SWS_Magazine_400Rnd_762x51_Mag,2);
            MAG_XX(SWS_Magazine_400Rnd_762x51_Mag_Tracer,2);
        };
    };      