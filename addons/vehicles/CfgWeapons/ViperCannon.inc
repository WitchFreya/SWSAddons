class SWS_Cannon_120mm_Viper : cannon_120mm_long
{
    displayName = QNAME(XM552);
    description = "Experimental 120mm smoothbore cannon designed for the M700 with advanced ballistics targeting.";
    ballisticsComputer = QUOTE(MODE_AUTOMATIC_ZEROING + MODE_MANUAL_ZEROING + MODE_FCS_PREDICTION);
    magazineWell[] = {
        "120mm_Viper_AP",
        "120mm_Viper_HEAT",
        "120mm_Viper_HE",
        "120mm_Viper_ATGM"
    };
};
