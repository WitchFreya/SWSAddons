#include "script_component.hpp"

if !(hasInterface) exitWith {};

if !(isNil {BW_WMO_help} && {!isNull BW_WMO_help}) then {
  deleteVehicle BW_WMO_help;
};
BW_WMO_help = ROADWAY_OBJECT createVehicleLocal [0, 0, 0];
BW_WMO_help setMass 0;
GVAR(pfh) = [FUNC(handleFatigue), 1] call CBA_fnc_addPerFrameHandler;
WMO_noRoadway pushBackUnique "RopeSegment";
