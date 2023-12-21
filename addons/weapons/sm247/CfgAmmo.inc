#define CLASSES_AMMO    \
  "SWS_B_762x51_Ball"

class CfgAmmo
{
  class OPTRE_B_762x51_Ball;

  class SWS_B_762x51_Ball : OPTRE_B_762x51_Ball
  {
    META;
    hit = 34;
    typicalSpeed = 950;
    caliber = 6.0;
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow.p3d";
  };
};


