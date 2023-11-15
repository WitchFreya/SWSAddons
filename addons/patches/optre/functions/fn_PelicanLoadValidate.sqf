params ["_pelican", "_veh"];
private _loaded = true;

switch true do {
	case (_veh isKindOf "OPTRE_M808B_base" or _veh isKindOf "OPTRE_M808B2" or _veh isKindOf "OPTRE_M808BM_Base" or _veh isKindOf "OPTRE_M808B_Arty_Base") : {
		_veh attachTo [_pelican,[0,-7.2, -0.37105]];
		_veh setDir 180;
	};
	case (_veh isKindOf "OPTRE_M808S" or _veh isKindOf "OPTRE_M808L") :
	{
		_veh attachTo [_pelican,[0,-7.2, -2.7805]];
		_veh setDir 180;
	};
	case (_veh isKindOf "OPTRE_M12A1_LRV" or _veh isKindOf "OPTRE_M12_LRV" or _veh isKindOf "OPTRE_M12G1_LRV" or _veh isKindOf "OPTRE_M12R_AA" or _veh isKindOf "OPTRE_M813_TT" or _veh isKindOf "OPTRE_M12_FAV_APC") : {
		_veh attachTo [_pelican,[0,-3.25,0.25]];
		//0 = [vehicle player, 15, 0] call BIS_fnc_setPitchBank;
	};
	case (_veh isKindOf "OPTRE_M12_FAV" or _veh isKindOf "OPTRE_M914_RV") : {
		_veh attachTo [_pelican,[0,-4.25,0.70]];
	};
	case (_veh isKindOf "OPTRE_M413_base") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];
	};
	case (_veh isKindOf "OPTRE_M494") : {
		_veh attachTo [_pelican,[0,-5,-0.75]];
	};
	case (_veh isKindOf "optre_catfish_unarmed_f" or _veh isKindOf "optre_catfish_mg_f") : {
		_veh attachTo [_pelican,[0,-4.8,-0.1]];
	};
    case (_veh isKindOf "Tank_F") : {
        _veh attachTo [_pelican, [0,-7.2, -0.37105]];
        _veh setDir 180;
    };
    case (_veh isKindOf "SWS_V_APC_M35_Cougar_Base") : {
        _veh attachTo [_pelican, [0,-7.2, -0.37105]];
        _veh setDir 180;
    };
    default {
        _loaded = false;
    };
};

if (_loaded) then {
	_pelican setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>VEHICLE LOADED!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CAN NOT LOAD!</t><br/>-------------------------------------------<br/>Your vehicle has not been designed to be mag-lifted by the pelican.", "PLAIN DOWN", -1, true, true];
	//hint "Your vehicle has not been design to be lifted by the pelican operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};
