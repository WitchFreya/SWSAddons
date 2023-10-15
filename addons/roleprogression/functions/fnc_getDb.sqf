#include "script_component.hpp"

/*
 * Author: Maid
 * Retrieve an inidb2 instance to execute commands against.
 *
 * See https://github.com/code34/inidbi2/blob/master/%40inidbi2/DOCUMENTATION.txt.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * inidb2 <INIDBI2>
 *
 * Public: No
 */

private _db = ["new", "roleProgression"] call OO_INIDBI;
if (isNil "_db") exitWith {
    ERROR_1("Unable to create db",_db);
    -1;
};

_db;
