if (local _this) then {

removeGoggles _this;
removeHeadgear _this;

_randeyes = ["TKE_UCNFaceWear1",1,"TKE_UCNLegPouch",1];
_randheadgear = ["TKE_UCMCHelm_7thMEFAridM",1,"TKE_UCMCHelmClearClosed7thMEFAridM",1,"TKE_UCMCHelmClearMask_7thMEFAridM",1,"TKE_PatrolCapAridB",0.1];
_randuniform = ["TKE_CombatUniAridBB_U_B",1,"TKE_CombatUniAridBC_U_B",1,"TKE_CombatUniAridBS_U_B",1,"TKE_CombatUniAridSS_U_B",1,"TKE_CombatUniAridSC_U_B",1,"TKE_CombatUniAridSB_U_B",1,"TKE_CombatUniAridCC_U_B",1,"TKE_CombatUniAridCS_U_B",1,"TKE_CombatUniAridCB_U_B",1];
_randvest = ["TKE_UCMCArmour2_17thArid",1,"TKE_UCMCArmour2_27thArid",1,"TKE_UCMCArmour6_17thArid",1]; 

_this addGoggles (selectRandomWeighted _randeyes);
_this addHeadgear (selectRandomWeighted _randheadgear);

_uniformItems = uniformItems _this;
_this addUniform (selectRandomWeighted _randuniform);
{_this addItemToUniform _x} forEach _uniformItems;

_vestItems = vestItems _this;
_this addVest (selectRandomWeighted _randvest);
{_this addItemToVest _x} forEach _vestItems;


};