class RscTitles //part of the background
{
	class SplashNoise //part of the background
		{
			class BackgroundNoise: RscPicture //part of the background
			{
				text = "";
			};
		};
	class brokenhud : SplashNoise	//part of the background
		{
			duration = 100000000;
			class BackgroundNoise: RscPicture //part of the background
			{
				text = "";
			};
		};
};

class RscDisplayLoading {
	class Variants {
		class LoadingOne {
			idd = 250;
			class controls {
				class LoadingPic : RscPicture {
					idc=1;
					x = "SafeZoneX";
					y = "SafeZoneY";
					h = "SafeZoneH";
					w = "SafeZoneW";
					text = QPATHTOF(data\titlescreen-drop.jpg); // TODO: additional option
				};
			};
		};

		class Loading_West1 : LoadingOne {
			class controls {
				class LoadingPic : RscPicture {
					idc=1;
					x = "SafeZoneX";
					y = "SafeZoneY";
					h = "SafeZoneH";
					w = "SafeZoneW";
					text = QPATHTOF(data\titlescreen-drop.jpg); // TODO: third option
				};
			};
		};

		class Loading_West2 : LoadingOne {
			class controls {
				class LoadingPic : RscPicture {
					idc=1;
					x = "SafeZoneX";
					y = "SafeZoneY";
					h = "SafeZoneH";
					w = "SafeZoneW";
					text = QPATHTOF(data\titlescreen-drop.jpg);
				};
			};
		};

		class Loading_East1 : LoadingOne {
			class controls {
				class LoadingPic : RscPicture {
					idc=1;
					x = "SafeZoneX";
					y = "SafeZoneY";
					h = "SafeZoneH";
					w = "SafeZoneW";
					text = QPATHTOF(data\titlescreen-drop.jpg); // TODO: fourth option
				};
			};
		};
		class Loading_East2 : LoadingOne {
			class controls {
				class LoadingPic : RscPicture {
					idc=1;
					x = "SafeZoneX";
					y = "SafeZoneY";
					h = "SafeZoneH";
					w = "SafeZoneW";
					text = QPATHTOF(data\titlescreen-drop.jpg); // TODO: third option
				};
			};
		};
	};
};

class RscDisplayLoadMission : RscStandardDisplay {
	class controlsBackground {
		class LoadingPic : RscPicture {
			idc=1;
			x = "SafeZoneX";
			y = "SafeZoneY";
			h = "SafeZoneH";
			w = "SafeZoneW";
			text = QPATHTOF(data\titlescreen-drop.jpg);
		};
	};
};

class RscDisplayStart : RscStandardDisplay {
	class controls {
		class LoadingPic : RscPicture {
			idc=1;
			x = "SafeZoneX";
			y = "SafeZoneY";
			h = "SafeZoneH";
			w = "SafeZoneW";
			text = QPATHTOF(data\titlescreen-drop.jpg);
		};
	};
};

class RscDisplayMPPlayers;
	class RscDisplayClientWait : RscDisplayMPPlayers {
		class LoadingPic : RscPicture {
			idc=1;
			x = "SafeZoneX";
			y = "SafeZoneY";
			h = "SafeZoneH";
			w = "SafeZoneW";
			text = QPATHTOF(data\titlescreen-drop.jpg);
		};
	};

class RscDisplayClient : RscStandardDisplay {
	class controlsBackground {
		class LoadingPic : RscPicture {
			idc=1;
			x = "SafeZoneX";
			y = "SafeZoneY";
			h = "SafeZoneH";
			w = "SafeZoneW";
			text = QPATHTOF(data\titlescreen-drop.jpg);
		};
	};
};
