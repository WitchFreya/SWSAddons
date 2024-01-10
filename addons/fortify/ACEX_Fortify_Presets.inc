class ACEX_Fortify_Presets {
	class SWS_Fortify_Preset {
		displayName = "[Preset] Heavy";
		objects[] = {
			{"Land_BagFence_Short_F", 2, "SWS_Category_Sandbags"}
			, {"Land_BagFence_Round_F", 4, "SWS_Category_Sandbags"}
			, {"Land_BagFence_Long_F", 4, "SWS_Category_Sandbags"}
			, {"Land_BagBunker_Small_F", 12, "SWS_Category_Bunkers"}
			, {"Land_BagBunker_Large_F", 30, "SWS_Category_Bunkers"}
			, {"Land_BagBunker_Tower_F", 26, "SWS_Category_Bunkers"}
			, {"Land_Cargo_Patrol_V3_F", 32, "SWS_Category_Towers"}
			, {"Land_OPTRE_watchtower_woodland", 34, "SWS_Category_Towers"}
			, {"jbad_steps", 12}
			, {"jbad_Wall_IndCnc_4", 20}
			, {"ACE_ConcertinaWireCoil", 4}
		};
	};
	class SWS_Fortify_Preset_FOB {
		displayName = "[Preset] FOB Construction";
		objects[] = {
			{"Land_BagFence_Short_F", 2, "SWS_Category_Sandbags"}
			, {"Land_BagFence_Round_F", 4, "SWS_Category_Sandbags"}
			, {"Land_BagFence_Long_F", 4, "SWS_Category_Sandbags"}
			, {"Land_BagBunker_Small_F", 12, "SWS_Category_Bunkers"}
			, {"Land_BagBunker_Large_F", 30, "SWS_Category_Bunkers"}
			, {"Land_BagBunker_Tower_F", 26, "SWS_Category_Bunkers"}
			, {"Land_Cargo_Patrol_V3_F", 32, "SWS_Category_Towers"}
			, {"Land_OPTRE_watchtower_woodland", 34, "SWS_Category_Towers"}
			, {"jbad_steps", 12, "SWS_Category_Misc"}
			, {"jbad_Wall_IndCnc_4", 20, "SWS_Category_Concrete"}
			, {"ACE_ConcertinaWireCoil", 4}
			, {"Land_HBarrier5", 10, "SWS_Category_Hesco"}
			, {"Land_HBarrierTower_F", 20, "SWS_Category_Hesco"}
			, {"Land_HBarrierWall_corridor_F", 12, "SWS_Category_Hesco"}
			, {"Land_HBarrierWall_corner_F", 10, "SWS_Category_Hesco"}
			, {"Land_HBarrierWall4_F", 10, "SWS_Category_Hesco"}
			, {"Land_HBarrierWall6_F", 14, "SWS_Category_Hesco"}
			, {"Land_HelipadSquare_F", 2, "SWS_Category_Misc"}
			, {"Land_CncBarrierMedium_F", 6, "SWS_Category_Concrete"}
			, {"Land_CncBarrierMedium4_F", 16, "SWS_Category_Concrete"}
		};
	};
	class SWS_Fortify_Preset_Light {
		displayName = "[Preset] Light";
		objects[] = {
			{"Land_BagFence_Short_F", 2, "SWS_Category_Sandbags"}
			, {"Land_BagFence_Round_F", 4, "SWS_Category_Sandbags"}
			, {"Land_BagFence_Long_F", 4, "SWS_Category_Sandbags"}
			, {"Land_BagBunker_Small_F", 12, "SWS_Category_Bunkers"}
			, {"Land_BagBunker_Large_F", 30, "SWS_Category_Bunkers"}
			, {"Land_BagBunker_Tower_F", 26, "SWS_Category_Bunkers"}
			, {"jbad_steps", 12}
			, {"ACE_ConcertinaWireCoil", 4}
		};
	};
	class SWS_Fortify_Preset_Minimal {
		displayName = "[Preset] Assault/Ambush";
		objects[] = {
			{"Land_BagFence_Short_F", 2}
			, {"Land_BagFence_Round_F", 4}
			, {"Land_BagFence_Long_F", 4}
			, {"ACE_ConcertinaWireCoil", 4}
		};
	};
    class SWS_Category_Sandbags
    {
        displayName = "Sandbags";
        objects[] = {
            {"Land_BagFence_Short_F", 2}
			, {"Land_BagFence_Round_F", 4}
			, {"Land_BagFence_Long_F", 4}
        };
    };
    class SWS_Category_Bunkers
    {
        displayName = "Bunkers";
        objects[] = {
            {"Land_BagBunker_Small_F", 12}
			, {"Land_BagBunker_Large_F", 30}
			, {"Land_BagBunker_Tower_F", 26}
        };
    };
    class SWS_Category_Towers
    {
        displayName = "Towers";
        objects[] = {
            {"Land_Cargo_Patrol_V3_F", 32}
			, {"Land_OPTRE_watchtower_woodland", 34}
        };
    };
	class SWS_Category_Hesco
	{
		displayName = "Hesco Walls";
		objects[] = {
			  {"Land_HBarrier5", 10}
			, {"Land_HBarrierTower_F", 20}
			, {"Land_HBarrierWall_corridor_F", 12}
			, {"Land_HBarrierWall_corner_F", 10}
			, {"Land_HBarrierWall4_F", 10}
			, {"Land_HBarrierWall6_F", 14}
		};
	};
	class SWS_Category_Concrete
	{
		displayName = "Concrete";
		objects[] = {
			{"jbad_Wall_IndCnc_4", 20}
			, {"Land_CncBarrierMedium_F", 8}
			, {"Land_CncBarrierMedium4_F", 22}
		};
	};
	class SWS_Category_Misc
	{
		displayName = "Misc";
		objects[] = {
			{"Land_HelipadSquare_F", 2}
			, {"jbad_steps", 12}
		};
	};
};
