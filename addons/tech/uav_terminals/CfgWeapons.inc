#define CLASSES_WEAPONS \
  "SWS_Term_Scarlet"    \
  , "SWS_UavTerminal"

class CfgWeapons {
  class UavTerminal_Base;

  class SWS_UavTerminal_Base : UavTerminal_Base {
    ITEM_META(0);
    displayName = "-";
    descriptionShort = "Use this terminal to connect to UNSC UAVs.";
    model = "\a3\Drones_F\Weapons_F_Gamma\Items\UAV_controller_Civ_F.p3d";
    picture = QPATHTOF(data\uav_terminal_ca.paa);
    /** Unfortunately this doesn't work; camo doesn't appear set up in the model. */
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\uav_terminal_co.paa)};

    class ItemInfo : ItemInfo {
      side = SIDE_BLUFOR;
    };
  };

  class SWS_Term_Scarlet : SWS_UavTerminal_Base {
    SCOPE(2);
    CLEARANCE(SECRET/DECWHI);
    displayName = QNAME(SCARLET);
    descriptionShort = "System Calibration and Arsenal Retasking Ligh Engineering Terminal.";
    model = "\a3\Props_F_Enoch\Military\Equipment\Laptop_03_F.p3d";
    picture = QPATHTOF(data\terminal_scarlet_ca.paa);
    hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa"};
  };

  class SWS_UavTerminal : SWS_UavTerminal_Base {
    SCOPE(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(Drone Access Terminal);
  };
};
