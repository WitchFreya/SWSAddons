#include "script_component.hpp"

["ace_arsenal_loadoutsDisplayOpened", {
    TRACE_1("LoadoutsDisplayOpened",_this);
    if (!GVAR(restoreSwRadio)) exitWith {
        TRACE_1("Restore was disabled",GVAR(restoreSwRadio));
    };
    private _radio = [ace_arsenal_center] call FUNC(activeUnitSwRadio);
    if (isNil "_radio") exitWith {
        TRACE_1("No SW radio on unit",ace_arsenal_center);
    };
    ace_arsenal_center setVariable [QGVAR(previousRadio), _radio, true];
}] call CBA_fnc_addEventHandler;

["ace_arsenal_onLoadoutLoad", {
    TRACE_1("Restoring SW settings",ace_arsenal_center);
    if (!GVAR(restoreSwRadio)) exitWith {
        TRACE_1("Restore was disabled",GVAR(restoreSwRadio));
    };
    [QGVAR(OnRadiosReceived), "OnRadiosReceived", {
        TRACE_1("OnRadiosReceived",_this);
        params ["_unit"];
        private _previousSw = _unit getVariable QGVAR(previousRadio);
        private _currentSw = [_unit] call FUNC(activeUnitSwRadio);
        if (_previousSw == _currentSw) exitWith {
            TRACE_2("Previous and current SW radios are the same",_unit,_currentSw);
        };
        if (isNil "_previousSw") exitWith {
            TRACE_1("Unit did not have a prior SW radio",_unit);
        };
        if (isNil "_currentSw") exitWith {
            TRACE_1("Unit has no SW radio",_unit);
        };
        [_previousSw, _currentSw] call TFAR_fnc_copySettings;
        [QGVAR(OnRadiosReceived), "OnRadiosReceived", _unit] call TFAR_fnc_removeEventHandler;
    }, ace_arsenal_center] call TFAR_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;
