if (local _this) then {

removeGoggles _this;
removeHeadgear _this;

_randeyes = ["TKE_UCNFaceWear1",1,"TKE_UCNFaceWear2",1,"TKE_UCNFaceWear1GL",1];
_randheadgear = ["TKE_UCMCHelm_7thMEFWdl",1,"TKE_UCMCHelmClearClosed7thMEFWdl",1,"TKE_UCMCHelmClearMask_7thMEFWdl",1,"TKE_PatrolCapWdlB",0.1];
_randuniform = ["TKE_CombatUniWoodlandBB_U_B",1,"TKE_CombatUniWoodlandBC_U_B",1,"TKE_CombatUniWoodlandBS_U_B",1,"TKE_CombatUniWoodlandSS_U_B",1,"TKE_CombatUniWoodlandSC_U_B",1,"TKE_CombatUniWoodlandSB_U_B",1,"TKE_CombatUniWoodlandCC_U_B",1,"TKE_CombatUniWoodlandCS_U_B",1,"TKE_CombatUniWoodlandCB_U_B",1];
_randvest = ["TKE_UCMCArmour3_17thWdl",1,"TKE_UCMCArmour3_27thWdl",1,"TKE_UCMCArmour5_17thWdl",1,"TKE_UCMCArmour5_27thWdl",1,"TKE_UCMCArmour6_27thWdl",1,"TKE_UCMCArmour6_47thWdl",1]; 

_this addGoggles (selectRandomWeighted _randeyes);
_this addHeadgear (selectRandomWeighted _randheadgear);

_uniformItems = uniformItems _this;
_this addUniform (selectRandomWeighted _randuniform);
{_this addItemToUniform _x} forEach _uniformItems;

_vestItems = vestItems _this;
_this addVest (selectRandomWeighted _randvest);
{_this addItemToVest _x} forEach _vestItems;


};