#define INCENDIARY_NAME(var0) displayName = QNAME(var0##Rnd Dragon's Breath); \
    descriptionShort = QUOTE(var0 Rounds<br>8 Gauge<br>Incendiary)

class MAGAZINE(6Rnd_Shotgun_Incendiary) : OPTRE_6Rnd_8Gauge_Pellets {
    ITEM_META(2);
    ammo = QAMMO(8Gauge_Incendiary);
    displayNameShort = "8-Gauge Incendiary";
    INCENDIARY_NAME(6);
    tracersEvery = 1;
};

class MAGAZINE(12_Rnd_Shotgun_Incendiary) : MAGAZINE(6Rnd_Shotgun_Incendiary) {
    INCENDIARY_NAME(12);
    mass = 20;
    count = 12;
};

#undef INCENDIARY_NAME
