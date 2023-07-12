#include "script_component.hpp"

params ["_stat", "_config"];

_stat apply { getText (_config >> _x) } joinString "";
