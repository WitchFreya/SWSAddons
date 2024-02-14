class SWS_RscCustomInfoODSTRadar {
  idd = IDD_FOF;
  onLoad = QUOTE(_this call FUNC(onLoadRadar));
  onUnload = QUOTE(_this call FUNC(onUnloadRadar));

  class Controls {
    class Title : RscIGUIText {
      idc = IDC_FOF_TITLE;
      // x = 0;
      // y = 0;
      w = QUOTE(IGUI_GRID_CUSTOMINFO_WAbs);
      h = QUOTE(GUI_GRID_H);

      text = "FoF";
      sizeEx = QUOTE(0.8 * GUI_GRID_H);
      colorBackground[] = IGUI_BCG_COLOR;
    };

    class Range : RscIGUIText {
      idc = IDC_FOF_RANGE;
      x = QUOTE(0.7 * IGUI_GRID_CUSTOMINFO_WAbs);
      // y = 0;
      w = QUOTE(0.3 * IGUI_GRID_CUSTOMINFO_WAbs);
      h = QUOTE(GUI_GRID_H);

      text = "50m";
      style = ST_RIGHT;
    };
  };

  class ControlsBackground {
    class Background : RscPicture {
      idc = IDC_FOF_BACKGROUND;
      // Occupy remaining space beneath title bar.
      // x = 0;
      y = QUOTE(GUI_GRID_H);
      h = QUOTE(IGUI_GRID_CUSTOMINFO_HAbs - GUI_GRID_H);
      w = QUOTE(IGUI_GRID_CUSTOMINFO_WAbs);

      colorText[] = IGUI_BCG_COLOR;
      text = "a3\ui_f\data\igui\RscCustomInfo\background_ca.paa";
    };

    class ViewPort : RscControlsGroupNoScrollbars {
      idc = IDC_FOF_VIEWPORT;
      x = QUOTE(0.125 * GUI_GRID_W);
      y = QUOTE(1.125 * GUI_GRID_H);
      h = QUOTE(IGUI_GRID_CUSTOMINFO_HAbs);
      w = QUOTE(IGUI_GRID_CUSTOMINFO_WAbs);
    };
  };
};
