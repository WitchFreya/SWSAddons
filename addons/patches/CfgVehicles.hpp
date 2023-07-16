class CfgVehicles {
    class VTOL_Base_F;
    class OPTRE_M808B_base;

    //== Fix OPAEX missing the right path for OPTRE icons
    class OPAEX_VTOL_Hornet_base : VTOL_Base_F {
        icon = "OPTRE_Vehicles_Air\Falcon\Data\icon.paa";
		picture = "OPTRE_Vehicles_Air\Falcon\Data\icon2.paa";
    };

    // 1st MEU. It's always 1st MEU. Fucking hell.
    class OPTRE_M808B_UNSC : OPTRE_M808B_base {
        class Turrets {
            delete ACE_SelfActions;
        };
    };
};
