class CBA_Extended_EventHandlers_Base;
class EventHandlers;

#define CBA_PATCH                                                               \
    class EventHandlers : EventHandlers {                                       \
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {};   \
    }

class CfgVehicles
{
    class Land_Device_slingloadable_F;
    class Crows_Emp_Device : Land_Device_slingloadable_F { CBA_PATCH; };
};
