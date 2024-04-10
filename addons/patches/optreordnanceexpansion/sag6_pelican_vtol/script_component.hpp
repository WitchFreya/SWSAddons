#define SUBCOMPONENT optreordnanceexpansion_sag6_pelican_vtol
#define SUBCOMPONENT_BEAUTIFIED OPTRE Ordnance Expansion - SAG6 Pelican VTOL
#include "..\..\script_component.hpp"

// Some base classes were defined in inheritance and not actually declared, which causes issues.
#define STUB_USERACTION(varActionClass,varPosition)                       \
  class varActionClass {                                                  \
    displayName = "[INTERNAL] Stub Action";                               \
    radius = 0;                                                           \
    condition = QUOTE(false);                                             \
    statement = "diag_log ""ERROR: Stub action should not be called.""";  \
    position = QUOTE(varPosition);                                        \
    onlyForPlayer = TRUE;                                                 \
  }
