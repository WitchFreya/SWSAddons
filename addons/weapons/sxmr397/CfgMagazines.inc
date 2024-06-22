#define CLASSES_MAGAZINES           \
  "SWS_Magazine_20Rnd_338_Abyssal"  \
  , "SWS_Magazine_20Rnd_338_Abyssal_Tracer"

class CfgMagazines {
  class OPTRE_15Rnd_762x51_AP_Mag;

  class SWS_Magazine_20Rnd_338_Abyssal : OPTRE_15Rnd_762x51_AP_Mag {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    ammo = "SWS_338_Abyssal";
    displayName = QNAME(20Rnd .338 Magazine);
    displayNameShort = QUOTE(.338 Abyssal);
    descriptionShort = QUOTE(.338 DMR rounds hand-loaded by Demon.<br/>Tipped with an alloy derived from Forerunner materials.);
    lastRoundsTracer = 3;
    count = 20;
    mass = 15;
  };

  class SWS_Magazine_20Rnd_338_Abyssal_Tracer : SWS_Magazine_20Rnd_338_Abyssal {
    displayName = QNAME(20Rnd .338 (Red Tracer));
    tracersEvery = 1;
  };
};
