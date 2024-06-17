#define CLASSES_VEHICLES      \
  "SWS_V_UAV_SMQ94"           \
  , "SWS_V_UAV_SMQ94_Maid"    \
  , "SWS_Bag_UAV_SMQ94_Maid"  \
  , "SWS_Bag_UAV_SMQ94"       \

class CfgVehicles {
  class B_UAV_01_F;
  class DMNS_UAV_01_Backpack_F;

  class SWS_V_UAV_SMQ94_Base : B_UAV_01_F {
    ITEM_META(0);
    displayName = QNAME(SMQ-94 Recon (Base));
    faction = "SWS_UNSC";
    fuelCapacity = 100;
    side = SIDE_BLUFOR;
    model = "dmns\dmns_air\mq_94\MQ_94.p3d";
    editorPreview = QPATHTOF(data\uav_smq94\editor.jpg);
    crew = "B_UAV_AI";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsMaterials[] = {QPATHTOF(data\uav_smq94\basic.rvmat)};
    hiddenSelectionsTextures[] = {QPATHTOF(data\uav_smq94\basic_co.paa)};
    typicalCargo[] = {"B_UAV_AI"};
    weapons[] = { "SWS_Weapon_LaserDesignator" };
    magazines[] = { "LaserBatteries" };
    armor = 3;

    class AssembleInfo : AssembleInfo {
      dissasembleTo[] = {};
    };

    class Turrets : Turrets {
      class MainTurret : MainTurret {
        gunnerOpticsModel = QPATHTO_MELB(data\optics\melb_flir_w2.p3d);
        turretInfoType = "Rsc_MELB_Turret_UnitInfo";

        class OpticsIn : OpticsIn {
          class Wide : Wide {
            gunnerOpticsModel = QPATHTO_MELB(data\optics\melb_flir_wf.p3d);
          };

          class Medium : Wide {
            opticsDisplayName = "M";
            initFov = 0.1;
            minFov = 0.1;
            maxFov = 0.1;
            gunnerOpticsModel = QPATHTO_MELB(data\optics\melb_flir_w.p3d);
          };

          class Narrow : Wide {
            opticsDisplayName = "N";
            initFov = 0.05;
            minFov = 0.05;
            maxFov = 0.05;
            gunnerOpticsModel = QPATHTO_MELB(data\optics\melb_flir_w2.p3d);
          };

          class UNarrow : Wide {
            opticsDisplayName = "U";
            initFov = 0.01;
            minFov = 0.01;
            maxFov = 0.01;
            gunnerOpticsModel = QPATHTO_MELB(data\optics\melb_flir_n.p3d);
          };

          class SNarrow : Wide {
            opticsDisplayName = "S";
            initFov = 0.005;
            minFov = 0.005;
            maxFov = 0.005;
            gunnerOpticsModel = QPATHTO_MELB(data\optics\melb_flir_n2.p3d);
          };
        };
      };
    };

    textureList[] = {
      "UNSC", 1
      , "Maid", 0
    };
    class TextureSources {
      class UNSC {
        META;
        displayName = "UNSC";
        textures[] = {QPATHTOF(data\uav_smq94\basic_co.paa)};
      };

      class Maid {
        META;
        displayName = "Maid";
        textures[] = {QPATHTOF(data\uav_smq94\maid_co.paa)};
      };
    };

    class Components : Components {
      class SensorsManagerComponent : SensorsManagerComponent {
        class Components : Components {
          class ManSensorComponent : ManSensorComponent {
            typeRecognitionDistance = 750;
            class GroundTarget : GroundTarget {
              maxRange = 1000;
            };
          };
        };
      };
    };
  };

  class SWS_V_UAV_SMQ94 : SWS_V_UAV_SMQ94_Base {
    SCOPE(2);
    displayName = QNAME(SMQ-94 Recon);
    textureList[] = {"UNSC", 1};
    class AssembleInfo : AssembleInfo {
      dissasembleTo[] = {"SWS_Bag_UAV_SMQ94"};
    };
  };

  class SWS_V_UAV_SMQ94_Maid : SWS_V_UAV_SMQ94_Base {
    SCOPE(2);
    displayName = QNAME(SMQ-94 Recon (Maid));
    hiddenSelectionsTextures[] = {QPATHTOF(data\uav_smq94\maid_co.paa)};
    textureList[] = {"Maid", 1};

    class AssembleInfo : AssembleInfo {
      dissasembleTo[] = {"SWS_Bag_UAV_SMQ94_Maid"};
    };
  };

  #pragma region Bag
  class SWS_Bag_UAV_SMQ94_Base : DMNS_UAV_01_Backpack_F {
    ITEM_META(0);
    displayName = QNAME(SMQ-94 UAV Bag (Base));
    picture = "\OPTRE_weapons\backpacks\icons\rucksack_black";
    model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
    hiddenSelections[] = { "camo1", "biofoam" };
    hiddenSelectionsMaterials[] = {};
    hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Backpacks\V_ILCS_UAV_CO.paa"};
    /** 20 lbs */
    mass = 200;
    class AssembleInfo : AssembleInfo { displayName = "SMQ-94 Drone"; };
    class XtdGearInfo {
      model = "SWS_Bag_Drone";
      variant = "SMQ94";
    };
  };

  class SWS_Bag_UAV_SMQ94 : SWS_Bag_UAV_SMQ94_Base {
    SCOPE(2);
    displayName = QNAME(SMQ-94 UAV Bag);
    class AssembleInfo : AssembleInfo { assembleTo = "SWS_V_UAV_SMQ94"; };
    class XtdGearInfo : XtdGearInfo {
      pattern = "Default";
    };
  };

  class SWS_Bag_UAV_SMQ94_Maid : SWS_Bag_UAV_SMQ94_Base {
    SCOPE(2);
    displayName = QNAME(SMQ-94 UAV Bag (Maid));
    class AssembleInfo : AssembleInfo { assembleTo = "SWS_V_UAV_SMQ94_Maid"; };
    class XtdGearInfo : XtdGearInfo {
      pattern = "Maid";
    };
  };
  #pragma endregion
};
