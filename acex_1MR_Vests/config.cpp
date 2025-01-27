////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Oct 24 15:52:23 2023 : 'file' last modified on Mon Jan 31 18:54:46 2022
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
		class Vest_Camo_Base
		{
			label = "7th Fleet Armour";
			author = "Frenchie";
			options[] = {"Camo","Armour"};
			class camo
			{
				values[] = {"274thTS","33rdCAW","21stMAW","1stMarRdr","7thFltMar","7FLT","124Blk","124Grn","124Wht","SOGBlk","SOGGrn","SOGWht","UCIABlack","UCIAWhite","UCIAGreen","UCIARed","UCIABlue"};
				class 33rdCAW
				{
					label = "33rdCAW";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 21stMAW
				{
					label = "21stMAW";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 1stMarRdr
				{
					label = "1stMarRdr";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 7thFltMar
				{
					label = "7thMEF";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 7FLT
				{
					label = "7thFleet";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 124Grn
				{
					label = "124Grn";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 124Wht
				{
					label = "124Wht";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 124Blk
				{
					label = "124Blk";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class SOGGrn
				{
					label = "SOGGrn";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class SOGWht
				{
					label = "SOGWht";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class SOGBlk
				{
					label = "SOGBlk";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCIABlack
				{
					label = "UCIABlack";
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
				class UCIARed
				{
					label = "UCIARed";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCIABlue
				{
					label = "UCIABlue";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
			class Armour
			{
				values[] = {"FCFHvy","FCFLite","FCFNP","KMC","UCN1","UCN2","UCN3","UCN4","UCN5","UCN6","UCN7","UCN8","UCN9","UCN10","UCN11","UCN12","UCNStandard"};
				class FCFHvy
				{
					label = "FCFHvy";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class FCFLite
				{
					label = "FCFLite";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class FCFNP
				{
					label = "FCFNP";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class KMC
				{
					label = "KMC";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class UCN1
				{
					label = "UCN1";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class UCN2
				{
					label = "UCN2";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCN3
				{
					label = "UCN3";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                 class UCN4
				{
					label = "UCN4";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCN5
				{
					label = "UCN5";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                 class UCN6
				{
					label = "UCN6";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCN7
				{
					label = "UCN7";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                 class UCN8
				{
					label = "UCN8";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCN9
				{
					label = "UCN9";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                 class UCN10
				{
					label = "UCN10";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCN11
				{
					label = "UCN11";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                 class UCN12
				{
					label = "UCN12";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCNStandard
				{
					label = "UCNStandard";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
		};
	};
};
class CfgWeapons
{
	class Vest_Camo_Base_stock;
	class TKE_UCMCArmour133rd: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "33rdCAW";
			Armour= "UCNStandard";
		};
	};
	class TKE_UCMCArmour121st: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "21stMAW";
			Armour= "UCNStandard";
		};
	};
	class TKE_UCIALArmourNP: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "FCFNP";
		};
	};
    class TKE_UCIAHArmour: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "FCFHvy";
		};
	};
    class TKE_UCIALArmour: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "FCFLite";
		};
	};
    class TKE_UCMCArmour1UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCNStandard";
		};
	};
    class TKE_UCMCArmour2_1UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCN1";
		};
	};
    class TKE_UCMCArmour2_2UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCN2";
		};
	};
    class TKE_UCMCArmour3_1UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCN3";
		};
	};
    class TKE_UCMCArmour3_2UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCN4";
		};
	};
    class TKE_UCMCArmour4_1UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCN5";
		};
	};
   class TKE_UCMCArmour4_2UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCN6";
		};
	};
   class TKE_UCMCArmour5_1UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCN7";
		};
	};
    class TKE_UCMCArmour5_2UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCN8";
		};
	};
  class TKE_UCMCArmour6_1UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCN9";
		};
	};
   class TKE_UCMCArmour6_2UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCN10";
		};
	};
    class TKE_UCMCArmour6_3UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCN11";
		};
	};
   class TKE_UCMCArmour6_4UCIA: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "UCIABlack";
			Armour= "UCN12";
		};
	};
	
	class TKE_UCIALArmourNPGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "FCFNP";
        };
    };
    class TKE_UCIAHArmourGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "FCFHvy";
        };
    };
    class TKE_UCIALArmourGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "FCFLite";
        };
    };
    class TKE_UCMCArmour1UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCNStandard";
        };
    };
    class TKE_UCMCArmour2_1UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCN1";
        };
    };
    class TKE_UCMCArmour2_2UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCN2";
        };
    };
    class TKE_UCMCArmour3_1UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCN3";
        };
    };
    class TKE_UCMCArmour3_2UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCN4";
        };
    };
    class TKE_UCMCArmour4_1UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCN5";
        };
    };
   class TKE_UCMCArmour4_2UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCN6";
        };
    };
   class TKE_UCMCArmour5_1UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCN7";
        };
    };
    class TKE_UCMCArmour5_2UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCN8";
        };
    };
  class TKE_UCMCArmour6_1UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCN9";
        };
    };
   class TKE_UCMCArmour6_2UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCN10";
        };
    };
    class TKE_UCMCArmour6_3UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCN11";
        };
    };
   class TKE_UCMCArmour6_4UCIAGreen: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAGreen";
            Armour= "UCN12";
        };
    };
   
class TKE_UCIALArmourNPRed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "FCFNP";
        };
    };
    class TKE_UCIAHArmourRed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "FCFHvy";
        };
    };
    class TKE_UCIALArmourRed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "FCFLite";
        };
    };
    class TKE_UCMCArmour1UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCNStandard";
        };
    };
    class TKE_UCMCArmour2_1UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCN1";
        };
    };
    class TKE_UCMCArmour2_2UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCN2";
        };
    };
    class TKE_UCMCArmour3_1UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCN3";
        };
    };
    class TKE_UCMCArmour3_2UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCN4";
        };
    };
    class TKE_UCMCArmour4_1UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCN5";
        };
    };
   class TKE_UCMCArmour4_2UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCN6";
        };
    };
   class TKE_UCMCArmour5_1UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCN7";
        };
    };
    class TKE_UCMCArmour5_2UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCN8";
        };
    };
  class TKE_UCMCArmour6_1UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCN9";
        };
    };
   class TKE_UCMCArmour6_2UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCN10";
        };
    };
    class TKE_UCMCArmour6_3UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCN11";
        };
    };
   class TKE_UCMCArmour6_4UCIARed: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIARed";
            Armour= "UCN12";
        };
    };
   
class TKE_UCIALArmourNPBlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "FCFNP";
        };
    };
    class TKE_UCIAHArmourBlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "FCFHvy";
        };
    };
    class TKE_UCIALArmourBlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "FCFLite";
        };
    };
    class TKE_UCMCArmour1UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCNStandard";
        };
    };
    class TKE_UCMCArmour2_1UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCN1";
        };
    };
    class TKE_UCMCArmour2_2UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCN2";
        };
    };
    class TKE_UCMCArmour3_1UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCN3";
        };
    };
    class TKE_UCMCArmour3_2UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCN4";
        };
    };
    class TKE_UCMCArmour4_1UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCN5";
        };
    };
   class TKE_UCMCArmour4_2UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCN6";
        };
    };
   class TKE_UCMCArmour5_1UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCN7";
        };
    };
    class TKE_UCMCArmour5_2UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCN8";
        };
    };
  class TKE_UCMCArmour6_1UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCN9";
        };
    };
   class TKE_UCMCArmour6_2UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCN10";
        };
    };
    class TKE_UCMCArmour6_3UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCN11";
        };
    };
   class TKE_UCMCArmour6_4UCIABlue: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIABlue";
            Armour= "UCN12";
        };
    };
   class TKE_UCIALArmourNPWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "FCFNP";
        };
    };
    class TKE_UCIAHArmourWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "FCFHvy";
        };
    };
    class TKE_UCIALArmourWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "FCFLite";
        };
    };
    class TKE_UCMCArmour1UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCNStandard";
        };
    };
    class TKE_UCMCArmour2_1UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCN1";
        };
    };
    class TKE_UCMCArmour2_2UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCN2";
        };
    };
    class TKE_UCMCArmour3_1UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCN3";
        };
    };
    class TKE_UCMCArmour3_2UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCN4";
        };
    };
    class TKE_UCMCArmour4_1UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCN5";
        };
    };
   class TKE_UCMCArmour4_2UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCN6";
        };
    };
   class TKE_UCMCArmour5_1UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCN7";
        };
    };
    class TKE_UCMCArmour5_2UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCN8";
        };
    };
  class TKE_UCMCArmour6_1UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCN9";
        };
    };
   class TKE_UCMCArmour6_2UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCN10";
        };
    };
    class TKE_UCMCArmour6_3UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCN11";
        };
    };
   class TKE_UCMCArmour6_4UCIAWhite: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "UCIAWhite";
            Armour= "UCN12";
        };
    };

    class TKE_UCMCArmour11MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCNStandard";
		};
	};
    class TKE_UCMCArmour2_11MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCN1";
		};
	};
    class TKE_UCMCArmour2_21MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCN2";
		};
	};
    class TKE_UCMCArmour3_11MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCN3";
		};
	};
    class TKE_UCMCArmour3_21MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCN4";
		};
	};
    class TKE_UCMCArmour4_11MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCN5";
		};
	};
   class TKE_UCMCArmour4_21MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCN6";
		};
	};
   class TKE_UCMCArmour5_11MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCN7";
		};
	};
    class TKE_UCMCArmour5_21MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCN8";
		};
	};
  class TKE_UCMCArmour6_11MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCN9";
		};
	};
   class TKE_UCMCArmour6_21MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCN10";
		};
	};
    class TKE_UCMCArmour6_31MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCN11";
		};
	};
   class TKE_UCMCArmour6_41MR: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "1stMarRdr";
			Armour= "UCN12";
		};
	};



    class TKE_UCMCArmour17th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCNStandard";
		};
	};
    class TKE_UCMCArmour2_17th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCN1";
		};
	};
    class TKE_UCMCArmour2_27th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCN2";
		};
	};
    class TKE_UCMCArmour3_17th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCN3";
		};
	};
    class TKE_UCMCArmour3_27th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCN4";
		};
	};
    class TKE_UCMCArmour4_17th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCN5";
		};
	};
   class TKE_UCMCArmour4_27th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCN6";
		};
	};
   class TKE_UCMCArmour5_17th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCN7";
		};
	};
    class TKE_UCMCArmour5_27th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCN8";
		};
	};
  class TKE_UCMCArmour6_17th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCN9";
		};
	};
   class TKE_UCMCArmour6_27th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCN10";
		};
	};
    class TKE_UCMCArmour6_37th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCN11";
		};
	};
   class TKE_UCMCArmour6_47th: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7thFltMar";
			Armour= "UCN12";
		};
	};
    class TKE_UCMCArmour2_233rd: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "33rdCAW";
			Armour= "UCN2";
		};
	};
    class TKE_UCMCArmour3_133rd: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "33rdCAW";
			Armour= "UCN3";
		};
	};
    class TKE_UCMCArmour4_233rd: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "33rdCAW";
			Armour= "UCN6";
		};
	};
    class TKE_UCMCArmour5_233rd: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "33rdCAW";
			Armour= "UCN8";
		};
	};
    class TKE_UCMCArmour1Victus: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "274thTS";
			Armour= "UCNStandard";
		};
	};
    class TKE_UCMCArmour2_2Victus: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "274thTS";
			Armour= "UCN2";
		};
	};
    class TKE_UCMCArmour3_1Victus: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "274thTS";
			Armour= "UCN3";
		};
	};
    class TKE_UCMCArmour4_2Victus: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "274thTS";
			Armour= "UCN6";
		};
	};
    class TKE_UCMCArmour5_2Victus: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "274thTS";
			Armour= "UCN8";
		};
	};
    class TKE_UCMCArmour2_221st: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "21stMAW";
			Armour= "UCN2";
		};
	};
    class TKE_UCMCArmour3_121st: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "21stMAW";
			Armour= "UCN3";
		};
	};
    class TKE_UCMCArmour4_221st: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "21stMAW";
			Armour= "UCN6";
		};
	};
    class TKE_UCMCArmour5_221st: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "21stMAW";
			Armour= "UCN8";
		};
	};
    class TKE_7thFltLArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "7FLT";
            Armour= "FCFLite";
        };
    };
    class TKE_UCMCArmour17FLT: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7FLT";
			Armour= "UCNStandard";
		};
	};
    class TKE_UCMCArmour2_27FLT: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7FLT";
			Armour= "UCN2";
		};
	};
    class TKE_UCMCArmour3_17FLT: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7FLT";
			Armour= "UCN3";
		};
	};
    class TKE_UCMCArmour4_27FLT: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7FLT";
			Armour= "UCN6";
		};
	};
    class TKE_UCMCArmour5_27FLT: Vest_Camo_Base_stock
	{
		class XtdGearInfo
		{
			model = "Vest_Camo_Base";
			camo = "7FLT";
			Armour= "UCN8";
		};
	};
    class TKE_124BLArmourNP: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "FCFNP";
        };
    };
    class TKE_124BHArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "FCFHvy";
        };
    };
    class TKE_124BLArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "FCFLite";
        };
    };
    class TKE_UCMCArmour1124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCNStandard";
        };
    };
    class TKE_UCMCArmour2_1124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCN1";
        };
    };
    class TKE_UCMCArmour2_2124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCN2";
        };
    };
    class TKE_UCMCArmour3_1124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCN3";
        };
    };
    class TKE_UCMCArmour3_2124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCN4";
        };
    };
    class TKE_UCMCArmour4_1124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCN5";
        };
    };
   class TKE_UCMCArmour4_2124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCN6";
        };
    };
   class TKE_UCMCArmour5_1124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCN7";
        };
    };
    class TKE_UCMCArmour5_2124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCN8";
        };
    };
  class TKE_UCMCArmour6_1124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCN9";
        };
    };
   class TKE_UCMCArmour6_2124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCN10";
        };
    };
    class TKE_UCMCArmour6_3124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCN11";
        };
    };
   class TKE_UCMCArmour6_4124B: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Blk";
            Armour= "UCN12";
        };
    };
    class TKE_124GLArmourNP: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "FCFNP";
        };
    };
    class TKE_124GHArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "FCFHvy";
        };
    };
    class TKE_124GLArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "FCFLite";
        };
    };
    class TKE_UCMCArmour1124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCNStandard";
        };
    };
    class TKE_UCMCArmour2_1124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCN1";
        };
    };
    class TKE_UCMCArmour2_2124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCN2";
        };
    };
    class TKE_UCMCArmour3_1124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCN3";
        };
    };
    class TKE_UCMCArmour3_2124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCN4";
        };
    };
    class TKE_UCMCArmour4_1124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCN5";
        };
    };
   class TKE_UCMCArmour4_2124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCN6";
        };
    };
   class TKE_UCMCArmour5_1124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCN7";
        };
    };
    class TKE_UCMCArmour5_2124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCN8";
        };
    };
  class TKE_UCMCArmour6_1124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCN9";
        };
    };
   class TKE_UCMCArmour6_2124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCN10";
        };
    };
    class TKE_UCMCArmour6_3124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCN11";
        };
    };
   class TKE_UCMCArmour6_4124G: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Grn";
            Armour= "UCN12";
        };
    };
class TKE_124WLArmourNP: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "FCFNP";
        };
    };
    class TKE_124WHArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "FCFHvy";
        };
    };
    class TKE_124WLArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "FCFLite";
        };
    };
    class TKE_UCMCArmour1124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCNStandard";
        };
    };
    class TKE_UCMCArmour2_1124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCN1";
        };
    };
    class TKE_UCMCArmour2_2124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCN2";
        };
    };
    class TKE_UCMCArmour3_1124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCN3";
        };
    };
    class TKE_UCMCArmour3_2124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCN4";
        };
    };
    class TKE_UCMCArmour4_1124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCN5";
        };
    };
   class TKE_UCMCArmour4_2124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCN6";
        };
    };
   class TKE_UCMCArmour5_1124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCN7";
        };
    };
    class TKE_UCMCArmour5_2124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCN8";
        };
    };
  class TKE_UCMCArmour6_1124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCN9";
        };
    };
   class TKE_UCMCArmour6_2124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCN10";
        };
    };
    class TKE_UCMCArmour6_3124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCN11";
        };
    };
   class TKE_UCMCArmour6_4124W: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "124Wht";
            Armour= "UCN12";
        };
    };
class TKE_AnvilGLArmourNP: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "FCFNP";
        };
    };
    class TKE_AnvilGHArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "FCFHvy";
        };
    };
    class TKE_AnvilGLArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "FCFLite";
        };
    };
    class TKE_UCMCArmour1AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCNStandard";
        };
    };
    class TKE_UCMCArmour2_1AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCN1";
        };
    };
    class TKE_UCMCArmour2_2AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCN2";
        };
    };
    class TKE_UCMCArmour3_1AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCN3";
        };
    };
    class TKE_UCMCArmour3_2AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCN4";
        };
    };
    class TKE_UCMCArmour4_1AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCN5";
        };
    };
   class TKE_UCMCArmour4_2AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCN6";
        };
    };
   class TKE_UCMCArmour5_1AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCN7";
        };
    };
    class TKE_UCMCArmour5_2AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCN8";
        };
    };
  class TKE_UCMCArmour6_1AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCN9";
        };
    };
   class TKE_UCMCArmour6_2AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCN10";
        };
    };
    class TKE_UCMCArmour6_3AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCN11";
        };
    };
   class TKE_UCMCArmour6_4AnvilG: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGGrn";
            Armour= "UCN12";
        };
    };
class TKE_AnvilWLArmourNP: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "FCFNP";
        };
    };
    class TKE_AnvilWHArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "FCFHvy";
        };
    };
    class TKE_AnvilWLArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "FCFLite";
        };
    };
    class TKE_UCMCArmour1AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCNStandard";
        };
    };
    class TKE_UCMCArmour2_1AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCN1";
        };
    };
    class TKE_UCMCArmour2_2AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCN2";
        };
    };
    class TKE_UCMCArmour3_1AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCN3";
        };
    };
    class TKE_UCMCArmour3_2AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCN4";
        };
    };
    class TKE_UCMCArmour4_1AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCN5";
        };
    };
   class TKE_UCMCArmour4_2AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCN6";
        };
    };
   class TKE_UCMCArmour5_1AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCN7";
        };
    };
    class TKE_UCMCArmour5_2AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCN8";
        };
    };
  class TKE_UCMCArmour6_1AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCN9";
        };
    };
   class TKE_UCMCArmour6_2AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCN10";
        };
    };
    class TKE_UCMCArmour6_3AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCN11";
        };
    };
   class TKE_UCMCArmour6_4AnvilW: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGWht";
            Armour= "UCN12";
        };
    };
    class TKE_AnvilBLArmourNP: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "FCFNP";
        };
    };
    class TKE_AnvilBHArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "FCFHvy";
        };
    };
    class TKE_AnvilBLArmour: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "FCFLite";
        };
    };
    class TKE_UCMCArmour1AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCNStandard";
        };
    };
    class TKE_UCMCArmour2_1AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCN1";
        };
    };
    class TKE_UCMCArmour2_2AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCN2";
        };
    };
    class TKE_UCMCArmour3_1AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCN3";
        };
    };
    class TKE_UCMCArmour3_2AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCN4";
        };
    };
    class TKE_UCMCArmour4_1AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCN5";
        };
    };
   class TKE_UCMCArmour4_2AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCN6";
        };
    };
   class TKE_UCMCArmour5_1AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCN7";
        };
    };
    class TKE_UCMCArmour5_2AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCN8";
        };
    };
  class TKE_UCMCArmour6_1AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCN9";
        };
    };
   class TKE_UCMCArmour6_2AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCN10";
        };
    };
    class TKE_UCMCArmour6_3AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCN11";
        };
    };
   class TKE_UCMCArmour6_4AnvilB: Vest_Camo_Base_stock
    {
        class XtdGearInfo
        {
            model = "Vest_Camo_Base";
            camo = "SOGBlk";
            Armour= "UCN12";
        };
    };
};

