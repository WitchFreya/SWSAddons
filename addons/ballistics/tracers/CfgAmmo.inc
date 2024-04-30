#define CLASSES_AMMO            \
  C_CLASS_TRACERS(B_65x39_Case) \
  , C_CLASS_TRACERS(B_65x39_Caseless)

class CfgAmmo {
  class BulletBase;
  class B_65x39_Case;
  class B_65x39_Caseless;
  class B_762x51_Ball;

  C_TRACERS(B_65x39_Case);
  C_TRACERS(B_65x39_Caseless);
  C_TRACERS(B_762x51_Ball);

  // 6.5x39 - MXS, AR
  // 7.62x51 - SM247, MA5, MA37K
  // 9.5x40mm - SBR-55, M58S SAR

};
