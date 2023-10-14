#include "script_component.hpp"

private _filter = toString {
    configName _x isKindOf ["Rifleman", configFile >> "CfgRoles"];
};

private _roles = _filter configClasses (configFile >> "CfgRoles");

uiNamespace setVariable [QGVAR(rolesCache), _roles];
