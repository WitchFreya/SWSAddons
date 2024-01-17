_spelican = _this select 0;
_veh = _this select 1;
_loaded = false;

switch true do {

	case (_veh isKindOf "OPTRE_M808B_base" or _veh isKindOf "OPTRE_M808B2" or _veh isKindOf "OPTRE_M808BM_Base" or _veh isKindOf "OPTRE_M808B_Arty_Base") : {
		_veh attachTo [_spelican,[0,-7.2, -0.37105]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M808S" or _veh isKindOf "OPTRE_M808L") :
	{
		_veh attachTo [_spelican,[0,-7.2, -2.7805]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12A1_LRV" or _veh isKindOf "OPTRE_M12_LRV" or _veh isKindOf "OPTRE_M12G1_LRV" or _veh isKindOf "OPTRE_M12R_AA" or _veh isKindOf "OPTRE_M813_TT" or _veh isKindOf "OPTRE_M12_FAV_APC") : {
		_veh attachTo [_spelican,[0,-3.25,0.25]];
		//0 = [vehicle player, 15, 0] call BIS_fnc_setPitchBank;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12_FAV" or _veh isKindOf "OPTRE_M914_RV") : {
		_veh attachTo [_spelican,[0,-4.25,0.70]];
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M413_base") : {
		_veh attachTo [_spelican,[0,-3.6,0.30]];
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M494") : {
		_veh attachTo [_spelican,[0,-5,-0.75]];
		_loaded = true;
	};
	/*case (_veh isKindOf "OPTRE_falcon_base") : {
		_veh attachTo [_spelican,[0,-4.8,-0.1]];
		_loaded = true;
	};
	case (_veh isKindOf "optre_hornet_base") : {
		_veh attachTo [_spelican,[0,-5,-0.35]];
		_loaded = true;
	};*/
	case (_veh isKindOf "optre_catfish_unarmed_f" or _veh isKindOf "optre_catfish_mg_f") : {
		_veh attachTo [_spelican,[0,-4.8,-0.1]];
		_loaded = true;
	};
  case (_veh isKindOf "SWS_V_APC_M107_Beaver_Base") : {
    _veh attachTo [_spelican, [0,-10, -0.95]];
    _veh setDir 180;
    _loaded = true;
  };
  case (_veh isKindOf "APC_Wheeled_03_base_F") : {
    _veh attachTo [_spelican, [0,-11, -0.95]];
    _veh setDir 180;
    _loaded = true;
  };
  case (_veh isKindOf "Tank_F") : {
    _veh attachTo [_spelican, [0,-11, -0.8]];
    _veh setDir 180;
    _loaded = true;
  };
  case (_veh isKindOf "Car_F") : {
    _veh attachTo [_spelican, [0,-10, -0.8]];
    _veh setDir 180;
    _loaded = true;
  };
};

if (_loaded) then {
	_spelican setVariable ["Splits_Pelican_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>VEHICLE LOADED!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>UNABLE TO MAGLOCK</t><br/>-------------------------------------------<br/>Vehicle does not have maglock hardpoints.", "PLAIN DOWN", -1, true, true];
	//changed to test script is actually loading.
	playSound "FD_CP_Not_Clear_F";
};
