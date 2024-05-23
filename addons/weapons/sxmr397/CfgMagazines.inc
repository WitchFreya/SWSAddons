#define CLASSES_MAGAZINES \
  "SWS_Magazine_20Rnd_338_Abyssal" \
  , "SWS_Magazine_20Rnd_338_Abyssal_Tracers"

class CfgMagazines
{
  class OPTRE_15Rnd_762x51_AP_Mag;
  class SWS_Magazine_20Rnd_338_Abyssal : OPTRE_15Rnd_762x51_AP_Mag
  {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    ammo = "SWS_338_Abyssal";
    displayName = QUOTE(20Rnd .338 XMR-0 Magazine);
    displayNameShort = QUOTE(.338 Abyssal);
    descriptionShort = ".338 Hand-loaded variant. Uses experimental alloys derived from studying Forerunner metallic alloys.";
    lastRoundsTracer = 3;
    count = 20;
    mass = 10;
  };

  class SWS_Magazine_20Rnd_338_Abyssal_Tracers : SWS_Magazine_20Rnd_338_Abyssal
  {
    displayName = QUOTE(20Rnd .338 XMR-T (RED));
    displayNameShort = QUOTE(.338 Abyssal Red Tracer);
    tracersEvery = 1;
  };
};