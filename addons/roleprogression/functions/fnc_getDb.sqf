#include "script_component.hpp"

private _db = ["new", "roleProgression"] call OO_INIDBI;
if (("getVersion" call _db) == "") exitWith {
    ERROR_1("Unable to create db",_db);
    -1;
};

_db;
