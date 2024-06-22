#define CLASSES_MAGAZINES                   \
  "SWS_Magazine_50rnd_SX90"                 \
  , "SWS_Magazine_50rnd_SX90_Tracer"        \
  , "SWS_Magazine_50rnd_SX90_Tracer_Blue"   \
  , "SWS_Magazine_50rnd_SX90_Tracer_Orange" \
  , "SWS_Magazine_50rnd_SX90_Tracer_Yellow"

class CfgMagazines {
  class 50Rnd_570x28_SMG_03;

  class SWS_Magazine_50rnd_SX90 : 50Rnd_570x28_SMG_03 {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    ammo = "B_65x39_Caseless";
    displayName = QNAME(50Rnd 6.5mm Sx90 Magazine);
    displayNameShort = QUOTE(6.5mm Caseless);
    descriptionShort = "Caliber: 6.5mm<br />Rounds: 50<br />Used in: SX90";
    mass = 17;
    lastRoundsTracer = 5;
  };

  class SWS_Magazine_50rnd_SX90_Tracer : SWS_Magazine_50rnd_SX90 {
    displayName = QNAME(50Rnd 6.5mm Sx90 Mag (Red Tracer));
    tracersEvery = 1;
  };

  #define C_TRACERS(varColor) \
  class SWS_Magazine_50rnd_SX90_Tracer_##varColor : SWS_Magazine_50rnd_SX90_Tracer \
  { displayName = QNAME(50Rnd 6.5mm Sx90 Mag (varColor Tracer)); ammo = QUOTE(B_65x39_Caseless_##varColor); }

  C_TRACERS(Blue);
  C_TRACERS(Yellow);
  C_TRACERS(Orange);

  #undef C_TRACERS
};
