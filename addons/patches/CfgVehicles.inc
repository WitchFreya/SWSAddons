class CBA_Extended_EventHandlers_Base;
class EventHandlers;

#define CBA_PATCH                                                               \
    class EventHandlers : EventHandlers {                                       \
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {};   \
    }

class CfgVehicles
{
    class ThingX;
    class Lantern_01_base_F : ThingX { CBA_PATCH; };
    class SpaceshipCapsule_01_F : ThingX { CBA_PATCH; };
};
