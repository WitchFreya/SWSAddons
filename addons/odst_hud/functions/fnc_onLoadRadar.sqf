#include "script_component.inc.sqf"

TRACE_1("onLoadRadar",_this);

params [
  "_display"
];

uiNamespace setVariable [QGVAR(display), _display];

private _group = _display displayCtrl IDC_FOF_GROUP_MAP;
TRACE_1("onLoadRadar",_group);
private _ctrl = _group controlsGroupCtrl IDC_FOF_MAP;
TRACE_1("onLoadRadar",_ctrl);

// _group ctrlCommit 0;
// _ctrl ctrlMapSetPosition [];
// _ctrl ctrlMapAnimAdd [0, ctrlMapScale _ctrl, player];
// ctrlMapAnimCommit _ctrl;
TRACE_1("onLoadRadar",_ctrl);

_ctrl ctrlAddEventHandler ["Draw", {
  params ["_ctrl"];
  getCameraViewDirection player params ["_viewDirX", "_viewDirY"];
  private _playerDir = ((_viewDirX atan2 _viewDirY) + 360) % 360;
}];
