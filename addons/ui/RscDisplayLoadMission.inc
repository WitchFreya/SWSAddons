//--- Displayed during mission load before initialization.
class RscDisplayLoadMission : RscStandardDisplay {
  class Controls {
    class LoadingStart {
      class Controls {
        class Logo : RscPictureKeepAspect {
          text = QPATHTOEF(main,data\icon_sws.paa);
        };
      };
    };
  };
	class ControlsBackground {
		class LoadingPic : RscPicture {
			idc = -1;
			x = "SafeZoneX";
			y = "SafeZoneY";
			h = "SafeZoneH";
			w = "SafeZoneW";
			text = QPATHTOF(data\titlescreen-drop.jpg);
		};
	};
};
