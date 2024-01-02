#include "\x\cba\addons\main\script_macros_common.hpp"

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
  #undef PREP
  #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
  #undef PREP
  #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define MATERIAL(var0) QPATHTOF(data\materials\var0.rvmat)
#define TEXTURE(var0,var1) QPATHTOF(TRIPLES(data\textures\var0,var1,co.paa))

#define SCOPE(varScope)     \
  scope = varScope;         \
  scopeCurator = varScope;  \
  scopeArsenal = varScope

#ifdef AUTHORS
  #define AUTHOR_META       \
    author = QUOTE(AUTHOR); \
    authors[] = {AUTHORS}
#else
  #define AUTHOR_META author = QUOTE(AUTHOR)
#endif

#define META            \
  dlc = QUOTE(PREFIX);  \
  AUTHOR_META

#define ITEM_META(varScope) \
  META;                     \
  SCOPE(varScope)

// uppercase prefix
#define UPREFIX QUOTE(SWS)
#define QUPREFIX QUOTE(PREFIX)

#define CLEARANCE(var0) GVARMAIN(clearanceLevel) = QUOTE(var0)
#define NAME(var0) [SWS] var0
#define QNAME(var0) QUOTE(NAME(var0))
#define VEHICLE(var0) TRIPLES(PREFIX,V,var0)


#define MACRO_X2(var0) var0, var0
#define MACRO_X5(var0) var0, var0, var0, var0, var0
#define MACRO_X10(var0) MACRO_X5(MACRO_X2(var0))

#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
  weapon = #WEAPON; \
  count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
  name = #ITEM; \
  count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
  magazine = #MAGAZINE; \
  count = COUNT; \
}

#define ASSERT_TRUE_EXIT(varAssertion,varMessage,varValue) \
  ASSERT_TRUE(varAssertion,varMessage);                    \
  if !(varAssertion) exitWith {varValue}

#define ASSERT_FALSE_EXIT(varAssertion,varMessage,varValue) \
  ASSERT_FALSE(varAssertion,varMessage);                    \
  if (varAssertion) exitWith {varValue}

//--- Subcomponent Stuff
#define SUBGVAR(var0) GVAR(DOUBLES(SUBCOMPONENT,var0))
#define QSUBGVAR(var0) QUOTE(SUBGVAR(var0))
#define COMPILE_SUBSCRIPT(var1) compileScript ['PATHTO_SYS(PREFIX,COMPONENT_F\SUBCOMPONENT,var1)']
