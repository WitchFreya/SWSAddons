#define CLASSES_VEHICLES          \
  "SWS_Ammo_SupplyPod"            \
  , "SWS_Ammo_SupplyPod_Basic"    \
  , "SWS_Ammo_SupplyPod_Medical"  \
  , "SWS_Ammo_SupplyPod_Howdy"    \
  , "SWS_Ammo_SupplyPod_Spnkr"    \
  , "SWS_Ammo_SupplyPod_SM247"    \
  , "SWS_Box_TeamSupplies"

class CfgVehicles {
  class NATO_Box_Base;
  class OPTRE_Ammo_SupplyPod_Empty;
  class B_SupplyCrate_F;

	class SWS_Box_TeamSupplies : B_SupplyCrate_F {
    ITEM_META(2);
    displayName = QNAME(Team Supply Box);
    icon = "iconCrateWpns";
    editorCategory = "SWS_Objects";
    editorSubcategory = "SWS_Resupply";

    maximumLoad = 8000;
    transportMaxWeapons = 14;
    transportMaxMagazines = 144;

    armor = 10000;

    ace_dragging_canDrag = TRUE;
    ace_dragging_ignoreWeight = TRUE;
    ace_dragging_canCarry = TRUE;
    ace_dragging_ignoreWeightCarry = TRUE;
    ace_cargo_size = 4;
    ace_cargo_canLoad = TRUE;

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

  class SWS_Ammo_SupplyPod : OPTRE_Ammo_SupplyPod_Empty {
    ITEM_META(2);
    displayName = QNAME(Supply Pod);
    icon = "iconCrateWpns";

    editorCategory = "SWS_Objects";
    editorSubcategory = "SWS_Resupply";

    transportMaxWeapons = 8;
    transportMaxMagazines = 40;
    transportMaxBackpacks = 4;
    maximumLoad = 4000;

    supplyRadius = -1;

    hiddenSelectionsTextures[] = {QPATHTOF(data\base_co.paa)};

    ace_dragging_ignoreWeight = TRUE;
    ace_dragging_ignoreWeightCarry = TRUE;

    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems {};
  };

  class SWS_Ammo_SupplyPod_Basic : SWS_Ammo_SupplyPod {
    displayName = QNAME(Basic Resupply);
    hiddenSelectionsTextures[] = {QPATHTOF(data\ammo_co.paa)};
    class TransportMagazines {
      MACRO_ADDMAGAZINE(OPTRE_60Rnd_762x51_Mag,30);
      MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_msbs,10);
      MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_msbs_Tracers_Blue,5);
      MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless,10);
      MACRO_ADDMAGAZINE(SWS_Magazine_60Rnd_65x39_Caseless_Tracers_Blue,5);
      MACRO_ADDMAGAZINE(SWS_Magazine_200Rnd_762x51_Mag_Tracer,4);
      MACRO_ADDMAGAZINE(OPTRE_36Rnd_95x40_Mag,8);
      MACRO_ADDMAGAZINE(OPTRE_60Rnd_5x23mm_Mag,10);
      MACRO_ADDMAGAZINE(OPTRE_15Rnd_762x51_Mag,8);
      MACRO_ADDMAGAZINE(SWS_Magazine_Grenade_M3Sx,4);
      MACRO_ADDMAGAZINE(HandGrenade,8);
      MACRO_ADDMAGAZINE(SmokeShell,8);
    };
  };

  class SWS_Ammo_SupplyPod_Medical : SWS_Ammo_SupplyPod {
    displayName = QNAME(Medical Resupply);
    hiddenSelectionsTextures[] = {QPATHTOF(data\medical_co.paa)};
    class TransportItems {
      MACRO_ADDITEM(ACE_bloodIV,10);
      MACRO_ADDITEM(ACE_elasticBandage,40);
      MACRO_ADDITEM(ACE_quikclot,10);
    };
  };

  class SWS_Ammo_SupplyPod_Howdy : SWS_Ammo_SupplyPod {
    displayName = QNAME(Howdy Resupply);
    hiddenSelectionsTextures[] = {QPATHTOF(data\base_co.paa)};
    class TransportWeapons {
      MACRO_ADDWEAPON(SWS_Weapon_M24RL_D_Loaded,4);
    };
  };
  class SWS_Ammo_SupplyPod_Spnkr : SWS_Ammo_SupplyPod {
    displayName = QNAME(SPNKR Resupply);
    hiddenSelectionsTextures[] = {QPATHTOF(data\spnkr_co.paa)};
    class TransportWeapons {
      MACRO_ADDWEAPON(OPTRE_M41_SSR,1);
    };
    class TransportMagazines {
      MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HE_Thermal_ProximityFuse,2);
      MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HEAT_SACLOS,4);
      MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HEAT_SALH,2);
      MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HEAP,2);
      MACRO_ADDMAGAZINE(OPTRE_M41_Twin_HEAT,2);
    };
  };
  class SWS_Ammo_SupplyPod_SM247 : SWS_Ammo_SupplyPod {
    displayName = QNAME(SM247 Resupply);
    hiddenSelectionsTextures[] = {QPATHTOF(data\mg_co.paa)};
    class TransportMagazines {
      MACRO_ADDMAGAZINE(SWS_Magazine_200Rnd_762x51_Mag,4);
      MACRO_ADDMAGAZINE(SWS_Magazine_200Rnd_762x51_Mag_Tracer,4);
      MACRO_ADDMAGAZINE(SWS_Magazine_400Rnd_762x51_Mag,2);
      MACRO_ADDMAGAZINE(SWS_Magazine_400Rnd_762x51_Mag_Tracer,2);
    };
  };

  class SWS_Ammo_SupplyPod_Eng_Mines : SWS_Ammo_SupplyPod {
    displayName = QNAME(Sabotage);
    hiddenSelectionsTextures[] = {QPATHTOF(data\ammo_co.paa)};
    class TransportMagazines {
      MACRO_ADDMAGAZINE(APERSMineDispenser_Mag,6);
      MACRO_ADDMAGAZINE(APERSTripMine_Wire_Mag,6);
      MACRO_ADDMAGAZINE(ATMine_Range_Mag,6);
    };

    class TransportItems {
      MACRO_ADDITEM(ACE_DefusalKit,1);
      MACRO_ADDITEM(ACE_Clacker,1);
      MACRO_ADDITEM(ace_marker_flags_red,10);
      MACRO_ADDITEM(ace_marker_flags_white,10);
      MACRO_ADDITEM(MineDetector,2);
    };
  };

  class SWS_Ammo_SupplyPod_Eng_Demo : SWS_Ammo_SupplyPod {
    displayName = QNAME(Demolitions);
    hiddenSelectionsTextures[] = {QPATHTOF(data\ammo_co.paa)};
    class TransportMagazines {
      MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,8);
      MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,4);
      MACRO_ADDMAGAZINE(C7_Remote_Mag,6);
    };
    class TransportItems {
      MACRO_ADDITEM(ACE_DefusalKit,2);
      MACRO_ADDITEM(ACE_Clacker,4);
      MACRO_ADDITEM(ACE_DeadManSwitch,1);
    };
  };

  class SWS_Ammo_SupplyPod_Eng_Support : SWS_Ammo_SupplyPod {
    displayName = QNAME(Engineering);
    hiddenSelectionsTextures[] = {QPATHTOF(data\ammo_co.paa)};

    class TransportItems {
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
