#define _ARMA_

class CfgPatches
{
	class Frenchie_Modules_props
	{
		units[] = {"ER_JSF_Lander_01_On","ER_JCG_Lander_01_On","7FLT_Lander_01_On","ER_MDMCV2_Lander_01_On","ER_JSF_Lander_01_Off","ER_JCG_Lander_01_Off","7FLT_Lander_01_Off","ER_MDMCV2_Lander_01_Off"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"zen_common"};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgEditorSubcategories
{
	class TKE_Ships_JSF
	{
		displayName = "Jovians";
	};
	class TKE_Ships_UCN
	{
		displayName = "United Coalition of Nations";
	};
	class TKE_Ships_MDMC
	{
		displayName = "Martian Dominion Marine Corps";
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class MuzzleSlot_65;

class Extended_PostInit_EventHandlers
{
	class FM_7F_sqf_postInit
	{
		init = "call compile preprocessFileLineNumbers '\Frenchie_Modules\functions\fn_7FpodModules.sqf'";
	};
};

#if __has_include("\BBUS_ZENDropPod\config.cpp")
class cfgFunctions
{
	class BBUS_JM
	{
		class ZENDropPod_JM
		{
			file = "\Frenchie_Modules\functions";
			class podJMFunction {postInit = 1;};
		};
	};
};
#else
#endif

class CfgVehicles
{
	class Red_Civ_Lander_01_Off; 
	class ER_JSF_Lander_01_On: Red_Civ_Lander_01_Off
	{
		displayName = "M-HPL [JSF/On]";
		editorSubcategory = "TKE_Ships_JSF";
		hiddenSelections[] = {"Body","Thrusters"};
		hiddenSelectionsTextures[] = {"Frenchie_Modules\Textures\MHPL_JSF_ON_CO.paa","Frenchie_Modules\Textures\MHPL_JSF_ON_CO.paa"};
		hiddenSelectionsMaterials[] = {"","eminent_domain\data\MHPL_ON.rvmat"};
	};
	class ER_JCG_Lander_01_On: Red_Civ_Lander_01_Off
	{
		displayName = "M-HPL [JCG/On]";
		editorSubcategory = "TKE_Ships_JSF";
		hiddenSelections[] = {"Body","Thrusters"};
		hiddenSelectionsTextures[] = {"Frenchie_Modules\Textures\MHPL_JCG_ON_CO.paa","Frenchie_Modules\Textures\MHPL_JCG_ON_CO.paa"};
		hiddenSelectionsMaterials[] = {"","eminent_domain\data\MHPL_ON.rvmat"};
	};
	class 7FLT_Lander_01_On: Red_Civ_Lander_01_Off
	{
		displayName = "M-HPL [7th FLT/On]";
		editorSubcategory = "TKE_Ships_UCN";
		hiddenSelections[] = {"Body","Thrusters"};
		hiddenSelectionsTextures[] = {"Frenchie_Modules\Textures\MHPL_7FLT_ON_CO.paa","Frenchie_Modules\Textures\MHPL_7FLT_ON_CO.paa"};
		hiddenSelectionsMaterials[] = {"","eminent_domain\data\MHPL_ON.rvmat"};
	};
	class ER_MDMCV2_Lander_01_On: Red_Civ_Lander_01_Off
	{
		displayName = "M-HPL [MDMC/On]";
		editorSubcategory = "TKE_Ships_MDMC";
		hiddenSelections[] = {"Body","Thrusters"};
		hiddenSelectionsTextures[] = {"Frenchie_Modules\Textures\MHPL_MDMCV2_ON_CO.paa","Frenchie_Modules\Textures\MHPL_MDMCV2_ON_CO.paa"};
		hiddenSelectionsMaterials[] = {"","eminent_domain\data\MHPL_ON.rvmat"};
	};
	class ER_JSF_Lander_01_Off: Red_Civ_Lander_01_Off
	{
		displayName = "M-HPL [JSF/Off]";
		editorSubcategory = "TKE_Ships_JSF";
		hiddenSelections[] = {"Body","Thrusters"};
		hiddenSelectionsTextures[] = {"Frenchie_Modules\Textures\MHPL_JSF_OFF_CO.paa","Frenchie_Modules\Textures\MHPL_JSF_OFF_CO.paa"};
		hiddenSelectionsMaterials[] = {"","eminent_domain\data\MHPL_OFF.rvmat"};
	};
	class ER_JCG_Lander_01_Off: Red_Civ_Lander_01_Off
	{
		displayName = "M-HPL [JCG/Off]";
		editorSubcategory = "TKE_Ships_JSF";
		hiddenSelections[] = {"Body","Thrusters"};
		hiddenSelectionsTextures[] = {"Frenchie_Modules\Textures\MHPL_JCG_OFF_CO.paa","Frenchie_Modules\Textures\MHPL_JCG_OFF_CO.paa"};
		hiddenSelectionsMaterials[] = {"","eminent_domain\data\MHPL_OFF.rvmat"};
	};
	class 7FLT_Lander_01_Off: Red_Civ_Lander_01_Off
	{
		displayName = "M-HPL [7th FLT/Off]";
		editorSubcategory = "TKE_Ships_UCN";
		hiddenSelections[] = {"Body","Thrusters"};
		hiddenSelectionsTextures[] = {"Frenchie_Modules\Textures\MHPL_7FLT_OFF_CO.paa","Frenchie_Modules\Textures\MHPL_7FLT_OFF_CO.paa"};
		hiddenSelectionsMaterials[] = {"","eminent_domain\data\MHPL_OFF.rvmat"};
	};
	class ER_MDMCV2_Lander_01_Off: Red_Civ_Lander_01_Off
	{
		displayName = "M-HPL [MDMC/Off]";
		editorSubcategory = "TKE_Ships_MDMC";
		hiddenSelections[] = {"Body","Thrusters"};
		hiddenSelectionsTextures[] = {"Frenchie_Modules\Textures\MHPL_MDMCV2_OFF_CO.paa","Frenchie_Modules\Textures\MHPL_MDMCV2_OFF_CO.paa"};
		hiddenSelectionsMaterials[] = {"","eminent_domain\data\MHPL_OFF.rvmat"};
	};
};
