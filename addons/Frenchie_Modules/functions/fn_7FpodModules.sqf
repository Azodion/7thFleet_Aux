//drop pod script
FM_7F_Droppods_TEST = { 
     params ["_position","_selection","_linger"]; 
      
     _position= (ASLtoATL _position); 
           
          _spawnpos = _position vectorAdd [random [-100, 0, 100], random [-100, 0, 100], 1500]; 
           
          _mainprojectile = createvehicle ["R_MRAAWS_HE_F", _spawnpos, [], 0, "NONE"]; 
      
          _mainprojectile setShotParents [player, player]; 
           
          _angle = [(_position vectorFromTo _spawnpos)#0, (_position vectorFromTo _spawnpos)#1, ((_position vectorFromTo _spawnpos)#2)]; 
      
          _projectile = createvehicle ["JMSFALL_O_Droppod_mil", [0, 0, 0], [], 0, "NONE"]; 
          [_projectile, 0, 0] call BIS_fnc_setPitchBank; 
          _projectile setPosATL (getPosATL _mainprojectile); 
          [_projectile, _mainprojectile] call BIS_fnc_attachtorelative; 
          _projectile allowdamage false; 
           
          _RayPos1 = _projectile modeltoWorld [0, 0, 5]; 
                         
          [[_projectile, _RayPos1], { 
           params ["_projectile", "_RayPos1"]; 
            
           private _ps1 = "#particlesource" createvehiclelocal _RayPos1; 
           _ps1 setParticleCircle [0, [0, 0, -2]]; 
           _ps1 setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [5, 5, 5, 0], 0, 0]; 
           _ps1 setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 1, [0, 0, 0], [0, 0, 0], 10, 7, 2, 0, [10,22,14,7], [[235, 81, 17, 1]], [0.08], 1, 0, "", "", _ps1]; 
           _ps1 setDropInterval 0.02; 
           _ps1 attachTo [_projectile]; 
           [_ps1, _projectile] spawn { 
            params ['_ps1', '_projectile']; 
            waitUntil { 
             (!alive _projectile) || ((getPosATL _projectile # 2) < 5) 
            }; 
            deletevehicle _ps1; 
           }; 
          }] remoteExec ["spawn"]; 
 
          [_mainprojectile, _position,_projectile] spawn { 
           params ["_mainprojectile", "_position","_projectile"]; 
           while {alive _mainprojectile} do { 
            _mainprojectile setvelocity ((_position vectorFromTo (getPosATL _mainprojectile)) vectorMultiply -100); 
           }; 
          }; 
           
          [[_projectile], { 
           params ["_projectile"]; 
           _FloodLight = "#lightpoint" createvehiclelocal [0, 0, 0]; 
           _FloodLight attachto [_projectile, [0, 0, 1]]; 
           _FloodLight setLightColor [1, 0.8, 0.25]; 
           _FloodLight setLightAmbient [1, 0.8, 0.25]; 
           _FloodLight setLightBrightness 0.75; 
           _FloodLight setLightDayLight true; 
            
           waitUntil { 
            !alive _projectile 
           }; 
           deletevehicle _floodLight; 
          }] remoteExec ["spawn"]; 
           
           
          [_mainprojectile, _position, _projectile, _selection] spawn { 
           params ["_mainprojectile", "_position", "_projectile", "_selection"]; 
            
           _positionATL=_position; 
           //_projectile allowDamage false; 
      
           waitUntil { 
            if (alive _mainprojectile) then { 
             _positionATL=getPosATL _mainprojectile; 
            }; 
            !alive _mainprojectile; 
           }; 
            
           [[_positionATL], { 
            params ['_position']; 
            _positionATL = _position; 
            _positionATL set [2, 2]; 
             
            private _ps1 = "#particlesource" createvehiclelocal _positionATL; 
            _ps1 setParticleParams [ 
             "\A3\Data_F\ParticleEffects\Pstone\Pstone", "", "SpaceObject", 
             1, 10, [0, 0, 0], [0, 0, 10], 1, 20, 1, 0.2, [1, 1], 
             [[1, 1, 1, 1]], 
            [0, 1], 1, 0, "", "", _ps1]; 
            _ps1 setParticleRandom [0, [10, 10, 0], [5, 5, 10], 0, 1.5, [0, 0, 0, 0], 0, 0]; 
            _ps1 setParticleCircle [10, [0, 10, 10]]; 
            _ps1 setDropInterval 0.01; 
             
            _ps1 spawn { 
             sleep 1; 
             deletevehicle _this; 
            }; 
           }] remoteExec ["spawn"]; 
            
           _craterpos = _positionATL; 
           _craterpos set [2, 0]; 
           _DroidPodCrater = createvehicle ["land_ShellCrater_02_small_F", _craterpos, [], 0, "CAN_COLLIDE"]; 
            
           deletevehicle _projectile; 
           _projectile = createvehicle ["JMSFALL_O_Droppod_mil", [0,0,0], [], 0, "NONE"]; 
           _projectile enableSimulation false; 
           _projectile allowdamage false; 
      
           _projectile disableCollisionWith _DroidPodCrater; 
           _DroidPodCrater disableCollisionWith _projectile; 
      
           _projectile setVectorUp surfaceNormal position _projectile; 
      
           _projectile setPosATL [(getPosATL _DroidPodCrater select 0), (getPosATL _DroidPodCrater select 1), 0]; 
      
           _DroidPodCrater setVectorDir [(random 1), (random 1), (random 1)];  
           _DroidPodCrater setPosWorld getPosWorld _DroidPodCrater; 
           _projectile setVectorDir [(random 1), (random 1), (random 1)];  
           _projectile setPosWorld getPosWorld _projectile; 
      
           _RotationNumber = (random 5); 
           [_DroidPodCrater, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank; 
           [_projectile, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank; 
      
           _position = _CraterPos; 
            
           _spawn = _position;
           //_side = (_dropside select 0); 
           _side = [west, east, independent, independent, independent, independent, independent, civilian] # _selection; //sides assigned to squads in order
           _listout = [ 
             ["B_KEF_UCMC_Team_Leader", "B_KEF_UCMC_Autorifleman", "B_KEF_UCMC_Trooper", "B_KEF_UCMC_Trooper"], 
             ["O_KEF_MDMC_Team_Leader", "O_KEF_MDMC_Autorifleman", "O_KEF_MDMC_Trooper", "O_KEF_MDMC_Trooper"],
             ["ER_JSF_Team_Leader","ER_JSF_Autorifleman","ER_JSF_Trooper","ER_JSF_Trooper"],
             ["ER_JCG_Team_Leader","ER_JCG_Autorifleman","ER_JCG_Trooper","ER_JCG_Trooper"],
             ["ER_JDC_Chief","ER_JDC_OperatorAR","ER_JDC_Operator","ER_JDC_OperatorAR"],
             ["I_KEF_KMC_G_Leader","I_KEF_KMC_G_Autorifleman","I_KEF_KMC_G_Grunt","I_KEF_KMC_G_Grunt"],
             ["I_KEF_KMC_Enforcer_Team_Leader","I_KEF_KMC_Enforcer_Autorifleman","I_KEF_KMC_Enforcer_Trooper","I_KEF_KMC_Enforcer_Trooper"],
             ["C_KEF_Cosplayer"]
           ] # _selection;

           diag_log _selection;
           diag_log _side;
           diag_log _listout;
            
           [_spawn, _side, _listout, _DroidPodCrater] spawn { 
            params ["_spawn", "_side", "_listout", "_DroidPodCrater"]; 
            sleep 0.1; 
            _FloodGroup = [_spawn, _side, _listout] call BIS_fnc_spawngroup; 
      
           }; 
          }; 
    };

//creates actual zeus module: cat, title
["[7thFlt] Drop Pods", "Drop Pod", 
        { 
            params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];       
             
            _options = ["UCMC", "MDMC", "JSF", "JCG", "JDC", "KMC", "KMC Enf", "Example"];
 
            ["Select a fireteam to drop.", [
                ["toOLBOX", ["Faction", "Squad spawn selection:"], [7, 1, 7, _options, nil]]
                ], {
                    params["_values", "_arguments"];
                    _fireteam = _values select 0;
                    _position = _arguments select 0; 
 
     [_position, _fireteam] call FM_7F_Droppods_TEST;
     
    }, {}, [_pos, _logic]] call zen_dialog_fnc_create; 
}, "\PHAN_ScifiSupportPlus\data\COV_SDV.paa"] call zen_custom_modules_fnc_register;

            //_podClass = ["UCN", "MD"]
//["toOLBOX", ["Drop Pod", "Drop pod type:"], [2, 1, 2, _options, nil]] 