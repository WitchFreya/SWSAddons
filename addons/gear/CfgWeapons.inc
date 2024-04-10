class CfgWeapons {
  class OPTRE_UNSC_M52D_Armor;
  class OPTRE_UNSC_CH252D_Helmet_Base;

  class SWS_Helmet_Base : OPTRE_UNSC_CH252D_Helmet_Base {
    ITEM_META(0);
    descriptionShort = "Armor Level: ODST";
  };

  class SWS_Vest_Base : OPTRE_UNSC_M52D_Armor {
    ITEM_META(0);
    descriptionShort = "Armor Level: ODST";
    class ItemInfo : ItemInfo {
      containerClass = "Supply200";
    };
  };
};
