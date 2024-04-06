#define INFO_HELMET(varHelmet,varCamo,varColor,varVersion)  \
  class varHelmet {                                         \
    model = "OPCAN_ODST_Helmet";                            \
    camo = QUOTE(varCamo);                                  \
    color = QUOTE(varColor);                                \
    version = QUOTE(varVersion);                            \
  }

class XtdGearInfos {
  class CfgWeapons {
    INFO_HELMET(LM_OPCAN_CH252D_CEA,Digital,Tan,CE_A);
    INFO_HELMET(LM_OPCAN_CH252D_CEA_U,Digital,Grey,CE_A);
    INFO_HELMET(LM_OPCAN_CH252D_CEA_S,Digital,Snow,CE_A);
    INFO_HELMET(LM_OPCAN_CH252D_CEA_W,Digital,Wood,CE_A);

    INFO_HELMET(LM_OPCAN_CH252D_TEMP,None,Grey,Templar);

    INFO_HELMET(LM_OPCAN_CH252D_Blue,None,Blue,Halo);
    INFO_HELMET(LM_OPCAN_CH252D_Green,None,Green,Halo);
    INFO_HELMET(LM_OPCAN_CH252D_Orange,None,Orange,Halo);
    INFO_HELMET(LM_OPCAN_CH252D_Purple,None,Purple,Halo);
    INFO_HELMET(LM_OPCAN_CH252D_Red,None,Red,Halo);
    INFO_HELMET(LM_OPCAN_CH252D_Yellow,None,Yellow,Halo);

    INFO_HELMET(LM_OPCAN_CH252D_H3,None,Grey,Halo_3);
    INFO_HELMET(LM_OPCAN_CH252D_H3_Blue,None,Blue,Halo_3);
    INFO_HELMET(LM_OPCAN_CH252D_H3_Green,None,Green,Halo_3);
    INFO_HELMET(LM_OPCAN_CH252D_H3_Orange,None,Orange,Halo_3);
    INFO_HELMET(LM_OPCAN_CH252D_H3_Purple,None,Purple,Halo_3);
    INFO_HELMET(LM_OPCAN_CH252D_H3_Red,None,Red,Halo_3);
    INFO_HELMET(LM_OPCAN_CH252D_H3_Yellow,None,Yellow,Halo_3);

    INFO_HELMET(LM_OPCAN_CH252D_H2,None,Grey,Halo_2);
    INFO_HELMET(LM_OPCAN_CH252D_H2_Blue,None,Blue,Halo_2);
    INFO_HELMET(LM_OPCAN_CH252D_H2_Green,None,Green,Halo_2);
    INFO_HELMET(LM_OPCAN_CH252D_H2_Orange,None,Orange,Halo_2);
    INFO_HELMET(LM_OPCAN_CH252D_H2_Purple,None,Purple,Halo_2);
    INFO_HELMET(LM_OPCAN_CH252D_H2_Red,None,Red,Halo_2);
    INFO_HELMET(LM_OPCAN_CH252D_H2_Yellow,None,Yellow,Halo_2);

    INFO_HELMET(LM_OPCAN_CH252D_REACH,None,Grey,Reach);
  };
};

#undef INFO_HELMET
