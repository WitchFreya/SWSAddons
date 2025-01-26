#include "script_component.hpp"
#include "XEH_PREP.inc.sqf"

private _migrations = uiNamespace getVariable [QGVAR(loadoutMigrations), createHashMap];
uiNamespace setVariable [QGVAR(loadoutMigrations), _migrations];
#include "migrations.inc.sqf"

private _allItems = uiNamespace getVariable "ace_arsenal_configItemsFlat" apply { _x };
// load the blacklist from file and store it in memory
private _blacklist = call compileFinal preprocessFileLineNumbers QPATHTOF(defaultItems.sqf);
// ensure that only items that still exist are kept in the blacklist array
private _filteredBlacklist = _allItems arrayIntersect _blacklist;

#ifdef DEBUG_MODE_FULL
// log blacklist null objects
if (count _filteredBlacklist < count _blacklist) then {
  private _missingItems = _blacklist - _filteredBlacklist;
  WARNING_1("Some items in the blacklist no longer exist: %1",_missingItems);
};
#endif

private _whitelist = _allItems - _blacklist;

uiNamespace setVariable [QGVAR(blacklist), _filteredBlacklist];
uiNamespace setVariable [QGVAR(whitelist), _whitelist];

