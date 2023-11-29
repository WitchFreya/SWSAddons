class SWS_V_APC_M107_Beaver_Base : B_APC_Tracked_01_CRV_F
{
	ITEM_META(0);
	displayName = QNAME(M107 Beaver - Base);
	faction = "SWS_UNSC";
	side = 1;
    crew = "OPTRE_UNSC_Marine_Soldier_Crewman";
    typicalCargo[] = { "OPTRE_UNSC_ODST_Soldier" };
};

class SWS_V_APC_M107_Beaver : SWS_V_APC_M107_Beaver_Base
{
    SCOPE(2);
    displayName = QNAME(M107 Beaver);
};