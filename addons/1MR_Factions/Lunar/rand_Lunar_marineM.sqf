if (local _this) then {

removeGoggles _this;
removeHeadgear _this;

_randeyes = ["TKE_UCNFaceWear1",1,"TKE_UCNLegPouch",1];
_randheadgear = ["TKE_UCMCHelm_7thMEFM",1,"TKE_UCMCHelmClearClosed7thMEFM",1,"TKE_UCMCHelmClearMask_7thMEFM",1,"TKE_PatrolCapLunarB",0.1];
_randuniform = ["TKE_CombatUniLunarBB_U_B",1,"TKE_CombatUniLunarBC_U_B",1,"TKE_CombatUniLunarBS_U_B",1,"TKE_CombatUniLunarSS_U_B",1,"TKE_CombatUniLunarSC_U_B",1,"TKE_CombatUniLunarSB_U_B",1,"TKE_CombatUniLunarCC_U_B",1,"TKE_CombatUniLunarCS_U_B",1,"TKE_CombatUniLunarCB_U_B",1];
_randvest = ["TKE_UCMCArmour2_17th",1,"TKE_UCMCArmour2_27th",1,"TKE_UCMCArmour6_17th",1]; 

_this addGoggles (selectRandomWeighted _randeyes);
_this addHeadgear (selectRandomWeighted _randheadgear);

_uniformItems = uniformItems _this;
_this addUniform (selectRandomWeighted _randuniform);
{_this addItemToUniform _x} forEach _uniformItems;

_vestItems = vestItems _this;
_this addVest (selectRandomWeighted _randvest);
{_this addItemToVest _x} forEach _vestItems;


};