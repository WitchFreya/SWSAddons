 #include "script_component.inc.sqf"

/*
 * Author: Maid
 * Handle onInit of a unit for ALiVE.
 *
 * Arguments:
 * 0: unit <OBJECT>
 *
 * Return Value:
 * true on success
 *
 * Example:
 * [player] call sws_fnc_aliveOnInit;
 *
 * Public: No
 */

TRACE_1(QFUNC(aliveOnInit),_this);

params [
  "_entity"
];

if (local (_this select 0)) then {
  _onSpawn = {
    _unit = _this select 0;
    sleep 0.2;
    _backpack = getText(configFile >> 'cfgvehicles' >> (typeOf _this) >> 'backpack');
    waitUntil {
      sleep 0.2;
      backpack _unit == _backpack;
    };

    if !(_unit getVariable ['ALiVE_OverrideLoadout', false]) then {
      _loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _unit) >> 'ALiVE_orbatCreator_loadout');
      _unit setUnitLoadout _loadout;
      reload _unit;
    };
  };
  _this spawn _onSpawn;
  (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];
};
