class CfgVehicles {
	class House_F;
	class OPTRE_hallway_door_a : House_F {
    class UserActions {
      class door_1_open
      {
        statement = "this animate ['Door_1_a_rot',1]; this animate ['Door_1_b_rot',1]; this spawn {sleep 30;_this animate ['Door_1_a_rot', 0];_this animate ['Door_1_b_rot', 0];};";
      };
    };
  };
};
