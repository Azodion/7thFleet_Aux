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
		class U_TKE_Uniform_base
		{
			label = "Uniform";
			author = "Frenchie";
			options[] = {"Camo","Sleeves"};
			class camo
			{
				values[] = {"Raider","UCIARaider","BlackHex","WhiteHex","BlueHex","GreenHex","RedHex","BlackStripe","WhiteStripe","BlueStripe","GreenStripe","RedStripe","Mar","MarType13","MarCamo","MarStripe","124GStripe","124WStripe","124BStripe"};
				class Raider
				{
					label = "Raider";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCIARaider
				{
					label = "UCIARaider";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlackHex
				{
					label = "BlackHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class WhiteHex
				{
					label = "WhiteHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlueHex
				{
					label = "BlueHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class GreenHex
				{
					label = "GreenHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class RedHex
				{
					label = "RedHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlackStripe
				{
					label = "BlackStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class WhiteStripe
				{
					label = "WhiteStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlueStripe
				{
					label = "BlueStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class GreenStripe
				{
					label = "GreenStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class RedStripe
				{
					label = "RedStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Mar
				{
					label = "Mar";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class MarType13
				{
					label = "MarType13";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class MarCamo
				{
					label = "MarCamo";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class MarStripe
				{
					label = "MarStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 124GStripe
				{
					label = "124GStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 124WStripe
				{
					label = "124WStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 124BStripe
				{
					label = "124BStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
			class Sleeves
			{
				values[] = {"Full","Rolled","Sleeved"};
				class Full
				{
					label = "Full";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Rolled
				{
					label = "Rolled";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Sleeved
				{
					label = "Sleeved";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
		};
		class U_B_CombatUniform_mcam_tshirt
		{
			label = "Shirt";
			author = "Frenchie";
			options[] = {"Camo","Shirt","ShirtColor"};
			class camo
			{
				values[] = {"Raider","UCIARaider","BlackHex","WhiteHex","BlueHex","GreenHex","RedHex","BlackStripe","WhiteStripe","BlueStripe","GreenStripe","RedStripe","Mar","MarType13","MarCamo","MarStripe","124GStripe","124WStripe","124BStripe"};
				class Raider
				{
					label = "Raider";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCIARaider
				{
					label = "UCIARaider";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlackHex
				{
					label = "BlackHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class WhiteHex
				{
					label = "WhiteHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlueHex
				{
					label = "BlueHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class GreenHex
				{
					label = "GreenHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class RedHex
				{
					label = "RedHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlackStripe
				{
					label = "BlackStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class WhiteStripe
				{
					label = "WhiteStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlueStripe
				{
					label = "BlueStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class GreenStripe
				{
					label = "GreenStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class RedStripe
				{
					label = "RedStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Mar
				{
					label = "Mar";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class MarType13
				{
					label = "MarType13";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class MarCamo
				{
					label = "MarCamo";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class MarStripe
				{
					label = "MarStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 124GStripe
				{
					label = "124GStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 124WStripe
				{
					label = "124WStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 124BStripe
				{
					label = "124BStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
			class Shirt
			{
				values[] = {"ButtonUp","Tee"};
				class ButtonUp
				{
					label = "ButtonUp";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Tee
				{
					label = "Tee";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
			class ShirtColor
			{
				values[] = {"Black","White","Blue"};
				class Black
				{
					label = "Black";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class White
				{
					label = "White";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Blue
				{
					label = "Blue";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
		};
		class TKE_Rogue_Uniform_U_OP
		{
			label = "Combat Uniform";
			author = "Frenchie";
			options[] = {"Camo","Sleeves"};
			class camo
			{
				values[] = {"Raider","UCIARaider","274thTS","BlackHex","WhiteHex","BlueHex","GreenHex","RedHex","BlackStripe","WhiteStripe","BlueStripe","GreenStripe","RedStripe","Mar","MarType13","MarCamo","MarStripe","124GStripe","124BStripe","124WStripe","Navy"};
				class Raider
				{
					label = "Raider";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCIARaider
				{
					label = "UCIARaider";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlackHex
				{
					label = "BlackHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class WhiteHex
				{
					label = "WhiteHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlueHex
				{
					label = "BlueHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class GreenHex
				{
					label = "GreenHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class RedHex
				{
					label = "RedHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlackStripe
				{
					label = "BlackStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class WhiteStripe
				{
					label = "WhiteStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlueStripe
				{
					label = "BlueStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class GreenStripe
				{
					label = "GreenStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class RedStripe
				{
					label = "RedStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Mar
				{
					label = "Mar";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class MarType13
				{
					label = "MarType13";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class MarCamo
				{
					label = "MarCamo";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class MarStripe
				{
					label = "MarStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 124GStripe
				{
					label = "124GStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 124BStripe
				{
					label = "124BStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 124WStripe
				{
					label = "124WStripe";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
			class Sleeves
			{
				values[] = {"Collar","Basic","Rolled"};
				class Collar
				{
					label = "Collar";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Basic
				{
					label = "Basic";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Rolled
				{
					label = "Rolled";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
		};
		class U_BG_Guerrilla_6_1
		{
			label = "BDUs w/fatigues";
			author = "Frenchie";
			options[] = {"Camo","Sweater"};
			class camo
			{
				values[] = {"Raider","UCIARaider","BlackHex","WhiteHex","BlueHex","GreenHex","RedHex"};
				class Raider
				{
					label = "Raider";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class UCIARaider
				{
					label = "UCIARaider";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlackHex
				{
					label = "BlackHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class WhiteHex
				{
					label = "WhiteHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class BlueHex
				{
					label = "BlueHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class GreenHex
				{
					label = "GreenHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class RedHex
				{
					label = "RedHex";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
			class Sweater
			{
				values[] = {"Black","Grey","Blue","Rust","Green","Tundra"};
				class Black
				{
					label = "Black";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Grey
				{
					label = "Grey";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Blue
				{
					label = "Blue";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Rust
				{
					label = "Rust";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Green
				{
					label = "Green";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Tundra
				{
					label = "Tundra";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
		};
	};
};
class CfgWeapons
{
	class U_TKE_Uniform_base_stock;
	class U_TKE_UniformUCIA: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "UCIARaider";
			Sleeves= "Full";
		};
	};
	class U_TKE_UniformUCIA_Rolled: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "UCIARaider";
			Sleeves= "Rolled";
		};
	};
	class U_TKE_UniformUCIA_Sleeved: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "UCIARaider";
			Sleeves= "Sleeved";
		};
	};
	class U_TKE_UniformUCIABlackHex: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "BlackHex";
			Sleeves= "Full";
		};
	};
	class U_TKE_UniformUCIABlackHex_Rolled: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "BlackHex";
			Sleeves= "Rolled";
		};
	};
	class U_TKE_UniformUCIABlackHex_Sleeved: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "BlackHex";
			Sleeves= "Sleeved";
		};
	};
	class U_TKE_UniformUCIAGreenHex: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "GreenHex";
			Sleeves= "Full";
		};
	};
	class U_TKE_UniformUCIAGreenHex_Rolled: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "GreenHex";
			Sleeves= "Rolled";
		};
	};
	class U_TKE_UniformUCIAGreenHex_Sleeved: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "GreenHex";
			Sleeves= "Sleeved";
		};
	};
	class U_TKE_UniformUCIABlueHex: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "BlueHex";
			Sleeves= "Full";
		};
	};
	class U_TKE_UniformUCIABlueHex_Rolled: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "BlueHex";
			Sleeves= "Rolled";
		};
	};
	class U_TKE_UniformUCIABlueHex_Sleeved: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "BlueHex";
			Sleeves= "Sleeved";
		};
	};
	class U_TKE_UniformUCIARedHex: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "RedHex";
			Sleeves= "Full";
		};
	};
	class U_TKE_UniformUCIARedHex_Rolled: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "RedHex";
			Sleeves= "Rolled";
		};
	};
	class U_TKE_UniformUCIARedHex_Sleeved: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "RedHex";
			Sleeves= "Sleeved";
		};
	};
	class U_TKE_UniformUCIAWhiteHex: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "WhiteHex";
			Sleeves= "Full";
		};
	};
	class U_TKE_UniformUCIAWhiteHex_Rolled: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "WhiteHex";
			Sleeves= "Rolled";
		};
	};
	class U_TKE_UniformUCIAWhiteHex_Sleeved: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_TKE_Uniform_base";
			camo = "WhiteHex";
			Sleeves= "Sleeved";
		};
	};
	class U_TKE_UniformUCIABlackStripe: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "BlackStripe";
            Sleeves= "Full";
        };
    };
    class U_TKE_UniformUCIABlackStripe_Rolled: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "BlackStripe";
            Sleeves= "Rolled";
        };
    };
    class U_TKE_UniformUCIABlackStripe_Sleeved: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "BlackStripe";
            Sleeves= "Sleeved";
        };
    };
    class U_TKE_UniformUCIAGreenStripe: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "GreenStripe";
            Sleeves= "Full";
        };
    };
    class U_TKE_UniformUCIAGreenStripe_Rolled: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "GreenStripe";
            Sleeves= "Rolled";
        };
    };
    class U_TKE_UniformUCIAGreenStripe_Sleeved: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "GreenStripe";
            Sleeves= "Sleeved";
        };
    };
    class U_TKE_UniformUCIABlueStripe: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "BlueStripe";
            Sleeves= "Full";
        };
    };
    class U_TKE_UniformUCIABlueStripe_Rolled: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "BlueStripe";
            Sleeves= "Rolled";
        };
    };
    class U_TKE_UniformUCIABlueStripe_Sleeved: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "BlueStripe";
            Sleeves= "Sleeved";
        };
    };
    class U_TKE_UniformUCIARedStripe: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "RedStripe";
            Sleeves= "Full";
        };
    };
    class U_TKE_UniformUCIARedStripe_Rolled: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "RedStripe";
            Sleeves= "Rolled";
        };
    };
    class U_TKE_UniformUCIARedStripe_Sleeved: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "RedStripe";
            Sleeves= "Sleeved";
        };
    };
    class U_TKE_UniformUCIAWhiteStripe: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "WhiteStripe";
            Sleeves= "Full";
        };
    };
    class U_TKE_UniformUCIAWhiteStripe_Rolled: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "WhiteStripe";
            Sleeves= "Rolled";
        };
    };
    class U_TKE_UniformUCIAWhiteStripe_Sleeved: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "WhiteStripe";
            Sleeves= "Sleeved";
        };
    };
class U_TKE_Uniform1MR: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "Mar";
            Sleeves= "Full";
        };
    };
    class U_TKE_Uniform1MR_Rolled: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "Mar";
            Sleeves= "Rolled";
        };
    };
    class U_TKE_Uniform1MR_Sleeved: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "Mar";
            Sleeves= "Sleeved";
        };
    };
class U_TKE_Uniform1MRType13: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "MarType13";
            Sleeves= "Full";
        };
    };
    class U_TKE_Uniform1MRType13_Rolled: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "MarType13";
            Sleeves= "Rolled";
        };
    };
    class U_TKE_Uniform1MRType13_Sleeved: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "MarType13";
            Sleeves= "Sleeved";
        };
    };
class U_TKE_Uniform1MRCamo: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "MarCamo";
            Sleeves= "Full";
        };
    };
    class U_TKE_Uniform1MRCamo_Rolled: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "MarCamo";
            Sleeves= "Rolled";
        };
    };
    class U_TKE_Uniform1MRCamo_Sleeved: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "MarCamo";
            Sleeves= "Sleeved";
        };
    };
class U_TKE_Uniform1MRStripe: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "MarStripe";
            Sleeves= "Full";
        };
    };
    class U_TKE_Uniform1MRStripe_Rolled: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "MarStripe";
            Sleeves= "Rolled";
        };
    };
    class U_TKE_Uniform1MRStripe_Sleeved: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "MarStripe";
            Sleeves= "Sleeved";
        };
    };
class U_TKE_Uniform124GStripe: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "124GStripe";
            Sleeves= "Full";
        };
    };
    class U_TKE_Uniform124GStripe_Rolled: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "124GStripe";
            Sleeves= "Rolled";
        };
    };
    class U_TKE_Uniform124GStripe_Sleeved: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "124GStripe";
            Sleeves= "Sleeved";
        };
    };
class U_TKE_Uniform124WStripe: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "124WStripe";
            Sleeves= "Full";
        };
    };
    class U_TKE_Uniform124WStripe_Rolled: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "124WStripe";
            Sleeves= "Rolled";
        };
    };
    class U_TKE_Uniform124WStripe_Sleeved: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "124WStripe";
            Sleeves= "Sleeved";
        };
    };
class U_TKE_Uniform124BStripe: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "124BStripe";
            Sleeves= "Full";
        };
    };
    class U_TKE_Uniform124BStripe_Rolled: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "124BStripe";
            Sleeves= "Rolled";
        };
    };
    class U_TKE_Uniform124BStripe_Sleeved: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_TKE_Uniform_base";
            camo = "124BStripe";
            Sleeves= "Sleeved";
        };
    };

	class U_B_CombatUniform_mcam_tshirt_stock;
	class U_TKE_UniformUCIA_BlackButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "UCIARaider";
			Shirt= "ButtonUp";
			ShirtColor = "Black"
		};
	};
	class U_TKE_UniformUCIA_BlueButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "UCIARaider";
			Shirt= "ButtonUp";
			ShirtColor = "Blue"
		};
	};
	class U_TKE_UniformUCIA_WhiteButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "UCIARaider";
			Shirt= "ButtonUp";
			ShirtColor = "White"
		};
	};
	class U_TKE_UniformUCIABlackHex_BlackButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "BlackHex";
			Shirt= "ButtonUp";
			ShirtColor = "Black"
		};
	};
	class U_TKE_UniformUCIABlackHex_BlueButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "BlackHex";
			Shirt= "ButtonUp";
			ShirtColor = "Blue"
		};
	};
	class U_TKE_UniformUCIABlackHex_WhiteButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "BlackHex";
			Shirt= "ButtonUp";
			ShirtColor = "White"
		};
	};
	class U_TKE_UniformUCIAGreenHex_BlackButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "GreenHex";
			Shirt= "ButtonUp";
			ShirtColor = "Black"
		};
	};
	class U_TKE_UniformUCIAGreenHex_BlueButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "GreenHex";
			Shirt= "ButtonUp";
			ShirtColor = "Blue"
		};
	};
	class U_TKE_UniformUCIAGreenHex_WhiteButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "GreenHex";
			Shirt= "ButtonUp";
			ShirtColor = "White"
		};
	};
	class U_TKE_UniformUCIABlueHex_BlackButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "BlueHex";
			Shirt= "ButtonUp";
			ShirtColor = "Black"
		};
	};
	class U_TKE_UniformUCIABlueHex_BlueButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "BlueHex";
			Shirt= "ButtonUp";
			ShirtColor = "Blue"
		};
	};
	class U_TKE_UniformUCIABlueHex_WhiteButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "BlueHex";
			Shirt= "ButtonUp";
			ShirtColor = "White"
		};
	};
	class U_TKE_UniformUCIARedHex_BlackButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "RedHex";
			Shirt= "ButtonUp";
			ShirtColor = "Black"
		};
	};
	class U_TKE_UniformUCIARedHex_BlueButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "RedHex";
			Shirt= "ButtonUp";
			ShirtColor = "Blue"
		};
	};
	class U_TKE_UniformUCIARedHex_WhiteButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "RedHex";
			Shirt= "ButtonUp";
			ShirtColor = "White"
		};
	};
	class U_TKE_UniformUCIAWhiteHex_BlackButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "WhiteHex";
			Shirt= "ButtonUp";
			ShirtColor = "Black"
		};
	};
	class U_TKE_UniformUCIAWhiteHex_BlueButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "WhiteHex";
			Shirt= "ButtonUp";
			ShirtColor = "Blue"
		};
	};
	class U_TKE_UniformUCIAWhiteHex_WhiteButtonUp: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "WhiteHex";
			Shirt= "ButtonUp";
			ShirtColor = "White"
		};
	};
class U_TKE_UniformUCIABlackStripe_BlackButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "BlackStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Black"
        };
    };
    class U_TKE_UniformUCIABlackStripe_BlueButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "BlackStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Blue"
        };
    };
    class U_TKE_UniformUCIABlackStripe_WhiteButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "BlackStripe";
            Shirt= "ButtonUp";
            ShirtColor = "White"
        };
    };
    class U_TKE_UniformUCIAGreenStripe_BlackButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "GreenStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Black"
        };
    };
    class U_TKE_UniformUCIAGreenStripe_BlueButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "GreenStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Blue"
        };
    };
    class U_TKE_UniformUCIAGreenStripe_WhiteButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "GreenStripe";
            Shirt= "ButtonUp";
            ShirtColor = "White"
        };
    };
    class U_TKE_UniformUCIABlueStripe_BlackButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "BlueStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Black"
        };
    };
    class U_TKE_UniformUCIABlueStripe_BlueButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "BlueStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Blue"
        };
    };
    class U_TKE_UniformUCIABlueStripe_WhiteButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "BlueStripe";
            Shirt= "ButtonUp";
            ShirtColor = "White"
        };
    };
    class U_TKE_UniformUCIARedStripe_BlackButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "RedStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Black"
        };
    };
    class U_TKE_UniformUCIARedStripe_BlueButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "RedStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Blue"
        };
    };
    class U_TKE_UniformUCIARedStripe_WhiteButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "RedStripe";
            Shirt= "ButtonUp";
            ShirtColor = "White"
        };
    };
    class U_TKE_UniformUCIAWhiteStripe_BlackButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "WhiteStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Black"
        };
    };
    class U_TKE_UniformUCIAWhiteStripe_BlueButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "WhiteStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Blue"
        };
    };
    class U_TKE_UniformUCIAWhiteStripe_WhiteButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "WhiteStripe";
            Shirt= "ButtonUp";
            ShirtColor = "White"
        };
    };
class U_TKE_Uniform1MR_BlackButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "Mar";
            Shirt= "ButtonUp";
            ShirtColor = "Black"
        };
    };
    class U_TKE_Uniform1MR_BlueButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "Mar";
            Shirt= "ButtonUp";
            ShirtColor = "Blue"
        };
    };
    class U_TKE_Uniform1MR_WhiteButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "Mar";
            Shirt= "ButtonUp";
            ShirtColor = "White"
        };
    };


class U_TKE_Uniform1MRType13_BlackButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "MarType13";
            Shirt= "ButtonUp";
            ShirtColor = "Black"
        };
    };
    class U_TKE_Uniform1MRType13_BlueButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "MarType13";
            Shirt= "ButtonUp";
            ShirtColor = "Blue"
        };
    };
    class U_TKE_Uniform1MRType13_WhiteButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "MarType13";
            Shirt= "ButtonUp";
            ShirtColor = "White"
        };
    };


class U_TKE_Uniform1MRCamo_BlackButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "MarCamo";
            Shirt= "ButtonUp";
            ShirtColor = "Black"
        };
    };
    class U_TKE_Uniform1MRCamo_BlueButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "MarCamo";
            Shirt= "ButtonUp";
            ShirtColor = "Blue"
        };
    };
    class U_TKE_Uniform1MRCamo_WhiteButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "MarCamo";
            Shirt= "ButtonUp";
            ShirtColor = "White"
        };
    };


class U_TKE_Uniform1MRStripe_BlackButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "MarStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Black"
        };
    };
    class U_TKE_Uniform1MRStripe_BlueButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "MarStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Blue"
        };
    };
    class U_TKE_Uniform1MRStripe_WhiteButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "MarStripe";
            Shirt= "ButtonUp";
            ShirtColor = "White"
        };
    };
class U_TKE_Uniform124GStripe_BlackButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "124GStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Black"
        };
    };
    class U_TKE_Uniform124GStripe_BlueButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "124GStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Blue"
        };
    };
    class U_TKE_Uniform124GStripe_WhiteButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "124GStripe";
            Shirt= "ButtonUp";
            ShirtColor = "White"
        };
    };
class U_TKE_Uniform124WStripe_BlackButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "124WStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Black"
        };
    };
    class U_TKE_Uniform124WStripe_BlueButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "124WStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Blue"
        };
    };
    class U_TKE_Uniform124WStripe_WhiteButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "124WStripe";
            Shirt= "ButtonUp";
            ShirtColor = "White"
        };
    };
class U_TKE_Uniform124BStripe_BlackButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "124BStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Black"
        };
    };
    class U_TKE_Uniform124BStripe_BlueButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "124BStripe";
            Shirt= "ButtonUp";
            ShirtColor = "Blue"
        };
    };
    class U_TKE_Uniform124BStripe_WhiteButtonUp: U_TKE_Uniform_base_stock
    {
        class XtdGearInfo
        {
            model = "U_B_CombatUniform_mcam_tshirt";
            camo = "124BStripe";
            Shirt= "ButtonUp";
            ShirtColor = "White"
        };
    };

	class U_TKE_UniformUCIA_Tee: U_TKE_Uniform_base_stock
	{
		class XtdGearInfo
		{
			model = "U_B_CombatUniform_mcam_tshirt";
			camo = "UCIARaider";
			Shirt= "Tee";
			ShirtColor = "Black"
		};
	};
	class TKE_Rogue_Uniform_U_OP_stock;
	class TKE_Rogue_UniformUCIA_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "UCIARaider";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_UniformUCIANC_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "UCIARaider";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_UniformUCIARolled_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "UCIARaider";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_UniformUCIABlackHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "BlackHex";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_UniformUCIANCBlackHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "BlackHex";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_UniformUCIARolledBlackHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "BlackHex";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_UniformUCIAWhiteHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "WhiteHex";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_UniformUCIANCWhiteHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "WhiteHex";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_UniformUCIARolledWhiteHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "WhiteHex";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_UniformUCIABlueHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "BlueHex";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_UniformUCIANCBlueHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "BlueHex";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_UniformUCIARolledBlueHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "BlueHex";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_UniformUCIAGreenHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "GreenHex";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_UniformUCIANCGreenHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "GreenHex";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_UniformUCIARolledGreenHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "GreenHex";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_UniformUCIARedHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "RedHex";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_UniformUCIANCRedHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "RedHex";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_UniformUCIARolledRedHex_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "RedHex";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_UniformUCIABlackStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "BlackStripe";
            Sleeves= "Basic";
        };
    };
    class TKE_Rogue_UniformUCIANCBlackStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "BlackStripe";
            Sleeves= "Collar";
        };
    };
    class TKE_Rogue_UniformUCIARolledBlackStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "BlackStripe";
            Sleeves= "Rolled";
        };
    };
    class TKE_Rogue_UniformUCIAWhiteStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "WhiteStripe";
            Sleeves= "Basic";
        };
    };
    class TKE_Rogue_UniformUCIANCWhiteStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "WhiteStripe";
            Sleeves= "Collar";
        };
    };
    class TKE_Rogue_UniformUCIARolledWhiteStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "WhiteStripe";
            Sleeves= "Rolled";
        };
    };
    class TKE_Rogue_UniformUCIABlueStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "BlueStripe";
            Sleeves= "Basic";
        };
    };
    class TKE_Rogue_UniformUCIANCBlueStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "BlueStripe";
            Sleeves= "Collar";
        };
    };
    class TKE_Rogue_UniformUCIARolledBlueStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "BlueStripe";
            Sleeves= "Rolled";
        };
    };
    class TKE_Rogue_UniformUCIAGreenStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "GreenStripe";
            Sleeves= "Basic";
        };
    };
    class TKE_Rogue_UniformUCIANCGreenStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "GreenStripe";
            Sleeves= "Collar";
        };
    };
    class TKE_Rogue_UniformUCIARolledGreenStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "GreenStripe";
            Sleeves= "Rolled";
        };
    };
    class TKE_Rogue_UniformUCIARedStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "RedStripe";
            Sleeves= "Basic";
        };
    };
    class TKE_Rogue_UniformUCIANCRedStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "RedStripe";
            Sleeves= "Collar";
        };
    };
    class TKE_Rogue_UniformUCIARolledRedStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
    {
        class XtdGearInfo
        {
            model = "TKE_Rogue_Uniform_U_OP";
            camo = "RedStripe";
            Sleeves= "Rolled";
        };
    };
	class TKE_Rogue_UniformNavy_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "Navy";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_UniformNavyNC_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "Navy";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_UniformNavyRolled_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "Navy";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_UniformVictus_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "274thTS";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_UniformVictusNC_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "274thTS";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_Uniform1MR_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "Mar";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_Uniform1MRNC_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "Mar";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_Uniform1MRRolled_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "Mar";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_Uniform1MRType13_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "MarType13";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_Uniform1MRType13NC_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "MarType13";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_Uniform1MRType13Rolled_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "MarType13";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_Uniform1MRCamo_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "MarCamo";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_Uniform1MRCamoNC_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "MarCamo";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_Uniform1MRCamoRolled_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "MarCamo";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_Uniform1MRStripe_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "MarStripe";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_Uniform1MRStripeNC_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "MarStripe";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_Uniform1MRStripeRolled_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "MarStripe";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_Uniform124StripeG_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "124GStripe";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_Uniform124StripeGNC_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "124GStripe";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_Uniform124StripeGRolled_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "124GStripe";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_Uniform124StripeB_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "124BStripe";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_Uniform124StripeBNC_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "124BStripe";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_Uniform124StripeBRolled_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "124BStripe";
			Sleeves= "Rolled";
		};
	};
	class TKE_Rogue_Uniform124StripeW_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "124WStripe";
			Sleeves= "Basic";
		};
	};
	class TKE_Rogue_Uniform124StripeWNC_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "124WStripe";
			Sleeves= "Collar";
		};
	};
	class TKE_Rogue_Uniform124StripeWRolled_U_B: TKE_Rogue_Uniform_U_OP_stock
	{
		class XtdGearInfo
		{
			model = "TKE_Rogue_Uniform_U_OP";
			camo = "124WStripe";
			Sleeves= "Rolled";
		};
	};
	class U_BG_Guerrilla_6_1_stock;
	class U_1MR_Sweater_camo_black: U_BG_Guerrilla_6_1_stock
	{
		class XtdGearInfo
		{
			model = "U_BG_Guerrilla_6_1";
			camo = "UCIARaider";
			Sweater= "Black";
		};
	};
	class U_1MR_Sweater_camo_grey: U_BG_Guerrilla_6_1_stock
	{
		class XtdGearInfo
		{
			model = "U_BG_Guerrilla_6_1";
			camo = "UCIARaider";
			Sweater= "Grey";
		};
	};
	class U_1MR_Sweater_camo_green: U_BG_Guerrilla_6_1_stock
	{
		class XtdGearInfo
		{
			model = "U_BG_Guerrilla_6_1";
			camo = "UCIARaider";
			Sweater= "Green";
		};
	};
	class U_1MR_Sweater_camo_blue: U_BG_Guerrilla_6_1_stock
	{
		class XtdGearInfo
		{
			model = "U_BG_Guerrilla_6_1";
			camo = "UCIARaider";
			Sweater= "Blue";
		};
	};
	class U_1MR_Sweater_camo_rust: U_BG_Guerrilla_6_1_stock
	{
		class XtdGearInfo
		{
			model = "U_BG_Guerrilla_6_1";
			camo = "UCIARaider";
			Sweater= "Rust";
		};
	};
	
};

