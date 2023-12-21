#define CLASSES_MAGAZINES \
  "SWS_Magazine_60Rnd_65x39_Caseless_MSBS" \
  , "SWS_Magazine_60Rnd_65x39_Caseless_MSBS_Tracers" \
  , "SWS_Magazine_60Rnd_65x39_Caseless_MSBS_Tracers_Blue" \
  , "SWS_Magazine_60Rnd_65x39_Caseless_MSBS_Tracers_Yellow" \
  , "SWS_Magazine_60Rnd_65x39_Caseless_MSBS_Tracers_Green"

class CfgMagazines
{
  class 30Rnd_65x39_Caseless_MSBS_Mag;
  class SWS_Magazine_60Rnd_65x39_Caseless_MSBS : 30Rnd_65x39_Caseless_MSBS_Mag
  {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(60Rnd 6.5mm Promet Mag);
    descriptionShort = "AR-0M37S 6.5mm Ammunition";
    lastRoundsTracer = 5;
    count = 60;
    mass = 25;
  };

  class SWS_Magazine_60Rnd_65x39_Caseless_MSBS_Tracers : SWS_Magazine_60Rnd_65x39_Caseless_MSBS
  {
    displayName = QNAME(60Rnd 6.5mm Promet Mag (Red Tracer));
    tracersEvery = 1;
  };

#define C_TRACERS(varColor) \
  class SWS_Magazine_60Rnd_65x39_Caseless_MSBS_Tracers_##varColor : SWS_Magazine_60Rnd_65x39_Caseless_MSBS_Tracers \
  { displayName = QNAME(60Rnd 6.5mm Promet Mag (varColor Tracer)); ammo = QUOTE(B_65x39_Caseless_##varColor); }

  C_TRACERS(Blue);
  C_TRACERS(Yellow);
  C_TRACERS(Green);

#undef C_TRACERS
};

