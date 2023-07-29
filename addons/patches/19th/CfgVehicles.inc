class AnimationSources;
class CBA_Extended_EventHandlers_Base;

#define CBA_PATCH                                                               \
    class EventHandlers {                                                       \
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_Base {};   \
    }

class CfgVehicles {
    class 19_M12_APC_Medical;
    class 19_M808S;
    class N19_D77HTCI;
    class N19_D77HTCI_A;
    class N19_D77HTCIS_A;
    class 19_M12_APC_WHQ;
    class 19_M813_TT_WHQ;
    class 19_M12A1_LRV_WHQ;
    class 19_M12G1_LRV_WHQ;
    class 19_M12_LRV_WHQ;
    class N19_D77HTCI_OCimport_01 : N19_D77HTCI { CBA_PATCH; };
    class N19_D77HTCI_A_OCimport_01 : N19_D77HTCI_A { CBA_PATCH; };
    class 19_M808S_OCimport_01 : 19_M808S { CBA_PATCH; };
    class 19_M12_APC_Medical_OCimport_01 : 19_M12_APC_Medical { CBA_PATCH; };
    class N19_D77HTCIS_A_OCimport_01 : N19_D77HTCIS_A { CBA_PATCH; };
    class 19_M12_APC_WHQ_OCimport_01 : 19_M12_APC_WHQ { CBA_PATCH; };
    class 19_M813_TT_WHQ_OCimport_01 : 19_M813_TT_WHQ { CBA_PATCH; };
    class 19_M12A1_LRV_WHQ_OCimport_01 : 19_M12A1_LRV_WHQ { CBA_PATCH; };
    class 19_M12G1_LRV_WHQ_OCimport_01 : 19_M12G1_LRV_WHQ { CBA_PATCH; };
    class 19_M12_LRV_WHQ_OCimport_01 : 19_M12_LRV_WHQ { CBA_PATCH; };

    class Car_F;

    // The Springbok is missing an animation source specified in the model.cfg
    class DMNS_M511_Springbok_base : Car_F {
        class AnimationSources : AnimationSources {
            class mainmuzzleflashrotation {
                source = "ammorandom";
                weapon = "DMNS_M61_Vulcan";
            };
            class mainmuzzleflashhide {
                source = "reload";
                weapon = "DMNS_M61_Vulcan";
            };
            class maingunshake {
                source = "reload";
                weapon = "DMNS_M61_Vulcan";
            };
            class maingunshake_back {
                source = "reload";
                weapon = "DMNS_M61_Vulcan";
            };
            class codrivermuzzleflashhide {
                source = "reload";
                weapon = "DMNS_M247H_Coax";
            };
            class codrivergunshake {
                source = "reload";
                weapon = "DMNS_M247H_Coax";
            };
            class codrivergunshake_eye {
                source = "reload";
                weapon = "DMNS_M247H_Coax";
            };
            class codrivergunshake_back {
                source = "reload";
                weapon = "DMNS_M247H_Coax";
            };
            class codrivergunshake_eye_back {
                source = "reload";
                weapon = "DMNS_M247H_Coax";
            };
            class codrivermuzzleflashrotation {
                source = "ammorandom";
                weapon = "DMNS_M247H_Coax";
            };
        };
    };
};

#undef CBA_PATCH
