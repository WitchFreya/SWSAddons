#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "19th_Fleet_Armor" };
        author = QUOTE(AUTHOR);
        addonRootClass = "19th_Fleet_Armor";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class iteminfo;
class Library;
class CfgWeapons {
    class iteminfo: iteminfo {
        scope = 1;
        displayName = "";
        nameSound = "";
        type = "";
        picture = "";
        class Library : Library {
            libTextDesc = "";
        };
        model = "";
        simulation = "";
        fireLightDuration = "";
        fireLightIntensity = "";
        fireLightDiffuse[] = {};
        fireLightAmbient[] = {};
        weaponLockDelay = "";
        weaponLockSystem = "";
        cmImmunity = "";
        weight = "";
        lockingTargetSound[] = {};
        lockedTargetSound[] = {};
        detectRange = "";
        muzzles[] = {};
    };
    delete iteminfo;
};
