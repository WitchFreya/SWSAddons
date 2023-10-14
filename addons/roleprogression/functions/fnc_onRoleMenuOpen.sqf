#include "script_component.hpp"
#include "../defines.hpp"

params ["_ctrlPanel"];

{
    private _className = configName _x;
    private _displayName = getText (_x >> "displayName");
    private _itemPicture = getText (_x >> "icon");

    private _lbAdd = _ctrlPanel lbAdd _displayName;
    _ctrlPanel lbSetData [_lbAdd, _className];
    if (GVAR(role) == _className) then {
        _ctrlPanel lbSetCurSel _lbAdd;
    };
    _ctrlPanel lbSetPicture [_lbAdd, _itemPicture];

    private _usage = format ["Select this item to get credit for running as %1 when an op ends.",
        toLower _displayName
    ];
    _ctrlPanel lbSetTooltip [_lbAdd, _usage];
} forEach GVAR(roles);

