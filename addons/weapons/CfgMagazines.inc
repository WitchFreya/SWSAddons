#define CLASSES_MAGAZINES \
  "SWS_Magazine_Grenade_M3Sx", \
  "SWS_Magazine_Grenade_M3Sx_1Rnd_Shell", \
  "SWS_Magazine_Grenade_M3Sx_3Rnd_Shell", \
  "SWS_Magazine_6Rnd_Shotgun_Incendiary", \
  "SWS_Magazine_12_Rnd_Shotgun_Incendiary", \
  "SWS_Magazine_60Rnd_65x39_Caseless_msbs",\
  "SWS_Magazine_60Rnd_65x39_Caseless_msbs_tracers", \
  "SWS_Magazine_60Rnd_65x39_Caseless_msbs_tracers_blue", \
  "SWS_Magazine_60Rnd_65x39_Caseless_msbs_tracers_green", \
  "SWS_Magazine_60Rnd_65x39_Caseless_msbs_tracers_yellow", \
  "SWS_Magazine_60Rnd_65x39_Caseless", \
  "SWS_Magazine_60Rnd_65x39_Caseless_tracers", \
  "SWS_Magazine_60Rnd_65x39_Caseless_tracers_yellow", \
  "SWS_Magazine_60Rnd_65x39_Caseless_tracers_blue", \
  "SWS_Magazine_60Rnd_65x39_Caseless_tracers_green"

class CfgMagazines {

  //= Ammo
  class 30Rnd_65x39_caseless_msbs_mag;
  class 100Rnd_65x39_caseless_black_mag;

  #include "CfgMagazines\65x39_Caseless.inc"

  // Shotguns
  class OPTRE_6Rnd_8Gauge_Pellets;
  #include "CfgMagazines\Incendiary.inc"
};
