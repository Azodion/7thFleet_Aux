params[
	["_this",objNull,[player]], "_vic"
];

if(isNull _this) exitWith {
	
};

_var = missionNamespace getVariable ["whitelist", objNull];

if (isNil {missionNamespace getVariable "whitelist"}) then {
	
	// whitelist array, [CLASSNAME, x, y, z, maxvicpickup, increment]
	// fyi xyz coords are ADJUSTING based off of vic's boundingbox, not actual position values
	_whitelist = [
		[ // Authed Vics for Maglift usage [CLASSNAME, ARRAY, unauthedWLpickupusage]

			['Victus_Heli_Transport_01_F', 1, 0],
			['ej_UH92_Victus_MEV', 1, 0],
			['ej_UH92_Victus', 1, 0],
			['ej_MH92_Victus', 1, 0],

			['Victus_Heli_Transport_03_unarmed_F', 2, 0],
			['Victus_Heli_Transport_03_F', 2, 0],

			['Y32C_21stMAW_Infantry', 3, 0],
			['Y32C_Victus_Infantry', 3, 0],
			['Y32C_UCIA_Infantry', 3, 0],
			['Y32C_21stMAW_Vehicle', 3, 0],
			['Y32C_Victus_Vehicle', 3, 0],
			['Y32C_UCIA_Vehicle', 3, 0],

			//Customs
			['ej_UH92_Schnee', 1, 0]
		],
		[ //Black Hawk WL
			['UCN_1MR_LSV_01_unarmed_F', 0, 5, 3, 1, 0],
			['UCN_1MR_LSV_01_armed_F', 0, 5, 3, 1, 0],
			['UCN_1MR_LSV_01_AT_F', 0, 5, 3, 1, 0],

			['UCN_UCIA_LSV_01_unarmed_F', 0, 5, 3, 1, 0],
			['UCN_UCIA_LSV_01_armed_F', 0, 5, 3, 1, 0],
			['UCN_UCIA_LSV_01_AT_F', 0, 5, 3, 1, 0],

			['UCN_124_LSV_01_unarmed_F', 0, 5, 3, 1, 0],
			['UCN_124_LSV_01_armed_F', 0, 5, 3, 1, 0],
			['UCN_124_LSV_01_AT_F', 0, 5, 3, 1, 0],

			['7thFleet_MRAP', 0, 7, 3, 1, 0],
			['7thFleet_MRAP_HMG', 0, 7, 3, 1, 0],
			['7thFleet_MRAP_GMG', 0, 7, 3, 1, 0],

			['124thESB_MRAP', 0, 7, 3, 1, 0],
			['124thESB_MRAP_HMG', 0, 7, 3, 1, 0],
			['124thESB_MRAP_GMG', 0, 7, 3, 1, 0],

			['qav_ripsaw_Mk44', 0, 5, 1, 1, 0],
			['qav_ripsaw_Mk44_7thFleet', 0, 5, 1, 1, 0]
		],
		[ //Chinook WL

			['7thFleet_MRAP', 0, 5, 1, 1, 0],
			['7thFleet_MRAP_HMG', 0, 5, 1, 1, 0],
			['7thFleet_MRAP_GMG', 0, 5, 1, 1, 0],

			['7thMEF_APC_Tracked_02_base_F', 0, 5, 1, 1, 0],
			['7thMEF_APC_Tracked_02_medevac_F', 0, 5, 1, 1, 0],
			['7thMEF_APC_Tracked_02_AA_F', 0, 5, 1, 1, 0],
			['7thMEF_APC_Tracked_02_cannon_F', 0, 5, 1, 1, 0],

			['7thFleet_MBT_52', 0, 5, 1, 1, 0],

			['7thFleet_MSE_3', 0, 5, 1, 1, 0],
			['7thFleet_MSE_3_unarmed', 0, 5, 1, 1, 0],

			['124thESB_MRAP', 0, 5, 1, 1, 0],
			['124thESB_MRAP_HMG', 0, 5, 1, 1, 0],
			['124thESB_MRAP_GMG', 0, 5, 1, 1, 0],

			['124thESB_APC_Tracked_02_base_F', 0, 5, 1, 1, 0],
			['124thESB_APC_Tracked_02_medevac_F', 0, 5, 1, 1, 0],
			['124thESB_APC_Tracked_02_AA_F', 0, 5, 1, 1, 0],
			['124thESB_APC_Tracked_02_cannon_F', 0, 5, 1, 1, 0],

			['124thESB_MBT_52', 0, 5, 1, 1, 0],

			['124thESB_MSE_3', 0, 5, 1, 1, 0],
			['124thESB_MSE_3_unarmed', 0, 5, 1, 1, 0],

			['B_MBT_01_124cannon_F', 0, 5, 1, 1, 0],
			['B_MBT_01_124TUSK_F', 0, 5, 1, 1, 0],

			['B_MBT_01_124arty_F', 0, 5, 1, 1, 0],
			['B_MBT_01_124mlrs_F', 0, 5, 1, 1, 0],

			['qav_ripsaw_Mk44', 0, 5, 0, 1, 0],
			['qav_ripsaw_Mk44_7thFleet', 0, 5, 0, 1, 0]
		],
		[ //X-32 WL
			['UCN_1MR_LSV_01_unarmed_F', 0, 5, 2, 1, 0],
			['UCN_1MR_LSV_01_armed_F', 0, 5, 2, 1, 0],
			['UCN_1MR_LSV_01_AT_F', 0, 5, 2, 1, 0],

			['UCN_UCIA_LSV_01_unarmed_F', 0, 5, 2, 1, 0],
			['UCN_UCIA_LSV_01_armed_F', 0, 5, 2, 1, 0],
			['UCN_UCIA_LSV_01_AT_F', 0, 5, 2, 1, 0],

			['UCN_124_LSV_01_unarmed_F', 0, 5, 2, 1, 0],
			['UCN_124_LSV_01_armed_F', 0, 5, 2, 1, 0],
			['UCN_124_LSV_01_AT_F', 0, 5, 2, 1, 0],

			['7thFleet_MRAP', 0, 6, 2, 1, 0],
			['7thFleet_MRAP_HMG', 0, 6, 2, 1, 0],
			['7thFleet_MRAP_GMG', 0, 6, 2, 1, 0],

			['124thESB_MRAP', 0, 6, 2, 1, 0],
			['124thESB_MRAP_HMG', 0, 6, 2, 1, 0],
			['124thESB_MRAP_GMG', 0, 6, 2, 1, 0],

			['qav_ripsaw_Mk44', 0, 5, 0, 1, 0],
			['qav_ripsaw_Mk44_7thFleet', 0, 5, 0, 1, 0]
		]
	];

	missionNamespace setVariable ["whitelist", _whitelist, true];
	// whitelist can be adjusted mid-op, use the code below (obv remove commenting)
	//
	// _whitelist = missionNamespace getVariable "whitelist";
	// _whitelist append [["7thFleet_MBT_52", 0, 0, 0, 1, 0]];
};


fnc_Engage =
{	
	params ["_object"];
	params["_vic"];
	_classcheck= typeOf _vic;
	_whitelistRaw = missionNamespace getVariable "whitelist";
	_whitelistairasset = _whitelistRaw select 0;
	_whitelistSelected = 1;
	_nonapprovedVicAttache = 0;
	_approvedVicCheck = 0;
	for "_i" from 0 to (count _whitelistairasset - 1) do
	{
		if ( _whitelistairasset select _i select 0 == _classcheck ) then
		{
			_approvedVicCheck= 1;
			_whitelistSelected= _whitelistairasset select _i select 1;
			_nonapprovedVicAttache= _whitelistairasset select _i select 2;
		};
	};
	if (_approvedVicCheck == 1 && driver _vic == player) then {
		_objectcount = count attachedObjects _vic;
		_whitelistreal = _whitelistRaw select _whitelistSelected;
		if (_objectcount == 0) then {
			_objects= nearestObjects [driver _vic, ["Car","Tank","Air","Ship"], 20];
			_vex= _objects select 1;
			_class= typeOf _vex;
			_attachcheck= 0;
			_additionalx= 0;
			_additionaly= 0;
			_additionalz= 0;
			_boundingBox= boundingBox _vex;
			_z1 = (_boundingBox #0) #2;
			_z2 = (_boundingBox #1) #2;
			_z = (_z1 - _z2);
				
			for "_i" from 0 to (count _whitelistreal - 1) do
			{
				if ( _whitelistreal select _i select 0 == _class ) then
				{
					_attachcheck= 1;
					_additionalx= _whitelistreal select _i select 1;
					_additionaly= _whitelistreal select _i select 2;
					_additionalz= _whitelistreal select _i select 3;
				};
			};
			if (_attachcheck == 1) then {
				_vex attachTo [_vic, [0 + _additionalx,-3 + _additionaly, _z + _additionalz]]; 
				hint parseText format["<t color='#00FF00'> Pickup Authed."];

			};
			if (_attachcheck == 0 && !isNull _Vex && _nonapprovedVicAttache == 1) then {
				hint parseText format["<t color='#FFA500'> Pickup Authed (NO WL)."];
				_vex attachTo [_vic, [0, -3 + _additionaly, _z]]; 
			};
		};
		if (_objectcount != 0) then {
			params["_vic"];
			_attachedcheckmult = attachedObjects _vic select 0;
			_classcheckmult = typeOf _attachedcheckmult;
			_ammountmult = 1;
			_attachcheckmult= 0;
			for "_i" from 0 to (count _whitelistreal - 1) do
				{
					if ( _whitelistreal select _i select 0 == _classcheckmult ) then
					{
						_attachcheckmult= 1;
						_ammountmult= _whitelistreal select _i select 4;
					};
				};
			if (_objectcount < _ammountmult && _attachcheckmult == 1) then {
				params["_vic"];
				_objects= nearestObjects [driver _vic, ["Car","Tank","Air","Ship"], 20];
				_vex = objNull;
				_objectvalidate= 0;
				_objectcount= 0;
				{
					if (isNull attachedTo _x && _objectvalidate == 0 && _Objectcount != 0) then {
						_vex= _objects select _objectcount;
						_objectvalidate = 1;
					};
					_objectcount = _objectcount + 1;
				} foreach _objects;
				_class= typeOf _vex;
				_attachcheck= 0;
				_additionalx= 0;
				_additionaly= 0;
				_additionalz= 0;
				_boundingBox= boundingBox _vex;
				_z1 = (_boundingBox #0) #2;
				_z2 = (_boundingBox #1) #2;
				_z = (_z1 - _z2);
				
				_x1 = (_boundingBox #0) #0;
				_x2 = (_boundingBox #1) #0;
				_x = (_x1 - _x2);
				_multcorrectional = 0;

				for "_i" from 0 to (count _whitelistreal - 1) do
				{
					if ( _whitelistreal select _i select 0 == _class ) then
					{
						_attachcheck= 1;
						_additionalx= _whitelistreal select _i select 1;
						_additionaly= _whitelistreal select _i select 2;
						_additionalz= _whitelistreal select _i select 3;
						_multcorrectional= _whitelistreal select _i select 5;
					};
				};
				_additionalx2= ( (_multcorrectional * count attachedObjects _vic) + (_x * count attachedObjects _vic) );
				if (_attachcheck == 1 && _class == _classcheckmult) then {
					_vex attachTo [_vic, [0 + (_additionalx + _additionalx2),-3 + _additionaly, _z + _additionalz]];
					hint parseText format["<t color='#00FF00'> Pickup Authed."];
				};
				if (_attachcheck == 0 && !isNull _Vex) then {
					hint parseText format["<t color='#FF0000'> Pickup Not Authed."];
				};
			};
		};
	};
};

fnc_Disengage = {
	params ["_object"];
	params["_vic"];
	_classcheck= typeOf _vic;
	_whitelistRaw = missionNamespace getVariable "whitelist";
	_whitelistairasset = _whitelistRaw select 0;
	_approvedVicCheck = 0;
	for "_i" from 0 to (count _whitelistairasset - 1) do
	{
		if ( _whitelistairasset select _i select 0 == _classcheck ) then
		{
			_approvedVicCheck= 1;
		};
	};
	if (_approvedVicCheck == 1 && driver _vic == player) then {
		{
			detach _x;
		} foreach attachedObjects _vic;
	};
};

_this addAction ["<t color='#f44167'>Disengage Magnetic Clamps</t>",{
	_this call fnc_Disengage;
},[1],0,true,false,""," driver _target == _this "];

_this addAction ["<t color='#f4e541'>Engage Magnetic Clamps</t>",{
	_this call fnc_Engage;
},[1],0,true,false,""," driver _target == _this "];



#include "\a3\ui_f\hpp\defineDIKCodes.inc"

[
	"7th Fleet Mag Lock", 
	"MagLockEngage", 
	"Mag Lock Engage", 
	{
    	([vehicle player] call fnc_Engage);
	}, [DIK_F, [false, false, false]]] call CBA_fnc_addKeybind;

[
	"7th Fleet Mag Lock", 
	"MagLockDisengage", 
	"Mag Lock Disengage",
	{
    	([vehicle player] call fnc_Disengage);
	}, [DIK_G, [false, false, false]]] call CBA_fnc_addKeybind;
