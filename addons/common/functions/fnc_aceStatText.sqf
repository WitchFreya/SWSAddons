#include "script_component.inc.sqf"

params ["_stat", "_config"];

_stat apply { getText (_config >> _x) } joinString "";
