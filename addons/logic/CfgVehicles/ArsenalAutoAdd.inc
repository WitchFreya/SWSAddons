class MODULE(ArsenalAutoAdd): ACE_Module {
    // TODO: icon
    // icon = "\sws_main\data\icon_sws.paa";
    scope = 2;
    displayName = "ACE Arsenal Autoadd (Beta)";
    category = QUOTE(DOUBLES(PREFIX,Modules));
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

    class Arguments: ArgumentsBaseUnits {
        class Exclude {
            displayName = "Excluded Items:";
            description = "A comma-delimited string of class names to exclude from the arsenal.";
            typeName = "STRING";
            defaultValue = "";
        };
    };
};
