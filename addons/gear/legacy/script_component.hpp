#define SUBCOMPONENT legacy
#define SUBCOMPONENT_BEAUTIFIED Legacy Armor and Vests
#include "..\script_component.hpp"

#include "script_component_helmet.inc"
#include "script_component_vest.inc"

#define QHELMET_VARIANTS_POLARIZATION_FN(var0) QUOTE(DOUBLES(SWS_Helmet,var0)), QUOTE(TRIPLES(SWS_Helmet,var0,dp))
#define QHELMET_VARIANTS_GHILLIE_FN(var0) \
  QHELMET_VARIANTS_POLARIZATION_FN(var0), \
  QHELMET_VARIANTS_POLARIZATION_FN(DOUBLES(var0,Ghillie))
#define QHELMET_VARIANTS_COLLAR_FN(var0)  \
  QHELMET_VARIANTS_GHILLIE_FN(var0),      \
  QHELMET_VARIANTS_GHILLIE_FN(DOUBLES(var0,Collar))

#define QHELMETS_FN(var0) QHELMET_VARIANTS_COLLAR_FN(var0)

#define QVEST_VARIANTS_GHILLIE_FN(var0) QUOTE(SWS_Vest_##var0), QUOTE(SWS_Vest_##var0##_Ghillie)
#define QVEST_VARIANTS_CONFIGURATION_FN(var0)             \
  QVEST_VARIANTS_GHILLIE_FN(var0),                        \
  QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Demolitions)),   \
  QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Sniper)),        \
  QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Copilot)),       \
  QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Light)),         \
  QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Scout)),         \
  QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Rifleman)),      \
  QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Marksman)),      \
  QVEST_VARIANTS_GHILLIE_FN(DOUBLES(var0,Lead))

#define QVESTS_FN(var0) QVEST_VARIANTS_CONFIGURATION_FN(var0)

#define QWEAPONS_FN(var0) \
  QHELMETS_FN(var0),      \
  QVESTS_FN(var0)

#define MATERIAL(var0) QPATHTOF(data\materials\var0.rvmat)
#define TEXTURE(var0,var1) QPATHTOF(TRIPLES(data\textures\var0,var1,co.paa))
