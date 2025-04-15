if (local _this) then {

removeGoggles _this;
removeHeadgear _this;

_randeyes = ["TKE_UCNFaceWear1",1,"TKE_UCNLegPouch",1];
_randheadgear = ["TKE_UCMRHelmClear1MRWdl",1,"TKE_UCMRHelmOpen1MRWdl",1,"TKE_UCMRHelmClear1MRWdlT",1,"TKE_UCMRHelmOpen1MRWdlT",1];
_randuniform = ["TKE_CombatUniWoodlandBB_U_B",1,"TKE_CombatUniWoodlandBC_U_B",1,"TKE_CombatUniWoodlandBS_U_B",1,"TKE_CombatUniWoodlandSS_U_B",1,"TKE_CombatUniWoodlandSC_U_B",1,"TKE_CombatUniWoodlandSB_U_B",1,"TKE_CombatUniWoodlandCC_U_B",1,"TKE_CombatUniWoodlandCS_U_B",1,"TKE_CombatUniWoodlandCB_U_B",1];
_randvest = ["TKE_UCMCArmour4_11MRWdl",1,"TKE_UCMCArmour4_21MRWdl",1,",1,"TKE_UCMCArmour6_31MRWdl",1]; 

_this addGoggles (selectRandomWeighted _randeyes);
_this addHeadgear (selectRandomWeighted _randheadgear);

_uniformItems = uniformItems _this;
_this addUniform (selectRandomWeighted _randuniform);
{_this addItemToUniform _x} forEach _uniformItems;

_vestItems = vestItems _this;
_this addVest (selectRandomWeighted _randvest);
{_this addItemToVest _x} forEach _vestItems;


};