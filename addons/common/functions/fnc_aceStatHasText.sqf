#include "script_component.inc.sqf"

private _text = _this call DFUNC(aceStatText);

TRACE_1("aceStatHasText",_text);
_text != "";
