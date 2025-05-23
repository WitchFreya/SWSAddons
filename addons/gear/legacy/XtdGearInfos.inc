#define VEST_GEAR_INFO_ONE(name,varType,varVariant)                               \
  class SWS_Vest_##name##_##varVariant : SWS_Vest_##name                          \
  {                                                                               \
    model = QUOTE(SWS_##varType##_Armor);                                         \
    Operative = QUOTE(name);                                                      \
    Variant = QUOTE(varVariant);                                                  \
    Ghillie = "No";                                                               \
  };                                                                              \
  class SWS_Vest_##name##_##varVariant##_Ghillie : SWS_Vest_##name##_##varVariant \
  {                                                                               \
    Ghillie = "Yes";                                                              \
  }

#define VEST_GEAR_INFO(name,varType)                \
  class SWS_Vest_##name                             \
  {                                                 \
    model = QUOTE(SWS_##varType##_Armor);           \
    varType = QUOTE(name);                          \
    Variant = "Standard";                           \
    Ghillie = "No";                                 \
  };                                                \
  class SWS_Vest_##name##_Ghillie : SWS_Vest_##name \
  {                                                 \
    Ghillie = "Yes";                                \
  };                                                \
  VEST_GEAR_INFO_ONE(name,varType,Demolitions);     \
  VEST_GEAR_INFO_ONE(name,varType,Sniper);          \
  VEST_GEAR_INFO_ONE(name,varType,Copilot);         \
  VEST_GEAR_INFO_ONE(name,varType,Light);           \
  VEST_GEAR_INFO_ONE(name,varType,Scout);           \
  VEST_GEAR_INFO_ONE(name,varType,Rifleman);        \
  VEST_GEAR_INFO_ONE(name,varType,Marksman);        \
  VEST_GEAR_INFO_ONE(name,varType,Lead)

#define HELMET_GEAR_INFO_BASE(name,varType) \
  class SWS_Helmet_##name                   \
  {                                         \
    model = QGVARMAIN(varType##_Helmet);    \
    varType = QUOTE(name);                  \
    collar = "No";                          \
    ghillie = "No";                         \
  }

#define HELMET_GEAR_INFO_VARIANT(name,variant,varCollar,varGhillie) \
  class SWS_Helmet_##name##_##variant : DOUBLES(SWS_Helmet,name)    \
  {                                                                 \
    collar = QUOTE(varCollar);                                      \
    ghillie = QUOTE(varGhillie);                                    \
  }

#define HELMET_GEAR_INFO(name,varType)                    \
  HELMET_GEAR_INFO_BASE(name,varType);                    \
  HELMET_GEAR_INFO_VARIANT(name,Collar,Yes,No);           \
  HELMET_GEAR_INFO_VARIANT(name,Collar_Ghillie,Yes,Yes);  \
  HELMET_GEAR_INFO_VARIANT(name,Ghillie,No,Yes)

#define GEAR_INFO(name,varType)   \
  HELMET_GEAR_INFO(name,varType); \
  VEST_GEAR_INFO(name,varType)

#define C_GEAR_INFO_OP(name) GEAR_INFO(name,Operative)
#define C_GEAR_INFO_COLOR(name) GEAR_INFO(name,Color)
#define C_GEAR_INFO_ROLE(name) GEAR_INFO(name,Role)

/**
 *  Include all variants of this armor in a single item.
 */
class XtdGearInfos
{
  class CfgWeapons
  {
    //== OPERATIVES
    C_GEAR_INFO_OP(Ashes);
    C_GEAR_INFO_OP(Bait);
    C_GEAR_INFO_OP(Butler);
    C_GEAR_INFO_OP(Carver);
    C_GEAR_INFO_OP(Chrome);
    C_GEAR_INFO_OP(Legion);
    C_GEAR_INFO_OP(Egg);
    C_GEAR_INFO_OP(Hound);
    C_GEAR_INFO_OP(Hurricane);
    C_GEAR_INFO_OP(Maid);
    C_GEAR_INFO_OP(Manny);
    C_GEAR_INFO_OP(Polaris);
    C_GEAR_INFO_OP(Rabbit);
    C_GEAR_INFO_OP(Rifleman);
    C_GEAR_INFO_OP(Roman);
    C_GEAR_INFO_OP(Sawbones);
    C_GEAR_INFO_OP(Snare);
    C_GEAR_INFO_OP(Sonic);
    C_GEAR_INFO_OP(Spritz);
    C_GEAR_INFO_OP(Sula);
    C_GEAR_INFO_OP(Tiger);
    C_GEAR_INFO_OP(Vertigo);

    //== COLORS
    C_GEAR_INFO_COLOR(Blue);
    C_GEAR_INFO_COLOR(Gold);
    C_GEAR_INFO_COLOR(Green);
    C_GEAR_INFO_COLOR(Orange);
    C_GEAR_INFO_COLOR(Purple);
    C_GEAR_INFO_COLOR(Red);

    //== Roles
    C_GEAR_INFO_ROLE(CLS);
  };
};
