#include "script_component.hpp"

params ["_initialItems"];

private _itemsAll = ace_arsenal_virtualItems select 2 select { !(_x isKindOf "SWS_Dogtag_Rifleman"); }
