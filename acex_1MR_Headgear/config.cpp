////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Oct 24 15:52:23 2023 : 'file' last modified on Mon Jan 31 18:54:46 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class acex_1MR_Headgear
	{
		name = "acex_1MR_Headgear";
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
		class 7thFleet_Helmet
		{
			label = "7th Fleet Helmets";
			author = "Frenchie";
			options[] = {"Camo","Type","Visor","Medic","Teeth_Skull","IDtag"};
			class camo
			{
				values[] = {"33rdCAW","21stMAW","274thTS","1MR_7MEF","7FLT","124Blk","124Wht","124Grn","SOGBlk","SOGWht","SOGGrn","UCIABlack","UCIAWhite","UCIAGreen","UCIARed","UCIABlue"};
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
                class 274thTS
				{
					label = "274thTS";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 1MR_7MEF
				{
					label = "1MR_7MEF";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 7FLT
				{
					label = "7FLT";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 124Blk
				{
					label = "124Blk";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 124Wht
				{
					label = "124Wht";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 124Grn
				{
					label = "124Grn";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class SOGBlk
				{
					label = "SOGBlk";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class SOGWht
				{
					label = "SOGWht";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class SOGGrn
				{
					label = "SOGGrn";
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
			class Type
			{
				values[] = {"Open","Closed","Mask","RdrOpen","RdrClosed","Atmo","ExoAtmo","KMC"};
				class Open
				{
					label = "Open";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class Closed
				{
					label = "Closed";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class Mask
				{
					label = "Mask";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class RdrOpen
				{
					label = "RdrOpen";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class RdrClosed
				{
					label = "RdrClosed";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class Atmo
				{
					label = "Atmo";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class ExoAtmo
				{
					label = "ExoAtmo";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class KMC
				{
					label = "KMC";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
            class Visor
			{
				values[] = {"Opaque","Clear"};
				class Opaque
				{
					label = "Opaque";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class Clear
				{
					label = "Clear";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
            class Medic
			{
				values[] = {"Yes","No"};
				class Yes
				{
					label = "Yes";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class No
				{
					label = "No";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
            class Teeth_Skull
			{
				values[] = {"Yes","No"};
				class Yes
				{
					label = "Yes";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class No
				{
					label = "No";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
			class IDtag 
			{
				values[] = {"None","0_HQ","1_1","1_2","1_3","1_4","1_HQ","2_1","2_2","2_3"};
				class None
				{
					label = "None";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 0_HQ
				{
					label = "0_HQ";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 1_1
				{
					label = "1_1";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 1_2
				{
					label = "1_2";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 1_3
				{
					label = "1_3";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 1_4
				{
					label = "1_4";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 1_HQ
				{
					label = "1_HQ";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 2_1
				{
					label = "2_1";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 2_2
				{
					label = "2_2";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
				class 2_3
				{
					label = "2_3";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
			};
        };
    };
};
class CfgWeapons
{
	class 7thFleet_Helmet_stock;
	class TKE_UCMRHelm1stB: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMRHelmClear1stB: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMRHelm1stM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMRHelmClear1stM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMRHelm1stT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "Yes";
			IDtag = "None"
		};
	};
    class TKE_UCMRHelmClear1stT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "Yes";
			IDtag = "None"
		};
	};
    class TKE_UCMRHelm1stMT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "Yes";
            Teeth_Skull = "Yes";
			IDtag = "None"
		};
	};
    class TKE_UCMRHelmClear1stMT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "Yes";
            Teeth_Skull = "Yes";
			IDtag = "None"
		};
	};
    class TKE_UCMRHelmOpen1stB: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
			Medic = "No";
            Teeth_Skull = "No"
			IDtag = "None"
		};
	};
    class TKE_UCMRHelmOpen1stM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMRHelmOpen1stT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
			Medic = "No";
            Teeth_Skull = "Yes";
			IDtag = "None"
		};
	};
    class TKE_UCMRHelmOpen1stMT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen"
			Medic = "Yes";
            Teeth_Skull = "Yes";
			IDtag = "None"
		};
	};
	class TKE_UCMRHelm1stB2_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "2_1"
        };
    };
    class TKE_UCMRHelmClear1stB2_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "2_1"
        };
    };
    class TKE_UCMRHelm1stM2_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "2_1"
        };
    };
    class TKE_UCMRHelmClear1stM2_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "2_1"
        };
    };
    class TKE_UCMRHelm1stT2_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "2_1"
        };
    };
    class TKE_UCMRHelmClear1stT2_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "2_1"
        };
    };
    class TKE_UCMRHelm1stMT2_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "2_1"
        };
    };
     class TKE_UCMRHelmClear1stMT2_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "2_1"
        };
    };
    class TKE_UCMRHelmOpen1stB2_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "No";
            Teeth_Skull = "No"
            IDtag = "2_1"
        };
    };
    class TKE_UCMRHelmOpen1stM2_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "2_1"
        };
    };
    class TKE_UCMRHelmOpen1stT2_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "2_1"
        };
    };
    class TKE_UCMRHelmOpen1stMT2_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen"
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "2_1"
        };
    };
class TKE_UCMRHelm1stB2_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "2_2"
        };
    };
    class TKE_UCMRHelmClear1stB2_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "2_2"
        };
    };
    class TKE_UCMRHelm1stM2_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "2_2"
        };
    };
    class TKE_UCMRHelmClear1stM2_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "2_2"
        };
    };
    class TKE_UCMRHelm1stT2_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "2_2"
        };
    };
    class TKE_UCMRHelmClear1stT2_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "2_2"
        };
    };
    class TKE_UCMRHelm1stMT2_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "2_2"
        };
    };
     class TKE_UCMRHelmClear1stMT2_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "2_2"
        };
    };
    class TKE_UCMRHelmOpen1stB2_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "No";
            Teeth_Skull = "No"
            IDtag = "2_2"
        };
    };
    class TKE_UCMRHelmOpen1stM2_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "2_2"
        };
    };
    class TKE_UCMRHelmOpen1stT2_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "2_2"
        };
    };
    class TKE_UCMRHelmOpen1stMT2_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen"
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "2_2"
        };
    };

class TKE_UCMRHelm1stB2_3: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "2_3"
        };
    };
    class TKE_UCMRHelmClear1stB2_3: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "2_3"
        };
    };
    class TKE_UCMRHelm1stM2_3: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "2_3"
        };
    };
    class TKE_UCMRHelmClear1stM2_3: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "2_3"
        };
    };
    class TKE_UCMRHelm1stT2_3: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "2_3"
        };
    };
    class TKE_UCMRHelmClear1stT2_3: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "2_3"
        };
    };
    class TKE_UCMRHelm1stMT2_3: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "2_3"
        };
    };
    class TKE_UCMRHelmClear1stMT2_3: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "2_3"
        };
    };
    class TKE_UCMRHelmOpen1stB2_3: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "No";
            Teeth_Skull = "No"
            IDtag = "2_3"
        };
    };
    class TKE_UCMRHelmOpen1stM2_3: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "2_3"
        };
    };
    class TKE_UCMRHelmOpen1stT2_3: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "2_3"
        };
    };
    class TKE_UCMRHelmOpen1stMT2_3: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen"
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "2_3"
        };
    };

class TKE_UCMRHelm1stB0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMRHelmClear1stB0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMRHelm1stM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMRHelmClear1stM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMRHelm1stT0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMRHelmClear1stT0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMRHelm1stMT0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMRHelmClear1stMT0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMRHelmOpen1stB0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "No";
            Teeth_Skull = "No"
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMRHelmOpen1stM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMRHelmOpen1stT0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMRHelmOpen1stMT0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "RdrOpen"
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelm_Camo7th0_HQ: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Open";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "0_HQ"
		};
	};
	class TKE_UCMCHelm_Camo7thM0_HQ: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Open";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "0_HQ"
		};
	};
	class TKE_UCMCHelmClosedCamo7th0_HQ: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "0_HQ"
		};
	};
    class TKE_UCMCHelmClearClosedCamo7th0_HQ: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "0_HQ"
		};
	};
	class TKE_UCMCHelmClosedCamo7thM0_HQ: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "0_HQ"
		};
	};
    class TKE_UCMCHelmClearClosedCamo7thM0_HQ: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "0_HQ"
		};
	};
	class TKE_UCMCHelmMask_Camo7th0_HQ: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "0_HQ"
		};
	};
    class TKE_UCMCHelmSkullMask_Camo7th0_HQ: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "Yes";
			IDtag = "0_HQ"
		};
	};
    class TKE_UCMCHelmClearMask_Camo7th0_HQ: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "0_HQ"
		};
	};
	class TKE_UCMCHelmMask_Camo7thM0_HQ: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "0_HQ"
		};
	};
    class TKE_UCMCHelmSkullMask_Camo7thM0_HQ: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "Yes";
			IDtag = "0_HQ"
		};
	};
    class TKE_UCMCHelmClearMask_Camo7thM0_HQ: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "0_HQ"
		};
	};
	class TKE_UCNPilotHelmNP_21st: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "21stMAW";
            Visor = "Opaque";
			Type = "Atmo";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCNPilotHelm_21st: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "21stMAW";
            Visor = "Opaque";
			Type = "ExoAtmo"
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCNPilotHelmNP_33rd: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "33rdCAW";
            Visor = "Opaque";
			Type = "Atmo";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCNPilotHelm_33rd: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "33rdCAW";
            Visor = "Opaque";
			Type = "ExoAtmo"
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};

  	class TKE_UCNPilotHelmNP_7th: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Atmo";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCNPilotHelm_7th: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "ExoAtmo"
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelm_Camo7th: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Open";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelm_Camo7thM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Open";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelmClosedCamo7th: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmClearClosedCamo7th: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelmClosedCamo7thM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmClearClosedCamo7thM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelmMask_Camo7th: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmSkullMask_Camo7th: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "Yes";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmClearMask_Camo7th: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelmMask_Camo7thM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmSkullMask_Camo7thM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "Yes";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmClearMask_Camo7thM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelm_Camo7th1_1: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Open";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_1"
		};
	};
	class TKE_UCMCHelm_Camo7thM1_1: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Open";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_1"
		};
	};
	class TKE_UCMCHelmClosedCamo7th1_1: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_1"
		};
	};
    class TKE_UCMCHelmClearClosedCamo7th1_1: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_1"
		};
	};
	class TKE_UCMCHelmClosedCamo7thM1_1: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_1"
		};
	};
    class TKE_UCMCHelmClearClosedCamo7thM1_1: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_1"
		};
	};
	class TKE_UCMCHelmMask_Camo7th1_1: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_1"
		};
	};
    class TKE_UCMCHelmSkullMask_Camo7th1_1: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "Yes";
			IDtag = "1_1"
		};
	};
    class TKE_UCMCHelmClearMask_Camo7th1_1: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_1"
		};
	};
	class TKE_UCMCHelmMask_Camo7thM1_1: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_1"
		};
	};
    class TKE_UCMCHelmSkullMask_Camo7thM1_1: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "Yes";
			IDtag = "1_1"
		};
	};
    class TKE_UCMCHelmClearMask_Camo7thM1_1: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_1"
		};
	};
    class TKE_UCMCHelm_Camo7th1_2: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Open";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_2"
		};
	};
	class TKE_UCMCHelm_Camo7thM1_2: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Open";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_2"
		};
	};
	class TKE_UCMCHelmClosedCamo7th1_2: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_2"
		};
	};
    class TKE_UCMCHelmClearClosedCamo7th1_2: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_2"
		};
	};
	class TKE_UCMCHelmClosedCamo7thM1_2: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_2"
		};
	};
    class TKE_UCMCHelmClearClosedCamo7thM1_2: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_2"
		};
	};
	class TKE_UCMCHelmMask_Camo7th1_2: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_2"
		};
	};
    class TKE_UCMCHelmSkullMask_Camo7th1_2: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "Yes";
			IDtag = "1_2"
		};
	};
    class TKE_UCMCHelmClearMask_Camo7th1_2: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_2"
		};
	};
	class TKE_UCMCHelmMask_Camo7thM1_2: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_2"
		};
	};
    class TKE_UCMCHelmSkullMask_Camo7thM1_2: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "Yes";
			IDtag = "1_2"
		};
	};
    class TKE_UCMCHelmClearMask_Camo7thM1_2: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_2"
		};
	};
     class TKE_UCMCHelm_Camo7th1_3: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Open";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_3"
		};
	};
	class TKE_UCMCHelm_Camo7thM1_3: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Open";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_3"
		};
	};
	class TKE_UCMCHelmClosedCamo7th1_3: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_3"
		};
	};
    class TKE_UCMCHelmClearClosedCamo7th1_3: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_3"
		};
	};
	class TKE_UCMCHelmClosedCamo7thM1_3: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_3"
		};
	};
    class TKE_UCMCHelmClearClosedCamo7thM1_3: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_3"
		};
	};
	class TKE_UCMCHelmMask_Camo7th1_3: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_3"
		};
	};
    class TKE_UCMCHelmSkullMask_Camo7th1_3: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "Yes";
			IDtag = "1_3"
		};
	};
    class TKE_UCMCHelmClearMask_Camo7th1_3: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "1_3"
		};
	};
	class TKE_UCMCHelmMask_Camo7thM1_3: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_3"
		};
	};
    class TKE_UCMCHelmSkullMask_Camo7thM1_3: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "Yes";
			IDtag = "1_3"
		};
	};
    class TKE_UCMCHelmClearMask_Camo7thM1_3: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "1MR_7MEF";
            Visor = "Clear";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "1_3"
		};
	};
    class TKE_UCMCHelm_Camo7FLT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7FLT";
            Visor = "Opaque";
			Type = "Open";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelm_Camo7FLTM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7FLT";
            Visor = "Opaque";
			Type = "Open";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelmClosedCamo7FLT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7FLT";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmClearClosedCamo7FLT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7FLT";
            Visor = "Clear";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelmClosedCamo7FLTM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7FLT";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmClearClosedCamo7FLTM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7FLT";
            Visor = "Clear";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelmMask_Camo7FLT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7FLT";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmClearMask_Camo7FLT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7FLT";
            Visor = "Clear";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelmMask_Camo7FLTM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7FLT";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmClearMask_Camo7FLTM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7FLT";
            Visor = "Clear";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCIAHelm: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "UCIABlack";
            Visor = "Opaque";
			Type = "Open";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCIAHelmClosed: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "UCIABlack";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCIAHelmClearClosed: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "UCIABlack";
            Visor = "Clear";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelmMask_CamoUCIA: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "UCIABlack";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmClearMask_CamoUCIA: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "UCIABlack";
            Visor = "Clear";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMRHelmUCIA: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "UCIABlack";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMRHelmClearUCIA: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "UCIABlack";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMRHelmOpenUCIA: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "UCIABlack";
            Visor = "Opaque";
			Type = "RdrOpen";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCNPilotHelmNP_UCIA: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "UCIABlack";
            Visor = "Opaque";
			Type = "Atmo";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCNPilotHelm_UCIA: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "UCIABlack";
            Visor = "Opaque";
			Type = "ExoAtmo";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCIAHelmGreen: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAGreen";
            Visor = "Opaque";
			Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCIAHelmClosedGreen: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAGreen";
            Visor = "Opaque";
			Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCIAHelmClearClosedGreen: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAGreen";
            Visor = "Clear";
			Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_CamoUCIAGreen: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAGreen";
            Visor = "Opaque";
			Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
     class TKE_UCMCHelmClearMask_CamoUCIAGreen: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAGreen";
            Visor = "Clear";
			Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMRHelmUCIAGreen: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAGreen";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMRHelmClearUCIAGreen: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAGreen";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMRHelmOpenUCIAGreen: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAGreen";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelmNP_UCIAGreen: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAGreen";
            Visor = "Opaque";
			Type = "Atmo";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelm_UCIAGreen: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAGreen";
            Visor = "Opaque";
			Type = "ExoAtmo";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
class TKE_UCIAHelmBlue: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIABlue";
            Visor = "Opaque";
			Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCIAHelmClosedBlue: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIABlue";
            Visor = "Opaque";
			Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCIAHelmClearClosedBlue: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIABlue";
            Visor = "Clear";
			Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_CamoUCIABlue: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIABlue";
            Visor = "Opaque";
			Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_CamoUCIABlue: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIABlue";
            Visor = "Clear";
			Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMRHelmUCIABlue: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIABlue";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMRHelmClearUCIABlue: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIABlue";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMRHelmOpenUCIABlue: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIABlue";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelmNP_UCIABlue: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIABlue";
            Visor = "Opaque";
			Type = "Atmo";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelm_UCIABlue: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIABlue";
            Visor = "Opaque";
			Type = "ExoAtmo";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
class TKE_UCIAHelmRed: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIARed";
            Visor = "Opaque";
			Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCIAHelmClosedRed: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIARed";
            Visor = "Opaque";
			Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCIAHelmClearClosedRed: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIARed";
            Visor = "Clear";
			Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_CamoUCIARed: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIARed";
            Visor = "Opaque";
			Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_CamoUCIARed: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIARed";
            Visor = "Clear";
			Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMRHelmUCIARed: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIARed";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMRHelmClearUCIARed: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIARed";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMRHelmOpenUCIARed: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIARed";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelmNP_UCIARed: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIARed";
            Visor = "Opaque";
			Type = "Atmo";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelm_UCIARed: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIARed";
            Visor = "Opaque";
			Type = "ExoAtmo";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };

class TKE_UCIAHelmWhite: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAWhite";
            Visor = "Opaque";
			Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCIAHelmClosedWhite: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAWhite";
            Visor = "Opaque";
			Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCIAHelmClearClosedWhite: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAWhite";
            Visor = "Clear";
			Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_CamoUCIAWhite: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAWhite";
            Visor = "Opaque";
			Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_CamoUCIAWhite: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAWhite";
            Visor = "Clear";
			Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMRHelmUCIAWhite: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAWhite";
            Visor = "Opaque";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMRHelmClearUCIAWhite: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAWhite";
            Visor = "Clear";
			Type = "RdrClosed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMRHelmOpenUCIAWhite: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAWhite";
            Visor = "Opaque";
			Type = "RdrOpen";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelmNP_UCIAWhite: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAWhite";
            Visor = "Opaque";
			Type = "Atmo";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelm_UCIAWhite: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "UCIAWhite";
            Visor = "Opaque";
			Type = "ExoAtmo";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelmNP_124B: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Atmo";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelm_124B: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "ExoAtmo"
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelm_Camo124B: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelm_Camo124BM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClosedCamo124B: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124B: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClosedCamo124BM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124BM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_Camo124B: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124B: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_Camo124BM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124BM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
 class TKE_UCMCHelmSkullMask_Camo124B: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmSkullMask_Camo124BM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };



    class TKE_UCNPilotHelmNP_124G: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Atmo";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelm_124G: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "ExoAtmo"
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelm_Camo124G: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelm_Camo124GM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClosedCamo124G: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124G: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClosedCamo124GM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124GM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_Camo124G: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124G: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_Camo124GM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124GM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
 class TKE_UCMCHelmSkullMask_Camo124G: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmSkullMask_Camo124GM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    

    class TKE_UCNPilotHelmNP_124W: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Atmo";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelm_124W: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "ExoAtmo"
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelm_Camo124W: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelm_Camo124WM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClosedCamo124W: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124W: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClosedCamo124WM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124WM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_Camo124W: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124W: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_Camo124WM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124WM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
 class TKE_UCMCHelmSkullMask_Camo124W: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmSkullMask_Camo124WM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
class TKE_UCNPilotHelmNP_Victus: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "274thTS";
            Visor = "Opaque";
            Type = "Atmo";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCNPilotHelm_Victus: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "274thTS";
            Visor = "Opaque";
            Type = "ExoAtmo"
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelm_CamoVictus: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "274thTS";
            Visor = "Opaque";
			Type = "Open";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelmClosedCamoVictus: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "274thTS";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmClearClosedCamoVictus: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "274thTS";
            Visor = "Clear";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
	class TKE_UCMCHelmMask_CamoVictus: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "274thTS";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelmClearMask_CamoVictus: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "274thTS";
            Visor = "Clear";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			IDtag = "None"
		};
	};
    class TKE_UCMCHelm_CamoSOGB: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelm_CamoSOGBM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClosedCamoSOGB: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearClosedCamoSOGB: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClosedCamoSOGBM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearClosedCamoSOGBM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_CamoSOGB: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_CamoSOGB: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_CamoSOGBM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_CamoSOGBM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
 class TKE_UCMCHelmSkullMask_CamoSOGB: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmSkullMask_CamoSOGBM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    
    class TKE_UCMCHelm_CamoSOGG: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelm_CamoSOGGM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClosedCamoSOGG: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearClosedCamoSOGG: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClosedCamoSOGGM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearClosedCamoSOGGM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_CamoSOGG: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_CamoSOGG: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_CamoSOGGM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_CamoSOGGM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
 class TKE_UCMCHelmSkullMask_CamoSOGG: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmSkullMask_CamoSOGGM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelm_CamoSOGW: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelm_CamoSOGWM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClosedCamoSOGW: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearClosedCamoSOGW: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClosedCamoSOGWM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearClosedCamoSOGWM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_CamoSOGW: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_CamoSOGW: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmMask_CamoSOGWM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmClearMask_CamoSOGWM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
 class TKE_UCMCHelmSkullMask_CamoSOGW: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelmSkullMask_CamoSOGWM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_KMCHelmSOGB: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Opaque";
            Type = "KMC";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_KMCHelmSOGBM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Opaque";
            Type = "KMC";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_KMCHelmSOGBT: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Opaque";
            Type = "KMC";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_KMCHelmSOGBMT: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGBlk";
            Visor = "Opaque";
            Type = "KMC";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_KMCHelmSOGW: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Opaque";
            Type = "KMC";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_KMCHelmSOGWM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Opaque";
            Type = "KMC";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_KMCHelmSOGWT: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Opaque";
            Type = "KMC";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_KMCHelmSOGWMT: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGWht";
            Visor = "Opaque";
            Type = "KMC";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_KMCHelmSOGG: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Opaque";
            Type = "KMC";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_KMCHelmSOGGM: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Opaque";
            Type = "KMC";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "None"
        };
    };
    class TKE_KMCHelmSOGGT: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGHrn";
            Visor = "Opaque";
            Type = "KMC";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_KMCHelmSOGGMT: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "SOGGrn";
            Visor = "Opaque";
            Type = "KMC";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "None"
        };
    };
    class TKE_UCMCHelm_Camo124B0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelm_Camo124BM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClosedCamo124B0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124B0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClosedCamo124BM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124BM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmMask_Camo124B0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124B0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmMask_Camo124BM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124BM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
 class TKE_UCMCHelmSkullMask_Camo124B0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmSkullMask_Camo124BM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "0_HQ"
        };
    };

    class TKE_UCMCHelm_Camo124G0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelm_Camo124GM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClosedCamo124G0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124G0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClosedCamo124GM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124GM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmMask_Camo124G0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124G0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmMask_Camo124GM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124GM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
 class TKE_UCMCHelmSkullMask_Camo124G0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmSkullMask_Camo124GM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelm_Camo124W0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelm_Camo124WM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClosedCamo124W0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124W0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClosedCamo124WM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124WM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmMask_Camo124W0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124W0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmMask_Camo124WM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124WM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "0_HQ"
        };
    };
 class TKE_UCMCHelmSkullMask_Camo124W0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "0_HQ"
        };
    };
    class TKE_UCMCHelmSkullMask_Camo124WM0_HQ: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "0_HQ"
        };
    };
     class TKE_UCMCHelm_Camo124B1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelm_Camo124BM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClosedCamo124B1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124B1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClosedCamo124BM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124BM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmMask_Camo124B1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124B1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmMask_Camo124BM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124BM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
 class TKE_UCMCHelmSkullMask_Camo124B1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmSkullMask_Camo124BM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "1_1"
        };
    };


    class TKE_UCMCHelm_Camo124G1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelm_Camo124GM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClosedCamo124G1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124G1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClosedCamo124GM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124GM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmMask_Camo124G1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124G1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmMask_Camo124GM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124GM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
 class TKE_UCMCHelmSkullMask_Camo124G1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmSkullMask_Camo124GM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelm_Camo124W1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelm_Camo124WM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClosedCamo124W1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124W1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClosedCamo124WM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124WM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmMask_Camo124W1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124W1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmMask_Camo124WM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124WM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_1"
        };
    };
 class TKE_UCMCHelmSkullMask_Camo124W1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "1_1"
        };
    };
    class TKE_UCMCHelmSkullMask_Camo124WM1_1: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "1_1"
        };
    };
 class TKE_UCMCHelm_Camo124B1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelm_Camo124BM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClosedCamo124B1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124B1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClosedCamo124BM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124BM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmMask_Camo124B1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124B1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmMask_Camo124BM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124BM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
 class TKE_UCMCHelmSkullMask_Camo124B1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmSkullMask_Camo124BM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Blk";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "1_2"
        };
    };




    class TKE_UCMCHelm_Camo124G1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelm_Camo124GM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClosedCamo124G1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124G1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClosedCamo124GM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124GM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmMask_Camo124G1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124G1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmMask_Camo124GM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124GM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
 class TKE_UCMCHelmSkullMask_Camo124G1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmSkullMask_Camo124GM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Grn";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelm_Camo124W1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Open";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelm_Camo124WM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Open";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClosedCamo124W1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124W1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Closed";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClosedCamo124WM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClearClosedCamo124WM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Closed";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmMask_Camo124W1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmMask_Camo124WM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Medic";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124W1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmClearMask_Camo124WM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Clear";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "No";
            IDtag = "1_2"
        };
    };
 class TKE_UCMCHelmSkullMask_Camo124W1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "No";
            Teeth_Skull = "Yes";
            IDtag = "1_2"
        };
    };
    class TKE_UCMCHelmSkullMask_Camo124WM1_2: 7thFleet_Helmet_stock
    {
        class XtdGearInfo
        {
            model = "7thFleet_Helmet";
            Camo = "124Wht";
            Visor = "Opaque";
            Type = "Mask";
            Medic = "Yes";
            Teeth_Skull = "Yes";
            IDtag = "1_2"
        };
    };

};

