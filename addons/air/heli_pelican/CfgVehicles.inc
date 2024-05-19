#define CLASSES_VEHICLES  \
  "SWS_Pelican"

class CfgVehicles {
  class Helicopter_Base_H;
  class OPTRE_Pelican_F : Helicopter_Base_H {

  };
  class OPTRE_Pelican_Armed_SOCOM;

  class SWS_Pelican_Base : OPTRE_Pelican_Armed_SOCOM {
    ITEM_META(0);
    displayName = "-";
    side = SIDE_BLUFOR;
    faction = "SWS_UNSC";
    crew = "OPTRE_UNSC_Airforce_Soldier_Airman";
    memoryPointDriverOptics = "slingcamera";
    // TODO: consider this, whether it is useful or not; https://github.com/michail-nikolaev/task-force-arma-3-radio/wiki/API%3A-For-developers#vehicles
    tf_hasLRRadio = FALSE;
    // textureList[] = {
    //   "Standard",   1,
    //   "ColorGreen", 1,
    //   "ColorBlack", 1,
    //   "ColorTan",   1,
    //   "ColorSnow",  1
    // };
    weapons[] = {"CMFlareLauncher"};

    // class TextureSources : TextureSources {};
    class Components : Components {
      class TransportPylonsComponent : TransportPylonsComponent {
        class Presets {};
        class Pylons {
          class 1 {
            maxWeight = 560;
            hardpoints[] = {"OPAEX_Hardpoint_D77-TC"};
            attachment = "OPTRE_32Rnd_Anvil1_missiles";
            bay = -1;
            priority = 2;
            uiPosition[] = {0.1,0.5};
            turret[] = {};
          };

          class 2 {
            mirroredMissilePos = 1;
            uiPosition[] = {0.1,0.1};
            maxWeight = 560;
            priority = 2;
            hardpoints[] = {"OPAEX_Hardpoint_D77-TC"};
            attachment = "OPTRE_32Rnd_Anvil1_missiles";
            turret[] = {};
          };

          class 3 {
            attachment = "OPTRE_4Rnd_Jackknife_missile";
            priority = 2;
            hardpoints[] = {"OPTRE_Hardpoint_D77_Guided"};
            uiPosition[] = {0.25,0.44};
            turret[] = {0};
            maxWeight = 560;
            bay = -1;
          };

          class 4 {
            mirroredMissilePos = 3;
            attachment = "OPTRE_4Rnd_Jackknife_missile";
            priority = 2;
            hardpoints[] = {"OPTRE_Hardpoint_D77_Guided"};
            uiPosition[] = {0.25,0.16};
            turret[] = {0};
            maxWeight = 560;
            bay = -1;
          };

          class 5 {
            attachment = "SWS_127x99_M41Sx_2500Rnd";
            hardpoints[] = {"SWS_Pelican_Nose_Cannon"};
            maxWeight = 1000;
            bay = -1;
            priority = 2;
            uiPosition[] = {0.2,0.34};
            turret[] = {0};
          };
        };
      };
    };

    class Turrets : Turrets {
      class CopilotTurret;
      class MainTurret : CopilotTurret {
        gunnerName = "Gunner";
        primaryGunner = TRUE;
        weapons[] = {"CMFlareLauncher","LaserDesignator_Mounted", "SWS_M41Sx_LAAG"};
      };
      class CommanderTurret : CommanderTurret {
        gunnerName = "Electronics Warfare Officer";
        weapons[] = {};
      };
      delete CopilotTurret;
    };
  };

  class SWS_Pelican : SWS_Pelican_Base {
    SCOPE(2);
    displayName = QNAME(Pelican);
  };
};
