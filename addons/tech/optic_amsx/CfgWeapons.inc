#define CLASSES_WEAPONS \
  "SWS_Optic_AMSx"

class CfgWeapons {
  class optic_AMS_base;
  class SWS_Optic_AMSx: optic_AMS_base {
    ITEM_META(2);
    displayName = QNAME(AMSx);
    ACE_ScopeHeightAboveRail = 3.8933;
    ACE_ScopeAdjust_Vertical[] = {0, 16};
    ACE_ScopeAdjust_Horizontal[] = {-11, 11};
    ACE_ScopeAdjust_VerticalIncrement = 0.1;
    ACE_ScopeAdjust_HorizontalIncrement = 0.1;
    descriptionShort = QUOTE(Experimental optic based on the US Optics MR-10.<br/> A night vision mode has been added.);
    class ItemInfo : InventoryOpticsItem_Base_F {
			mass=14;
			opticType=2;
			weaponInfoType="RscWeaponRangeZeroingFOV";
			optics=1;
			modelOptics="\A3\Weapons_F_Mark\Acc\reticle_acco_ams_F";
			class OpticsModes {
				class AMS {
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]= {
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsZoomMin = 0.0285; // Use ACE Value
					opticsZoomMax = 0.085; // Use ACE Value
					opticsZoomInit = 0.085; // Use ACE Value
					discreteDistance[] = {100};  // Use ACE Value
					discreteDistanceInitIndex=0;  // Use ACE Value
					distanceZoomMin=300;
					distanceZoomMax=2000;
					discretefov[] = {0.085, 0.0285}; // Use ACE Value
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]= {
						"\A3\Weapons_F_Mark\Acc\reticle_acco_ams_F",
						"\A3\Weapons_F_Mark\Acc\reticle_acco_ams_z_F"
					};
					visionMode[]= {
						"Normal", "NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Iron {
					opticsID=2;
					opticsDisplayName="";
					useModelOptics=0;
					opticsPPEffects[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					cameraDir="";
				};
      };
    };
  };
};
