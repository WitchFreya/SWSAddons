//--- Pre-title screen load
class RscDisplayStart : RscStandardDisplay {
	class Controls {
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
