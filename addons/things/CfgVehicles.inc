class CfgVehicles
{
    class Wall_F;
    class Land_CampingChair_V2_F;
    class SWS_Chair : Land_CampingChair_V2_F
    {
        displayName = QNAME(Chair);
        model = QPATHTOF(data\chair.p3d);
    };
    class AGH_H_CorvetteFramev2 : Wall_F {
        OBJ_CATEGORY(SWSHelperObjects,SWSHelpers_Frames);
        displayName = "Corvette Hallway Helper V2";
        model = QPATHTOF(data\AGH_H_CorvetteFramev2.p3d);
        scope=2;
		scopeCurator=2;
        vehicleClass="Fortifications";
		destrType="DestructNo";
    };
};
