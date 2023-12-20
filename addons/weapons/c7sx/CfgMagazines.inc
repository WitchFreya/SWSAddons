#define CLASSES_MAGAZINES \
  "SWS_Magazine_C7Sx_Sticky"

class CfgMagazines
{
  class OPTRE_C7_Remote_Throwable_Sticky_Mag;
  // See XEH_preInit for stickyable properties
  class SWS_Magazine_C7Sx_Sticky : OPTRE_C7_Remote_Throwable_Sticky_Mag
  {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(C7-Sx (Sticky));
    descriptionShort = "C7-Sx Throwable";
    displayNameShort = "C7-Sx Throwable";
    ammo = "SWS_B_C7Sx_Sticky";
  };
};
