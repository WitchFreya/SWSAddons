// v3
_migrations set ["SWS_Magazine_M24RL_D", ""];
_migrations set ["SWS_V_Bag_ILCS_Manny", "SWS_V_Bag_Rucksack_Medic_Manny"];
{
  private _magPlural = "SWS_Magazine_60Rnd_65x39_Caseless_Tracers" + _x;
  private _magSingular = "SWS_Magazine_60Rnd_65x39_Caseless_Tracer" + _x;
  _migrations set [_magPlural, _magSingular];
} forEach ["", "_Blue", "_Yellow", "_Green", "_Orange"];

{
  private _magPlural = "SWS_Magazine_60Rnd_65x39_Caseless_MSBS_Tracers" + _x;
  private _magSingular = "SWS_Magazine_60Rnd_65x39_Caseless_MSBS_Tracer" + _x;
  _migrations set [_magPlural, _magSingular];
} forEach ["", "_Blue", "_Yellow", "_Green", "_Orange"];
