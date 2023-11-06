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
			, {"Land_OPTRE_barrel_hydrogen", 10}
			, {"jbad_steps", 12}
			, {"jbad_Wall_IndCnc_4", 20}
			, {"ACE_ConcertinaWireCoil", 4}
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
};
