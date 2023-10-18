#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {"Box_SWS_TeamBox","SWS_Ammo_SupplyPod_Empty","SWS_Ammo_SupplyPod_Basic","SWS_Ammo_SupplyPod_Medical","SWS_Ammo_SupplyPod_Howdy"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OPTRE_Misc",
            "SWS_Weapons",
            "ace_medical_treatment"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};

class CfgEditorCategories {
	class SWSObjects
	{
		displayName = "[SWS] Objects"; // Vague because arma wants it to be
	};
};
class CfgEditorSubcateogries {
    class SWSResupply {
        displayName = "Supply Pods & Boxes"; // if you try to use "default" it moves it to "other" subcategory.
    };
};

class CfgVehicles {
    
    class NATO_Box_Base;
	class Box_SWS_TeamBox : NATO_Box_Base {
        dlc = "SWS";
        displayName = "[SWS] Team Supply Box";
        author = "Black";
        icon = "iconCrateWpns";
        transportMaxWeapons = 14;
        transportMaxMagazines = 144;
        maximumLoad = 8000;
        transportMaxBackpacks = 12;
        transportAmmo = 0;
        transportRepair = 0;
        transportFuel = 0;
        supplyRadius = 4.5;
        armor = 10000;
        model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f\ammoboxes\data\supplydrop_co.paa"};
        scope = 2;
        side = 4;

        editorCategory = "SWSLogistics";
        editorSubcategory = "SWSResupply";

        class TransportMagazines {
                MAG_XX(OPTRE_60Rnd_762x51_Mag,160);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless_msbs,80);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless_msbs_Tracers_Blue,80);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless,80);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless_Tracers_Blue,80);
                MAG_XX(OPTRE_36Rnd_95x40_Mag,40);
                MAG_XX(OPTRE_60Rnd_5x23mm_Mag,120);
                MAG_XX(OPTRE_15Rnd_762x51_Mag,40);
        };
        class TransportItems {
            ITEM_XX(ACE_bloodIV,40);
            ITEM_XX(ACE_elasticBandage,200);
            ITEM_XX(ACE_quikclot,50);
        };
        class TransportWeapons {
            WEAP_XX(howdyclassname,12);
        };
    };


    class OPTRE_Ammo_SupplyPod_Empty;
    class SWS_Ammo_SupplyPod_Empty : OPTRE_Ammo_SupplyPod_Empty {
        dlc = "OPTRE";
        displayName = "[SWS] Supply Pod (Empty)";

        author = "Black";
        icon = "iconCrateWpns";
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"optre_misc\crates\data\supplypod_co.paa"};
        transportMaxWeapons = 8;
        transportMaxMagazines = 40;
        maximumLoad = 2000;
        transportMaxBackpacks = 4;
        transportAmmo = 0;
        transportRepair = 0;
        transportFuel = 0;
        supplyRadius = 1.5;
        armor = 10000;
        scope = 2;
        side = 4;

        editorCategory = "SWSLogistics";
        editorSubcategory = "SWSResupply";
        class TransportMagazines{};
        class TransportWeapons{};
        class TransportItems{};
    };
    class SWS_Ammo_SupplyPod_Basic : SWS_Ammo_SupplyPod_Empty {
        DLC = "SWS";
        displayName = "[SWS] Basic Resupply";
        author = "Black";
        hiddenselectionstextures[] = {"optre_misc\crates\data\OPTRE_MA5k_Pod.paa"};
        scope = 2;
        side = 4;

        editorCategory = "SWSLogistics";
        editorSubcategory = "SWSResupply";
        class TransportMagazines
            {
                MAG_XX(OPTRE_60Rnd_762x51_Mag,40);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless_msbs,10);
                MAG_XX(SWS_Magazine_60Rnd_65x39_Caseless_msbs_Tracers_Blue,10);
                MAG_XX(OPTRE_36Rnd_95x40_Mag,10);
                MAG_XX(OPTRE_60Rnd_5x23mm_Mag,15);
                MAG_XX(OPTRE_15Rnd_762x51_Mag,10);
        };
    };

    class SWS_Ammo_SupplyPod_Medical : SWS_Ammo_SupplyPod_Empty {
        displayName = "[SWS] Medical Resupply";
        DLC = "SWS";
        author = "Black";
        hiddenselectionstextures[] = {"optre_misc\crates\data\OPTRE_MA5k_Pod.paa"};
        scope = 2;
        side = 4;

        editorCategory = "SWSLogistics";
        editorSubcategory = "SWSResupply";
        class TransportItems {
            ITEM_XX(ACE_bloodIV,10);
            ITEM_XX(ACE_elasticBandage,40);
            ITEM_XX(ACE_quikclot,10);
        };
    };

    class SWS_Ammo_SupplyPod_Howdy : SWS_Ammo_SupplyPod_Empty {
        displayName = "[SWS] Howdy Resupply";
        DLC = "SWS";
        author = "Black";
        hiddenselectionstextures[] = {"optre_misc\crates\data\OPTRE_MA5k_Pod.paa"};
        scope = 2;
        side = 4;

        editorCategory = "SWSLogistics";
        editorSubcategory = "SWSResupply";
        class TransportWeapons
        {
            WEAP_XX(howdyclassname,4);
        };
        
    };    
};


