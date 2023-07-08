/*
 * Author: reyhard
 * Script from RHS used for grenade submunitions.
 *
 * Arguments:
 * 0: Shooter <UNIT>
 * 1: Grenade <PROJECTILE>
 *
 * Public: No
 */

params [
	"_shooter",
	"_grenade"
];

// Exit on bad input
if (not(local _shooter)) exitWith {};

// Generate event ID
private _pfh				= "RHS_pfh_rgno_" + str _grenade;
private _fuseTime			= getArray (configFile >> "cfgAmmo" >> typeOf _grenade >> "rhs_fuseTime");
private _submunition_uxo	= getText (configFile >> "cfgAmmo" >> typeOf _grenade >> "rhs_submunition_uxo");

// On each frame
[_pfh, "onEachFrame", {
	params ["_timeToArm","_time","_time2","_grenade","_shooter","_velocity","_position","_submunition","_pfh"];

	// Spawn on impact
	if(!alive _grenade )exitWith
	{
		[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;

		private _vectorUp = _velocity vectorCrossProduct [-(_velocity select 1), _velocity select 0, 0];

		// Create submunition
		_grenade = _submunition createVehicle [0,0,0];
		_grenade setPosASL _position;
		_grenade setVectorDirAndUp [_velocity,_vectorUp];
		_grenade setVelocity _velocity;
		[_grenade,[vehicle _shooter,_shooter]]  remoteExecCall ["setShotParents",2];
	};


	if(time >_time)then
	{
		// Simulate drag of parachute
		private _velocityNormalized	= vectorNormalized (velocity _grenade);
		_grenade addForce [_velocityNormalized vectorMultiply -0.1,[0,0,0]];

		_this set [1, time + 0.01];

		// Slower refresh rate due to quirks right before impact
		if(time > _time2 && {speed _grenade != 0})then
		{
			_this set [5, velocity _grenade];
			_this set [6, getPosASL _grenade];
			_this set [2, time + 0.1];
		};
	};

	// Replace to armed model
	// Fuse time is randomized in 1 to 1.8s range delay
	if(time >= _timeToArm)then
	{
		private _submunition	= getText (configFile >> "cfgAmmo" >> typeOf _grenade >> "rhs_submunition");
		private _vectordir		= vectorDir _grenade;

		// Grenade is deleted in next frame - we need to quickly move old one to [0,0,0] coord to avoid colision with newly created grenade
		_grenade setPosASL [0,0,0];
		deleteVehicle _grenade;

		_grenade = createVehicle [_submunition,ASLToAGL(_position),[],0,"CAN_COLLIDE"];;
		_grenade setPosASL _position;
		_grenade addForce [_velocity vectorMultiply 0.75,[0,0,0]];
		_grenade addTorque [0,0,0];
		_grenade setVelocity _velocity;
		private _vectorUp = _velocity vectorCrossProduct [-(_velocity select 1), _velocity select 0, 0];
		_grenade setVectorDirAndUp [_vectordir,_vectorUp];

		[_grenade,[vehicle _shooter,_shooter]]  remoteExecCall ["setShotParents",2];

		_this set [0,time+999];
		_this set [3,_grenade];
		_this set [7, getText (configFile >> "cfgAmmo" >> typeOf _grenade >> "rhs_submunition")];
	};
}, [time+random(_fuseTime),0,0, _grenade,_shooter,velocity _grenade,getPosASL _grenade,_submunition_uxo, _pfh]] call BIS_fnc_addStackedEventHandler;
