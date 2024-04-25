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
  private _fnc_amountFormat = {format ["%1", [round _this, "∞"] select (round _this == 0)]};
  private _usesPerPersonDialog = [
    "SLIDER",
    ["Uses per Person", "How many times can a single unit restock from this?"],
    [0, 10, 1, _fnc_amountFormat]
  ];

  private _playerCount = count (call BIS_fnc_listPlayers);

  private _totalUsesDialog = [
    "SLIDER",
    [
      "Total Uses",
      format [
        "How many times can a this restock be used in total? Note: There are currently %1 players on the server.",
        _playerCount
      ]
    ],
    [0, 100, 0, _fnc_amountFormat]
  ];

  // How should the resupply be dropped?
  private _sourceDialog /* ZEN_Component<LIST> */ = [
    "LIST",
    ["Source", "How should the supplies be delivered?"],
    [
      ["orbital", "aerial"],
      [
        ["Orbital", "Drop pods near the spot from orbit."],
        ["Air Drop", "Fly in and drop pods; a custom vehicle can be picked on the next page."]
      ],
      0
    ]
  ];

  [_usesPerPersonDialog, _totalUsesDialog, _sourceDialog];
};

private _onConfirm = {
  params ["_selections", "_module"];
  _module params ["_logic"];

  private _pos /* PosASL */ = getPosASL _logic;
  deleteVehicle _logic;

  _selections params [
    "_countPerPlayer",
    "_countTotal",
    "_type"
  ];

  /** Convert 0 = infinite to -1 = infinite and round the slider. */
  private _fnc_formatQuantityOutput = {
    params ["_amount"];
    [round _amount, -1] select (round _amount == 0);
  };

  private _additionalParams = [
    _countPerPlayer call _fnc_formatQuantityOutput,
    _countTotal call _fnc_formatQuantityOutput,
    _pos
  ];

  if (_type == "orbital") exitWith {
    // How high should it be dropped from?
    private _heightDialog = [
      "SLIDER",
      ["Airdrop height", "How high should the item drop from? 0 will spawn on the ground."],
      [0, 1000, 200, {format ["%1m", round _this]}]
    ];
    private _onConfirm = {
      params ["_props", "_args"];
      _props params ["_dropHeight"];
      _args params ["_totalPerPerson", "_total", "_pos"];
      [_dropHeight, _pos, _totalPerPerson, _total] call EFUNC(resupply,dropOrbitalResupply);
    };

    ["Orbital Resupply Options", [_heightDialog], _onConfirm, {}, _additionalParams] call zen_dialog_fnc_create;
  };

  private _vehicleDialog = [
    "EDIT",
    ["Airdrop Vehicle", "What type of vehicle should be spawned for the airdrop?"],
    ["Splits_UNSC_D77_TC_Pelican"]
  ];

  private _directionDialog = [
    "TOOLBOX",
    ["Direction", "Which way should the vehicle spawn in from?"],
    [0, 1, 8, ["N", "NE", "E", "SE", "S", "SW", "W", "NW"]]
  ];

  private _howFarDialog = [
    "SLIDER",
    ["Spawn Range", "How far away should the vehicle be spawned?"],
    [500, 13e3, 2e3, {format ["%1m", round _this]}]
  ];

  // How high should it be dropped from?
  private _heightDialog = [
    "SLIDER",
    ["Vehicle height", "How high should the airdrop vehicle spawn?"],
    [200, 1000, 200, {format ["%1m", round _this]}]
  ];

  private _onConfirm = {
    params ["_props", "_args"];
    TRACE_1("onConfirm",_this);
    _props params ["_vehicle", "_direction", "_howFar", "_howHigh"];
    _args params ["_totalPerPerson", "_total", "_pos"];
    private _bearing = _direction * 45;
    private _zASL = _pos select 2;
    private _spawnPos /* PosAGL */ = _pos getPos [_howFar, _bearing] vectorAdd [0, 0, _zASL + _howHigh];
    [_vehicle, _spawnPos, _pos, _totalPerPerson, _total] call EFUNC(resupply,spawnAirdropResupply);
  };

  private _aerialDialogs = [_vehicleDialog, _directionDialog, _howFarDialog, _heightDialog];
  ["Aerial Resupply Options", _aerialDialogs, _onConfirm, {}, _additionalParams] call zen_dialog_fnc_create;
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
