#define ACRE_GVARMAIN(varName) DOUBLES(acre,varName)
#define ACRE_GVAR(varAddon,varName) TRIPLES(acre,varAddon,varName)
#define ACRE_EFUNC(varAddon,varFnc) ACRE_GVAR(varAddon,DOUBLES(fnc,varFnc))
#define ACRE_FUNC(varFnc) ACRE_EFUNC(api,varFnc)
#define ACRE_QFUNC(varFnc) QUOTE(ACRE_FUNC(varFnc))

#define RADIO_PROPS "audioSource", "channel", "spatial", "speaker", "onOffState"
