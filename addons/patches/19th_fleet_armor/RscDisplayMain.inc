class RscDisplayMain : RscStandardDisplay {
  delete RscActivePicture;
  class Controls {
    delete SpotlightNext;
    delete SpotlightPrev;
    class Logo : RscActivePicture {};
  };
  class ControlsBackground {
    delete LoadingPic;
  };
};
