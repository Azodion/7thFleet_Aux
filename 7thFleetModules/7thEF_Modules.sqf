//Predefined Squads
private _squads = [
    ["Rifle Team", [
        "ER_JSF_Squad_Leader", 
        "ER_JSF_Trooper", 
        "ER_JSF_Trooper", 
        "ER_JSF_Combat_Medic"
    ]],
    ["AT Team", [
        "ER_JSF_Squad_Leader", 
        "ER_JSF_Trooper", 
        "ER_JSF_AT_Specialist", 
        "ER_JSF_Combat_Medic"
    ]]
];


// Register the Zeus Module
[
    "[7thEF] Modules", // Display name in Zeus
    "JSF Drop Pod",
    {
        params ["_logic", "_position", "_arguments"];

        // Get Selected Squad Name from Module Arguments
        private _squadName = _arguments select 0;
        private _squadArray = squads select {(_x select 0) == _squadName} select 0 select 1;

        // Deploy Droppod with the Squad
        private _spawnPos = _position vectorAdd [0, 0, 1500];
        private _droppod = createVehicle ["JMSFALL_O_Droppod_mil", _spawnPos, [], 0, "NONE"];
        _droppod setPosATL _spawnPos;
        _droppod allowDamage false;

        // Deploy Units
        private _leader = objNull;
        {
            private _unit = _droppod createVehicleCrew _x;
            if (isNull _leader) then {
                _leader = _unit;
            };
            _unit joinSilent _leader;
        } forEach _squadArray;

        // Final Adjustments
        _droppod enableSimulation true;
    },
    [  // Arguments for Zeus UI
        ["Squad", "LIST", ["Rifle Team", "AT Team"], "Rifle Team"]
    ]
] call zen_custom_modules_fnc_register;