#define CLASSES_WEAPONS   \
  "SWS_Helmet_Recon_Maid" \
  , "SWS_Helmet_Recon_Maid_dp"

#define HS_BASE "camo"
#define HS_VISOR "camo2"
#define HS_GHILLIE "camo3"
#define HS_SOFTPACK "camo4"

class CfgWeapons {
  class SWS_Helmet_Base;
  class SWS_Helmet_Recon_Base : SWS_Helmet_Base {
    SCOPE(0);
    CLEARANCE(SECRET/DECWHI);
    displayName = "-";
    picture = "\OPTRE_UNSC_Units\army\icons\odst_recon.paa";
    model = "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
    descriptionShort = "ONI Issue Recon Helmet";
    hiddenSelectionsMaterials[] = {
      QPATHTOF(data\helmet_recon\base.rvmat)
      , QPATHTOF(data\helmet_recon\visor_trans.rvmat)
    };
    hiddenSelections[] = {HS_BASE, HS_VISOR, HS_GHILLIE, "H_VacCollar"};
    hiddenSelectionsTextures[] = {};

    class ItemInfo : ItemInfo {
      uniformModel = "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
      hiddenSelections[] = {HS_BASE, HS_VISOR, HS_GHILLIE, "H_VacCollar"};
      hiddenSelectionsTextures[] = {};
      hiddenSelectionsMaterials[] = {
        QPATHTOF(data\helmet_recon\base.rvmat)
        , QPATHTOF(data\helmet_recon\visor_trans.rvmat)
      };
    };
  };

  class SWS_Helmet_Recon_Base_dp : SWS_Helmet_Recon_Base {
    model = "\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
    class ItemInfo : ItemInfo {
      uniformModel = "\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
    };
  };

  class SWS_Helmet_Recon_Maid : SWS_Helmet_Recon_Base {
    SCOPE(2);
    displayName = QNAME(Recon Helmet (Maid));
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\helmet_recon\maid_base_co.paa)
      , QPATHTOF(data\helmet_recon\maid_visor_co.paa)
    };

    class ItemInfo : ItemInfo {
      hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmet_recon\maid_base_co.paa)
        , QPATHTOF(data\helmet_recon\maid_visor_co.paa)
      };
    };
  };

  class SWS_Helmet_Recon_Maid_dp : SWS_Helmet_Recon_Base_dp {
    SCOPE(1);
    ace_arsenal_uniqueBase = "SWS_Helmet_Recon_Maid";
    displayName = QNAME(Recon Helmet (Maid/Depolarized));
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\helmet_recon\maid_base_co.paa)
      , QPATHTOF(data\helmet_recon\maid_visor_ca.paa)
    };
    class ItemInfo : ItemInfo {
      hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmet_recon\maid_base_co.paa)
        , QPATHTOF(data\helmet_recon\maid_visor_ca.paa)
      };
    };
  };
};

#undef HS_BASE
#undef HS_VISOR
#undef HS_GHILLIE
#undef HS_SOFTPACK
