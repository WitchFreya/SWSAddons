#include "faction.inc"

class CfgPatches {
    class O_CLA {
        units[] = {
            "O_CLA_Squad_Leader_01",
            "O_CLA_Rifleman_01"
        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "OPTRE_Ins_Units_ER",
            "A3_Characters_F",
            "lambs_danger",
            "aceax_ingame",
            "A3_Sounds_F",
            "A3_Sounds_F_Exp",
            "jsrs_soundmod_complete_edition",
            "tfar_core",
            "ace_gforces",
            "ace_movement",
            "ace_medical_feedback",
            "A3_Data_F",
            "A3_Data_F_Curator",
            "A3_Air_F_Heli",
            "lambs_range",
            "ace_thermals",
            "lambs_formations",
            "zen_attributes",
            "ace_refuel",
            "CUP_Core",
            "cba_xeh"
        };
        author = "Bernard ""Egg"" Teller";
        authors[] = {"Bernard ""Egg"" Teller"};
        addonRootClass = "SWS_Units";
    };
};
