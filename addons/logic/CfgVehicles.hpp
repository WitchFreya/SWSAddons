class CfgVehicles
{
    class ACE_Module {
        class ModuleDescription;
    };

    class SWS_Module_ArsenalAutoAdd: ACE_Module {
        scope = 2;
        displayName = "ACE Arsenal Autoadd (Beta)";
        category = "SWS_Modules";
        function = QFUNC(moduleArsenalAddAll);
        functionPriority = 10;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        author = QUOTE(AUTHOR);

        class ModuleDescription : ModuleDescription {
            description = "Automatically add SWS items to synchronized ACE arsenals.";
            sync[] = {"Anything"};
        };
    };
};
