#define SUBCOMPONENT crowsza_zeus_text
#define SUBCOMPONENT_BEAUTIFIED Crow's Zeus Additions - Zeus Text
#include "..\script_component.hpp"

#define PATCH_GVAR(varName) crowsza_zeus_text_##varName
#define PATCH_QGVAR(varName) QUOTE(PATCH_GVAR(varName))
