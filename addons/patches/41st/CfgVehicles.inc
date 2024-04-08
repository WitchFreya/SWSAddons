

#define CBA_PATCH                                                           \
  class EventHandlers : EventHandlers {                                     \
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {};   \
  }

class CfgVehicles {
  class Land_CampingChair_V1_F;
  class OPTRE_Pelican_armed;
  class UGV_01_RCWS_Base_F;

  class bench_1 : Land_CampingChair_V1_F { CBA_PATCH; };
  class bench_2 : Land_CampingChair_V1_F { CBA_PATCH; };
  class bench_2B : Land_CampingChair_V1_F { CBA_PATCH; };
  class SZ_Sofa : Land_CampingChair_V1_F { CBA_PATCH; };
  class SZ_stool : Land_CampingChair_V1_F { CBA_PATCH; };
  class SZ_Chair : Land_CampingChair_V1_F { CBA_PATCH; };
  class Hogosha_D77HTCI_A : OPTRE_Pelican_armed { CBA_PATCH; };

  /*
    The 41st fucked up the Stomper's inheritance chain.

    B_UGV_01_RCWS_F does not define class Turrets : Turrets, that is defined in UGV_01_RCWS_Base_F.

    Since 41_Hogosha used the complex form of inheritance, it attempted to inherit in a way it could not. As a result, the turret never worked.

    The solution here is to simply redefine the entire Turret based on what was done in UGV_01_RCWS_Base_F. I'm sorry.
  */
  class B_UGV_01_RCWS_F : UGV_01_RCWS_Base_F {
    class Turrets: Turrets {
      class MainTurret: NewTurret {
        isCopilot = 0;
        dontCreateAI = 0;
        body = "mainTurret";
        gun = "mainGun";
        memoryPointGunnerOptics = "PiP1_pos";
        memoryPointGun = "machinegun";
        gunnerForceOptics = 1;
        gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
        turretInfoType = "RscOptics_UGV_gunner";
        weapons[] = {"HMG_127_UGV","GMG_40mm"};
        magazines[] = {"200Rnd_127x99_mag_Tracer_Red","96Rnd_40mm_G_belt"};
        soundServo[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner",0.316228,1,30};
        soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner_vertical",0.316228,1,30};
        minElev = -10;
        maxElev = 60;
        forceHideGunner = 1;
        outGunnerMayFire = 1;
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
        discreteDistanceInitIndex = 2;
        stabilizedInAxes = 3;

        class HitPoints {
          class HitTurret {
            armor = -250;
            material = -1;
            armorComponent = "hit_main_turret";
            name = "hit_main_turret_point";
            visual = "OtocVez";
            passThrough = 0;
            minimalHit = 0.03;
            explosionShielding = 0.4;
            radius = 0.25;
            isTurret = 1;
          };
          class HitGun {
            armor = -250;
            material = -1;
            armorComponent = "hit_main_gun";
            name = "hit_main_gun_point";
            visual = "OtocHlaven";
            passThrough = 0;
            minimalHit = 0.03;
            explosionShielding = 0.4;
            radius = 0.2;
            isGun = 1;
          };
        };

        class ViewOptics: RCWSOptics
        {
          visionMode[] = {"Normal","TI"};
          initFov = 0.4667;
          maxFov = 0.4667;
          minFov = 0.035;
          directionStabilized = 1;
        };
        class Components {
          class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
            class Components {
              class EmptyDisplay {
                componentType = "EmptyDisplayComponent";
              };
              class MinimapDisplay {
                componentType = "MinimapDisplayComponent";
                resource = "RscCustomInfoMiniMap";
              };
              class UAVDisplay {
                componentType = "UAVFeedDisplayComponent";
              };
            };
          };
          class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
            class Components {
              class EmptyDisplay {
                  componentType = "EmptyDisplayComponent";
              };
              class MinimapDisplay {
                  componentType = "MinimapDisplayComponent";
                  resource = "RscCustomInfoMiniMap";
              };
              class UAVDisplay {
                  componentType = "UAVFeedDisplayComponent";
              };
            };
          };
        };
      };
      class CargoTurret_01: CargoTurret_01 { };
    };
  };
};

