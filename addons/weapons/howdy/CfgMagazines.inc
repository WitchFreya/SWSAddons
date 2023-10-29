#define CLASSES_MAGAZINES \
    "SWS_Magazine_M24RL_D"

class CfgMagazines
{
    class MRAWS_HEAT_F;
    class SWS_Magazine_M24RL_D: MRAWS_HEAT_F
    {
        ITEM_META(2);
        displayName = QNAME(M24RL-Sx 'Howdy' HEAT);
        displayNameShort = "M24RL-Sx Rocket";
        descriptionShort = "MAWS Type Heavy Damage";
        count = 1;
        ammo = "SWS_B_M24RL_D";
        mass = MASS_MAG;
        allowedSlots[] = {SLOT_BACKPACK};
    };
};
