#include "script_component.hpp"

params ["_unit"];

if !([_unit, QHELMET(Maid_Recon)] call BIS_fnc_hasItem) exitWith {0};

_unit linkItem QWEAPON(TRIPLES(NVG,NeuralLace,Maid));
