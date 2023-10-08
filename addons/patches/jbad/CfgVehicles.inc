class CBA_Extended_EventHandlers_Base;
class EventHandlers;

#define CBA_PATCH                                                               \
    class EventHandlers : EventHandlers {                                       \
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {};   \
    }

class CfgVehicles
{
    class Jbad_Lamps_base_powerline;
    class Land_Jbad_PowLines_Conc2L;
    class PowerLines_Small_base_F;
    class Tank_F;

    class Jbad_CraneCon : Tank_F { CBA_PATCH; };
    class Jbad_Lamps_base_powerline : PowerLines_Small_base_F { CBA_PATCH; };
    class Land_Jbad_PowLineB : Jbad_Lamps_base_powerline { CBA_PATCH; };
    class Land_Jbad_Pole_withlight : Land_Jbad_PowLines_Conc2L { CBA_PATCH; };
    class Land_Jbad_Pole_Speaker : Land_Jbad_PowLines_Conc2L { CBA_PATCH; };
    class Land_Jbad_Pole_1 : Jbad_Lamps_base_powerline { CBA_PATCH; };
};
