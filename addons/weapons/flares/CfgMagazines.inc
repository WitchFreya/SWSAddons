#define CLASSES_MAGAZINES                 \
  "SWS_Magazine_3Rnd_FlareSmoke_Blue"     \
  , "SWS_Magazine_3Rnd_FlareSmoke_Green"  \
  , "SWS_Magazine_3Rnd_FlareSmoke_Orange" \
  , "SWS_Magazine_3Rnd_FlareSmoke_Purple" \
  , "SWS_Magazine_3Rnd_FlareSmoke_Red"    \
  , "SWS_Magazine_3Rnd_FlareSmoke_Yellow"

#define FLARE_MASS 4
#define BULK_OFFSET 2

#define C_GL(var0,var1)                                                 \
  class SWS_Magazine_3Rnd_FlareSmoke_##var1 : OPTRE_SignalSmoke##var0 { \
    ITEM_META(2);                                                       \
    displayName = QNAME(Flare Smoke (3Rnd var1));                       \
    count = 3;                                                          \
    mass = FLARE_MASS * 3 - BULK_OFFSET;                                \
  }

class CfgMagazines {
  class OPTRE_SignalSmokeB;
  class OPTRE_SignalSmokeG;
  class OPTRE_SignalSmokeO;
  class OPTRE_SignalSmokeP;
  class OPTRE_SignalSmokeR;
  class OPTRE_SignalSmokeY;

  C_GL(B,Blue);
  C_GL(G,Green);
  C_GL(O,Orange);
  C_GL(P,Purple);
  C_GL(R,Red);
  C_GL(Y,Yellow);
};

#undef C_GL
#undef FLARE_MASS
#undef BULK_OFFSET
