#include "script_component.hpp"
#include "XEH_PREP.inc.sqf"

private _acreRadios /* string[] */ = call {
  private _filter = toString {
    configName _x isKindOf ["ACRE_BaseComponent", configFile >> "CfgWeapons"] && {
      getNumber (_x >> "scope") == 2
    };
  };

  _filter configClasses (configFile >> "CfgWeapons") apply { configName _x; };
};

uiNamespace setVariable [QGVAR(radioClassNames), _acreRadios];
