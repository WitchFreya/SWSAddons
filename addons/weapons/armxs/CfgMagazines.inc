#define CLASSES_MAGAZINES \
  "SWS_Magazine_60Rnd_65x39_Caseless" \
  , "SWS_Magazine_60Rnd_65x39_Caseless_Tracers" \
  , "SWS_Magazine_60Rnd_65x39_Caseless_Tracers_Blue" \
  , "SWS_Magazine_60Rnd_65x39_Caseless_Tracers_Yellow" \
  , "SWS_Magazine_60Rnd_65x39_Caseless_Tracers_Green"

class CfgMagazines
{
  class 100Rnd_65x39_Caseless_Black_Mag;
  class SWS_Magazine_60Rnd_65x39_Caseless : 100Rnd_65x39_Caseless_Black_Mag
  {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    displayName = QNAME(60Rnd 6.5mm Mag);
    descriptionShort = "ARMXS 6.5mm Ammunition";
    lastRoundsTracer = 5;
    count = 60;
    mass = 25;
  };

  class SWS_Magazine_60Rnd_65x39_Caseless_Tracers : SWS_Magazine_60Rnd_65x39_Caseless
  {
    displayName = QNAME(60Rnd 6.5mm Mag (Red Tracer));
    tracersEvery = 1;
  };

#define C_TRACERS(varColor) \
  class SWS_Magazine_60Rnd_65x39_Caseless_Tracers_##varColor : SWS_Magazine_60Rnd_65x39_Caseless_Tracers \
  { displayName = QNAME(60Rnd 6.5mm Promet Mag (varColor Tracer)); ammo = QUOTE(B_65x39_Caseless_##varColor); }

  C_TRACERS(Blue);
  C_TRACERS(Yellow);
  C_TRACERS(Green);

#undef C_TRACERS
};

