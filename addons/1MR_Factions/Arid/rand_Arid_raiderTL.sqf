if (local _this) then {

removeGoggles _this;
removeHeadgear _this;

_randeyes = ["TKE_UCNFaceWear1",1,"TKE_UCNLegPouch",1];
_randheadgear = ["TKE_UCMRHelmClear1MRArid",1,"TKE_UCMRHelmOpen1MRArid",1,"TKE_UCMRHelmClear1MRAridT",1,"TKE_UCMRHelmOpen1MRAridT",1];
_randuniform = ["TKE_CombatUniAridBB_U_B",1,"TKE_CombatUniAridBC_U_B",1,"TKE_CombatUniAridBS_U_B",1,"TKE_CombatUniAridSS_U_B",1,"TKE_CombatUniAridSC_U_B",1,"TKE_CombatUniAridSB_U_B",1,"TKE_CombatUniAridCC_U_B",1,"TKE_CombatUniAridCS_U_B",1,"TKE_CombatUniAridCB_U_B",1];
_randvest = ["TKE_UCMCArmour4_11MRArid",1,"TKE_UCMCArmour4_21MRArid",1,",1,"TKE_UCMCArmour6_31MRArid",1]; 

_this addGoggles (selectRandomWeighted _randeyes);
_this addHeadgear (selectRandomWeighted _randheadgear);

_uniformItems = uniformItems _this;
_this addUniform (selectRandomWeighted _randuniform);
{_this addItemToUniform _x} forEach _uniformItems;

_vestItems = vestItems _this;
_this addVest (selectRandomWeighted _randvest);
{_this addItemToVest _x} forEach _vestItems;


};