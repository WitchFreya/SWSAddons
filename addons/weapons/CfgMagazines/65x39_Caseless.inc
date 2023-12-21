#define QMAG_DESC(var) QUOTE(Caliber: 6.5x39 mm STANAG Caseless<br />Rounds: var <br/> Used in: MX/C/M/SW/3GL)


#define MAG_NAME(var) NAME(var##Rnd 6.5mm Black Mag)
#define QMAG_NAME(var) QUOTE(MAG_NAME(var))
#define C_MAG(var) SWS_Magazine_##var##Rnd_65x39_Caseless

class C_MAG(60) : 100Rnd_65x39_caseless_black_mag
{
    CLEARANCE(RESTRICTED/DECWHI);
    ITEM_META(2);
    displayName = QMAG_NAME(60);
    descriptionShort = QMAG_DESC(60);
    lastRoundsTracer = 5;
    count = 60;
    mass = 10 * 3 - 5;
};

class DOUBLES(C_MAG(60),Tracers): C_MAG(60)
{
    displayName = QUOTE(MAG_NAME(60) (Red Tracer));
    tracersEvery = 1;
};
class DOUBLES(C_MAG(60),Tracers_Blue): DOUBLES(C_MAG(60),Tracers)
{
    displayName = QUOTE(MAG_NAME(60) (Blue Tracer));
    ammo = "B_65x39_Caseless_Blue";
};
class DOUBLES(C_MAG(60),Tracers_Yellow): DOUBLES(C_MAG(60),Tracers)
{
    displayName = QUOTE(MAG_NAME(60) (Yellow Tracer));
    ammo = "B_65x39_Caseless_Yellow";
};
class DOUBLES(C_MAG(60),Tracers_Green): DOUBLES(C_MAG(60),Tracers)
{
    displayName = QUOTE(MAG_NAME(60) (Green Tracer));
    ammo = "B_65x39_Caseless_Green";
};

#undef MAG_DESC
