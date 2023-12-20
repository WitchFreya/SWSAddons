class CfgWeapons
{
  class GrenadeLauncher;
  class Throw : GrenadeLauncher
  {
    class ThrowMuzzle;
    class SWS_Muzzle_C7Sx : ThrowMuzzle
    {
      magazines[] = {"SWS_Magazine_C7Sx_Sticky"};
    };

    muzzles[] += {"SWS_Muzzle_C7Sx"};
  };
};
