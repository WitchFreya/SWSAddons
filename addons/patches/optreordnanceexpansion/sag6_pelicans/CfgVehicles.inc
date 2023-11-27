class CfgVehicles
{
    class OPTRE_Pelican_Armed_SOCOM;
    class SAG6_Pave_Pelican : OPTRE_Pelican_Armed_SOCOM
    {
        // Begging mod authors to stop just copy-pasting properties from the base instead of inheriting them because paths change you fools
        // TODO: just fucking remove this mod and add anything we want from it in myself
        model = "OPTRE_Vehicles_Air\P_SOCOM\Pelican_SOCOM.p3d";
    };

    class SAG6_Pelican_Gunship : OPTRE_Pelican_Armed_SOCOM
    {
        model = "OPTRE_Vehicles_Air\P_SOCOM\Pelican_SOCOM.p3d";
    };
};
