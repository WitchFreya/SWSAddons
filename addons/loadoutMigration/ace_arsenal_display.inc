class ctrlControlsGroupNoScrollbars;
class ctrlButton;

#define BTN_W 24.583
#define BTN_PAD 2.5
#define BTN_X(var) QUOTE((var * (BTN_W + BTN_PAD)) * GRID_W)

class ace_arsenal_loadoutsDisplay {
    class controls {
        class centerBox : ctrlControlsGroupNoScrollbars {
            class controls {
                class buttonSave : ctrlButton {
                    w = QUOTE(BTN_W * GRID_W);
                };

                class buttonRename : buttonSave {
                    x = BTN_X(1);
                };

                class buttonLoad : buttonSave {
                    x = BTN_X(2);
                };

                class buttonShare : buttonSave {
                    x = BTN_X(3);
                };

                class buttonMigrate : buttonSave {
                    idc = IDC_buttonMigrate;
                    x = BTN_X(4);
                    text = "Migrate";
                    tooltip = "Attempt to migrate invalid loadout to the new version of SWS Addons";
                    onButtonClick = QUOTE([ARR_2(ctrlParent (_this select 0), _this select 0)] call FUNC(onClickMigrate));
                };

                 class buttonDelete : buttonSave {
                    x = BTN_X(5);
                };
            };
        };
    };
};
