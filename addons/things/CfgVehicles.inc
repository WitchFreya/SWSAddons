#define XGVAR(var) DOUBLES(acex,var)
#define EGVAR(var1,var2) TRIPLES(acex,var1,var2)

#define CLASSES_VEHICLES \
    QGVAR(Chair)

class CfgVehicles {
    class Land_CampingChair_V1_F;
    class GVAR(Chair) : Land_CampingChair_V1_F {
        ITEM_META(2);
        displayName = QNAME(Chair);
        model = QPATHTOF(data\chair);
    };
};

#undef XGVAR
#undef EGVAR
