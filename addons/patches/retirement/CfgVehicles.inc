class CfgVehicles
{
  class House_F;
  class Dropbay : House_F
  {
    displayName = "Dropbay (Stairs)";
    author = "Sanchez";
    dlc = "41";
    class AnimationSources
    {
      class Cylinder_Spin
      {
        delete sound;
        delete soundPosition;
      };
    };
  };
  class Dropbay_2 : House_F
  {
    displayName = "Dropbay (Sealed)";
    author = "Sanchez";
    dlc = "41";
    class AnimationSources
    {
      class Cylinder_Spin
      {
        delete sound;
        delete soundPosition;
      };
    };
  };
};
