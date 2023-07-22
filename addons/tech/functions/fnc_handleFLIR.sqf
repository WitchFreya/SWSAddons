/*
UH1Y Flir camera handling script
handles monitor stuff

a: reyhard
*/
disableSerialization;

uiNameSpace setVariable ["MELB_FLIRCtrl",_this select 0];

/*
gunner
high refresh rate loop [0.1 sec]
*/
[] spawn
{
	private _MELB_aberr_ppEffect = ppEffectCreate ["ChromAberration", 200];
	_MELB_aberr_ppEffect ppEffectAdjust [0.002,0.002,200];
	_MELB_aberr_ppEffect ppEffectCommit 0;
	private _MELB_NV_ppEffect = ppEffectCreate ["colorCorrections", 1500];
	_MELB_NV_ppEffect ppEffectAdjust [0.5,0.9,-0.01,[1,1,1,0],[0.5,1,0.5,0],[1,1,1,0], false];
	_MELB_NV_ppEffect ppEffectForceInNVG true;
	_MELB_NV_ppEffect ppEffectCommit 0;
	private _MELB_noise_ppEffect = ppEffectCreate ["FilmGrain", 2000];
	_MELB_noise_ppEffect ppEffectAdjust [0.15,1,1,0.45,1, false];
	_MELB_noise_ppEffect ppEffectCommit 0;

	disableSerialization;
	private _p	= missionNamespace getVariable ["BIS_fnc_moduleRemoteControl_Unit",player];
	private _v	= vehicle _p;

	private _c			= uiNamespace getVariable "MELB_FLIRCtrl";
	private _z			= (_c displayCtrl 180);
	private _d			= (_c displayCtrl 151);
	private _gridLock	= (_c displayCtrl 154);
	private _zoom		= (_c displayCtrl 2);
	private _time		= (_c displayCtrl 4);
	private _time2		= (_c displayCtrl 41);
	private _gun		= (_c displayCtrl 5);
	private _tur		= (_c displayCtrl 6);

	private _t				= true;
	private _lockPos		= AGLtoASL (positionCameraToWorld [0,0,4210]);
	private _gridaA			= "";
	private _previousMode	= _v getVariable ["MELB_mode",-1];

	while{not(isNull _d)}do
	{
		/*
			camera mode handler
		*/
		if(cameraView == "gunner")then
		{
			private _visionMode		= currentVisionMode _p;
			if(_visionMode != _previousMode)then
			{
				_v setVariable ["MELB_mode",_visionMode,true];
				_previousMode = _visionMode;
				switch(_visionMode)do
				{
					case 0:
					{
						{_x ppEffectEnable true}foreach [_MELB_aberr_ppEffect];
						{_x ppEffectEnable false}foreach [_MELB_noise_ppEffect,_MELB_NV_ppEffect];
					};
					case 1:
					{
						{_x ppEffectEnable true}foreach [_MELB_noise_ppEffect,_MELB_aberr_ppEffect,_MELB_NV_ppEffect];
					};
					case 2:
					{
						{_x ppEffectEnable true}foreach [_MELB_noise_ppEffect];
						{_x ppEffectEnable false}foreach [_MELB_NV_ppEffect,_MELB_aberr_ppEffect];
					};
					default {};
				};
			};
			if(_v animationPhase "MFD_CoPilot" isEqualTo 0)then
			{
				_v animate ["copilotpip",1];
				_v animate ["MFD_CoPilot",1];
			};
		}else{
			{_x ppEffectEnable false}foreach [_MELB_noise_ppEffect,_MELB_aberr_ppEffect,_MELB_NV_ppEffect];
			_previousMode = -1;
		};
		/*
			cam zoom handler - gui part
		*/

		_zoomLevel =  (parseNumber  (ctrlText _z))*70;
		_zoomLevel	= (if (_zoomLevel <= 99) then {"0"} else {""})+ str _zoomLevel;
		_gridA		= toArray _zoomLevel;
		_gridaA		= toString (call compile (format["[%1,%2,32,%3]",_gridA select 0,_gridA select 1,_gridA select 2]));

		_zoom ctrlSetText _gridaA;

		_r = ctrlText _gridLock;
		if(_r isEqualTo "TRK COR" && _t)then{
			_t=false;
			_v lockCameraTo [_lockPos,[0]];
			sleep 0.01;
			_v lockCameraTo [objNull,[0]];
		}else{
			if(_r isEqualTo "----")then{
				_t=true;
			};
		};

		sleep 0.01;
		_lockPos = AGLtoASL (positionCameraToWorld [0,1,4210]);
	};
	ppEffectDestroy _MELB_noise_ppEffect;
	ppEffectDestroy _MELB_aberr_ppEffect;
	ppEffectDestroy _MELB_NV_ppEffect;
	uiNameSpace setVariable ["MELB_FLIRCtrl",displayNull];
};
/*
gunner
low refresh rate loop [1 sec]
*/
[] spawn
{
	disableSerialization;
	private _p	= call RHS_fnc_findPlayer;
	private _v	= vehicle _p;

	private _c			= uiNamespace getVariable "MELB_FLIRCtrl";
	private _z			= (_c displayCtrl 180);
	private _d			= (_c displayCtrl 151);
	private _oldZoom	= 0.3;

	while{not(isNull _d)}do
	{
		/*
			cam zoom handler - gui part
		*/
		//visible in gunner cam
		_zoomLevel=(parseNumber (ctrlText _z))*70;
		/*
			zoom is refreshed at low rate to avoid excessive mp traffic + data is transfered only in case of change
		*/

		if(_oldZoom != _zoomLevel)then{_v setVariable ["MELB_zoom",_zoomLevel,true];_oldZoom=_zoomLevel;};

		sleep 1;
	};
};
