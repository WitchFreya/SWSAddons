class RscStandardDisplay;
class RscControlsGroupNoScrollbars;

class RscDisplayMain: RscStandardDisplay {
    class controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupMultiplayer: GroupSingleplayer {
            h = "(4 *   1.5) *  (pixelH * pixelGrid * 2)";

            class Controls: Controls {
                class QuickPlay;
                class Campaigns;
                class GVAR(JoinServer): QuickPlay {
                    idc = -1;
                    text = "Join SWS Server (Beta)";
                    tooltip = "If this doesn't work, use the Server Browser as normal.";
                    y = "(1 *   1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
                    onButtonClick = "connectToServer ['136.32.183.49',2502,'awoo'];";
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
};
