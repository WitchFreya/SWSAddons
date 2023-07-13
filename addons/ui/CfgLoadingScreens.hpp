class RscPicture{}; //part of the background
class RscStandardDisplay{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscText{};

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
class RscDisplayMain: RscStandardDisplay //this class changes the insignia on the top
{
	class Controls //this class changes the insignia on the top
	{
	    delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		class Logo: RscActivePicture //this class changes the insignia on the top
		{
			text = QPATHTOF(data\icon-logo.paa);

		};
	};
	enableDisplay = 0;
	delete Spotlight;
	class RscActiveText ;
    class RscActivePicture : RscActiveText
    {
        style = 48;
        color[] = {
                1, 1, 1, 0.500000
        };
        colorActive[] = {
                1, 1, 1, 1
        };
    };

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
				class LoadingPic {
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
				class LoadingPic {
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
				class LoadingPic {
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
				class LoadingPic {
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
