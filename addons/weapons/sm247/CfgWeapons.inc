#define CLASSES_WEAPONS "SWS_Weapon_SM247"

class CfgWeapons {
  class DMNS_M247_GPMG;

  class SWS_Weapon_SM247 : DMNS_M247_GPMG {
    ITEM_META(2);
    baseWeapon = "SWS_Weapon_SM247";
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(SM247);
    model = "\OPTRE_Weapons\MG\M247.p3d";
    hiddenSelections[] = {
      "mainbody1"
      , "mainbody2"
      , "magazine"
      , "stock"
      , "details"
      , "barrel_sights"
    };
    hiddenSelectionsTextures[] = {
      "\OPTRE_Weapons\MG\data\M247_mainbody1_CO.paa",
      "\OPTRE_Weapons\MG\data\M247_mainbody2_CO.paa",
      "\OPTRE_Weapons\MG\data\M247_magazine_CO.paa",
      "\OPTRE_Weapons\MG\data\M247_stock_CO.paa",
      "\OPTRE_Weapons\MG\data\M247_details_CO.paa",
      "\OPTRE_Weapons\MG\data\M247_barrel_sights_CO.paa"
    };
    magazineWell[] = {
      "OPTRE_Magwell_MA5A",
      "OPTRE_Magwell_MA5B",
      "OPTRE_Magwell_M247"
    };
    magazines[] = {};

    class Single: Single {
      dispersion = 0.00064;
      reloadTime = 0.082;
    };

    class FullAuto: FullAuto {
      dispersion = 0.00065;
      reloadTime = 0.082;
    };

    class WeaponSlotsInfo : WeaponSlotsInfo {
      class PointerSlot : PointerSlot {
        compatibleItems[] = {ATT_POINTER_OPTRE_RAIL_M12};
      };
    };
  };
};
