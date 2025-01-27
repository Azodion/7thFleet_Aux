////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 09 16:52:22 2023 : 'file' last modified on Tue Oct 18 19:53:08 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 1MR_Dress
	{
		units[] = {};
		vehicles[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	class 1MR
	{
		displayName = "1st Marine Raiders";
		author = "Frenchie";
		icon = "";
		priority = 2;
		side = 1;
	};
};
class CfgVehicles 
{
	class C_Uniform_ParadeUniform_01_base_F;
	class B_Uniform_ParadeUniform_01_UCMRPVT_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRPVT_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRPVT_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRPFC_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRPFC_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRPFC_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRLCPL_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRLCPL_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRLCPL_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRCPL_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRCPL_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRCPL_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRHR_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRHR_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRHR_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRHA_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRHA_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRHA_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRHN_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRHN_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRHN_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRHM1_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRHM1_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRHM1_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMRHM1_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRHM2_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRHM2_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRHM2_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMRHM2_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRHM3_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRHM3_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRHM3_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMRHM3_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRWO1_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRWO1_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRWO1_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMRWO1_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRSGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRSGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRSGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMRSGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRSSGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRSSGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRSSGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMRSSGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRGYSGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRGYSGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRGYSGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMRGYSGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRMSGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRMSGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRMSGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMRMSGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMR1SGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMR1SGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMR1SGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMR1SGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMR2LT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMR2LT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMR2LT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMR2LT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMR1LT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMR1LT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMR1LT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMR1LT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRCW2_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRCW2_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRCW2_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMRCW2_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRCW3_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRCW3_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRCW3_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMRCW3_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRCW4_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRCW4_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRCW4_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMRCW4_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_UCMRCW5_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_UCMRCW5_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_UCMRCW5_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_UCMRCW5_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124PVT_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124PVT_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124PVT_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124PFC_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124PFC_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124PFC_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124LCPL_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124LCPL_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124LCPL_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124SPC_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124SPC_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124SPC_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124CPL_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124CPL_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124CPL_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124WO1_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124WO1_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124WO1_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_124WO1_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124SGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124SGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124SGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_124SGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124SSGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124SSGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124SSGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_124SSGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124SFC_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124SFC_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124SFC_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_124SFC_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124MSGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124MSGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124MSGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_124MSGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_1241SGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_1241SGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_1241SGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_1241SGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_1242LT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_1242LT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_1242LT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_1242LT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_1241LT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_1241LT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_1241LT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_1241LT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124CW2_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124CW2_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124CW2_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_124CW2_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124CW3_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124CW3_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124CW3_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_124CW3_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124CW4_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124CW4_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124CW4_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_124CW4_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124CW5_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124CW5_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124CW5_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_124CW5_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124CPT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124CPT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124CPT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_124CPT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124MAJ_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124CW5_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124MAJ_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_124MAJ_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_124LTC_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_124LTC_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_124LTC_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_124LTC_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274ENS_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274ENS_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274ENS_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274ENS_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274LTJG_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274LTJG_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274LTJG_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274LTJG_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274LT_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274LT_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274LT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274LT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274LTCDR_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274LTCDR_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274LTCDR_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274LTCDR_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274CDR_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274CDR_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274CDR_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274CDR_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274CPT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274CPT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274CPT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274CPT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class C_Uniform_FormalSuit_01_black_F;
	class B_Uniform_FormalSuit_01_Anvil_F: C_Uniform_FormalSuit_01_black_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_C_FormalSuit_01_Anvil_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\FormalSuit_01_Anvil_CO.paa"};
	};
	class B_Uniform_FormalSuit_01_UCIA_F: C_Uniform_FormalSuit_01_black_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_C_FormalSuit_01_UCIA_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\FormalSuit_01_UCIA_CO.paa"};
	};
	class B_Uniform_ParadeUniform_01_7MEFPVT_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFPVT_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFPVT_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFPFC_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFPFC_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFPFC_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFLCPL_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFLCPL_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFLCPL_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFCPL_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFCPL_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFCPL_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFHR_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFHR_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFHR_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFHA_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFHA_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFHA_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFHN_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFHN_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFHN_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFHMCM_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFHMCM_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFHMCM_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFHMCM_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFHMCS_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFHMCS_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFHMCS_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFHMCS_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFHMC_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFHMC_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFHMC_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFHMC_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFHM1_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFHM1_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFHM1_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFHM1_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFHM2_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFHM2_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFHM2_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFHM2_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFHM3_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFHM3_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFHM3_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFHM3_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFWO1_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFWO1_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFWO1_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFWO1_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFSGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFSGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFSGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFSGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFSSGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFSSGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFSSGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFSSGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFGYSGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFGYSGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFGYSGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFGYSGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFMSGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFMSGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFMSGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFMSGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEF1SGT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEF1SGT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEF1SGT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEF1SGT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEF2LT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEF2LT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEF2LT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEF2LT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEF1LT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEF1LT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEF1LT_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEF1LT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFCPT_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFCPT_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFCPTCO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFCPT_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFCW2_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFCW2_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFCOW2_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFCOW2_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFCW3_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFCW3_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFCOW3_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFCOW3_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFCW4_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFCW4_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFCOW4_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFCOW4_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7MEFCW5_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7MEFCW5_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7MEFCOW5_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7MEFCOW5_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};

	class B_Uniform_ParadeUniform_01_7EFSR_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFSR_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFSR_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFSA_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFSA_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFSA_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFSN_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFSN_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFSN_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFMCPO_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFMCPO_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFMCPO_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7EFMCPO_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFSCPO_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFSCPO_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFSCPO_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7EFSCPO_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFCPO_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFCPO_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFCPO_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7EFCPO_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFPO1_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFPO1_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFPO1_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7EFPO1_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFPO2_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFPO2_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFPO2_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7EFPO2_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFPO3_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFPO3_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFPO3_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7EFPO3_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFWO1_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFWO1_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFWO1_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7EFWO1_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFCW2_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFCW2_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFCOW2_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7EFCOW2_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFCW3_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFCW3_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFCOW3_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7EFCOW3_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFCW4_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFCW4_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFCOW4_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7EFCOW4_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_7EFCW5_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_7EFCW5_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_7EFCOW5_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_7EFCOW5_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	
	class B_Uniform_ParadeUniform_01_274SR_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274SR_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274SR_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274SA_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274SA_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274SA_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274SN_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274SN_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274SN_CO.paa","","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274MCPO_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274MCPO_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274MCPO_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274MCPO_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274SCPO_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274SCPO_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274SCPO_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274SCPO_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274CPO_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274CPO_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274CPO_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274CPO_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274PO1_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274PO1_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274PO1_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274PO1_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274PO2_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274PO2_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274PO2_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274PO2_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274PO3_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274PO3_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274PO3_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274PO3_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274WO1_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274WO1_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274WO1_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274WO1_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274CW2_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274CW2_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274COW2_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274COW2_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274CW3_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274CW3_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274COW3_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274COW3_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274CW4_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274CW4_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274COW4_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274COW4_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	class B_Uniform_ParadeUniform_01_274CW5_decorated_F: C_Uniform_ParadeUniform_01_base_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_B_ParadeUniform_01_274CW5_decorated_F";
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\ParadeUniform_01_274COW5_CO.paa","\1MR_Dress\Textures\ParadeUniform_01_274COW5_CO.paa","a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_CSAT_CO.paa",""};
		hiddenSelectionsMaterials[] = {"","","a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_CSAT.rvmat"};
	};
	
};
class cfgWeapons
{
	class U_B_ParadeUniform_01_US_decorated_F;
	class Uniform_Base;
	class ItemInfo;
	class UniformItem;
	class U_B_ParadeUniform_01_UCMRPVT_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-PVT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRPVT_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRPFC_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-PFC";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRPFC_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRLCPL_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-LCPL";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRLCPL_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRCPL_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-CPL";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRCPL_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRHR_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-HR";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRHR_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRHA_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-HA";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRHA_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRHN_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-HN";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRHN_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRHM1_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-HM1";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRHM1_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRHM2_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-HM2";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRHM2_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRHM3_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-HM3";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRHM3_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRWO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-WO1";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRWO1_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-SGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRSGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRSSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-SSGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRSSGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRGYSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-GYSGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRGYSGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRMSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-MSGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRMSGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMR1SGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-1SGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMR1SGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMR2LT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-2LT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMR2LT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMR1LT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-1LT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMR1LT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRCW2_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-CW2";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRCW2_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRCW3_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-CW3";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRCW3_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRCW4_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-CW4";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRCW4_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_UCMRCW5_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		displayName = "[1st Marine Raider] Dress Uniform-CW5";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_UCMRCW5_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124PVT_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-PVT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124PVT_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124PFC_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-PFC";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124PFC_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124LCPL_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-LCPL";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124LCPL_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124SPC_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-SPC";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124SPC_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124CPL_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-CPL";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124CPL_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124WO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-WO1";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124WO1_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124SGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-SGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124SGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124SSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-SSGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124SSGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124SFC_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-SFC";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124SFC_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124MSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-MSGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124MSGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_1241SGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-1SGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_1241SGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_1242LT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-2LT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_1242LT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_1241LT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-1LT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_1241LT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124CW2_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-CW2";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124CW2_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124CW3_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-CW3";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124CW3_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124CW4_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-CW4";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124CW4_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124CW5_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-CW5";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124CW5_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124CPT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-CPT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124CPT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124MAJ_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-MAJ";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124MAJ_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_124LTC_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		displayName = "[124th ESB] Dress Uniform-LTC";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_124LTC_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274ENS_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-ENS";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274ENS_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274LTJG_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-LTJG";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274LTJG_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274LT_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-LT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274LT_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274LTCDR_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-LTCDR";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274LTCDR_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274CDR_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-CDR";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274CDR_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274CPT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-CPT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274CPT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_C_FormalSuit_01_black_F;
	class U_C_FormalSuit_01_Anvil_F: U_C_FormalSuit_01_black_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "[Anvil] Formal Suit";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\FormalSuit_01_Anvil_CO.paa"};
		DLC = "Enoch";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_FormalSuit_01_Anvil_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_C_FormalSuit_01_UCIA_F: U_C_FormalSuit_01_black_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "[UCIA] Formal Suit";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Dress\Textures\FormalSuit_01_UCIA_CO.paa"};
		DLC = "Enoch";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_FormalSuit_01_UCIA_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFPVT_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-PVT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFPVT_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFPFC_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-PFC";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFPFC_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFLCPL_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-LCPL";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFLCPL_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFCPL_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-CPL";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFCPL_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFHR_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-HR";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFHR_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFHA_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-HA";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFHA_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFHN_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-HN";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFHN_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFHMCM_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-HMCM";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFHMCM_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFHMCS_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-HMCS";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFHMCS_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFHMC_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-HMC";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFHMC_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFHM1_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-HM1";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFHM1_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFHM2_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-HM2";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFHM2_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFHM3_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-HM3";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFHM3_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFWO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-WO1";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFWO1_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-SGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFSGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFSSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-SSGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFSSGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFGYSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-GYSGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFGYSGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFMSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-MSGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFMSGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEF1SGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-1SGT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEF1SGT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEF2LT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-2LT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEF2LT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEF1LT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-1LT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEF1LT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFCPT_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-CPT";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFCPT_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFCW2_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-CW2";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFCW2_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFCW3_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-CW3";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFCW3_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFCW4_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-CW4";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFCW4_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7MEFCW5_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		displayName = "[7th MEF] Dress Uniform-CW5";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7MEFCW5_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
class U_B_ParadeUniform_01_7EFSR_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-SR";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFSR_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7EFSA_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-SA";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFSA_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7EFSN_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-SN";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFSN_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7EFMCPO_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-MCPO";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFMCPO_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7EFSCPO_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-SCPO";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFSCPO_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7EFCPO_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-CPO";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFCPO_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7EFPO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-PO1";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFPO1_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7EFPO2_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-PO2";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFPO2_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7EFPO3_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-PO3";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFPO3_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	
	class U_B_ParadeUniform_01_7EFWO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-WO1";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFWO1_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7EFCW2_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-CW2";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFCW2_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7EFCW3_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-CW3";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFCW3_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7EFCW4_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-CW4";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFCW4_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_7EFCW5_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		displayName = "[7th Fleet] Dress Uniform-CW5";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_7EFCW5_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	
	class U_B_ParadeUniform_01_274SR_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-SR";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274SR_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274SA_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-SA";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274SA_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274SN_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-SN";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274SN_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274MCPO_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-MCPO";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274MCPO_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274SCPO_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-SCPO";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274SCPO_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274CPO_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-CPO";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274CPO_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274PO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-PO1";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274PO1_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274PO2_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-PO2";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274PO2_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274PO3_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-PO3";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274PO3_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	
	class U_B_ParadeUniform_01_274WO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-WO1";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274WO1_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274CW2_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-CW2";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274CW2_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274CW3_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-CW3";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274CW3_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274CW4_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-CW4";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274CW4_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class U_B_ParadeUniform_01_274CW5_decorated_F: U_B_ParadeUniform_01_US_decorated_F
	{
		author = "Frenchie";
		scope = 2;
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		displayName = "[274th TS] Dress Uniform-CW5";
		DLC = "1MR_Dress";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Uniform_ParadeUniform_01_274CW5_decorated_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	
};
class cfgMods
{
	author = "Frenchie";
	timepacked = "1664995700";
};
