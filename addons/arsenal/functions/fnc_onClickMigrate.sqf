#include "script_component.inc.sqf"
#include "defines.inc.sqf"

/*
 * Author: Maid
 * Migrate the selected loadout if possible.
 *
 * Arguments:
 * 0: Arsenal display <DISPLAY>
 * 1: Button control <CONTROL>
 *
 * Return Value:
 * None
 *
 * Public: No
*/

TRACE_1(QFUNC(onClickMigrate),_this);

params ["_display","_control"];

private _ctrlGroup = ctrlParentControlsGroup _control;
private _contentPanel /* CONTROL<ListNBox> */ = _ctrlGroup controlsGroupCtrl IDC_contentPanel;
private _curSel /* SCALAR */ = lnbCurSelRow _contentPanel;
private _loadoutName = _contentPanel lnbText [_curSel, 1];
[_loadoutName] call FUNC(confirmMigrate);
