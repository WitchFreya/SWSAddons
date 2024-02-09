class cfgAmmo {
	class M_AT;
	class SWS_Dumbfire_Base : M_AT // Same as default hydras
	{
		cmimmunity = 1;
		whistleDist=24;
		effectsMissileInit = "MissileDAR1";
		muzzleEffect = "BIS_fnc_effectFiredRocket";
	};
	class SWS_M_Talon : SWS_Dumbfire_Base 
	{
		model = "melb\proxies\m229_fly";
		proxyShape = "melb\proxies\m229_proxy";
		hit = 320;
		indirectHit = 60;
		indirectHitRange = 15;
		suppressionRadiusHit = 20;
	};
	class SWS_M_Rake : SWS_Dumbfire_Base {
		model = "melb\proxies\m261_mpsm_fly";
		proxyShape = "melb\proxies\m261_mpsm_proxy";
		hit = 200;
		indirectHitRange = 20;
		indirectHit = 50;
		ace_frag_gurney_c = 3000;
		ace_frag_gurney_k = "1/2";
		ace_frag_classes[] = {"ACE_frag_medium"};
		ace_frag_metal = 230;
		ace_frag_charge = 300;
		ace_frag_enabled = 1;
		suppressionRadiusHit = 50;
	};
};