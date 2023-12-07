class 6000Rnd_762x51_Belt_Red_SXLB: 5000Rnd_762x51_Belt
{
    count = 6000;
    ammo = "B_762x51_Ball_SXLB";
    displaynameshort = "7.62x51 mm";
    displayName = "7.62x51 mm";
    descriptionShort = "7.62x51 mm";
    tracersEvery = 3;
    weight = 180;
    muzzleImpulseFactor = 0.5;
};
class Pylon_L_6000Rnd_M134_SXLB: 6000Rnd_762x51_Belt_Red_SXLB
{
    displayName = "Microgun";
    model = "melb\proxies\pylon_m134_l";
    muzzleEnd = "muzzleEnd";
    muzzlePos = "muzzlePos";
    hardpoints[] = {"Left_MinigunMount_SXLB"};
    pylonWeapon = "S134_SXLB";
    selectionFireAnim = "zasleh";
    mass = 60;
};
class Pylon_R_6000Rnd_M134_SXLB: Pylon_L_6000Rnd_M134_SXLB
{
    model = "melb\proxies\pylon_m134_r";
    hardpoints[] = {"Right_MinigunMount_SXLB"};
};