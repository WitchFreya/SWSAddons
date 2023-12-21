#define CLASSES_AMMO \
  "SWS_B_8Gauge_Incendiary", \
  "SWS_B_8Gauge_Incendiary_Submunition"

class CfgAmmo {
  class BulletBase;

  class B_65x39_Caseless : BulletBase
  {
    hit = 18;
  };

  //== Shotgun
  class B_12Gauge_Pellets_Submunition;
  class B_12Gauge_Pellets_Submunition_Deploy;

  #include "CfgAmmo\Incendiary.inc"
};
