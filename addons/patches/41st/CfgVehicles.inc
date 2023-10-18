class CBA_Extended_EventHandlers_Base;
class EventHandlers;

#define CBA_PATCH                                                               \
    class EventHandlers : EventHandlers {                                       \
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {};   \
    }

class CfgVehicles
{
    class Land_CampingChair_V1_F;
    class OPTRE_Pelican_armed;

    class bench_1 : Land_CampingChair_V1_F { CBA_PATCH; };
    class bench_2 : Land_CampingChair_V1_F { CBA_PATCH; };
    class bench_2B : Land_CampingChair_V1_F { CBA_PATCH; };
    class SZ_Sofa : Land_CampingChair_V1_F { CBA_PATCH; };
    class SZ_stool : Land_CampingChair_V1_F { CBA_PATCH; };
    class SZ_Chair : Land_CampingChair_V1_F { CBA_PATCH; };
    class Hogosha_D77HTCI_A : OPTRE_Pelican_armed { CBA_PATCH; };
};
