#define SUBCOMPONENT tracers
#define SUBCOMPONENT_BEAUTIFIED Variant Tracer Colors
#include "..\script_component.hpp"

#define C_AMMO_TRACERS(varBase)                                                                         \
  class DOUBLES(varBase,Tracer_Blue) : varBase { model = QPATHTOF(data\tracer_blue\tracer_blue.p3d); }; \
  class DOUBLES(varBase,Tracer_Orange) : varBase { model = QPATHTOF(data\tracer_orange\tracer_orange.p3d); }

#define C_AMMO_CLASS_TRACERS(varBase) \
  QUOTE(DOUBLES(varBase,Tracer_Blue)) \
  , QUOTE(DOUBLES(varBase,Tracer_Orange))

#define QPATHTO_ARMA_TRACER(varColor) QUOTE(TRIPLES(\a3\weapons_f\data\bullettracer\tracer,varColor,.p3d))
#define QPATHTOF_TRACER_BLUE QPATHTOF(data\tracer_blue\tracer_blue.p3d)
#define QPATHTOF_TRACER_GREEN QPATHTO_ARMA_TRACER(green)
#define QPATHTOF_TRACER_ORANGE QPATHTOF(data\tracer_orange\tracer_orange.p3d)
#define QPATHTOF_TRACER_RED QPATHTO_ARMA_TRACER(red)
#define QPATHTOF_TRACER_WHITE QPATHTO_ARMA_TRACER(white)
#define QPATHTOF_TRACER_YELLOW QPATHTO_ARMA_TRACER(yellow)
