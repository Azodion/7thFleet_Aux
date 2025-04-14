////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 09 16:52:22 2023 : 'file' last modified on Tue Oct 18 19:53:08 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 1MR_Headgear
	{
		units[] = {};
		vehicles[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class cfgWeapons
{
	class ItemCore;
	class ItemInfo;
    class H_HelmetB: ItemCore
    {
    class ItemInfo;
    };
	class 7thFleet_Helmet: H_HelmetB
	{
	};
	class TKE_UCMCHelm_Press: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] ACH 22/50 (Light)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmPress_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
		hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 2.5;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClosedPress: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] ACH 22/50 (Closed)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmPress_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlatePress_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClosedPress_dp: TKE_UCMCHelmClosedPress
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearClosedPress: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] ACH 22/50 (Closed Clear)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmPress_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlatePress_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClearClosedPress_dp: TKE_UCMCHelmClearClosedPress
    {
        scope = 1;
    };
	class TKE_UCNPilotHelmNP_33rd: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] 33rd CAW A-ACH 22/50";
		picture = "\1MR_Uniforms\Textures\33rdCAWpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm33rd_co.paa","\1MR_Uniforms\Textures\TKE_UCNPilotHelm33rd_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCNPilotHelmNP_33rd_dp: TKE_UCNPilotHelmNP_33rd
    {
        scope = 1;
    };
    class TKE_UCNPilotHelm_33rd: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] 33rd CAW EA-ACH 22/50";
		picture = "\1MR_Uniforms\Textures\33rdCAWpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm33rd_co.paa","\1MR_Uniforms\Textures\TKE_UCNPilotHelm33rd_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCNPilotHelm_33rd_dp: TKE_UCNPilotHelm_33rd
    {
        scope = 1;
    };
	class TKE_UCNPilotHelmNP_21st: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] 21st MAW A-ACH 22/50";
		picture = "\1MR_Uniforms\Textures\21stMAWpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm21st_co.paa","\1MR_Uniforms\Textures\TKE_UCNPilotHelm21st_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCNPilotHelmNP_21st_dp: TKE_UCNPilotHelmNP_21st
    {
        scope = 1;
    };
    class TKE_UCNPilotHelm_21st: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] 21st MAW EA-ACH 22/50";
		picture = "\1MR_Uniforms\Textures\21stMAWpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm21st_co.paa","\1MR_Uniforms\Textures\TKE_UCNPilotHelm21st_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCNPilotHelm_21st_dp: TKE_UCNPilotHelm_21st
    {
        scope = 1;
    };
     class TKE_UCMCHelm_Camo7FLT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","",""};
		displayName = "[7th Fleet] Navy Helmet (Light)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLT_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
		hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 2.5;
					passThrough = 0.5;
				};
			};
		};
	};
	class TKE_UCMCHelm_Camo7FLTM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","",""};
		displayName = "[7th Fleet] Navy Helmet (Light, Medic)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLTM_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
		hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 2.5;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClosedCamo7FLT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] Navy Helmet (Closed)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlateNavy_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClosedCamo7FLT_dp: TKE_UCMCHelmClosedCamo7FLT
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearClosedCamo7FLT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] Navy Helmet (Clear, Closed)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlateNavy_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClearClosedCamo7FLT_dp: TKE_UCMCHelmClearClosedCamo7FLT
    {
        scope = 1;
    };
    class TKE_UCMCHelmClosedCamo7FLTM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] Navy Helmet (Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLTM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlateNavy_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClosedCamo7FLTM_dp: TKE_UCMCHelmClosedCamo7FLTM
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearClosedCamo7FLTM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] Navy Helmet (Clear, Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLTM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlateNavy_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClearClosedCamo7FLTM_dp: TKE_UCMCHelmClearClosedCamo7FLTM
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_Camo7FLT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] Navy Helmet (Mask)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmMask_Camo7FLT_dp: TKE_UCMCHelmMask_Camo7FLT
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_Camo7FLT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] Navy Helmet (Clear Mask)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClearMask_Camo7FLT_dp: TKE_UCMCHelmClearMask_Camo7FLT
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_Camo7FLTM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] Navy Helmet (Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLTM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmMask_Camo7FLTM_dp: TKE_UCMCHelmMask_Camo7FLTM
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_Camo7FLTM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] Navy Helmet (Clear Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLTM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClearMask_Camo7FLTM_dp: TKE_UCMCHelmClearMask_Camo7FLTM
    {
        scope = 1;
    };
	class TKE_UCIAHelm: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","",""};
		displayName = "[7th Fleet] UCIA ACH 22/50 (Black, Light)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelm_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
		hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 2.5;
					passThrough = 0.5;
				};
			};
		};
	};
	class TKE_UCIAHelmClosed: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] UCIA ACH 22/50 (Black, Closed)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelm_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPlate_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCIAHelmClosed_dp: TKE_UCIAHelmClosed
    {
        scope = 1;
    };
    class TKE_UCIAHelmClearClosed: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] UCIA ACH 22/50 (Black, Clear, Closed)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelm_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCIAPlate_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCIAHelmClearClosed_dp: TKE_UCIAHelmClearClosed
    {
        scope = 1;
    };
	class TKE_UCMCHelmMask_CamoUCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] UCIA ACH 22/50 (Black, Mask)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelm_co.paa","\1MR_Uniforms\Textures\TKE_UCIAVisor_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmMask_CamoUCIA_dp: TKE_UCMCHelmMask_CamoUCIA
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_CamoUCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] UCIA ACH 22/50 (Black, Clear Mask)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelm_co.paa","\1MR_Uniforms\Textures\TKE_UCIAVisor_ca.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClearMask_CamoUCIA_dp: TKE_UCMCHelmClearMask_CamoUCIA
    {
        scope = 1;
    };
	class TKE_UCMRHelmUCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] UCIA MRACH 22/50 (Black)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelm_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmR_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMRHelmUCIA_dp: TKE_UCMRHelmUCIA
    {
        scope = 1;
    };
    class TKE_UCMRHelmClearUCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] UCIA MRACH 22/50 (Black, Clear)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelm_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMRHelmClearUCIA_dp: TKE_UCMRHelmClearUCIA
    {
        scope = 1;
    };
	class TKE_UCMRHelmOpenUCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","",""};
		optreHUDStyle = "";
		displayName = "[7th Fleet] UCIA MRACH 22/50 (Black, Open)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelm_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmR_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class TKE_UCNPilotHelmNP_UCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] UCIA A-ACH 22/50";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelm_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPilotHelm_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCNPilotHelmNP_UCIA_dp: TKE_UCNPilotHelmNP_UCIA
    {
        scope = 1;
    };
	class TKE_UCNPilotHelm_UCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] UCIA EA-ACH 22/50";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelm_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPilotHelm_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCNPilotHelm_UCIA_dp: TKE_UCNPilotHelm_UCIA
    {
        scope = 1;
    };
    class TKE_UCIAHelmGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","",""};
        displayName = "[7th Fleet] UCIA ACH 22/50 (Green, Light)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 2.5;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCIAHelmClosedGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (Green, Closed)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPlateGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCIAHelmClosedGreen_dp: TKE_UCIAHelmClosedGreen
    {
        scope = 1;
    };
    class TKE_UCIAHelmClearClosedGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (Green, Clear, Closed)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCIAPlateGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCIAHelmClearClosedGreen_dp: TKE_UCIAHelmClearClosedGreen
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_CamoUCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (Green, Mask)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmGreen_co.paa","\1MR_Uniforms\Textures\TKE_UCIAVisor_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmMask_CamoUCIAGreen_dp: TKE_UCMCHelmMask_CamoUCIAGreen
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_CamoUCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (Green, Clear Mask)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmGreen_co.paa","\1MR_Uniforms\Textures\TKE_UCIAVisor_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearMask_CamoUCIAGreen_dp: TKE_UCMCHelmClearMask_CamoUCIAGreen
    {
        scope = 1;
    };
    class TKE_UCMRHelmUCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA MRACH 22/50 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmGreen_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmRGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmUCIAGreen_dp: TKE_UCMRHelmUCIAGreen
    {
        scope = 1;
    };
    class TKE_UCMRHelmClearUCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA MRACH 22/50 (Green, Clear)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmGreen_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmRGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClearUCIAGreen_dp: TKE_UCMRHelmClearUCIAGreen
    {
        scope = 1;
    };
    class TKE_UCMRHelmOpenUCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","",""};
		optreHUDStyle = "";
        displayName = "[7th Fleet] UCIA MRACH 22/50 (Green, Open)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmGreen_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmRGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelmNP_UCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA A-ACH 22/50 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmGreen_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPilotHelmGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelmNP_UCIAGreen_dp: TKE_UCNPilotHelmNP_UCIAGreen
    {
        scope = 1;
    };
    class TKE_UCNPilotHelm_UCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA EA-ACH 22/50 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmGreen_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPilotHelmGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelm_UCIAGreen_dp: TKE_UCNPilotHelm_UCIAGreen
    {
        scope = 1;
    };
class TKE_UCIAHelmBlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","",""};
        displayName = "[7th Fleet] UCIA ACH 22/50 (Blue, Light)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmBlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 2.5;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCIAHelmClosedBlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (Blue, Closed)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmBlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPlateBlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCIAHelmClosedBlue_dp: TKE_UCIAHelmClosedBlue
    {
        scope = 1;
    };
    class TKE_UCIAHelmClearClosedBlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (Blue, Clear, Closed)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmBlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCIAPlateBlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCIAHelmClearClosedBlue_dp: TKE_UCIAHelmClearClosedBlue
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_CamoUCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (Blue, Mask)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmBlue_co.paa","\1MR_Uniforms\Textures\TKE_UCIAVisor_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmMask_CamoUCIABlue_dp: TKE_UCMCHelmMask_CamoUCIABlue
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_CamoUCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (Blue, Clear Mask)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmBlue_co.paa","\1MR_Uniforms\Textures\TKE_UCIAVisor_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearMask_CamoUCIABlue_dp: TKE_UCMCHelmClearMask_CamoUCIABlue
    {
        scope = 1;
    };
    class TKE_UCMRHelmUCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA MRACH 22/50 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmBlue_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmRBlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmUCIABlue_dp: TKE_UCMRHelmUCIABlue
    {
        scope = 1;
    };
    class TKE_UCMRHelmClearUCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA MRACH 22/50 (Blue, Clear)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmBlue_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmRBlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClearUCIABlue_dp: TKE_UCMRHelmClearUCIABlue
    {
        scope = 1;
    };
    class TKE_UCMRHelmOpenUCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","",""};
		optreHUDStyle = "";
        displayName = "[7th Fleet] UCIA MRACH 22/50 (Blue, Open)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmBlue_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmRBlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelmNP_UCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA A-ACH 22/50 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmBlue_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPilotHelmBlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelmNP_UCIABlue_dp: TKE_UCNPilotHelmNP_UCIABlue
    {
        scope = 1;
    };
    class TKE_UCNPilotHelm_UCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA EA-ACH 22/50 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmBlue_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPilotHelmBlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelm_UCIABlue_dp: TKE_UCNPilotHelm_UCIABlue
    {
        scope = 1;
    };
class TKE_UCIAHelmRed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","",""};
        displayName = "[7th Fleet] UCIA ACH 22/50 (Red, Light)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmRed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 2.5;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCIAHelmClosedRed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (Red, Closed)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmRed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPlateRed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCIAHelmClosedRed_dp: TKE_UCIAHelmClosedRed
    {
        scope = 1;
    };
    class TKE_UCIAHelmClearClosedRed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (Red, Clear, Closed)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmRed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCIAPlateRed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCIAHelmClearClosedRed_dp: TKE_UCIAHelmClearClosedRed
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_CamoUCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (Red, Mask)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmRed_co.paa","\1MR_Uniforms\Textures\TKE_UCIAVisor_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmMask_CamoUCIARed_dp: TKE_UCMCHelmMask_CamoUCIARed
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_CamoUCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (Red, Clear Mask)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmRed_co.paa","\1MR_Uniforms\Textures\TKE_UCIAVisor_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearMask_CamoUCIARed_dp: TKE_UCMCHelmClearMask_CamoUCIARed
    {
        scope = 1;
    };
    class TKE_UCMRHelmUCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA MRACH 22/50 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmRed_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmRRed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmUCIARed_dp: TKE_UCMRHelmUCIARed
    {
        scope = 1;
    };
    class TKE_UCMRHelmClearUCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA MRACH 22/50 (Red, Clear)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmRed_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmRRed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClearUCIARed_dp: TKE_UCMRHelmClearUCIARed
    {
        scope = 1;
    };
    class TKE_UCMRHelmOpenUCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","",""};
		optreHUDStyle = "";
        displayName = "[7th Fleet] UCIA MRACH 22/50 (Red, Open)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmRed_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmRRed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelmNP_UCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA A-ACH 22/50 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmRed_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPilotHelmRed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelmNP_UCIARed_dp: TKE_UCNPilotHelmNP_UCIARed
    {
        scope = 1;
    };
    class TKE_UCNPilotHelm_UCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA EA-ACH 22/50 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmRed_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPilotHelmRed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelm_UCIARed_dp: TKE_UCNPilotHelm_UCIARed
    {
        scope = 1;
    };
class TKE_UCIAHelmWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","",""};
        displayName = "[7th Fleet] UCIA ACH 22/50 (White, Light)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 2.5;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCIAHelmClosedWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (White, Closed)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPlateWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCIAHelmClosedWhite_dp: TKE_UCIAHelmClosedWhite
    {
        scope = 1;
    };
    class TKE_UCIAHelmClearClosedWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (White, Clear, Closed)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCIAPlateWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCIAHelmClearClosedWhite_dp: TKE_UCIAHelmClearClosedWhite
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_CamoUCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (White, Mask)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmWhite_co.paa","\1MR_Uniforms\Textures\TKE_UCIAVisor_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmMask_CamoUCIAWhite_dp: TKE_UCMCHelmMask_CamoUCIAWhite
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_CamoUCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA ACH 22/50 (White, Clear Mask)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmWhite_co.paa","\1MR_Uniforms\Textures\TKE_UCIAVisor_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearMask_CamoUCIAWhite_dp: TKE_UCMCHelmClearMask_CamoUCIAWhite
    {
        scope = 1;
    };
    class TKE_UCMRHelmUCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA MRACH 22/50 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmWhite_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmRWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmUCIAWhite_dp: TKE_UCMRHelmUCIAWhite
    {
        scope = 1;
    };
    class TKE_UCMRHelmClearUCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA MRACH 22/50 (White, Clear)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmWhite_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmRWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClearUCIAWhite_dp: TKE_UCMRHelmClearUCIAWhite
    {
        scope = 1;
    };
    class TKE_UCMRHelmOpenUCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","",""};
		optreHUDStyle = "";
        displayName = "[7th Fleet] UCIA MRACH 22/50 (White, Open)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmWhite_co.paa","\1MR_Uniforms\Textures\TKE_UCIAHelmRWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelmNP_UCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA A-ACH 22/50 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmWhite_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPilotHelmWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelmNP_UCIAWhite_dp: TKE_UCNPilotHelmNP_UCIAWhite
    {
        scope = 1;
    };
    class TKE_UCNPilotHelm_UCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] UCIA EA-ACH 22/50 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAHelmWhite_co.paa","\1MR_Uniforms\Textures\TKE_UCIAPilotHelmWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelm_UCIAWhite_dp: TKE_UCNPilotHelm_UCIAWhite
    {
        scope = 1;
    };

    class TKE_UCMRHelm1MR: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MR_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MR_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MR_dp: TKE_UCMRHelm1MR
    {
        scope = 1;
    };
    class TKE_UCMRHelmClear1MR: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Clear)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MR_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MR_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MR_dp: TKE_UCMRHelmClear1MR
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MR_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRM_dp: TKE_UCMRHelm1MRM
    {
        scope = 1;
    };
     class TKE_UCMRHelmClear1MRM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Clear, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MR_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRM_dp: TKE_UCMRHelmClear1MRM
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MR_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRT_dp: TKE_UCMRHelm1MRT
    {
        scope = 1;
    };
    class TKE_UCMRHelmClear1MRT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Clear, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MR_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRTeeth_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRT_dp: TKE_UCMRHelmClear1MRT
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRMT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRMT_dp: TKE_UCMRHelm1MRMT
    {
        scope = 1;
    };
    class TKE_UCMRHelmClear1MRMT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Clear, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRTeeth_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRMT_dp: TKE_UCMRHelmClear1MRMT
    {
        scope = 1;
    };
    class TKE_UCMRHelmOpen1MR: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Open)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MR_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MR_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmOpen1MRM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Open, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MR_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmOpen1MRT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Open, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MR_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";    
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmOpen1MRMT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Open, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
class TKE_UCMCHelm_7thMEF: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","",""};
        displayName = "[7th Fleet] ACH 22/50 (Light)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEF_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 2.5;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelm_7thMEFM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
        displayName = "[7th Fleet] ACH 22/50 (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFM_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 2.5;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClosed7thMEF: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Closed)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEF_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHex_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEF_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClosed7thMEF_dp: TKE_UCMCHelmClosed7thMEF
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearClosed7thMEF: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Clear, Closed)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEF_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHexV2_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEF_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearClosed7thMEF_dp: TKE_UCMCHelmClearClosed7thMEF
    {
        scope = 1;
    };
    class TKE_UCMCHelmClosed7thMEFM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHex_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEF_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClosed7thMEFM_dp: TKE_UCMCHelmClosed7thMEFM
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearClosed7thMEFM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Clear, Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHexV2_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEF_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearClosed7thMEFM_dp: TKE_UCMCHelmClearClosed7thMEFM
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_7thMEF: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Mask)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEF_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHex_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmMask_7thMEF_dp: TKE_UCMCHelmMask_7thMEF
    {
        scope = 1;
    };
    class TKE_UCMCHelmSkullMask_7thMEF: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmSkullMask_7thMEF_dp: TKE_UCMCHelmSkullMask_7thMEF
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_7thMEF: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEF_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHexV2_ca"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearMask_7thMEF_dp: TKE_UCMCHelmClearMask_7thMEF
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_7thMEFM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHex_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmMask_7thMEFM_dp: TKE_UCMCHelmMask_7thMEFM
    {
        scope = 1;
    };
    class TKE_UCMCHelmSkullMask_7thMEFM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmSkullMask_7thMEFM_dp: TKE_UCMCHelmSkullMask_7thMEFM
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_7thMEFM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHexV2_ca"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearMask_7thMEFM_dp: TKE_UCMCHelmClearMask_7thMEFM
    {
        scope = 1;
    };
class TKE_UCMRHelm1MRArid: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRArid_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRArid_dp: TKE_UCMRHelm1MRArid
    {
        scope = 1;
    };
    class TKE_UCMRHelmClear1MRArid: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Arid, Clear)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRArid_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRArid_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRArid_dp: TKE_UCMRHelmClear1MR
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRAridM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Arid, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRAridM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRAridM_dp: TKE_UCMRHelm1MRAridM
    {
        scope = 1;
    };
     class TKE_UCMRHelmClear1MRAridM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Arid, Clear, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRAridM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRArid_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRAridM_dp: TKE_UCMRHelmClear1MRAridM
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRAridT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Arid, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRArid_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRAridTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRAridT_dp: TKE_UCMRHelm1MRT
    {
        scope = 1;
    };
    class TKE_UCMRHelmClear1MRAridT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Arid, Clear, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRArid_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRAridTeeth_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRAridT_dp: TKE_UCMRHelmClear1MRAridT
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRAridMT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Arid, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRAridM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRAridTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRAridMT_dp: TKE_UCMRHelm1MRAridMT
    {
        scope = 1;
    };
    class TKE_UCMRHelmClear1MRAridMT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Arid, Clear, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRAridM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRAridTeeth_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRAridMT_dp: TKE_UCMRHelmClear1MRAridMT
    {
        scope = 1;
    };
    class TKE_UCMRHelmOpen1MRArid: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Arid, Open)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRArid_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmOpen1MRAridM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Arid, Open, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRAridM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmOpen1MRAridT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Arid, Open, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRArid_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRAridTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";    
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmOpen1MRAridMT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Arid, Open, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRAridM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRAridTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
class TKE_UCMCHelm_7thMEFArid: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","",""};
        displayName = "[7th Fleet] ACH 22/50 (Arid, Light)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 2.5;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelm_7thMEFAridM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
        displayName = "[7th Fleet] ACH 22/50 (Arid, Light, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFAridM_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 2.5;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClosed7thMEFArid: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Arid, Closed)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFArid_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHex_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEFArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClosed7thMEFArid_dp: TKE_UCMCHelmClosed7thMEFArid
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearClosed7thMEFArid: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Arid, Clear, Closed)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFArid_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHexV2_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEFArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearClosed7thMEFArid_dp: TKE_UCMCHelmClearClosed7thMEFArid
    {
        scope = 1;
    };
    class TKE_UCMCHelmClosed7thMEFAridM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Arid, Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFAridM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHex_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEFArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClosed7thMEFAridM_dp: TKE_UCMCHelmClosed7thMEFAridM
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearClosed7thMEFAridM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Arid, Clear, Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFAridM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHexV2_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEFArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearClosed7thMEFAridM_dp: TKE_UCMCHelmClearClosed7thMEFAridM
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_7thMEFArid: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Arid, Mask)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFArid_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHex_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmMask_7thMEFArid_dp: TKE_UCMCHelmMask_7thMEFArid
    {
        scope = 1;
    };
    class TKE_UCMCHelmSkullMask_7thMEFArid: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Arid, Skull Mask)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmSkullMask_7thMEFArid_dp: TKE_UCMCHelmSkullMask_7thMEFArid
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_7thMEFArid: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Arid, Clear Mask)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFArid_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHexV2_ca"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearMask_7thMEFArid_dp: TKE_UCMCHelmClearMask_7thMEFArid
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_7thMEFAridM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Arid, Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFAridM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHex_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmMask_7thMEFAridM_dp: TKE_UCMCHelmMask_7thMEFM
    {
        scope = 1;
    };
    class TKE_UCMCHelmSkullMask_7thMEFAridM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Arid, Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFAridM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmSkullMask_7thMEFAridM_dp: TKE_UCMCHelmSkullMask_7thMEFAridM
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_7thMEFAridM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Arid, Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFAridM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHexV2_ca"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearMask_7thMEFAridM_dp: TKE_UCMCHelmClearMask_7thMEFAridM
    {
        scope = 1;
    };
    
    class TKE_UCMRHelm1MRWdl: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWdl_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRWdl_dp: TKE_UCMRHelm1MRWdl
    {
        scope = 1;
    };
    class TKE_UCMRHelmClear1MRWdl: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Woodland, Clear)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWdl_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWdl_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRWdl_dp: TKE_UCMRHelmClear1MR
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRWdlM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Woodland, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWdlM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRWdlM_dp: TKE_UCMRHelm1MRWdlM
    {
        scope = 1;
    };
     class TKE_UCMRHelmClear1MRWdlM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Woodland, Clear, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWdlM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmWdl1MR_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRWdlM_dp: TKE_UCMRHelmClear1MRWdlM
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRWdlT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Woodland, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWdl_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWdlTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRWdlT_dp: TKE_UCMRHelm1MRT
    {
        scope = 1;
    };
    class TKE_UCMRHelmClear1MRWdlT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Woodland, Clear, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWdl_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWdlTeeth_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRWdlT_dp: TKE_UCMRHelmClear1MRWdlT
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRWdlMT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Woodland, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWdlM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWdlTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRWdlMT_dp: TKE_UCMRHelm1MRWdlMT
    {
        scope = 1;
    };
    class TKE_UCMRHelmClear1MRWdlMT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Woodland, Clear, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWdlM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWdlTeeth_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRWdlMT_dp: TKE_UCMRHelmClear1MRWdlMT
    {
        scope = 1;
    };
    class TKE_UCMRHelmOpen1MRWdl: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Woodland, Open)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWdl_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmOpen1MRWdlM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Woodland, Open, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWdlM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmOpen1MRWdlT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Woodland, Open, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWdl_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWdlTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";    
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmOpen1MRWdlMT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Woodland, Open, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWdlM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWdlTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
class TKE_UCMCHelm_7thMEFWdl: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","",""};
        displayName = "[7th Fleet] ACH 22/50 (Woodland, Light)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 2.5;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelm_7thMEFWdlM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
        displayName = "[7th Fleet] ACH 22/50 (Woodland, Light, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWdlM_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 2.5;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClosed7thMEFWdl: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Woodland, Closed)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWdl_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHex_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEFWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClosed7thMEFWdl_dp: TKE_UCMCHelmClosed7thMEFWdl
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearClosed7thMEFWdl: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Woodland, Clear, Closed)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWdl_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHexV2_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEFWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearClosed7thMEFWdl_dp: TKE_UCMCHelmClearClosed7thMEFWdl
    {
        scope = 1;
    };
    class TKE_UCMCHelmClosed7thMEFWdlM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Woodland, Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWdlM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHex_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEFWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClosed7thMEFWdlM_dp: TKE_UCMCHelmClosed7thMEFWdlM
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearClosed7thMEFWdlM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Woodland, Clear, Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWdlM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHexV2_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEFWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearClosed7thMEFWdlM_dp: TKE_UCMCHelmClearClosed7thMEFWdlM
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_7thMEFWdl: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Woodland, Mask)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWdl_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHex_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmMask_7thMEFWdl_dp: TKE_UCMCHelmMask_7thMEFWdl
    {
        scope = 1;
    };
    class TKE_UCMCHelmSkullMask_7thMEFWdl: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Woodland, Skull Mask)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmSkullMask_7thMEFWdl_dp: TKE_UCMCHelmSkullMask_7thMEFWdl
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_7thMEFWdl: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Woodland, Clear Mask)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWdl_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHexV2_ca"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearMask_7thMEFWdl_dp: TKE_UCMCHelmClearMask_7thMEFWdl
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_7thMEFWdlM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Woodland, Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWdlM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHex_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmMask_7thMEFWdlM_dp: TKE_UCMCHelmMask_7thMEFM
    {
        scope = 1;
    };
    class TKE_UCMCHelmSkullMask_7thMEFWdlM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Woodland, Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWdlM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmSkullMask_7thMEFWdlM_dp: TKE_UCMCHelmSkullMask_7thMEFWdlM
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_7thMEFWdlM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Woodland, Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWdlM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHexV2_ca"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearMask_7thMEFWdlM_dp: TKE_UCMCHelmClearMask_7thMEFWdlM
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRWntr: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWntr_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRWntr_dp: TKE_UCMRHelm1MRWntr
    {
        scope = 1;
    };
    class TKE_UCMRHelmClear1MRWntr: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Winter, Clear)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWntr_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWntr_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRWntr_dp: TKE_UCMRHelmClear1MR
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRWntrM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Winter, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWntrM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRWntrM_dp: TKE_UCMRHelm1MRWntrM
    {
        scope = 1;
    };
     class TKE_UCMRHelmClear1MRWntrM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Winter, Clear, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWntrM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWntr_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRWntrM_dp: TKE_UCMRHelmClear1MRWntrM
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRWntrT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Winter, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWntr_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWntrTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRWntrT_dp: TKE_UCMRHelm1MRT
    {
        scope = 1;
    };
    class TKE_UCMRHelmClear1MRWntrT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Winter, Clear, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWntr_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWntrTeeth_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRWntrT_dp: TKE_UCMRHelmClear1MRWntrT
    {
        scope = 1;
    };
    class TKE_UCMRHelm1MRWntrMT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Winter, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWntrM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWntrTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelm1MRWntrMT_dp: TKE_UCMRHelm1MRWntrMT
    {
        scope = 1;
    };
    class TKE_UCMRHelmClear1MRWntrMT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] MRACH 22/50 (Winter, Clear, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWntrM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWntrTeeth_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelmHexV2_ca.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmClear1MRWntrMT_dp: TKE_UCMRHelmClear1MRWntrMT
    {
        scope = 1;
    };
    class TKE_UCMRHelmOpen1MRWntr: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Winter, Open)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWntr_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmOpen1MRWntrM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Winter, Open, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWntrM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmOpen1MRWntrT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Winter, Open, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWntr_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWntrTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";    
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMRHelmOpen1MRWntrMT: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"","",""};
        optreHUDStyle = "";
        displayName = "[7th Fleet] MRACH 22/50 (Winter, Open, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1MRWntrM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1MRWntrTeeth_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMRHelmOpen.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
class TKE_UCMCHelm_7thMEFWntr: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","",""};
        displayName = "[7th Fleet] ACH 22/50 (Winter, Light)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 2.5;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelm_7thMEFWntrM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
        displayName = "[7th Fleet] ACH 22/50 (Winter, Light, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWntrM_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 2.5;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClosed7thMEFWntr: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Winter, Closed)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWntr_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHex_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEFWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClosed7thMEFWntr_dp: TKE_UCMCHelmClosed7thMEFWntr
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearClosed7thMEFWntr: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Winter, Clear, Closed)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWntr_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHexV2_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEFWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearClosed7thMEFWntr_dp: TKE_UCMCHelmClearClosed7thMEFWntr
    {
        scope = 1;
    };
    class TKE_UCMCHelmClosed7thMEFWntrM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Winter, Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWntrM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHex_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEFWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClosed7thMEFWntrM_dp: TKE_UCMCHelmClosed7thMEFWntrM
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearClosed7thMEFWntrM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Winter, Clear, Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWntrM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCHUDHexV2_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate7thMEFWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearClosed7thMEFWntrM_dp: TKE_UCMCHelmClearClosed7thMEFWntrM
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_7thMEFWntr: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Winter, Mask)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWntr_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHex_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmMask_7thMEFWntr_dp: TKE_UCMCHelmMask_7thMEFWntr
    {
        scope = 1;
    };
    class TKE_UCMCHelmSkullMask_7thMEFWntr: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Winter, Skull Mask)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmSkullMask_7thMEFWntr_dp: TKE_UCMCHelmSkullMask_7thMEFWntr
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_7thMEFWntr: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Winter, Clear Mask)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWntr_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHexV2_ca"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearMask_7thMEFWntr_dp: TKE_UCMCHelmClearMask_7thMEFWntr
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_7thMEFWntrM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Winter, Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWntrM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHex_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmMask_7thMEFWntrM_dp: TKE_UCMCHelmMask_7thMEFM
    {
        scope = 1;
    };
    class TKE_UCMCHelmSkullMask_7thMEFWntrM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Winter, Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWntrM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmSkullMask_7thMEFWntrM_dp: TKE_UCMCHelmSkullMask_7thMEFWntrM
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_7thMEFWntrM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] ACH 22/50 (Winter, Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7thMEFWntrM_co.paa","\1MR_Uniforms\Textures\TKE_UCMCVisorHexV2_ca"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCMCHelmClearMask_7thMEFWntrM_dp: TKE_UCMCHelmClearMask_7thMEFWntrM
    {
        scope = 1;
    };
    class TKE_UCNPilotHelmNP_Victus: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] 274th TS Atmospheric Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmVictus_co.paa","\1MR_Uniforms\Textures\TKE_VictusPilotHelm_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelmNP.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_UCNPilotHelmNP_Victus_dp: TKE_UCNPilotHelmNP_Victus
    {
        scope = 1;
    };
    class TKE_UCNPilotHelm_Victus: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        displayName = "[7th Fleet] 274th TS Exo Atmospheric Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmVictus_co.paa","\1MR_Uniforms\Textures\TKE_VictusPilotHelm_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
        hiddenSelections[] = {"camo","camo1"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNPilotHelm.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo","camo1"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.3;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
     class TKE_UCNPilotHelm_Victus_dp: TKE_UCNPilotHelm_Victus
    {
        scope = 1;
    };
	class TKE_UCMCHelm_CamoVictus: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] 274th TS Helmet (Light)";
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmVictus_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
		hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelm.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 2.5;
					passThrough = 0.5;
				};
			};
		};
	};
    
    class TKE_UCMCHelmClosedCamoVictus: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] 274th TS Helmet (Closed)";
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlateNavy_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosed.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClosedCamoVictus_dp: TKE_UCMCHelmClosedCamoVictus
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearClosedCamoVictus: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] 274th TS Helmet (Clear Closed)";
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlateNavy_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmClosedV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClearClosedCamoVictus_dp: TKE_UCMCHelmClearClosedCamoVictus
    {
        scope = 1;
    };
    class TKE_UCMCHelmMask_CamoVictus: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] 274th TS Helmet (Mask)";
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmMask_CamoVictus_dp: TKE_UCMCHelmClearClosedCamoVictus
    {
        scope = 1;
    };
    class TKE_UCMCHelmClearMask_CamoVictus: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
		displayName = "[7th Fleet] 274th TS Helmet (Clear Mask)";
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMaskV2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.3;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_UCMCHelmClearMask_CamoVictus_dp: TKE_UCMCHelmClearMask_CamoVictus
    {
        scope = 1;
    };
};
