class CfgAmmo {
	class M_AT;
	class SWS_Dumbfire_Base : M_AT // Same as default hydras
	{
		ITEM_META(0);
		cmimmunity = 1;
		whistleDist=24;
		effectsMissileInit = "MissileDAR1";
		muzzleEffect = "BIS_fnc_effectFiredRocket";
	};
	class SWS_M_Talon : SWS_Dumbfire_Base
	{
		ITEM_META(2);
		model = "melb\proxies\m229_fly.p3d";
		proxyShape = "melb\proxies\m229_proxy.p3d";
		hit = 320;
		indirectHit = 60;
		indirectHitRange = 15;
		suppressionRadiusHit = 20;
	};
	class SWS_M_Rake : SWS_Dumbfire_Base {
		ITEM_META(2);
		model = "melb\proxies\m261_mpsm_fly.p3d";
		proxyShape = "melb\proxies\m261_mpsm_proxy.p3d";
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