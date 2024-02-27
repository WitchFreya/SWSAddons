[
	"OPAEX_SkeletonSwap_Enabled", //Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
	"CHECKBOX", //setting type
	"Enabled", //Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	["OPAEX Settings", "Skeleton Swapping"], //Display name of the category where the setting can be found. Can be stringtable entry.
	true, //Range or default value.
	false,
	{}
] call CBA_fnc_addSetting;
