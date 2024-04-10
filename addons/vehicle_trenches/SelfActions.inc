class SWS_PlowDown {
	displayName = "Set Plow";
	condition = QUOTE([ARR_2(_target,_player)] call FUNC(canLowerPlow));
	statement = "";
	class SWS_PlowNone {
		displayName = "No Trench";
		condition = "true";
		statement = QUOTE([ARR_2(_target,QUOTE(PLOW_NONE))] call FUNC(lowerPlow));
	};
	class SWS_PlowTrenchVehicle {
		displayName = "Vehicle Trench";
		condition = "true";
		statement = QUOTE([ARR_2(_target,QUOTE(PLOW_VEHICLE_TRENCH))] call FUNC(lowerPlow));
	};
	class SWS_PlowTrenchGiant {
		displayName = "Giant Trench";
		condition = "true";
		statement = QUOTE([ARR_2(_target,QUOTE(PLOW_GIANT_TRENCH))] call FUNC(lowerPlow));
	};
	class SWS_PlowLong {
		displayName = "Long Trench";
		condition = "true";
		statement = QUOTE([ARR_2(_target,QUOTE(PLOW_LONG_TRENCH))] call FUNC(lowerPlow));
	};
};

class SWS_PlowUp {
	displayName = "Raise Plow";
	condition = QUOTE([ARR_2(_target,_player)] call FUNC(canRaisePlow));
	statement = QUOTE(_target call FUNC(raisePlow));
};
