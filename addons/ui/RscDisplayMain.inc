

class RscDisplayMain: RscStandardDisplay {
  enableDisplay = FALSE;
  class Controls {
    //--- Adjust header bar for our icon
    class BackgroundBar;
    class GroupSingleplayer;

    class BackgroundCenter : BackgroundBar {
      shadow = 0;
      colorText[] = {RGBA_WHITE};
      colorBackground[] = {RGBA_BLACK_TRANSLUCENT};
      colorShadow[] = {RGBA_BLACK_TRANSLUCENT};
    };

    class Logo : RscActivePicture {
      onButtonClick = "";
      onSetFocus = "";
      onKillFocus = "";
      tooltip = "Scarlet Wolf Sorority";
      color[] = {RGBA_WHITE};
      colorActive[] = {RGBA_WHITE};
      text = QPATHTOF(data\icon-logo.paa);
    };

    //--- Add the Join SWS Server button to the Multiplayer Menu
    class GroupMultiplayer : GroupSingleplayer {
      h = "(4 * 1.5) *  (pixelH * pixelGrid * 2)";

      class Controls : Controls {
        class QuickPlay;
        class Campaigns;

        class SWS_JoinServer : QuickPlay {
          idc = -1;
          text = "Join SWS Server";
          tooltip = "If this doesn't work, use the Server Browser as normal.";
          y = "(1 *   1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
          onButtonClick = "connectToServer ['167.160.89.82',2321,'awoo'];";
        };

        class ServerBrowser : Campaigns {
          y = "(2 *   1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
        };

        class ApexProtocol : Campaigns {
          y = "(3 *   1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
        };
      };
    };
  };

  class ControlsBackground {
    class Picture : RscPicture {
      x = "SafeZoneX";
			y = "SafeZoneY";
			h = "SafeZoneH";
			w = "SafeZoneW";
      text = QPATHTOF(data\titlescreen-drop.jpg);
    };
    class LoadingPic : Picture {
      idc = -1;
    };
  };
};
