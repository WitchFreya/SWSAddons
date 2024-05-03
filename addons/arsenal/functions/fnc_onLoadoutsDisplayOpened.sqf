#include "script_component.inc.sqf"
#include "defines.inc.sqf"

/*
 * Author: Maid
 * Add a selection handler to the loadouts display when it opens.
 *
 * Arguments:
 * 0: Display <DISPLAY>
 * 1: Loadouts Tab Control <CONTROL>
 *
 * Return Value:
 * None
 *
 * Public: No
*/

TRACE_1(QGVAR(DOUBLES(fnc,onLoadoutsDisplayOpened)),_this);

params ["_display"];

private _centerBox /* CONTROL<ControlsGroup> */ = _display displayCtrl IDC_centerBox;
private _contentPanel /* CONTROL<ListNBox> */ = _centerBox controlsGroupCtrl IDC_contentPanel;

_contentPanel ctrlAddEventHandler ["LBSelChanged", FUNC(onSelChangedLoadouts)];
