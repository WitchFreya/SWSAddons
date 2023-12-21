// modelSpecial = "a3\Weapons_F_Mark\MagazineProxies\mag_762x51_mk14_20rnd";
class CfgMagazines
{
  class 36Rnd_95x40_BR_55;
  class 150Rnd_762x51_Box;

  class 32Rnd_762x51_MA5 : 36Rnd_95x40_BR_55
  {
    modelSpecial = "a3\Weapons_F_Mark\MagazineProxies\mag_762x51_mk14_20rnd";
    modelSpecialIsProxy = 1;
  };

  class DMNS_100Rnd_762x51_Mag_GPMG : 150Rnd_762x51_Box
  {
    modelSpecial = "\OPTRE_Weapons\MG\M247_Mag_Proxy.p3d";
    modelSpecialIsProxy = 1;
  };
};
