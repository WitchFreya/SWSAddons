#include "script_component.hpp"
/*
 * Author: Ashes
 * Get string for a trench's GRAD envelope
 *
 * Arguments:
 * 0: Mode <NUMBER>
 *
 * Return Value:
 * String
 *
 * Example:
 * [PLOW_VEHICLE_TRENCH] call sws_vehicletrenches_fnc_getTrenchEnvelope
 *
 * Public: No
 */

params ["_mode"];

switch (_mode) do
{
	case PLOW_MOVING;
	case PLOW_UP;
	case PLOW_NONE: { "" };
	case PLOW_VEHICLE_TRENCH: { "GRAD_envelope_vehicle" };
	case PLOW_GIANT_TRENCH: { "GRAD_envelope_giant" };
	case PLOW_LONG_TRENCH: { "GRAD_envelope_long" };
};