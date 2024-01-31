#include "script_component.hpp"

/* 
 * Append SWS ground vehicles to the following variables:
 * PHAN_UNSC_GV_list
 * PHAN_UNSC_GV_listDISPLAY
 *
 * Follows pattern defined in PHAN_ScifiSupportPlus/bootstrap/xeh_postinit_list.sqf
 */

call compile preprocessFileLineNumbers 'PHAN_ScifiSupportPlus\bootstrap\xeh_postinit_list.sqf';

private _sws_gv_list_insert = [
	"SWS_V_APC_M107_Beaver",
	"SWS_V_APC_M35_Cougar",
	"SWS_V_MBT_M700_Viper"
];

{
	if (_x!="" && (gettext (configFile >> "Cfgvehicles" >> _x >> "displayname")) != "") then 
	{
		private _color = switch ((getNumber (configFile >> "Cfgvehicles" >> _x >> "side"))) do {
			case 0: {
				[255, 0, 0, 255]
			};
			case 1: {
				[0, 0, 255, 255]
			};
			case 2: {
				[0, 255, 0, 255]
			};
			case 3: {
				[255, 0, 255, 255]
			};
			default {
				[0, 0, 0, 255]
			};
		};
		PHAN_UNSC_GV_listDISPLAY pushBack [
			(gettext (configFile >> "Cfgvehicles" >> _x >> "displayname")), 
			"", 
			(gettext (configFile >> "Cfgvehicles" >> _x >> "editorPreview")), 
			_color
		];
		PHAN_UNSC_GV_list pushBack _x;
	}
} forEach _sws_gv_list_insert;

PHAN_UNSC_GV_list;
PHAN_UNSC_GV_listDISPLAY;