#include "script_component.hpp"

/*
 * Author: Maid
 * Scan CfgRoles to find relevant roles.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

private _filter = toString {
    configName _x isKindOf ["Rifleman", configFile >> "CfgRoles"];
};

private _roles = _filter configClasses (configFile >> "CfgRoles");

uiNamespace setVariable [QGVAR(rolesCache), _roles];
