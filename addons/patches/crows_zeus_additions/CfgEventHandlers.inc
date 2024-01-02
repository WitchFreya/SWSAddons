#define COMPILE_SUBSCRIPT(var1) compileScript ['PATHTO_SYS(PREFIX,COMPONENT_F\SUBCOMPONENT,var1)']

class Extended_PostInit_EventHandlers
{
  class SUBADDON
  {
    clientInit = QUOTE(call COMPILE_SUBSCRIPT(XEH_postInitClient));
  };
};
