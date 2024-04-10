#include "script_component.hpp"

class AttributesBase;
class Default;
class Edit;					// Default edit box (i.e. text input field)
class Combo;				// Default combo box (i.e. drop-down menu)
class Checkbox;				// Default checkbox (returned value is Boolean)
class CheckboxNumber;		// Default checkbox (returned value is Number)
class ModuleDescription;	// Module description
class Units;				// Selection of units on which the module is applied
class AnyVehicle;
class EmptyDetector;

#include "CfgVehicles.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = { "A3_Modules_F_Multiplayer" };
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
