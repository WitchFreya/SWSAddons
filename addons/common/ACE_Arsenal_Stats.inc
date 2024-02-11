class ACE_Arsenal_Stats {
  class StatBase;

  class SWS_Clearance : StatBase {
    scope = 2;
    displayName = "Required Clearance";
    priority = 0;
    stats[] = {QGVARMAIN(clearanceLevel)};
    showBar = FALSE;
    showText = TRUE;
    textStatement = QUOTE(call DFUNC(aceStatText));
    condition = QUOTE(call DFUNC(aceStatHasText));
    barStatement = "1";
    // https://ace3.acemod.org/wiki/framework/arsenal-framework.html#54-stat-tab-numbers
    tabs[] = {
      { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 },
      { 0, 1, 2, 3, 4, 5, 6, 7 }
    };
  };
};
