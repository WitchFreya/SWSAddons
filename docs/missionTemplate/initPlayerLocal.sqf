#include "Variables.hpp"

params ["_player", "_didJIP"];

private _fn_showTitle = {
    QUOTE(MISSION_DATE) splitString "," params ["_dayMonth", "_year"];
	[
		QNAME,
		QLOCATION, _dayMonth, _year
	] remoteExec ["SWS_fnc_missionTitle", 0];
};

private _action = ["showMissionTitle", "[SWS] Show Mission Title", "", _fn_showTitle, {true}] call ace_interact_menu_fnc_createAction;
[["ACE_ZeusActions"], _action] call ace_interact_menu_fnc_addActionToZeus;

