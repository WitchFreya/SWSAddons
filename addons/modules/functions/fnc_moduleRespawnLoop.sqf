#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Monitor variables of the respawn modules and update their state. Spawn, do not
 *
 * Arguments:
 * 0: logic <LOGIC> - The module for this function
 * 1: targets <ARRAY> - The synchronized objects.
 * 2: activated <BOOL> - Whether or not this is active.
 *
 * Return Value:
 * true on success
 *
 * Example:
 * [_this, [someVehicle], true] call sws_modules_fnc_moduleRespawnPosition;
 *
 * Public: No
 */

ASSERT_TRUE_EXIT(canSuspend,"moduleRespawnLoop must be able to suspend execution; try spawning",false);
private _markersCache /* string[] (marker keys) */ = missionNamespace getVariable [
  "BIS_fnc_moduleRespawnPosition_list", []
] apply {
  _x getVariable ["marker", ""];
};

GVAR(ModuleRespawnPosition_loop) = _thisScript;

/*
 * Remove markers that are in the cache from the map.
 */
private _fnc_removeDeletedMarkers = {
  params [
    ["_modules", [], [[]]]
  ];
  if (count _markersCache == 0) exitWith {};
  private _remainingMarkers = _modules apply { _x getVariable ["marker", ""]; };
  private _mut_deletedMarkers = _markersCache - _remainingMarkers;
  if (count _mut_deletedMarkers == 0) exitWith {};
  TRACE_1("Removing deleted markers",_mut_deletedMarkers);
  private _lastDeleted = _deletedMarkersMUT call BIS_fnc_arrayPop;
  {
    deleteMarkerLocal _x;
  } forEach _mut_deletedMarkers;
  deleteMarker _lastDeleted;
};

/*
 * Update the position of any passed markers that have been moved.
 */
private _fnc_updateMovedMarkers = {
  params [
    ["_modules", [], [[]]]
  ];

  if (count _modules == 0) exitWith {};
  //--- Get the moved markers and update their stored position.
  private _mut_movedMarkers = _modules select {
    private _prevPos = _x getVariable ["BIS_fnc_position_forced", [0, 0, 0]];
    private _newPos = getPosATL _x;
    private _hasMoved = _newPos distance _prevPos > 0;
    if !_hasMoved then { continueWith false; };
    //--- Update the stored position
    _x setVariable ["BIS_fnc_position_forced", _newPos, true];
    private _marker = _x getVariable ["marker", ""];
    _marker != "";
  };

  //--- No markers need to be moved, we're done.
  if (count _mut_movedMarkers == 0) exitWith {};
  TRACE_1("Updating moved markers",_mut_movedMarkers);
  //--- Do local ops first.
  private _lastMoved = _mut_movedMarkers call BIS_fnc_arrayPop;
  {
    private _newPos = getPosATL _x;
    private _marker = _x getVariable "marker";
    _marker setMarkerPosLocal _newPos;
    TRACE_1("Moving marker",_x);
  } forEach _mut_movedMarkers;
  private _newPos = getPosATL _lastMoved;
  private _marker = _lastMoved getVariable "marker";
  TRACE_2("Moving marker",_marker,_newPos);
  _marker setMarkerPos _newPos;
};

waitUntil {
  private _list = missionNamespace getVariable ["BIS_fnc_moduleRespawnPosition_list", []];

  //--- Decrease update rate based on how many entities there are to evaluate.
  { sleep 0.1; } forEach _list;
  TRACE_2("Updating respawn module markers",_list,_markersCache);

  //--- Clean up deleted modules and markers.
  private _cleanedList = _list - [objNull];
  [_cleanedList] call _fnc_removeDeletedMarkers;
  missionNamespace setVariable ["BIS_fnc_moduleRespawnPosition_list", _cleanedList];

  [_cleanedList] call _fnc_updateMovedMarkers;

  sleep 5;
  count _cleanedList == 0;
};

GVAR(ModuleRespawnPosition_loop) = nil;
