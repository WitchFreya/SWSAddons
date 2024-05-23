#define CLASSES_WEAPONS \
  "SWS_S379_DMR"

class CfgWeapons
{
  class optic_AMS;
  class SWS_Optic_SxAMS: optic_AMS
  {
    displayName = QNAME(SxAMS);
    descriptionShort = QUOTE(Experimental optic based on the US Optics MR-10.<br/> A night vision mode has been added.);
    class itemInfo : itemInfo
    {
      class opticsModes : opticsModes
      {
        class AMS : AMS
        {
          visionMode[] = {"Normal","NVG"};
        };
      };
    };
  };
};