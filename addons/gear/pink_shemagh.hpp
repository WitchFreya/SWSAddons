class SWS_Shemagh_Pink : LM_OPCAN_DES_Shemagh
{
    ITEM_META(2);
    displayname = "[SWS] Shemagh (Pink)";
    hiddenSelectionsTextures[] = {
        TEXTURE(shemagh,pink)};
    class XtdGearInfo
    {
        model = "SWS_Shemagh";
        color = "Pink";
        variant = "Down";
    };
};

class SWS_Shemagh_Pink_Up : SWS_Shemagh_Pink
{
    displayName = "[SWS] Shemagh (Pink/Up)";
    model = "LM_OPCAN3.0\BLU\UNSC\G\Shemagh2.p3d";

    class XtdGearInfo: XtdGearInfo
    {
        variant = "Up";
    };
};
