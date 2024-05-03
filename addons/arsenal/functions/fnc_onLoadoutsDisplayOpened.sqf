#include "script_component.inc.sqf"
#include "defines.inc.sqf"

/*
 * Author: Maid
 * Listen for the loadout load event.
 *
 * Arguments:
 * 0: Display <DISPLAY>
 * 1: Loadouts Tab Control
 *
 * Return Value:
 * None
 *
 * Public: No
*/

TRACE_1(QGVAR(DOUBLES(fnc,onLoadoutsDisplayOpened)),_this);

params ["_display"];

private _centerBox /* CONTROL<ControlsGroup> */ = _display displayCtrl IDC_centerBox;
private _listBox /* CONTROL<ListNBox> */ = _centerBox controlsGroupCtrl IDC_contentPanel;

_listBox ctrlAddEventHandler ["LBSelChanged", FUNC(onSelChangedLoadouts)];
