#define ADD_ACE_HITPOINTS\
    class HitPoints {\
        class HitFace; \
        class HitNeck: HitFace {}; \
        class HitHead: HitNeck {}; \
        class HitPelvis: HitHead {}; \
        class HitAbdomen: HitPelvis {}; \
        class HitDiaphragm: HitAbdomen {}; \
        class HitChest: HitDiaphragm {}; \
        class HitBody: HitChest {}; \
        class HitArms: HitBody {}; \
        class HitHands: HitArms {}; \
        class HitLegs: HitHands {}; \
        class Incapacitated: HitLegs {}; \
        class HitLeftArm: HitHands {\
            material = -1;\
            name = "hand_l";\
            radius = 0.08;\
            visual = "injury_hands";\
            minimalHit = 0.01;\
        };\
        class HitRightArm: HitLeftArm {\
            name = "hand_r";\
        };\
        class HitLeftLeg: HitLegs {\
            material = -1;\
            name = "leg_l";\
            radius = 0.1;\
            visual = "injury_legs";\
            minimalHit = 0.01;\
        };\
        class HitRightLeg: HitLeftLeg {\
            name = "leg_r";\
        };\
        class ACE_HDBracket {\
            armor = 1;\
            material = -1;\
            name = "head";\
            passThrough = 0;\
            radius = 1;\
            explosionShielding = 1;\
            visual = "";\
            minimalHit = 0;\
            depends = "HitHead";\
        };\
    }

class CfgVehicles {
    class B_Soldier_F;

    class TCGM_f_Oshun_Flat_soldier : B_Soldier_F { ADD_ACE_HITPOINTS; };
    class TCGM_f_Selene_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Tanit_Flat_soldier : TCGM_f_Selene_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Sekhmet_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Parvati_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Hecate_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Kali_Flat_soldier : TCGM_f_Selene_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Gaia_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Lada_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Cloaking_Flat_soldier : TCGM_f_Hecate_Flat_soldier { ADD_ACE_HITPOINTS; };
};
