#define CLASSES_VEHICLES  \
  "SWS_V_UAV_SMQ94"       \
  , "SWS_V_UAV_SMQ94_Maid"

class HitPoints;
class HitHull;
class Turrets;
class MainTurret;
class OpticsIn;
class Wide;
class AssembleInfo;

class CfgVehicles
{
  class B_UAV_01_F;

  class SWS_V_UAV_SMQ94_Base : B_UAV_01_F
  {
    ITEM_META(0);
    displayName = QNAME(SMQ-94 Recon (Base));
    faction = "SWS_UNSC";
    fuelCapacity = 100;
    side = 1;
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

    class AssembleInfo : AssembleInfo
    {
      dissasembleTo[] = {};
    };

    class Turrets : Turrets
    {
      class MainTurret : MainTurret
      {
        gunnerOpticsModel = QPATHTOEF(tech,data\optics\melb_flir_w2.p3d);
        turretInfoType = "Rsc_MELB_Turret_UnitInfo";

        class OpticsIn : OpticsIn
        {
          class Wide : Wide
          {
            gunnerOpticsModel = QPATHTOEF(tech,data\optics\melb_flir_wf.p3d);
          };

          class Medium : Wide
          {
            opticsDisplayName = "M";
            initFov = 0.1;
            minFov = 0.1;
            maxFov = 0.1;
            gunnerOpticsModel = QPATHTOEF(tech,data\optics\melb_flir_w.p3d);
          };

          class Narrow : Wide
          {
            opticsDisplayName = "N";
            initFov = 0.05;
            minFov = 0.05;
            maxFov = 0.05;
            gunnerOpticsModel = QPATHTOEF(tech,data\optics\melb_flir_w2.p3d);
          };

          class UNarrow : Wide
          {
            opticsDisplayName = "U";
            initFov = 0.01;
            minFov = 0.01;
            maxFov = 0.01;
            gunnerOpticsModel = QPATHTOEF(tech,data\optics\melb_flir_n.p3d);
          };

          class SNarrow : Wide
          {
            opticsDisplayName = "S";
            initFov = 0.005;
            minFov = 0.005;
            maxFov = 0.005;
            gunnerOpticsModel = QPATHTOEF(tech,data\optics\melb_flir_n2.p3d);
          };
        };
      };
    };

    textureList[] = {
      "UNSC", 1
      , "Maid", 0
    };
    class TextureSources
    {
      class UNSC
      {
        META;
        displayName = "UNSC";
        textures[] = {QPATHTOF(data\uav_smq94\basic_co.paa)};
      };

      class Maid
      {
        META;
        displayName = "Maid";
        textures[] = {QPATHTOF(data\uav_smq94\maid_co.paa)};
      };
    };
  };

  class SWS_V_UAV_SMQ94 : SWS_V_UAV_SMQ94_Base
  {
    SCOPE(2);
    displayName = QNAME(SMQ-94 Recon);
    textureList[] = {"UNSC", 1};
  };

  class SWS_V_UAV_SMQ94_Maid : SWS_V_UAV_SMQ94_Base
  {
    SCOPE(2);
    displayName = QNAME(SMQ-94 Recon (Maid));
    hiddenSelectionsTextures[] = {QPATHTOF(data\uav_smq94\maid_co.paa)};
    textureList[] = {"Maid", 1};
  };
};
