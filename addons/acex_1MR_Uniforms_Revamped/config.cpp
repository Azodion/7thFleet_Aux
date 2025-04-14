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
		class TKE_CombatUni_U_OP
		{
			label = "UCCU-50";
			author = "Frenchie";
			options[] = {"Camo","Top","Bottom","Sleeves"};
			class Camo
			{
				values[] = {"UCIABlack","UCIARed","UCIAGreen","UCIAWhite","UCIABlue","7thLunar","7thArid","7thWdl","7thWntr"};
				class UCIABlack
				{
					label = "UCIABlack";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCIARed
				{
					label = "UCIARed";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCIAWhite
				{
					label = "UCIAWhite";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCIAGreen
				{
					label = "UCIAGreen";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCIABlue
				{
					label = "UCIABlue";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 7thLunar
				{
					label = "7thLunar";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 7thArid
				{
					label = "7thArid";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 7thWdl
				{
					label = "7thWdl";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 7thWntr
				{
					label = "7thWntr";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
			class Top
			{
				values[] = {"Base","Stripe","XtraCamo"};
				class Base
				{
					label = "Base";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Stripe
				{
					label = "Stripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class XtraCamo
				{
					label = "XtraCamo";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
			class Bottom
			{
				values[] = {"Base","Stripe","XtraCamo"};
				class Base
				{
					label = "Base";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Stripe
				{
					label = "Stripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class XtraCamo
				{
					label = "XtraCamo";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
			class Sleeves
			{
				values[] = {"Full","RolledV1","RolledV2"};
				class Full
				{
					label = "Full";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class RolledV1
				{
					label = "RolledV1";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class RolledV2
				{
					label = "RolledV2";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
		};
	};
};
class CfgWeapons
{
	class TKE_CombatUni_U_OP_stock;
	class TKE_CombatUniLunarBB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Base";
			Bottom = "Base"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1LunarBB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Base";
			Bottom = "Base"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2LunarBB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Base";
			Bottom = "Base"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniLunarBC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Base";
			Bottom = "XtraCamo"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1LunarBC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Base";
			Bottom = "XtraCamo"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2LunarBC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Base";
			Bottom = "XtraCamo"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniLunarBS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Base";
			Bottom = "Stripe"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1LunarBS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Base";
			Bottom = "Stripe"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2LunarBS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Base";
			Bottom = "Stripe"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniLunarSS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Stripe";
			Bottom = "Stripe"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1LunarSS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Stripe";
			Bottom = "Stripe"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2LunarSS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Stripe";
			Bottom = "Stripe"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniLunarSC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Stripe";
			Bottom = "XtraCamo"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1LunarSC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Stripe";
			Bottom = "XtraCamo"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2LunarSC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Stripe";
			Bottom = "XtraCamo"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniLunarSB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Stripe";
			Bottom = "Base"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1LunarSB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Stripe";
			Bottom = "Base"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2LunarSB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "Stripe";
			Bottom = "Base"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniLunarCC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "XtraCamo";
			Bottom = "XtraCamo"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1LunarCC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "XtraCamo";
			Bottom = "XtraCamo"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2LunarCC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "XtraCamo";
			Bottom = "XtraCamo"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniLunarCS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "XtraCamo";
			Bottom = "Stripe"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1LunarCS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "XtraCamo";
			Bottom = "Stripe"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2LunarCS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "XtraCamo";
			Bottom = "Stripe"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniLunarCB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "XtraCamo";
			Bottom = "Base"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1LunarCB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "XtraCamo";
			Bottom = "Base"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2LunarCB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thLunar";
			Top= "XtraCamo";
			Bottom = "Base"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniAridBB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Base";
			Bottom = "Base"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1AridBB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Base";
			Bottom = "Base"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2AridBB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Base";
			Bottom = "Base"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniAridBC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Base";
			Bottom = "XtraCamo"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1AridBC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Base";
			Bottom = "XtraCamo"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2AridBC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Base";
			Bottom = "XtraCamo"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniAridBS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Base";
			Bottom = "Stripe"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1AridBS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Base";
			Bottom = "Stripe"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2AridBS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Base";
			Bottom = "Stripe"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniAridSS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Stripe";
			Bottom = "Stripe"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1AridSS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Stripe";
			Bottom = "Stripe"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2AridSS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Stripe";
			Bottom = "Stripe"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniAridSC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Stripe";
			Bottom = "XtraCamo"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1AridSC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Stripe";
			Bottom = "XtraCamo"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2AridSC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Stripe";
			Bottom = "XtraCamo"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniAridSB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Stripe";
			Bottom = "Base"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1AridSB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Stripe";
			Bottom = "Base"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2AridSB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "Stripe";
			Bottom = "Base"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniAridCC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "XtraCamo";
			Bottom = "XtraCamo"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1AridCC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "XtraCamo";
			Bottom = "XtraCamo"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2AridCC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "XtraCamo";
			Bottom = "XtraCamo"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniAridCS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "XtraCamo";
			Bottom = "Stripe"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1AridCS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "XtraCamo";
			Bottom = "Stripe"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2AridCS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "XtraCamo";
			Bottom = "Stripe"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniAridCB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "XtraCamo";
			Bottom = "Base"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1AridCB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "XtraCamo";
			Bottom = "Base"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2AridCB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thArid";
			Top= "XtraCamo";
			Bottom = "Base"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWoodlandBB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Base";
			Bottom = "Base"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WoodlandBB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Base";
			Bottom = "Base"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WoodlandBB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Base";
			Bottom = "Base"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWoodlandBC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Base";
			Bottom = "XtraCamo"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WoodlandBC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Base";
			Bottom = "XtraCamo"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WoodlandBC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Base";
			Bottom = "XtraCamo"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWoodlandBS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Base";
			Bottom = "Stripe"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WoodlandBS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Base";
			Bottom = "Stripe"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WoodlandBS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Base";
			Bottom = "Stripe"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWoodlandSS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Stripe";
			Bottom = "Stripe"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WoodlandSS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Stripe";
			Bottom = "Stripe"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WoodlandSS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Stripe";
			Bottom = "Stripe"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWoodlandSC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Stripe";
			Bottom = "XtraCamo"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WoodlandSC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Stripe";
			Bottom = "XtraCamo"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WoodlandSC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Stripe";
			Bottom = "XtraCamo"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWoodlandSB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Stripe";
			Bottom = "Base"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WoodlandSB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Stripe";
			Bottom = "Base"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WoodlandSB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "Stripe";
			Bottom = "Base"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWoodlandCC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "XtraCamo";
			Bottom = "XtraCamo"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WoodlandCC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "XtraCamo";
			Bottom = "XtraCamo"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WoodlandCC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "XtraCamo";
			Bottom = "XtraCamo"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWoodlandCS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "XtraCamo";
			Bottom = "Stripe"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WoodlandCS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "XtraCamo";
			Bottom = "Stripe"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WoodlandCS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "XtraCamo";
			Bottom = "Stripe"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWoodlandCB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "XtraCamo";
			Bottom = "Base"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WoodlandCB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "XtraCamo";
			Bottom = "Base"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WoodlandCB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWdl";
			Top= "XtraCamo";
			Bottom = "Base"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWinterBB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Base";
			Bottom = "Base"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WinterBB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Base";
			Bottom = "Base"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WinterBB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Base";
			Bottom = "Base"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWinterBC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Base";
			Bottom = "XtraCamo"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WinterBC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Base";
			Bottom = "XtraCamo"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WinterBC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Base";
			Bottom = "XtraCamo"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWinterBS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Base";
			Bottom = "Stripe"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WinterBS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Base";
			Bottom = "Stripe"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WinterBS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Base";
			Bottom = "Stripe"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWinterSS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Stripe";
			Bottom = "Stripe"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WinterSS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Stripe";
			Bottom = "Stripe"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WinterSS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Stripe";
			Bottom = "Stripe"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWinterSC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Stripe";
			Bottom = "XtraCamo"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WinterSC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Stripe";
			Bottom = "XtraCamo"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WinterSC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Stripe";
			Bottom = "XtraCamo"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWinterSB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Stripe";
			Bottom = "Base"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WinterSB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Stripe";
			Bottom = "Base"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WinterSB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "Stripe";
			Bottom = "Base"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWinterCC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "XtraCamo";
			Bottom = "XtraCamo"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WinterCC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "XtraCamo";
			Bottom = "XtraCamo"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WinterCC_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "XtraCamo";
			Bottom = "XtraCamo"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWinterCS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "XtraCamo";
			Bottom = "Stripe"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WinterCS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "XtraCamo";
			Bottom = "Stripe"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WinterCS_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "XtraCamo";
			Bottom = "Stripe"
			Sleeves = "RolledV2"
		};
	};
	class TKE_CombatUniWinterCB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "XtraCamo";
			Bottom = "Base"
			Sleeves = "Full"
		};
	};
	class TKE_CombatUniRolledV1WinterCB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "XtraCamo";
			Bottom = "Base"
			Sleeves = "RolledV1"
		};
	};
	class TKE_CombatUniRolledV2WinterCB_U_B: TKE_CombatUni_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_CombatUni_U_OP";
			camo = "7thWntr";
			Top= "XtraCamo";
			Bottom = "Base"
			Sleeves = "RolledV2"
		};
	};
};

