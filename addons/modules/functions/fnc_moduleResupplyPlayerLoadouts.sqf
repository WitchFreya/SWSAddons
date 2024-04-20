#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Resupply player loadouts.
 *
 * Arguments:
 * 0: Logic <LOGIC>
 *
 * Return Value:
 * True if dialog was created.
 *
 * Example:
 * [LOGIC] call sws_modules_fnc_moduleResupplyPlayerLoadouts;
 *
 * Public: No
 */

params ["_logic"];

// Only run for the Zeus that placed it.
if !(local _logic) exitWith {};

TRACE_1("moduleResupplyPlayerLoadouts",_this);

/*

  1. Get input.
  2. Create vehicle
  3. Drop item w/parachute (or maybe not depending on item)
  4. Mark it somehow.

  What input is needed?
  - Whose equipment to include in the resupply.
  - Whether or not to use an air vehicle for the resupply.
  - Amount of equipment to resupply.

*/

/*
  Control: [
    ControlType: string,
    [DisplayName: string, Tooltip: string] | DisplayName: string,
    [...ControlArgs: unknown[]],
    ForceDefault: boolean = false
  ]
*/
private _dialogOptions = call {
  private _players /* (Player: object)[] */ = call BIS_fnc_listPlayers - [player];

  private _playerGroups /* Group[] */= _players apply { group _x; };
  private _groups /* Set<Group> */ = _playerGroups arrayIntersect _playerGroups;

  private _defaultTargets /* OWNER Dialog Args */ = [[blufor], _groups, _players, ZEN_DIALOG_OWNER_TAB_GROUPS];
  // Whose equipment should be considered?
  private _targetsDialog /* ZEN_Component<OWNER> */ = [
    "OWNERS",
    ["Targets", "Whose equipment should be included in the resupply?"],
    [[blufor], _groups, _players, ZEN_DIALOG_OWNER_TAB_GROUPS]
  ];

  private _includeForZeusDialog /* ZEN_Component<CHECKBOX> */ = [
    "CHECKBOX",
    ["Include Me", "Check this to include resupply munitions for you. If unchecked, you will not be considered for munitions unless you selected the Players option above and added yourself."],
    false
  ];

  private _airDropVehicleName = [
    configFile >> "CfgVehicles" >> GVAR(resupplyAirVehicle),
    "displayName",
    "unknown vehicle"
  ] call BIS_fnc_returnConfigEntry;
  // How should the resupply be dropped?
  private _sourceDialog /* ZEN_Component<LIST> */ = [
    "LIST",
    ["Source", "How should the supplies be delivered?"],
    [
      ["orbital", "aerial", "magic"],
      [
        ["Orbital", "Drop pods near the spot from orbit."],
        [format ["Air Drop from %1", _airDropVehicleName], "Fly in and drop pods."],
        ["Magic", "Attempt to restock their loadouts without user interactions. This may be destructive."]
      ],
      0
    ]
  ];

  [_targetsDialog, _includeForZeusDialog, _sourceDialog];
};

private _onConfirm = {
  params ["_selections", "_module"];
  _module params [
    "_logic"
  ];

  private _pos /* PosASL */ = getPosASL _logic;
  deleteVehicle _logic;

  _selections params [
    "_targeting",
    "_includeZeus",
    "_type",
    "_height"
  ];

  _targeting params [
    "_targetSides",
    "_targetGroups",
    "_targetPlayers",
    "_targetType"
  ];

  private _unitsToResupply /* Unit[] */ = call BIS_fnc_listPlayers
    arrayIntersect (switch _targetType do {
      case ZEN_DIALOG_OWNER_TAB_SIDES: {
        private _allUnits = flatten (_targetSides apply { units _x });
        if (_includeZeus) exitWith {_allUnits};
        _allUnits - [player];
      };
      case ZEN_DIALOG_OWNER_TAB_GROUPS: {
        private _allUnits = flatten (_targetGroups apply { units _x });
        if (_includeZeus) exitWith {_allUnits};
        _allUnits - [player];
      };
      case ZEN_DIALOG_OWNER_TAB_PLAYERS: {_targetPlayers};
    });

  if (count _unitsToResupply == 0) exitWith {
    ["No units selected to resupply"] call ace_zeus_fnc_showMessage;
  };

  if (_type == "magic") exitWith {
    {[_x] call EFUNC(resupply,restoreLastLoadout)} forEach _unitsToResupply;
  };

  // How high should it be dropped from?
  private _heightDialog = [
    "SLIDER",
    ["Airdrop height [m]", "How high should the item drop from? 0 will spawn on the ground."],
    [0, 1000, 200, 0]
  ];

  if (_type == "orbital") exitWith {
    private _onConfirm = {
      params ["_props", "_args"];
      _props params ["_dropHeight"];
      _args params ["_units", "_pos"];
      [_units, _dropHeight, _pos] call EFUNC(resupply,dropOrbitalResupply);
    };

    ["Orbital Resupply Options", [_heightDialog], _onConfirm, {}, [_unitsToResupply, _pos]] call zen_dialog_fnc_create;
  };
};

private _onCancel = {
  params ["", "_module"];
  _module params ["_logic"];
  deleteVehicle _logic;
};

[
  "Configure Resupply",
  _dialogOptions,
  _onConfirm,
  _onCancel,
  _this
] call zen_dialog_fnc_create;
