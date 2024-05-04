#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.inc.sqf"
ADDON = true;

BW_WMO_help = ROADWAY_OBJECT createVehicleLocal [0, 0, 0];
BW_WMO_help setMass 0;
BW_anker = objNull;
BW_WMO_collision = true;
private _noRoadwayItems = [
  "NonSteerable_Parachute_F",
  "Steerable_Parachute_F",
  "B_Parachute_02_F",
  "O_Parachute_02_F",
  "I_Parachute_02_F",
  "Land_OfficeChair_01_F",
  "Land_ChairWood_F",
  "Land_RattanChair_01_F",
  "Land_CampingChair_V2_F",
  "Land_CampingChair_V2_white_F",
  "Land_ChairPlastic_F",
  "Land_CampingChair_V1_F",
  "Land_Bench_01_F",
  "Land_Bench_02_F",
  "Land_Bench_03_F",
  "Land_Bench_04_F",
  "Land_Bench_05_F",
  "RopeSegment"
];
WMO_noRoadway = if (isNil {WMO_noRoadway}) then {_noRoadwayItems} else {
  private _all = WMO_noRoadway + _noRoadwayItems;
  _all arrayIntersect _all;
};
