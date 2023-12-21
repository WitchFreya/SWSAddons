#define CLASSES_MAGAZINES \
  "SWS_Magazine_6Rnd_Shotgun_Incendiary" \
  , "SWS_Magazine_12_Rnd_Shotgun_Incendiary"

class CfgMagazines
{
  class OPTRE_6Rnd_8Gauge_Pellets;

  class SWS_Magazine_6Rnd_Shotgun_Incendiary : OPTRE_6Rnd_8Gauge_Pellets
  {
    ITEM_META(2);
    ammo = "SWS_B_8Gauge_Incendiary";
    displayNameShort = "8-Gauge Incendiary";
    displayName = QNAME(Dragon's Breath (6Rnd));
    descriptionShort = QUOTE(6 Rounds<br>8 Gauge<br>Incendiary);
    tracersEvery = 1;
  };

  class SWS_Magazine_12_Rnd_Shotgun_Incendiary : SWS_Magazine_6Rnd_Shotgun_Incendiary
  {
    displayName = QNAME(Dragon's Breath (12Rnd));
    descriptionShort = QUOTE(12 Rounds<br>8 Gauge<br>Incendiary);
    mass = 20;
    count = 12;
  };
};
