params ["_title", "_subtitleLeft", "_subtitleMiddle", "_subtitleRight"];

private _showText = {
	params ["_playerName", "_roleName", "_opsPlayed"];

    private _rootFormat = "<t align='left' shadow='2' size='0.7' font='EtelkaMonospacePro'>%1</t>";
	private _titleFormat = "<t>%1</t>";
	private _valueFormat = "<t font='LCD14' color='#097969' size='1.0' align='right'>%1</t><br/>";
	private _smallTitleFormat = "<t size='0.6'>%1</t>";
	private _numberFormat = "<t font='LCD14' color='#50C878' size='1.5' align='right'>%1</t>";
	[
		[
			["SWS Operative", _titleFormat, 8],
			[toUpper _playerName, _valueFormat, 10],
			["Role", _titleFormat, 8],
			[toUpper _roleName, _valueFormat, 10],
			["Operations as Role", _smallTitleFormat, 8],
			[format ["%1", _opsPlayed], _numberFormat, 30]
		],
        0, safeZoneY + safeZoneH / 2,
        _rootFormat
	] call BIS_fnc_typeText;
};


params ["_zeus"];
private _role = player getVariable "erp_role";
private _uid = getPlayerUID player;
private _opsPlayed = missionNamespace getVariable "erp_history" get _uid getOrDefault [_role, 0];

[name player, _role, _opsPlayed] spawn _showText;
