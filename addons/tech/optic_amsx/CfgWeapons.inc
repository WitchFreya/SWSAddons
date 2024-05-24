#define CLASSES_WEAPONS \
  "SWS_Optic_AMSx"

class CfgWeapons
{
  class optic_AMS_base;
  class SWS_Optic_AMSx: optic_AMS_base
  {
    ITEM_META(2);
    displayName = QNAME(AMSx);
    descriptionShort = QUOTE(Experimental optic based on the US Optics MR-10.<br/> A night vision mode has been added.);
    class ItemInfo : InventoryOpticsItem_Base_F
    {
			mass=14;
			opticType=2;
			weaponInfoType="RscWeaponRangeZeroingFOV";
			optics=1;
			modelOptics="\A3\Weapons_F_Mark\Acc\reticle_acco_ams_F";
			class OpticsModes
			{
				class AMS
				{
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsZoomMin=0.025;
					opticsZoomMax=0.075000003;
					opticsZoomInit=0.075000003;
					discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
					discreteDistanceInitIndex=2;
					distanceZoomMin=300;
					distanceZoomMax=2000;
					discretefov[]={0.075000003,0.025};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\A3\Weapons_F_Mark\Acc\reticle_acco_ams_F",
						"\A3\Weapons_F_Mark\Acc\reticle_acco_ams_z_F"
					};
					visionMode[]=
					{
						"Normal", "NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Iron
				{
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