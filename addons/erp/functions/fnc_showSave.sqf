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
			["SWS Operative", _titleFormat, 4],
			[toUpper _playerName, _valueFormat, 7],
			["Role", _titleFormat, 4],
			[toUpper _roleName, _valueFormat, 7],
			["Operations as Role", _smallTitleFormat, 4],
			[format ["%1", _opsPlayed], _numberFormat, 35]
		],
    0, safeZoneY + safeZoneH / 2,
    _rootFormat
	] call BIS_fnc_typeText;
};


params ["_zeus"];
private _role = [player] call erp_roles_fnc_unitRole;
private _opCountAsRole = [player, _role] call erp_history_fnc_opCount;

[name player, _role, _opCountAsRole] spawn _showText;
