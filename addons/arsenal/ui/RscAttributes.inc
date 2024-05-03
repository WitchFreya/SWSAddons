#define BTN_W 24.583
#define BTN_PAD 2.5
#define BTN_X(var) QUOTE((var * (BTN_W + BTN_PAD)) * GRID_W)

class ACE_Arsenal_LoadoutsDisplay {
  class Controls {
    class CenterBox : ctrlControlsGroupNoScrollbars {
      class Controls {
        class ButtonSave : ctrlButton {
          w = QUOTE(BTN_W * GRID_W);
        };

        class ButtonRename : ButtonSave {
          x = BTN_X(1);
        };

        class ButtonLoad : ButtonSave {
            x = BTN_X(2);
        };

        class ButtonShare : ButtonSave {
            x = BTN_X(3);
        };

        class ButtonMigrate : ButtonSave {
          idc = IDC_buttonMigrate;
          x = BTN_X(4);
          text = "Migrate";
          tooltip = "Attempt to migrate invalid loadout to the new version.";
          onButtonClick = QUOTE([ARR_2(ctrlParent (_this select 0),_this select 0)] call FUNC(onClickMigrate));
        };

        class ButtonDelete : ButtonSave {
          x = BTN_X(5);
        };
      };
    };
  };
};
