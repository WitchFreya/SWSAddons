#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Recurse through `_this` and get the name of each type. Arrays will be done for each array value,
 *  while Hashmaps will return Key->Value map tuples, e.g. `HASHMAP<STRING -> (SCALAR | STRING)>`.
 *
 * Arguments:
 * Anything
 *
 * Return Value:
 * None
 *
 * Public: No
*/

private _isArray = typeName _this == "ARRAY";
private _outputFormat = ["%1", "[%1]"] select _isArray;
_this = [[_this], _this] select _isArray;

private _fnc_identifyTypes = {
  _this apply {
    switch (typeName _x) do {
      case "ARRAY": {
        private _childTypes = _x apply { [_x] call _fnc_identifyTypes joinString " | "; };
        format ["[%1]", _childTypes joinString ","];
      };
      case "HASHMAP": {
        private _typeMap = createHashMap;
        {
          private _keyType = [_x] call _fnc_identifyTypes joinString " | ";
          private _existingValueTypes = _typeMap getOrDefault [_keyType, []];
          private _newValueTypes = [_y] call _fnc_identifyTypes;
          private _valueTypes = _existingValueTypes + _newValueTypes;
          _typeMap set [_keyType, _valueTypes arrayIntersect _valueTypes];
        } forEach _x;

        private _childTypes = _typeMap apply {
          private _format = ["%1 -> %2", "%1 -> (%2)"] select (count _y > 1);
          format [_format, _x, _y joinString " | "];
        };

        private _uniqueTypes = _childTypes arrayIntersect _childTypes;
        private _formattedTypes = switch (count _uniqueTypes) do {
          case 0: {
            "EMPTY";
          };
          case 1: {
            _uniqueTypes select 0;
          };
          default {
            private _formattedTypes = _uniqueTypes apply {
              format ["(%1)", _x];
            };
            _formattedTypes joinString " | ";
          };
        };

        format ["HASHMAP<%1>", _formattedTypes];
      };
      default {
        typeName _x;
      };
    };
  };
};

private _identified = _this call _fnc_identifyTypes;
format [_outputFormat, _identified joinString ", "];
