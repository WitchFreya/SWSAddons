#define CLASSES_MAGAZINES                               \
  "SWS_Magazine_60Rnd_65x39_Caseless"                   \
  , "SWS_Magazine_60Rnd_65x39_Caseless_Tracer"         \
  , "SWS_Magazine_60Rnd_65x39_Caseless_Tracer_Blue"    \
  , "SWS_Magazine_60Rnd_65x39_Caseless_Tracer_Yellow"  \
  , "SWS_Magazine_60Rnd_65x39_Caseless_Tracer_Green"   \
  , "SWS_Magazine_60Rnd_65x39_Caseless_Tracer_Orange"

class CfgMagazines {
  class 100Rnd_65x39_Caseless_Black_Mag;
  class SWS_Magazine_60Rnd_65x39_Caseless : 100Rnd_65x39_Caseless_Black_Mag {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(60Rnd 6.5mm MX Mag);
    descriptionShort = "ARMXS 6.5mm Ammunition";
    lastRoundsTracer = 5;
    count = 60;
    mass = 25;
  };

  class SWS_Magazine_60Rnd_65x39_Caseless_Tracer : SWS_Magazine_60Rnd_65x39_Caseless {
    displayName = QNAME(60Rnd 6.5mm MX Mag (Red Tracer));
    tracersEvery = 1;
  };

#define C_TRACERS(varColor) \
  class SWS_Magazine_60Rnd_65x39_Caseless_Tracer_##varColor : SWS_Magazine_60Rnd_65x39_Caseless_Tracer \
  { displayName = QNAME(60Rnd 6.5mm MX Mag (varColor Tracer)); ammo = QUOTE(B_65x39_Caseless_##varColor); }

  C_TRACERS(Blue);
  C_TRACERS(Yellow);
  C_TRACERS(Green);
  C_TRACERS(Orange);

#undef C_TRACERS
};

