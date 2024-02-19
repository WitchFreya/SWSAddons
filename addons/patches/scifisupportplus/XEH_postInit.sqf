#include "script_component.hpp"

if (["PHAN_ScifiSupportPlus"] call ace_common_fnc_isModLoaded) then {
  private _swsVehicles = [
    "SWS_V_APC_M107_Beaver",
	  "SWS_V_APC_M35_Cougar",
	  "SWS_V_MBT_M700_Viper"
  ];
  _swsVehicles call FUNC(scanGroundVehicles) params ["_classNames", "_zenConfigs"];
  PHAN_UNSC_GV_list append _classNames;
  PHAN_UNSC_GV_listDisplay append _zenConfigs;
};
