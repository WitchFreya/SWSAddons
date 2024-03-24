#define CLASSES_WEAPONS \
  "SWS_Vector_343"

class CfgWeapons {
  class ACE_Vector;

  class SWS_Vector_343_Base : ACE_Vector {
    ITEM_META(0);
    CLEARANCE(SECRET/DECWHI);
    displayName = "-";
    descriptionShort = "An improved version of the 21st-century Vector 21 with zoom and integrated thermals.";
    visionMode[] = {"Normal", "NVG", "TI"};
    thermalMode[] = {THERMAL_MODE_IR};
    opticsZoomInit = 0.05;
    opticsZoomMax = 0.05;
    opticsZoomMin = 0.01;
  };

  class SWS_Vector_343 : SWS_Vector_343_Base {
    SCOPE(2);
    displayName = QNAME(Vector 343);
  };
};
