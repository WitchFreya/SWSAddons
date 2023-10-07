class CBA_Extended_EventHandlers_Base;
class EventHandlers;

#define CBA_PATCH                                                               \
    class EventHandlers : EventHandlers {                                       \
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {};   \
    }

class CfgVehicles
{
    class B_diver_F;
    class B_GEN_Commander_F;
    class B_GEN_Soldier_F;
    class B_Helipilot_F;
    class B_officer_F;
    class B_Officer_Parade_F;
    class B_soldier_AR_F;
    class B_Soldier_F;
    class B_T_Officer_F;
    class B_T_Soldier_AR_F;
    class B_T_Soldier_F;
    class C_man_p_fugitive_F;
    class I_helipilot_F;
    class I_officer_F;
    class I_Officer_Parade_F;
    class I_Soldier_AR_F;
    class I_soldier_F;
    class O_diver_F;
    class O_helipilot_F;
    class O_officer_F;
    class O_Officer_Parade_F;
    class O_Soldier_AR_F;
    class O_Soldier_F;
    class O_Soldier_lite_F;
    class O_Soldier_SL_F;
    class O_T_Officer_F;
    class O_T_Soldier_AR_F;
    class O_T_Soldier_F;
    class O_T_Soldier_SL_F;

    class WB_Officer_Parade_F : B_Officer_Parade_F { CBA_PATCH; };
    class WO_Officer_Parade_F : O_Officer_Parade_F { CBA_PATCH; };
    class WI_Officer_Parade_F : I_Officer_Parade_F { CBA_PATCH; };
    class WO_helipilot_F : O_helipilot_F { CBA_PATCH; };
    class WI_helipilot_F : I_helipilot_F { CBA_PATCH; };
    class WB_Helipilot_F : B_Helipilot_F { CBA_PATCH; };
    class WO_diver_F : O_diver_F { CBA_PATCH; };
    class WO_T_Soldier_SL_F : O_T_Soldier_SL_F { CBA_PATCH; };
    class WO_T_Soldier_AR_F : O_T_Soldier_AR_F { CBA_PATCH; };
    class WO_T_Soldier_F : O_T_Soldier_F { CBA_PATCH; };
    class WO_Soldier_lite_F : O_Soldier_lite_F { CBA_PATCH; };
    class WO_Soldier_SL_F : O_Soldier_SL_F { CBA_PATCH; };
    class WO_Soldier_AR_F : O_Soldier_AR_F { CBA_PATCH; };
    class WO_Soldier_F : O_Soldier_F { CBA_PATCH; };
    class WO_T_Officer_F : O_T_Officer_F { CBA_PATCH; };
    class WO_officer_F : O_officer_F { CBA_PATCH; };
    class WI_officer_F : I_officer_F { CBA_PATCH; };
    class WI_soldier_F : I_soldier_F { CBA_PATCH; };
    class WI_Soldier_AR_F : I_Soldier_AR_F { CBA_PATCH; };
    class WB_officer_F : B_officer_F { CBA_PATCH; };
    class WB_T_officer_F : B_T_Officer_F { CBA_PATCH; };
    class WB_T_Soldier_F : B_T_Soldier_F { CBA_PATCH; };
    class WB_Soldier_F : B_Soldier_F { CBA_PATCH; };
    class WB_soldier_AR_F : B_soldier_AR_F { CBA_PATCH; };
    class WB_T_Soldier_AR_F : B_T_Soldier_AR_F { CBA_PATCH; };
    class WB_diver_F : B_diver_F { CBA_PATCH; };
    class WB_diver2_F : B_diver_F { CBA_PATCH; };
    class WB_GEN_Soldier_F : B_GEN_Soldier_F { CBA_PATCH; };
    class WB_GEN_Commander_F : B_GEN_Commander_F { CBA_PATCH; };
    class max_female_b : C_man_p_fugitive_F { CBA_PATCH; };
};
