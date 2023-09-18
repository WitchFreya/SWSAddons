#define MAG_NAME(var) NAME(var##Rnd 6.5mm Promet Mag)
#define QMAG_NAME(var) QUOTE(MAG_NAME(var))
#define QMAG_DESC(var) QUOTE(Caliber: 6.5x39 mm STANAG Caseless<br />Rounds: var <br/> Used in: MX/C/M/SW/3GL)

class MAGAZINE(60Rnd_65x39_Caseless_msbs_mag) : 30Rnd_65x39_caseless_msbs_mag
{
    CLEARANCE(RESTRICTED/DECWHI);
    ITEM_META(2);
    displayName = QMAG_NAME(60);
    descriptionShort = QMAG_DESC(60);
    lastRoundsTracer = 5;
    count = 60;
    mass = 10 * 3 - 5;
};

class MAGAZINE(60Rnd_65x39_Caseless_msbs_mag_tracers) : MAGAZINE(60Rnd_65x39_Caseless_msbs_mag)
{
    displayName = QUOTE(MAG_NAME(60) (Tracer));
    tracersEvery = 1;
};

#undef QMAG_NAME
#undef MAG_NAME
#undef MAG_DESC
