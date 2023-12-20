class CfgWeapons
{
  class GrenadeLauncher;
  class Throw : GrenadeLauncher
  {
    class ThrowMuzzle;
    class SWS_Muzzle_M3Sx : ThrowMuzzle
    {
      magazines[] = {"SWS_Magazine_Grenade_M3Sx"};
    };

    muzzles[] += {"SWS_Muzzle_M3Sx"};
  };
};
