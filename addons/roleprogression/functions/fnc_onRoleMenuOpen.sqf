#include "script_component.hpp"
#include "../defines.hpp"

params ["_display"];

private _tags = ace_arsenal_virtualItems select IDX_virtMisc select {
    _x isKindOf ["SWS_Dogtag_Rifleman", configFile >> "CfgWeapons"];
};

{
    private _configPath = configFile >> "CfgWeapons" >> _x;
    private _className = configName _configPath;
    private _displayName = getText (_configPath >> "displayName");
    private _itemPicture = getText (_configPath >> "picture");

    // _ctrlPanel lbSetPictureRight [_lbAdd, ["", _modPicture] select GVAR(enableModIcons)];
    private _role = getText (_configPath >> QGVAR(role));
    private _lbAdd = _ctrlPanel lbAdd _role;
    _ctrlPanel lbSetData [_lbAdd, _className];
    _ctrlPanel lbSetPicture [_lbAdd, _itemPicture];

    private _usage = format ["Select this item to get credit for running as %1 when an op ends.",
        if (_role != 'CLS') then { toLower _role } else { _role }
    ];
    _ctrlPanel lbSetTooltip [_lbAdd, format ["%1\n%2\n\n%3", _displayName, _className, _usage]];
} forEach _tags;

