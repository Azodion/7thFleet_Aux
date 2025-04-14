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
			options[] = {"Camo","Type","Visor","Medic","Teeth_Skull"};
			class camo
			{
				values[] = {"33rdCAW","21stMAW","274thTS","7thLunar","7thArid","7thWdl","7thWntr","7thFLT","UCIABlack","UCIAWhite","UCIAGreen","UCIARed","UCIABlue"};
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
				class 7thLunar
				{
					label = "7thLunar";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 7thWdl
				{
					label = "7thWdl";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 7thArid
				{
					label = "7thArid";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 7thWntr
				{
					label = "7thWntr";
					image = "\acex_1MR_Uniforms\Textures\Base.paa";
				};
                class 7thFlt
				{
					label = "7thFlt";
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
        };
    };
};
class CfgWeapons
{
	class 7thFleet_Helmet_stock;
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
			
		};
	};
    class TKE_UCNPilotHelm_33rd: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "33rdCAW";
            Visor = "Opaque";
			Type = "ExoAtmo";
			Medic = "No";
            Teeth_Skull = "No";
			
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
			
		};
	};
    class TKE_UCNPilotHelm_21st: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "21stMAW";
            Visor = "Opaque";
			Type = "ExoAtmo";
			Medic = "No";
            Teeth_Skull = "No";
			
		};
	};
    class TKE_UCMCHelm_Camo7FLT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thFlt";
            Visor = "Opaque";
			Type = "Open";
			Medic = "No";
            Teeth_Skull = "No";
			
		};
	};
	class TKE_UCMCHelm_Camo7FLTM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thFlt";
            Visor = "Opaque";
			Type = "Open";
			Medic = "Yes";
            Teeth_Skull = "No";
			
		};
	};
	class TKE_UCMCHelmClosedCamo7FLT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thFlt";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			
		};
	};
    class TKE_UCMCHelmClearClosedCamo7FLT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thFlt";
            Visor = "Clear";
			Type = "Closed";
			Medic = "No";
            Teeth_Skull = "No";
			
		};
	};
	class TKE_UCMCHelmClosedCamo7FLTM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thFlt";
            Visor = "Opaque";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			
		};
	};
    class TKE_UCMCHelmClearClosedCamo7FLTM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thFlt";
            Visor = "Clear";
			Type = "Closed";
			Medic = "Yes";
            Teeth_Skull = "No";
			
		};
	};
	class TKE_UCMCHelmMask_Camo7FLT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thFlt";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			
		};
	};
    class TKE_UCMCHelmClearMask_Camo7FLT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thFlt";
            Visor = "Clear";
			Type = "Mask";
			Medic = "No";
            Teeth_Skull = "No";
			
		};
	};
	class TKE_UCMCHelmMask_Camo7FLTM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thFlt";
            Visor = "Opaque";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			
		};
	};
    class TKE_UCMCHelmClearMask_Camo7FLTM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thFlt";
            Visor = "Clear";
			Type = "Mask";
			Medic = "Yes";
            Teeth_Skull = "No";
			
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
            
        };
    };
    class TKE_UCMRHelm1MR: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thLunar";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelmClear1MR: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thLunar";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelm1MRM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thLunar";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "Yes";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelmClear1MRM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thLunar";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "Yes";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelm1MRT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thLunar";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "Yes";
		};
	};
class TKE_UCMRHelmClear1MRT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thLunar";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "Yes";
		};
	};
class TKE_UCMRHelm1MRMT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "RdrClosed";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMRHelmClear1MRMT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Clear";
        Type = "RdrClosed";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMRHelmOpen1MR: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMRHelmOpen1MRM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMRHelmOpen1MRT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "No";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMRHelmOpen1MRMT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMCHelm_7thMEF: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "Open";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelm_7thMEFM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "Open";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClosed7thMEF: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "Closed";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClearClosed7thMEF: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Clear";
        Type = "Closed";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClosed7thMEFM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "Closed";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClearClosed7thMEFM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Clear";
        Type = "Closed";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmMask_7thMEF: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmSkullMask_7thMEF: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "No";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMCHelmClearMask_7thMEF: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Clear";
        Type = "Mask";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmMask_7thMEFM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmSkullMask_7thMEFM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMCHelmClearMask_7thMEFM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thLunar";
        Visor = "Clear";
        Type = "Mask";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMRHelm1MRArid: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thArid";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelmClear1MRArid: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thArid";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelm1MRAridM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thArid";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "Yes";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelmClear1MRAridM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thArid";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "Yes";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelm1MRAridT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thArid";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "Yes";
		};
	};
class TKE_UCMRHelmClear1MRAridT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thArid";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "Yes";
		};
	};
class TKE_UCMRHelm1MRAridMT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "RdrClosed";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMRHelmClear1MRAridMT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Clear";
        Type = "RdrClosed";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMRHelmOpen1MRArid: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMRHelmOpen1MRAridM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMRHelmOpen1MRAridT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "No";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMRHelmOpen1MRAridMT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMCHelm_7thMEFArid: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "Open";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelm_7thMEFAridM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "Open";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClosed7thMEFArid: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "Closed";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClearClosed7thMEFArid: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Clear";
        Type = "Closed";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClosed7thMEFAridM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "Closed";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClearClosed7thMEFAridM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Clear";
        Type = "Closed";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmMask_7thMEFArid: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmSkullMask_7thMEFArid: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "No";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMCHelmClearMask_7thMEFArid: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Clear";
        Type = "Mask";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmMask_7thMEFAridM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmSkullMask_7thMEFAridM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMCHelmClearMask_7thMEFAridM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thArid";
        Visor = "Clear";
        Type = "Mask";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMRHelm1MRWdl: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thWdl";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelmClear1MRWdl: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thWdl";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelm1MRWdlM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thWdl";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "Yes";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelmClear1MRWdlM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thWdl";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "Yes";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelm1MRWdlT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thWdl";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "Yes";
		};
	};
class TKE_UCMRHelmClear1MRWdlT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thWdl";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "Yes";
		};
	};
class TKE_UCMRHelm1MRWdlMT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "RdrClosed";
        Medic = "No";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMRHelmClear1MRWdlMT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Clear";
        Type = "RdrClosed";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMRHelmOpen1MRWdl: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMRHelmOpen1MRWdlM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMRHelmOpen1MRWdlT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "No";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMRHelmOpen1MRWdlMT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMCHelm_7thMEFWdl: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "Open";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelm_7thMEFWdlM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "Open";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClosed7thMEFWdl: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "Closed";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClearClosed7thMEFWdl: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Clear";
        Type = "Closed";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClosed7thMEFWdlM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "Closed";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClearClosed7thMEFWdlM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Clear";
        Type = "Closed";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmMask_7thMEFWdl: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmSkullMask_7thMEFWdl: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "No";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMCHelmClearMask_7thMEFWdl: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Clear";
        Type = "Mask";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmMask_7thMEFWdlM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmSkullMask_7thMEFWdlM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMCHelmClearMask_7thMEFWdlM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWdl";
        Visor = "Clear";
        Type = "Mask";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMRHelm1MRWntr: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thWntr";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelmClear1MRWntr: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thWntr";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelm1MRWntrM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thWntr";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "Yes";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelmClear1MRWntrM: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thWntr";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "Yes";
            Teeth_Skull = "No";
		};
	};
class TKE_UCMRHelm1MRWntrT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thWntr";
            Visor = "Opaque";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "Yes";
		};
	};
class TKE_UCMRHelmClear1MRWntrT: 7thFleet_Helmet_stock
	{
		class XtdGearInfo
		{
			model = "7thFleet_Helmet";
			Camo = "7thWntr";
            Visor = "Clear";
			Type = "RdrClosed";
			Medic = "No";
            Teeth_Skull = "Yes";
		};
	};
class TKE_UCMRHelm1MRWntrMT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "RdrClosed";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMRHelmClear1MRWntrMT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Clear";
        Type = "RdrClosed";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMRHelmOpen1MRWntr: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMRHelmOpen1MRWntrM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMRHelmOpen1MRWntrT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "No";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMRHelmOpen1MRWntrMT: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "RdrOpen";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMCHelm_7thMEFWntr: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "Open";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelm_7thMEFWntrM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "Open";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClosed7thMEFWntr: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "Closed";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClearClosed7thMEFWntr: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Clear";
        Type = "Closed";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClosed7thMEFWntrM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "Closed";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmClearClosed7thMEFWntrM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Clear";
        Type = "Closed";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmMask_7thMEFWntr: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmSkullMask_7thMEFWntr: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "No";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMCHelmClearMask_7thMEFWntr: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Clear";
        Type = "Mask";
        Medic = "No";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmMask_7thMEFWntrM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "Yes";
        Teeth_Skull = "No";
    };
};
class TKE_UCMCHelmSkullMask_7thMEFWntrM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Opaque";
        Type = "Mask";
        Medic = "Yes";
        Teeth_Skull = "Yes";
    };
};
class TKE_UCMCHelmClearMask_7thMEFWntrM: 7thFleet_Helmet_stock
{
    class XtdGearInfo
    {
        model = "7thFleet_Helmet";
        Camo = "7thWntr";
        Visor = "Clear";
        Type = "Mask";
        Medic = "Yes";
        Teeth_Skull = "No";
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
		};
	};
};

