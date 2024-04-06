class Cfg3DEN {
  class Attributes {
    class ACE_Arsenal_Attribute : ctrlControlsGroupNoScrollbars {
      class Controls {
        class ModeTitle;

        class SWS_AddDefaults : ctrlButton {
          idc = IDC_ADD_SWS_DEFAULTS;
          style = ST_CENTER;
          onButtonClick = QUOTE([ctrlParentControlsGroup (_this select 0)] call FUNC(attributeAddDefaults));
          text = "Add SWS Defaults";
          tooltip = "Import all items used as a part of our standard arsenal.";
          font = "RobotoCondensedLight";
          x = QUOTE(98.5 * ATTRIBUTE_W);
          y = QUOTE(0 * ATTRIBUTE_H);
          w = QUOTE(31.25 * ATTRIBUTE_W);
          h = QUOTE(4 * ATTRIBUTE_H);
          sizeEx = QUOTE(4 * ATTRIBUTE_H);
          colorBackground[] = {0, 0, 0, 0.5};
        };
      };
    };
  };
};
