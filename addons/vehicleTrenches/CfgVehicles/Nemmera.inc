class B_APC_Tracked_01_CRV_F : B_APC_Tracked_01_base_F
{
	class ACE_SelfActions : ACE_SelfActions
	{
		class SWS_PlowDown : SWS_PlowDown { };
		class SWS_PlowUp : SWS_PlowUp { };
	};

	class PlowConfig
	{
        type = "animate";
        animation = "moveplow";
        selection = "plow";
        plowRaised = 0;
        plowLowered = 0.9;
        distanceToTrench = 3; 
	};
};