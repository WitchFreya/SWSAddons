#define CLASSES_MAGAZINES \
  "SWS_Magazine_50rnd_SX90"
class CfgMagazines
{
  class 50Rnd_570x28_SMG_03;
  class SWS_Magazine_50rnd_SX90 : 50Rnd_570x28_SMG_03
  {
    ITEM_META(2);
    CLEARANCE(RESTRICTED/DECWHI);
    ammo = "B_65x39_Caseless";
    displayName = QNAME(50Rnd 6.5mm Sx90 Magazine);
    displayNameShort = QUOTE(6.5mm Caseless);
    descriptionShort = "Caliber: 6.5mm<br />Rounds: 50<br />Used in: SX90";
    mass = 17;
    lastRoundsTracer = 7;
  };
};