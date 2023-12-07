// Some base classes were defined in inheritance and not actually declared, which causes issues.
#define STUB_USERACTION(varActionClass,varPosition) \
class varActionClass \
{\
  displayName = "[INTERNAL] Stub Action";\
  radius = 0;\
  condition = QUOTE(false);\
  statement = "diag_log ""ERROR: Stub action should not be called.""";\
  position = QUOTE(varPosition); \
  onlyForPlayer = 1;\
}

class CfgVehicles
{
    class OPTRE_Pelican_Armed_SOCOM;
    class SAG6_Pelican_VTOL_Base;

    class SAG6_SOCOM_Pelican : OPTRE_Pelican_Armed_SOCOM
    {
      SCOPE(1);
      class UserActions : UserActions
      {
        STUB_USERACTION(AirbrakeEngage,cargo_door_handle);
        STUB_USERACTION(ThrusterDisengage,cargo_door_handle);
        STUB_USERACTION(ThrusterEngage,cargo_door_handle);
      };
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
