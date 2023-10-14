#include "RscCommon.inc"
#include "..\defines.hpp"

class ace_arsenal_display
{
    class controls
    {
        class tabLeft: RscControlsGroupNoScrollbars
        {
            class controls
            {
                class iconBackgroundPrimaryWeapon;
                class buttonPrimaryWeapon;

                class iconBackgroundRole: iconBackgroundPrimaryWeapon
                {
                    idc = IDC_iconBackgroundRole;
                    y = QUOTE(180 * GRID_H);
                };
                class buttonRole: buttonPrimaryWeapon
                {
                    idc = IDC_buttonRole;
                    tooltip = "Role";
                    text = QPATHTOF(data\sws_icon_howl_ca.paa);
                    y = QUOTE(180 * GRID_H);
                };
            };
        };
    };
};
