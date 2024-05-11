#define CLASSES_AMMO        \
  "SWS_B_8Gauge_Incendiary" \
  , "SWS_B_8Gauge_Incendiary_Submunition"

class CfgAmmo {
  class B_12Gauge_Pellets_Submunition;
  class B_12Gauge_Pellets_Submunition_Deploy;

  class SWS_B_8Gauge_Incendiary: B_12Gauge_Pellets_Submunition {
    META;
    submunitionConeType[] = {"poissondisccenter",15};
    submunitionAmmo = "SWS_B_8Gauge_Incendiary_Submunition";
    thrust = 15;
    triggerTime = 0.001;
  };

  class SWS_B_8Gauge_Incendiary_Submunition : B_12Gauge_Pellets_Submunition_Deploy {
    META;
    caliber = 4;
    hit = 16;
    deflecting = 0;
    thrust = 75;
    model = QPATHTOEF(ballistics,data\tracer_orange\tracer_orange.p3d);
    timeToLive = 6;
    tracerEndTime = 3;
    tracerStartTime = 0;
    tracerScale = 0.75;
  };
};


