#include "script_component.hpp"

/*
 * Author: Maid
 * An improved version of the BIS respawn module function.
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

params [
  ["_logic", objNull, [objNull]],
  ["_targets", [], [[]]],
  ["_activated", true, [true]]
];

//--- Remove potential positions added by this module and exit
if !_activated exitWith {
  private _respawnPositions = _logic getVariable ["respawn", []];
  _respawnPositions apply {
    if IS_ARRAY(_x) then {
      _x call BIS_fnc_removeRespawnPosition;
    } else {
      deleteMarker _x;
    };
  };
  _logic setVariable ["respawn", nil];
};

//--- Process client-only instructions
true call BIS_fnc_drawRespawnPositions;
if !isServer exitWith {};

//--- Parse module arguments
private _name /* string|nil */= _logic getVariable "Name";
private _markerType /* string (CfgMarkers config name) */ = _logic getVariable "MarkerType";
private _side /* side */ = [
  "side",
  { _logic getVariable _this; },
  {
      // Indep has a string of 'GUER' so doing a str apply won't work nicely.
    private _sideStrings = ["sideUnknown", "blufor", "opfor", "independent", "civilian"];
    ASSERT_TRUE_EXIT(_this in _sideStrings,"Unallowed side in module arguments",nil);
    TRACE_1("Precompile",_this);
    call compile _this;
  },
  {
    if !(_this isEqualTo sideEmpty) exitWith { _this; };
    call FUNC(winningSide);
  },
  {
    TRACE_1("Side",_this);
    _this;
  }
] call FUNCMAIN(pipe);

ASSERT_FALSE_EXIT(isNil {_side},"Cannot add respawn for nil side",false);
if (_side isEqualTo sideEmpty) exitWith {
  ["Respawn %1 not added as sides are tied for score",_logic] call BIS_fnc_logFormat;
};
private _showMarkerTo /* string */ = _logic getVariable "Marker";
private _showNotification /* boolean */ = _logic getVariable "ShowNotification";

TRACE_1("Side",_side);

private _pos = getPosATL _logic;


private _respawns /* [respawn, object][] */ = if (_markerType != "respawn_inf") then {
   //--- Create a respawn marker and set the variable for it.
  private _respawn = "respawn_vehicle_" + str _side + str _pos;
  createMarkerLocal [_respawn, _pos];
  _respawn setMarkerDirLocal ((round direction _logic) * 360);
  _respawn setMarkerSizeLocal [1, 1];
  _respawn setMarkerColorLocal ([_side, true] call BIS_fnc_sideColor);
  _respawn setMarkerType _markerType;
  _logic setVariable ["marker", _respawn];
  [[_respawn, objNull]];
} else {
  private _vehicles = _targets select { _x isKindOf "AllVehicles"; };
  TRACE_1("Reached",_vehicles);
  if (count _vehicles == 0) exitWith {
    private _respawn = [_side, _pos, _name] call BIS_fnc_addRespawnPosition;
    [[_respawn, objNull]];
  };

  _vehicles apply {
    private _respawn = [_side, _x, _name] call BIS_fnc_addRespawnPosition;
    [_respawn, _x];
  };
};

_logic setVariable ["respawn", _respawns apply { _x select 0 }];


//--- Pop notifications for respawns
if (_showNotification) then {
  private _markerCfgName = (configFile >> "CfgMarkers" >> _markerType >> "name") call BIS_fnc_getCfgData;
  _respawns apply {
    private _veh = _x select 1;
    private _name = if !(isNil {_name}) then {
      _name call BIS_fnc_localize;
    } else {
      if (isNull _veh) then {
        format [localize "str_a3_bis_fnc_respawnmenuposition_grid", mapGridPosition _pos];
      } else {
        (configOf _veh >> "displayName") call BIS_fnc_getCfgData;
      };
    };
    private _pos = if !(isNull _veh) then {getPosATL _veh} else {_pos};
    ["RespawnAdded", [_markerCfgName, _name, _markerType call BIS_fnc_textureMarker]] remoteExec ["BIS_fnc_showNotification", _side];
  };
};

//--- Update the positions on the mission
private _list = missionNamespace getVariable ["BIS_fnc_moduleRespawnPosition_list", []];
_list pushBack _logic;
missionNamespace setVariable ["BIS_fnc_moduleRespawnPosition_list", _list];

if !(isNil {GVAR(ModuleRespawnPosition_loop)}) exitWith {
  TRACE_1("Already looping",GVAR(ModuleRespawnPosition_loop));
  true;
};

//--- Monitor the markers and update them when they change
GVAR(ModuleRespawnPosition_loop) = [] spawn {
  scriptName QGVAR(ModuleRespawnPosition_loop);
  private _markersCache = missionNamespace getVariable ["BIS_fnc_moduleRespawnPosition_list", []] apply {
    _x getVariable ["marker", ""];
  };
  waitUntil {
    private _list = missionnamespace getvariable ["BIS_fnc_moduleRespawnPosition_list", []];
    TRACE_2("Loop",_list,_markersCache);
    //--- Update less often depending on how many entities there are.
    { sleep 0.1; } forEach _list;

    //--- Remove deleted modules
    private _cleanedList = _list - [objNull];
    missionNamespace setVariable ["BIS_fnc_moduleRespawnPosition_list", _cleanedList];
    //--- Removed deleted markers
    private _currentMarkers = _list apply {
      _x getVariable ["marker", ""];
    };
    private _deletedMarkers = _markersCache - _currentMarkers;
    {
      deleteMarker _x;
    } forEach _deletedMarkers;
    //--- Update cache
    _markersCache = _currentMarkers;
    //--- None left, so we're done.
    if (count _list == 0) exitWith {true};
    //--- Update markers that have moved.
    private _movedMarkers = _list select {
      private _prevPos = _x getVariable ["BIS_fnc_position_forced", [0, 0, 0]];
      getPosATL _x distance _prevPos > 0;
    };
    {
      private _newPos = getPosATL _x;
      _x setVariable ["BIS_fnc_position_forced", _newPos, true];
      private _marker = _x getVariable ["marker", ""];
      if (_marker == "") then { continue; };
      _marker setMarkerPos _newPos;
    } forEach _movedMarkers;

    count _list == 0;
  };
  GVAR(ModuleRespawnPosition_loop) = nil;
};
