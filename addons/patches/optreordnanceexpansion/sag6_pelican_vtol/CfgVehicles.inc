class CfgVehicles
{
    class OPTRE_Pelican_Armed_SOCOM;
    class SAG6_Pelican_VTOL_Base;

    class SAG6_SOCOM_Pelican : OPTRE_Pelican_Armed_SOCOM
    {
        SCOPE(1);
        class UserActions : UserActions { };
    };

    class SAG6_SOCOM_Pelican_VTOL : SAG6_Pelican_VTOL_Base
    {
        model = "OPTRE_Vehicles_Air\P_SOCOM\Pelican_SOCOM.p3d";
    };

    class SAG6_Pave_Pelican_VTOL : SAG6_SOCOM_Pelican_VTOL
    {
        model = "OPTRE_Vehicles_Air\P_SOCOM\Pelican_SOCOM.p3d";
    };

    class SAG6_Pelican_Gunship_VTOL : SAG6_Pelican_VTOL_Base
    {
        model = "OPTRE_Vehicles_Air\P_SOCOM\Pelican_SOCOM.p3d";
    };
};
