if (local _this) then {

removeGoggles _this;
removeHeadgear _this;

_randeyes = ["TKE_UCNReconPoncho",1];
_randheadgear = ["TKE_UCMCHelm_7thMEFWntrM",1,"TKE_UCMCHelmClearClosed7thMEFWntrM",1,"TKE_UCMCHelmClearMask_7thMEFWntrM",1];
_randuniform = ["TKE_CombatUniWinterBB_U_B",1,"TKE_CombatUniWinterBC_U_B",1,"TKE_CombatUniWinterBS_U_B",1,"TKE_CombatUniWinterSS_U_B",1,"TKE_CombatUniWinterSC_U_B",1,"TKE_CombatUniWinterSB_U_B",1,"TKE_CombatUniWinterCC_U_B",1,"TKE_CombatUniWinterCS_U_B",1,"TKE_CombatUniWinterCB_U_B",1];
_randvest = ["TKE_UCMCArmour3_17thWntr",1,"TKE_UCMCArmour3_27thWntr",1,"TKE_UCMCArmour6_27thWntr",1]; 

_this addGoggles (selectRandomWeighted _randeyes);
_this addHeadgear (selectRandomWeighted _randheadgear);

_uniformItems = uniformItems _this;
_this addUniform (selectRandomWeighted _randuniform);
{_this addItemToUniform _x} forEach _uniformItems;

_vestItems = vestItems _this;
_this addVest (selectRandomWeighted _randvest);
{_this addItemToVest _x} forEach _vestItems;


};