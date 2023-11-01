class ace_arsenal_stats
{
    class statBase;

    class SWS_Clearance : statBase
    {
        scope = 2;
        displayName = "Required Clearance";
        priority = 0;
        stats[] = {QGVARMAIN(clearanceLevel)};
        showBar = 0;
        showText = 1;
        textStatement = QUOTE(call DFUNC(aceStatText));
        condition = QUOTE(call DFUNC(aceStatHasText));
        barStatement = "1";
        tabs[] = { // https://ace3.acemod.org/wiki/framework/arsenal-framework.html#54-stat-tab-numbers
            {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
            {0,1,2,3,4,5,6,7}
        };
    };
};
