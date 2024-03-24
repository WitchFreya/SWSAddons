#define CLASSES_VEHICLES    \
  "SWS_Bag_UAV_MiniPelican" \
  , "SWS_V_UAV_MiniPelican"

class AssembleInfo;
class TextureSources;

class CfgVehicles
{
  class UAV_06_Base_F;
  class B_UAV_06_Backpack_F;

  class B_UAV_06_F : UAV_06_Base_F {
    class TextureSources : TextureSources {
      class SWS_UNSC {
        META;
        displayName = "SWS";
        textures[] = {QPATHTOF(data\uav_minipelican\sws_co.paa)};
      };
    };
  };

  class SWS_V_UAV_MiniPelican_Base : B_UAV_06_F {
    ITEM_META(0);
    displayName = QNAME(Mini-Pelican (Base));
    faction = "SWS_UNSC";
    textureList[] = {"SWS_UNSC", 1};
    hiddenSelectionsTextures[] = {QPATHTOF(data\uav_minipelican\sws_co.paa)};

    ace_cargo_space = 2;
    ace_cargo_hasCargo = TRUE;
    fuelCapacity = 100;
    transportMaxWeapons = 2;
    transportMaxMagazines = 20;
    transportMaxBackpacks = 2;
    transportAmmo = 0;
    transportRepair = 0;
    transportFuel = 0;
    maximumLoad =  1000;
    supplyRadius = -1;
    armor = 2.5;

    class TransportItems {};
    class AssembleInfo : AssembleInfo { dissasembleTo[] = {}; };
  };

  // D77-TC-M Mini-Pelican
  class SWS_V_UAV_MiniPelican : SWS_V_UAV_MiniPelican_Base {
    SCOPE(2);
    displayName = QNAME(Mini-Pelican);
    class AssembleInfo : AssembleInfo { dissasembleTo[] = {"SWS_Bag_UAV_MiniPelican"}; };
  };

  class SWS_Bag_UAV_MiniPelican : B_UAV_06_Backpack_F {
    ITEM_META(2);
    displayName = QNAME(UAV Bag (MiniPelican));
    faction = "SWS_UNSC";
    side = SIDE_BLUFOR;
    mass = 100;
    class AssembleInfo : AssembleInfo {
      displayName = "MiniPelican Drone";
      assembleTo = "SWS_V_UAV_MiniPelican";
    };
    class XtdGearInfo {
      model = "SWS_Bag_Drone";
      variant = "MiniPelican";
      pattern = "Default";
    };
  };
};
