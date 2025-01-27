////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'Basicw' is Tue Oct 24 15:52:23 2023 : 'file' last modified on Mon Jan 31 18:54:46 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class acex_1MR_Uniforms
	{
		name = "acex_1MR_Uniforms";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.88;
		requiredAddons[] = {};
		author = "Frenchie";
		version = "0.4.0.0";
		versionStr = "0.4.0.0";
		versionAr[] = {0,4,0,0};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class U_B_ParadeUniform_01_US_decorated_F
		{
			label = "Dress Uniform";
			author = "Frenchie";
			options[] = {"Unit","Rank_Code"};
			class Unit
			{
				values[] = {"124thESB","1MR","Medic1MR","274thTS","7thMEF","Medic7thMEF","7thFleet"};
				class 124thESB
				{
					label = "124thESB";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 1MR
				{
					label = "1MR";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Medic1MR
				{
					label = "Medic1MR";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 274thTS
				{
					label = "274thTS";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 7thMEF
				{
					label = "7thMEF";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Medic7thMEF
				{
					label = "Medic7thMEF";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 7thFleet
				{
					label = "7thFleet";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
			class Rank_Code
			{
				values[] = {"OR1","OR2","OR3","SPC","OR4","OR5","OR6","OR7","OR8","OR9","W1","W2","W3","W4","W5","OF1","OF2","OF3","OF4","OF5","OF6","OF7","OF8","OF9"};
				class OR1
				{
					label = "OR1";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OR2
				{
					label = "OR2";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OR3
				{
					label = "OR3";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OR4
				{
					label = "OR4";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OR5
				{
					label = "OR5";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OR6
				{
					label = "OR6";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OR7
				{
					label = "OR7";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OR8
				{
					label = "OR8";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OR9
				{
					label = "OR9";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class W1
				{
					label = "W1";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class W2
				{
					label = "W2";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class W3
				{
					label = "W3";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class W4
				{
					label = "W4";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class W5
				{
					label = "W5";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OF1
				{
					label = "OF1";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OF2
				{
					label = "OF2";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OF3
				{
					label = "OF3";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OF4
				{
					label = "OF5";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OF6
				{
					label = "OF6";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OF7
				{
					label = "OF7";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OF8
				{
					label = "OF8";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class OF9
				{
					label = "OF9";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
		};
	};
};
class CfgWeapons
{
	class U_B_ParadeUniform_01_US_decorated_F_stock;
	class U_B_ParadeUniform_01_UCMRPVT_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "OR1";
		};
	};
	class U_B_ParadeUniform_01_UCMRPFC_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "OR2";
		};
	};
	class U_B_ParadeUniform_01_UCMRLCPL_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "OR3";
		};
	};
	class U_B_ParadeUniform_01_UCMRCPL_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "OR4";
		};
	};
	class U_B_ParadeUniform_01_UCMRHR_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic1MR";
			Rank_Code= "OR1";
		};
	};

	class U_B_ParadeUniform_01_UCMRHA_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic1MR";
			Rank_Code= "OR2";
		};
	};
	class U_B_ParadeUniform_01_UCMRHN_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic1MR";
			Rank_Code= "OR3";
		};
	};
	class U_B_ParadeUniform_01_UCMRHM1_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic1MR";
			Rank_Code= "OR6";
		};
	};
	class U_B_ParadeUniform_01_UCMRHM2_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic1MR";
			Rank_Code= "OR5";
		};
	};
	class U_B_ParadeUniform_01_UCMRHM3_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic1MR";
			Rank_Code= "OR4";
		};
	};
	class U_B_ParadeUniform_01_UCMRWO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "W1";
		};
	};
	class U_B_ParadeUniform_01_UCMRSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "OR5";
		};
	};
	class U_B_ParadeUniform_01_UCMRSSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "OR6";
		};
	};
	class U_B_ParadeUniform_01_UCMRGYSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "OR7";
		};
	};
	class U_B_ParadeUniform_01_UCMRMSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "OR8";
		};
	};
	class U_B_ParadeUniform_01_UCMR1SGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "OR9";
		};
	};
	class U_B_ParadeUniform_01_UCMR2LT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "OF1";
		};
	};
	class U_B_ParadeUniform_01_UCMR1LT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "OF2";
		};
	};
	class U_B_ParadeUniform_01_UCMRCW2_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "W2";
		};
	};
	class U_B_ParadeUniform_01_UCMRCW3_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "W3";
		};
	};
	class U_B_ParadeUniform_01_UCMRCW4_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "W4";
		};
	};
	class U_B_ParadeUniform_01_UCMRCW5_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "1MR";
			Rank_Code= "W5";
		};
	};
	class U_B_ParadeUniform_01_124PVT_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OR1";
		};
	};
	class U_B_ParadeUniform_01_124PFC_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OR2";
		};
	};
	class U_B_ParadeUniform_01_124LCPL_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OR3";
		};
	};
	class U_B_ParadeUniform_01_124SPC_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "SPC";
		};
	};
	class U_B_ParadeUniform_01_124CPL_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OR4";
		};
	};
	class U_B_ParadeUniform_01_124WO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "W1";
		};
	};
	class U_B_ParadeUniform_01_124SGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OR5";
		};
	};
	class U_B_ParadeUniform_01_124SSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OR6";
		};
	};
	class U_B_ParadeUniform_01_124SFC_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OR7";
		};
	};
	class U_B_ParadeUniform_01_124MSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OR8";
		};
	};
	class U_B_ParadeUniform_01_1241SGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OR9";
		};
	};
	class U_B_ParadeUniform_01_1242LT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OF1";
		};
	};
	class U_B_ParadeUniform_01_1241LT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OF2";
		};
	};
	class U_B_ParadeUniform_01_124CW2_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "W2";
		};
	};
	class U_B_ParadeUniform_01_124CW3_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "W3";
		};
	};
	class U_B_ParadeUniform_01_124CW4_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "W4";
		};
	};
	class U_B_ParadeUniform_01_124CW5_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "W5";
		};
	};
	class U_B_ParadeUniform_01_124CPT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OF3";
		};
	};
	class U_B_ParadeUniform_01_124MAJ_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OF4";
		};
	};
	class U_B_ParadeUniform_01_124LTC_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "124thESB";
			Rank_Code= "OF5";
		};
	};
	class U_B_ParadeUniform_01_274ENS_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OF1";
		};
	};
	class U_B_ParadeUniform_01_274LTJG_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OF2";
		};
	};
	class U_B_ParadeUniform_01_274LT_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OF3";
		};
	};
	class U_B_ParadeUniform_01_274LTCDR_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OF4";
		};
	};
	class U_B_ParadeUniform_01_274CDR_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OF5";
		};
	};
	class U_B_ParadeUniform_01_274CPT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OF6";
		};
	};
	class U_B_ParadeUniform_01_7MEFPVT_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "OR1";
		};
	};
	class U_B_ParadeUniform_01_7MEFPFC_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "OR2";
		};
	};
	class U_B_ParadeUniform_01_7MEFLCPL_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "OR3";
		};
	};
	class U_B_ParadeUniform_01_7MEFCPL_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "OR4";
		};
	};
	class U_B_ParadeUniform_01_7MEFHR_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic7thMEF";
			Rank_Code= "OR1";
		};
	};
	class U_B_ParadeUniform_01_7MEFHA_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic7thMEF";
			Rank_Code= "OR2";
		};
	};
	class U_B_ParadeUniform_01_7MEFHN_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic7thMEF";
			Rank_Code= "OR3";
		};
	};
	class U_B_ParadeUniform_01_7MEFHMCM_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic7thMEF";
			Rank_Code= "OR7";
		};
	};
	class U_B_ParadeUniform_01_7MEFHMCS_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic7thMEF";
			Rank_Code= "OR8";
		};
	};
	class U_B_ParadeUniform_01_7MEFHMC_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic7thMEF";
			Rank_Code= "OR9";
		};
	};
	class U_B_ParadeUniform_01_7MEFHM1_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic7thMEF";
			Rank_Code= "OR6";
		};
	};
	class U_B_ParadeUniform_01_7MEFHM2_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic7thMEF";
			Rank_Code= "OR5";
		};
	};
	class U_B_ParadeUniform_01_7MEFHM3_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "Medic7thMEF";
			Rank_Code= "OR4";
		};
	};
	class U_B_ParadeUniform_01_7MEFWO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "W1";
		};
	};
	class U_B_ParadeUniform_01_7MEFSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "OR5";
		};
	};
	class U_B_ParadeUniform_01_7MEFSSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "OR6";
		};
	};
	class U_B_ParadeUniform_01_7MEFGYSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "OR7";
		};
	};
	class U_B_ParadeUniform_01_7MEFMSGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "OR8";
		};
	};
	class U_B_ParadeUniform_01_7MEF1SGT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "OR9";
		};
	};
	
	class U_B_ParadeUniform_01_7MEF2LT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "OF1";
		};
	};
	class U_B_ParadeUniform_01_7MEF1LT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "OF2";
		};
	};
	class U_B_ParadeUniform_01_7MEFCPT_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "OF3";
		};
	};
	class U_B_ParadeUniform_01_7MEFCW2_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "W2";
		};
	};
	class U_B_ParadeUniform_01_7MEFCW3_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "W3";
		};
	};
	class U_B_ParadeUniform_01_7MEFCW4_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "W4";
		};
	};
	class U_B_ParadeUniform_01_7MEFCW5_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thMEF";
			Rank_Code= "W5";
		};
	};
	class U_B_ParadeUniform_01_7EFSR_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "OR1";
		};
	};
	class U_B_ParadeUniform_01_7EFSA_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "OR2";
		};
	};
	class U_B_ParadeUniform_01_7EFSN_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "OR3";
		};
	};
	class U_B_ParadeUniform_01_7EFMCPO_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "OR9";
		};
	};
	class U_B_ParadeUniform_01_7EFSCPO_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "OR8";
		};
	};
	class U_B_ParadeUniform_01_7EFCPO_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "OR7";
		};
	};
	class U_B_ParadeUniform_01_7EFPO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "OR6";
		};
	};
	class U_B_ParadeUniform_01_7EFPO2_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "OR5";
		};
	};
	class U_B_ParadeUniform_01_7EFPO3_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "OR4";
		};
	};
	class U_B_ParadeUniform_01_7EFWO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "W1";
		};
	};
	class U_B_ParadeUniform_01_7EFCW2_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "W2";
		};
	};
	class U_B_ParadeUniform_01_7EFCW3_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "W3";
		};
	};
	class U_B_ParadeUniform_01_7EFCW4_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "W4";
		};
	};
	class U_B_ParadeUniform_01_7EFCW5_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "7thFleet";
			Rank_Code= "W5";
		};
	};
	class U_B_ParadeUniform_01_274SR_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OR1";
		};
	};
	class U_B_ParadeUniform_01_274SA_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OR2";
		};
	};
	class U_B_ParadeUniform_01_274SN_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OR3";
		};
	};
	class U_B_ParadeUniform_01_274MCPO_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OR9";
		};
	};
	class U_B_ParadeUniform_01_274SCPO_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OR8";
		};
	};
	class U_B_ParadeUniform_01_274CPO_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OR7";
		};
	};
	class U_B_ParadeUniform_01_274PO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OR6";
		};
	};
	class U_B_ParadeUniform_01_274PO2_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OR5";
		};
	};
	class U_B_ParadeUniform_01_274PO3_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "OR4";
		};
	};
	class U_B_ParadeUniform_01_274WO1_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "W1";
		};
	};
	class U_B_ParadeUniform_01_274CW2_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "W2";
		};
	};
	class U_B_ParadeUniform_01_274CW3_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "W3";
		};
	};
	class U_B_ParadeUniform_01_274CW4_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "W4";
		};
	};
	class U_B_ParadeUniform_01_274CW5_decorated_F: U_B_ParadeUniform_01_US_decorated_F_stock
	{
		class XtdGearInfo
		{
			model = "U_B_ParadeUniform_01_US_decorated_F";
			Unit = "274thTS";
			Rank_Code= "W5";
		};
	};
};

