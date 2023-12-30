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

TRACE_3("moduleRespawnPosition",_logic,_targets,_activated);

//--- Remove potential positions added by this module and exit
if !(_activated) exitWith {
  private _respawnPositions = _logic getVariable ["respawn", []];
  {
    if IS_ARRAY(_x) then {
      _x call BIS_fnc_removeRespawnPosition;
    } else {
      deleteMarker _x;
    };
  } forEach _respawnPositions;
  _logic setVariable ["respawn", nil];
};

//--- Process client-only instructions
true call BIS_fnc_drawRespawnPositions;
if !(isServer) exitWith {};

//--- Parse module arguments
private _name /* string|nil */ = _logic getVariable "Name";
private _markerType /* string: CfgMarkers config name */ = _logic getVariable "MarkerType";
private _side /* side */ = [
  "side",
  { _logic getVariable _this; },
  /* string -> side: Compile side string to side object */
  {
    // Indep has a string of 'GUER' so doing a str apply won't work nicely.
    private _sideStrings = ["sideUnknown", "blufor", "opfor", "independent", "civilian"];
    ASSERT_TRUE_EXIT(_this in _sideStrings,"Unallowed side in module arguments",nil);
    call compile _this;
  },
  /* side -> side: Replace side with higher scoring side when appropriate */
  {
    if !(_this isEqualTo sideEmpty) exitWith { _this; };
    call FUNC(winningSide);
  }
] call FUNCMAIN(pipe);

ASSERT_FALSE_EXIT(isNil {_side},"Cannot add respawn for nil side",false);
TRACE_3("Module respawn position initialized",_name,_markerType,_side);
if (_side isEqualTo sideEmpty) exitWith {
  ["Respawn %1 not added as sides are tied for score",_logic] call BIS_fnc_logFormat;
};
private _showMarkerTo /* string */ = _logic getVariable "Marker";
private _showNotification /* boolean */ = _logic getVariable "ShowNotification";
private _pos = getPosATL _logic;
private _respawnObjs /* Map<[side,number],instanceof AllVehicles> */ = createHashMap;

//--- Start creating respawns
private _isInfantryRespawn = _markerType == "respawn_inf";
private _respawns /* ([side, number]|string)[] */ = if _isInfantryRespawn then {
  private _vehicleTargets = _targets select { _x isKindOf "AllVehicles"; };
  if (count _vehicleTargets == 0) exitWith {
    private _respawn = [_side, _pos, _name] call BIS_fnc_addRespawnPosition;
    [_respawn];
  };

  _vehicleTargets apply {
    private _respawn = [_side, _x, _name] call BIS_fnc_addRespawnPosition;
    _respawnObjs set [_respawn, _x];
    TRACE_2("Setting object",_respawn,_x);
    _respawn;
  };
} else {
  private _sideId = _side call BIS_fnc_sideID;
  //--- Needs special behavior for independents, because of course it does.
  private _markerSide = ["east", "west", "guerilla", "civilian"] select _sideId;
  //--- Create a respawn marker and set the variable for it.
  private _respawn = "respawn_vehicle_" + _markerSide + str _pos;
  createMarkerLocal [_respawn, _pos];
  _respawn setMarkerDirLocal ((round direction _logic) * 360);
  _respawn setMarkerSizeLocal [1, 1];
  _respawn setMarkerColorLocal ([_side, true] call BIS_fnc_sideColor);
  _respawn setMarkerType _markerType;
  _logic setVariable ["marker", _respawn];
  [_respawn];
};

TRACE_2("Respawn entities",_respawns,_respawnObjs);

_logic setVariable ["respawn", _respawns];

//--- Update the respawn modules on the mission
private _list = missionNamespace getVariable ["BIS_fnc_moduleRespawnPosition_list", []];
_list pushBackUnique _logic;
missionNamespace setVariable ["BIS_fnc_moduleRespawnPosition_list", _list];

//--- Monitor and update respawns when necessary.
if (isNil {GVAR(ModuleRespawnPosition_loop)}) then {
  TRACE_1("Beginning respawn module update loop",_list);
  [] spawn FUNC(moduleRespawnLoop);
};

//--- If we don't need notifications, we're done.
if !(_showNotification) exitWith {
  TRACE_1("No notifications needed, exiting",_list);
  true;
};

/* Calculate a name from the position and potentiall synchronized entity. */
private _fnc_respawnNotificationName /* object -> string */ = {
  params [
    ["_respawnObj", objNull, [objNull]]
  ];

  //--- If the module has provided a name, use that.
  if !isNil {_name} exitWith {
    _name call BIS_fnc_localize;
  };

  [
    _respawnObj,
    /* object -> [string, Position] */
    {
      if isNull _this exitWith {
        private _base = format [localize "str_a3_bis_fnc_respawnmenuposition_grid", mapGridPosition _pos];
        TRACE_2("Converted to string,pos",_base,_pos);
        [_base, _pos];
      };

      private _base = (configOf _this >> "displayName") call BIS_fnc_getCfgData;
      TRACE_2("Non-null object",_base,getPosATL _this);
      [_base, getPosATL _this];
    },
    {
      params ["_baseName", "_position"];
      private _description = _position call BIS_fnc_locationDescription;
      TRACE_2("Assemble name",_baseName,_description);
      format ["%1 - %2", _baseName, _description];
    }
  ] call FUNCMAIN(pipe);
};

private _markerCfgName = (configFile >> "CfgMarkers" >> _markerType >> "name") call BIS_fnc_getCfgData;
private _markerTexture = _markerType call BIS_fnc_textureMarker;
{
  private _respawnObj = _respawnObjs getOrDefault [_x, objNull];
  private _name = _respawnObj call _fnc_respawnNotificationName;
  private _pos = if !(isNull _respawnObj) then {getPosATL _respawnObj} else {_pos};
  ["RespawnAdded", [_markerCfgName, _name, _markerTexture]] remoteExec ["BIS_fnc_showNotification", _side];
} forEach _respawns;
