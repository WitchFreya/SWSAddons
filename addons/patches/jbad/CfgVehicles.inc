class CBA_Extended_EventHandlers_Base;
class EventHandlers;

#define CBA_PATCH                                                               \
    class EventHandlers : EventHandlers {                                       \
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {};   \
    }

class CfgVehicles
{
    class Tank_F;
    class Jbad_CraneCon : Tank_F { CBA_PATCH; };
};
