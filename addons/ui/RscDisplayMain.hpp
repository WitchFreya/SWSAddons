class RscPicture;
class RscStandardDisplay;
class RscControlsGroupNoScrollbars;
class RscActivePicture;
class RscActiveText;

class RscDisplayMain: RscStandardDisplay {
    class RscActivePicture {
        access = 0;
        color[] = {1,1,1,0.5};
        colorActive[] = {1,1,1,1};
        colorDisabled[] = {1,1,1,0.25};
        default = 0;
        deleteable = 0;
        fade = 0;
        font = "RobotoCondensed";
        h = 0.035;
        idc = -1;
        shadow = 2;
        sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
        soundClick[] = {"",0.1,1};
        soundEnter[] = {"",0.1,1};
        soundEscape[] = {"",0.1,1};
        soundPush[] = {"",0.1,1};
        style = 48;
        text = "";
        tooltipColorBox[] = {1,1,1,1};
        tooltipColorShade[] = {0,0,0,0.65};
        tooltipColorText[] = {1,1,1,1};
        type = 11;
        url = "";
        w = 0.035;
        x = 0;
        y = 0;
    };

    class Controls {
        delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
        delete SpotlightNext;
        delete SpotlightPrev;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;

        class BackgroundBar;
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };

        class BackgroundCenter : BackgroundBar {
            shadow = 0;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.5};
            colorShadow[] = {0,0,0,0.5};
        };

        class Logo: RscActivePicture {
            delete onButtonClick;
            delete onSetFocus;
            delete onKillFocus;
            delete tooltip;
            color[] = {1,1,1,1};
            colorActive[] = {1,1,1,1};
			text = QPATHTOF(data\icon-logo.paa);
		};

        class GroupMultiplayer: GroupSingleplayer {
            h = "(4 *   1.5) *  (pixelH * pixelGrid * 2)";

            class Controls: Controls {
                class QuickPlay;
                class Campaigns;
                class GVAR(JoinServer): QuickPlay {
                    idc = -1;
                    text = "Join SWS Server";
                    tooltip = "If this doesn't work, use the Server Browser as normal.";
                    y = "(1 *   1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
                    onButtonClick = "connectToServer ['136.37.178.26',2502,'awoo'];";
                    animTextureNormal = QPATHTOF(data\buttonMissionMainMenu_ca.paa);
                    animTextureDisabled = QPATHTOF(data\buttonMissionMainMenu_ca.paa);
                    animTextureOver = QPATHTOF(data\buttonMissionMainMenuHover_ca.paa);
                    animTextureFocused = QPATHTOF(data\buttonMissionMainMenuHover_ca.paa);
                    animTexturePressed = QPATHTOF(data\buttonMissionMainMenu_ca.paa);
                    animTextureDefault = QPATHTOF(data\buttonMissionMainMenu_ca.paa);
                };
                class ServerBrowser: Campaigns {
                    y = "(2 *   1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
                };
                class ApexProtocol: Campaigns {
                    y = "(3 *   1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
                };
            };
        };
    };

    delete Spotlight;
    enableDisplay = 0;
    class controlsBackground {
        delete LoadingPic;
        class Picture : RscPicture {
            idc=1;
            x = "SafeZoneX";
            y = "SafeZoneY";
            h = "SafeZoneH";
            w = "SafeZoneW";
            text = QPATHTOF(data\titlescreen-drop.jpg);
        };
    };
};
