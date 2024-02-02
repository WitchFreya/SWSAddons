#define CLASSES_AMMO \
  "SWS_M_120mm_cannon_ATGM"

class CfgAmmo
{
  class M_120mm_Cannon_ATGM_LG;

  class SWS_M_120mm_Cannon_ATGM : M_120mm_Cannon_ATGM_LG
  {
    submunitionAmmo = "ammo_Penetrator_Vorona";
    indirectHit = 25;
    indirectHitRange = 3.5;

    class Components: Components
    {
      class SensorsManagerComponent
      {
        class Components
        {
          class LaserSensorComponent : SensorTemplateLaser
          {
            class AirTarget : SWS_SensorTargetTemplate {};
            class GroundTarget : SWS_SensorTargetTemplate {};
          };
          class DataLinkSensorComponent : SensorTemplateDataLink
          {
            class AirTarget : SWS_SensorTargetTemplate {};
            class GroundTarget : SWS_SensorTargetTemplate {};
          };
        };
      };
    };
  };
};
