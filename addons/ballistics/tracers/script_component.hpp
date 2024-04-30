#define SUBCOMPONENT tracers
#define SUBCOMPONENT_BEAUTIFIED Variant Tracer Colors
#include "..\script_component.hpp"

#define C_TRACERS(varBase)                                                                                  \
  class DOUBLES(varBase,Tracer_Blue) : varBase { model = QPATHTOF(data\tracer_blue\tracer_blue.p3d); }; \
  class DOUBLES(varBase,Tracer_Orange) : varBase { model = QPATHTOF(data\tracer_orange\tracer_orange.p3d); }

#define C_CLASS_TRACERS(varBase)          \
  QUOTE(DOUBLES(varBase,Tracer_Blue)) \
  , QUOTE(DOUBLES(varBase,Tracer_Orange))
