class TRIPLES(PREFIX,Shemagh,Pink) : LM_OPCAN_DES_Shemagh
{
    ITEM_META(2);
    displayname = NAME(Shemagh (Pink));
    hiddenSelectionsTextures[] = {
        TEXTURE(shemagh,pink)};
    class XtdGearInfo
    {
        model = QUOTE(DOUBLES(PREFIX,Shemagh));
        color = "Pink";
        variant = "Down";
    };
};

class DOUBLES(PREFIX,TRIPLES(Shemagh,Pink,Up)) : TRIPLES(PREFIX,Shemagh,Pink)
{
    displayName = NAME(Shemagh (Pink/Up));
    model = "LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";

    class XtdGearInfo: XtdGearInfo
    {
        variant = "Up";
    };
};
