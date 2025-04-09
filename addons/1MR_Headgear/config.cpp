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
class CfgCoreData 
{
    textureTIConversion = "1MR_Headgear\BH.tga";
    textureTIConversionDX11 = "1MR_Headgear\BH.png"
};
class CfgWeapons
{
	class ItemCore;
	class ItemInfo;
    class H_HelmetB: ItemCore
    {
    class ItemInfo;
    };
	class 7thFleet_Helmet: H_HelmetB
	{
        optreHUDStyle = "ODST_1"; //This one is optional!
	};
	class TKE_UCMCHelm_Press: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Press Helmet (Light)";
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Press Helmet (Closed)";
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
    class TKE_UCMCHelmClearClosedPress: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Press Helmet (Closed Clear)";
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
	class TKE_UCNPilotHelmNP_33rd: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] 33rd CAW Atmospheric Pilot Helmet";
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
    class TKE_UCNPilotHelm_33rd: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] 33rd CAW Exo Atmospheric Pilot Helmet";
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
	class TKE_UCNPilotHelmNP_21st: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] 21st MAW Atmospheric Pilot Helmet";
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
    class TKE_UCNPilotHelm_21st: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] 21st MAW Exo Atmospheric Pilot Helmet";
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
    class TKE_UCNPilotHelmNP_7th: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Atmospheric Helmet";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm21st_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNPilotHelm_co.paa"};
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
    class TKE_UCNPilotHelm_7th: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Exo Atmospheric Helmet";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm21st_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNPilotHelm_co.paa"};
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
	class TKE_UCMRHelm1stB: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Raider Helmet";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmClear1stB: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Raider Helmet (Clear)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Raider Helmet (Medic)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
     class TKE_UCMRHelmClear1stM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Raider Helmet (Clear, Medic)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
	class TKE_UCMRHelm1stT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Raider Helmet (Teeth)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmClear1stT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Raider Helmet (Clear, Teeth)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
	class TKE_UCMRHelm1stMT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Raider Helmet (Medic, Teeth)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmClear1stMT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Raider Helmet (Clear, Medic, Teeth)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
	class TKE_UCMRHelmOpen1stB: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Raider Helmet (Open)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmOpen1stM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Raider Helmet (Open, Medic)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
	class TKE_UCMRHelmOpen1stT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Raider Helmet (Open, Teeth)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
	class TKE_UCMRHelmOpen1stMT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Raider Helmet (Open, Medic, Teeth)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
	class TKE_UCMRHelm1stB2_1: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.1";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmClear1stB2_1: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.1 (Clear)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stM2_1: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.1 (Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmClear1stM2_1: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.1 (Clear, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stT2_1: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.1 (Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_1_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmClear1stT2_1: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.1 (Clear, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_1_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stMT2_1: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.1 (Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_1_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmClear1stMT2_1: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.1 (Clear, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_1_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelmOpen1stB2_1: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-2.1 (Open)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmOpen1stM2_1: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-2.1 (Open, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmOpen1stT2_1: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-2.1 (Open, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_1_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmOpen1stMT2_1: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-2.1 (Open, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_1_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelm1stB2_2: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.2";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmClear1stB2_2: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.2 (Clear)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stM2_2: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.2 (Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmClear1stM2_2: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.2 (Clear, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stT2_2: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.2 (Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_2_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmClear1stT2_2: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.2 (Clear, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_2_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stMT2_2: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.2 (Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_2_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmClear1stMT2_2: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.2 (Clear, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_2_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelmOpen1stB2_2: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-2.2 (Open)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmOpen1stM2_2: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-2.2 (Open, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmOpen1stT2_2: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-2.2 (Open, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_2_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmOpen1stMT2_2: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-2.2 (Open, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_2_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
class TKE_UCMRHelm1stB2_3: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.3";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmClear1stB2_3: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.3 (Clear)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stM2_3: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.3 (Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmClear1stM2_3: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.3 (Clear, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stT2_3: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.3 (Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_3_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmClear1stT2_3: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.3 (Clear, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_3_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stMT2_3: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.3 (Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_3_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmClear1stMT2_3: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-2.3 (Clear, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_3_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelmOpen1stB2_3: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-2.3 (Open)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmOpen1stM2_3: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-2.3 (Open, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmOpen1stT2_3: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-2.3 (Open, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st2_3_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmOpen1stMT2_3: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-2.3 (Open, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM2_3_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
class TKE_UCMRHelm1stB0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-0.HQ";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmClear1stB0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-0.HQ (Clear)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-0.HQ (Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmClear1stM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-0.HQ (Clear, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stT0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-0.HQ (Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st0_HQ_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmClear1stT0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-0.HQ (Clear, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st0_HQ_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelm1stMT0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-0.HQ (Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM0_HQ_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmClear1stMT0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Marine Raider Helmet-0.HQ (Clear, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM0_HQ_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm_ca.paa"};
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
    class TKE_UCMRHelmOpen1stB0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-0.HQ (Open)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmOpen1stM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-0.HQ (Open, Medic)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMRHelm1st_co.paa"};
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
    class TKE_UCMRHelmOpen1stT0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
 optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-0.HQ (Open, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st0_HQ_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMRHelmOpen1stMT0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Marine Raider Helmet-0.HQ (Open, Medic, Teeth)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM0_HQ_co.paa","\1MR_Uniforms\Textures\TKE_UCMRHelm1stTeeth_co.paa"};
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
    class TKE_UCMCHelm_Camo7th0_HQ: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Marine Helmet- 0.HQ (Light)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st0_HQ_co.paa"};
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
	class TKE_UCMCHelm_Camo7thM0_HQ: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Light, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM0_HQ_co.paa"};
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
    class TKE_UCMCHelmClosedCamo7th0_HQ: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Closed)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo7th0_HQ: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Clear Closed)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClosedCamo7thM0_HQ: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo7thM0_HQ: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Clear Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmMask_Camo7th0_HQ: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmSkullMask_Camo7th0_HQ: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Skull Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
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
    class TKE_UCMCHelmClearMask_Camo7th0_HQ: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Clear Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1st0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo7thM0_HQ: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmSkullMask_Camo7thM0_HQ: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Skull Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
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
    class TKE_UCMCHelmClearMask_Camo7thM0_HQ: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Clear Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelm_Camo7th: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Marine Helmet (Light)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB_co.paa"};
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
	class TKE_UCMCHelm_Camo7thM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Marine Helmet (Light, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM_co.paa"};
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
    class TKE_UCMCHelmClosedCamo7th: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet (Closed)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo7th: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet (Clear Closed)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClosedCamo7thM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet (Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo7thM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet (Clear Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmMask_Camo7th: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet (Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmSkullMask_Camo7th: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet (Skull Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
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
    class TKE_UCMCHelmClearMask_Camo7th: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet (Clear Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo7thM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet (Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmSkullMask_Camo7thM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet (Skull Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
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
    class TKE_UCMCHelmClearMask_Camo7thM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet (Clear Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelm_Camo7th1_1: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Marine Helmet- 0.HQ (Light)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_1_co.paa"};
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
	class TKE_UCMCHelm_Camo7thM1_1: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Light, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_1_co.paa"};
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
    class TKE_UCMCHelmClosedCamo7th1_1: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Closed)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo7th1_1: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Clear Closed)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClosedCamo7thM1_1: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo7thM1_1: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Clear Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmMask_Camo7th1_1: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmSkullMask_Camo7th1_1: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Skull Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
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
    class TKE_UCMCHelmClearMask_Camo7th1_1: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Clear Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo7thM1_1: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmSkullMask_Camo7thM1_1: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Skull Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
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
    class TKE_UCMCHelmClearMask_Camo7thM1_1: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-0.HQ (Clear Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelm_Camo7th1_2: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Marine Helmet- 1.2 (Light)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_2_co.paa"};
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
	class TKE_UCMCHelm_Camo7thM1_2: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.2 (Light, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_2_co.paa"};
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
    class TKE_UCMCHelmClosedCamo7th1_2: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.2 (Closed)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo7th1_2: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.2 (Clear Closed)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClosedCamo7thM1_2: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.2 (Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo7thM1_2: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.2 (Clear Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmMask_Camo7th1_2: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.2 (Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmSkullMask_Camo7th1_2: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.2 (Skull Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
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
    class TKE_UCMCHelmClearMask_Camo7th1_2: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.2 (Clear Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo7thM1_2: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.2 (Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmSkullMask_Camo7thM1_2: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.2 (Skull Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
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
    class TKE_UCMCHelmClearMask_Camo7thM1_2: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.2 (Clear Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
     class TKE_UCMCHelm_Camo7th1_3: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Marine Helmet- 1.3 (Light)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_3_co.paa"};
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
	class TKE_UCMCHelm_Camo7thM1_3: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.3 (Light, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_3_co.paa"};
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
    class TKE_UCMCHelmClosedCamo7th1_3: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.3 (Closed)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo7th1_3: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.3 (Clear Closed)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClosedCamo7thM1_3: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.3 (Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo7thM1_3: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.3 (Clear Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmMask_Camo7th1_3: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.3 (Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmSkullMask_Camo7th1_3: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.3 (Skull Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
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
    class TKE_UCMCHelmClearMask_Camo7th1_3: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.3 (Clear Mask)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stB1_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo7thM1_3: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.3 (Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmSkullMask_Camo7thM1_3: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.3 (Skull Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co"};
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
    class TKE_UCMCHelmClearMask_Camo7thM1_3: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Marine Helmet-1.3 (Clear Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm1stM1_3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
     class TKE_UCMCHelm_Camo7FLT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
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
        optreVarietys[] = {"","","_broken"};
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Navy Helmet (Closed)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo7FLT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Navy Helmet (Clear Closed)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClosedCamo7FLTM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Navy Helmet (Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLTM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo7FLTM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Navy Helmet (Clear Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa"; 
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm7FLTM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPlate_co.paa"};
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
    class TKE_UCMCHelmMask_Camo7FLT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
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
    class TKE_UCMCHelmClearMask_Camo7FLT: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
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
    class TKE_UCMCHelmMask_Camo7FLTM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
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
    class TKE_UCMCHelmClearMask_Camo7FLTM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
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
	class TKE_UCIAHelm: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] UCIA Helmet (Black, Light)";
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] UCIA Helmet (Black, Closed)";
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
    class TKE_UCIAHelmClearClosed: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] UCIA Helmet (Black, Clear Closed)";
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
	class TKE_UCMCHelmMask_CamoUCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] UCIA Helmet (Black, Mask)";
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
    class TKE_UCMCHelmClearMask_CamoUCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] UCIA Helmet (Black, Clear Mask)";
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
	class TKE_UCMRHelmUCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] UCIA Raider Helmet (Black)";
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
    class TKE_UCMRHelmClearUCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] UCIA Raider Helmet (Black, Clear)";
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
	class TKE_UCMRHelmOpenUCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] UCIA Raider Helmet (Black, Open)";
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] UCIA Atmospheric Helmet";
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
	class TKE_UCNPilotHelm_UCIA: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] UCIA Exo Atmospheric Helmet";
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
    class TKE_UCIAHelmGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Green, Light)";
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Green, Closed)";
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
    class TKE_UCIAHelmClearClosedGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Green, Clear Closed)";
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
    class TKE_UCMCHelmMask_CamoUCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Green, Mask)";
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
    class TKE_UCMCHelmClearMask_CamoUCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Green, Clear Mask)";
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
    class TKE_UCMRHelmUCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Raider Helmet (Green)";
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
    class TKE_UCMRHelmClearUCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Raider Helmet (Green, Clear)";
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
    class TKE_UCMRHelmOpenUCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Raider Helmet (Green, Open)";
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Atmospheric Helmet (Green)";
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
    class TKE_UCNPilotHelm_UCIAGreen: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Exo Atmospheric Helmet (Green)";
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
class TKE_UCIAHelmBlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Blue, Light)";
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Blue, Closed)";
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
    class TKE_UCIAHelmClearClosedBlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Blue, Clear Closed)";
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
    class TKE_UCMCHelmMask_CamoUCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Blue, Mask)";
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
    class TKE_UCMCHelmClearMask_CamoUCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Blue, Clear Mask)";
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
    class TKE_UCMRHelmUCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Raider Helmet (Blue)";
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
    class TKE_UCMRHelmClearUCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Raider Helmet (Blue, Clear)";
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
    class TKE_UCMRHelmOpenUCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Raider Helmet (Blue, Open)";
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Atmospheric Helmet (Blue)";
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
    class TKE_UCNPilotHelm_UCIABlue: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Exo Atmospheric Helmet (Blue)";
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
class TKE_UCIAHelmRed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Red, Light)";
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Red, Closed)";
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
    class TKE_UCIAHelmClearClosedRed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Red, Clear Closed)";
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
    class TKE_UCMCHelmMask_CamoUCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Red, Mask)";
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
    class TKE_UCMCHelmClearMask_CamoUCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (Red, Clear Mask)";
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
    class TKE_UCMRHelmUCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Raider Helmet (Red)";
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
    class TKE_UCMRHelmClearUCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Raider Helmet (Red, Clear)";
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
    class TKE_UCMRHelmOpenUCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Raider Helmet (Red, Open)";
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Atmospheric Helmet (Red)";
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
    class TKE_UCNPilotHelm_UCIARed: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Exo Atmospheric Helmet (Red)";
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
class TKE_UCIAHelmWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (White, Light)";
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (White, Closed)";
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
    class TKE_UCIAHelmClearClosedWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (White, Clear Closed)";
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
    class TKE_UCMCHelmMask_CamoUCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (White, Mask)";
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
    class TKE_UCMCHelmClearMask_CamoUCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Helmet (White, Clear Mask)";
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
    class TKE_UCMRHelmUCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Raider Helmet (White)";
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
    class TKE_UCMRHelmClearUCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Raider Helmet (White, Clear)";
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
    class TKE_UCMRHelmOpenUCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Raider Helmet (White, Open)";
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Atmospheric Helmet (White)";
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
    class TKE_UCNPilotHelm_UCIAWhite: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] UCIA Exo Atmospheric Helmet (White)";
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
class TKE_UCMCHelm_Camo124G: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Green Army Helmet (Light)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G_co.paa"};
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
	class TKE_UCMCHelm_Camo124GM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] Green Army Helmet (Light, Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124G: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green Army Helmet (Closed)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124G: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green Army Helmet (Clear Closed)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124GM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green Army Helmet (Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124GM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green Army Helmet (Clear Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmMask_Camo124G: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green Army Helmet (Mask)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124G: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green Army Helmet (Clear Mask)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo124GM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green Army Helmet (Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124GM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green Army Helmet (Clear Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_Camo124G: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green Army Helmet (Skull Mask)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_Camo124GM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green Army Helmet (Skull Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelm_Camo124W: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] White Army Helmet (Light)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W_co.paa"};
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
	class TKE_UCMCHelm_Camo124WM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "";
        optreVarietys[] = {"","","_broken"};
		displayName = "[7th Fleet] White Army Helmet (Light, Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124W: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] White Army Helmet (Closed)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124W: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] White Army Helmet (Clear Closed)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124WM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] White Army Helmet (Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124WM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] White Army Helmet (Clear Closed, Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmMask_Camo124W: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] White Army Helmet (Mask)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124W: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] White Army Helmet (Clear Mask)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo124WM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] White Army Helmet (Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124WM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] White Army Helmet (Clear Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_Camo124W: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] White Army Helmet (Skull Mask)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_Camo124WM: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] White Army Helmet (Skull Mask, Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelm_Camo124B: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Black Army Helmet (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B_co.paa"};
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
    class TKE_UCMCHelm_Camo124BM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Black Army Helmet (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124B: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124B: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124BM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124BM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmMask_Camo124B: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124B: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo124BM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124BM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_Camo124B: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_Camo124BM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
     class TKE_UCNPilotHelmNP_124G: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Atmospheric Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_124GHelm_co.paa","\1MR_Uniforms\Textures\TKE_124GPilotHelm_co.paa"};
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
    class TKE_UCNPilotHelm_124G: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Exo Atmospheric Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_124GHelm_co.paa","\1MR_Uniforms\Textures\TKE_124GPilotHelm_co.paa"};
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
    class TKE_UCNPilotHelmNP_124W: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Atmospheric Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_124WHelm_co.paa","\1MR_Uniforms\Textures\TKE_124WPilotHelm_co.paa"};
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
    class TKE_UCNPilotHelm_124W: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Exo Atmospheric Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_124WHelm_co.paa","\1MR_Uniforms\Textures\TKE_124WPilotHelm_co.paa"};
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
    class TKE_UCNPilotHelmNP_124B: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Atmospheric Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_124BHelm_co.paa","\1MR_Uniforms\Textures\TKE_124BPilotHelm_co.paa"};
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
    class TKE_UCNPilotHelm_124B: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Exo Atmospheric Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_124BHelm_co.paa","\1MR_Uniforms\Textures\TKE_124BPilotHelm_co.paa"};
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
    class TKE_UCMCHelm_CamoSOGG: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Green SOG Helmet (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGG_co.paa"};
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
    class TKE_UCMCHelm_CamoSOGGM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Green SOG Helmet (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGGM_co.paa"};
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
    class TKE_UCMCHelmClosedCamoSOGG: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green SOG Helmet (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGG_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamoSOGG: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green SOG Helmet (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGG_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClosedCamoSOGGM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green SOG Helmet (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGGM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamoSOGGM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green SOG Helmet (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGGM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmMask_CamoSOGG: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green SOG Helmet (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGG_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_CamoSOGG: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green SOG Helmet (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGG_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_CamoSOGGM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green SOG Helmet (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGGM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_CamoSOGGM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green SOG Helmet (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGGM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_CamoSOGG: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green SOG Helmet (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGG_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_CamoSOGGM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green SOG Helmet (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGGM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelm_CamoSOGW: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] White SOG Helmet (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGW_co.paa"};
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
    class TKE_UCMCHelm_CamoSOGWM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] White SOG Helmet (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGWM_co.paa"};
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
    class TKE_UCMCHelmClosedCamoSOGW: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Helmet (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamoSOGW: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Helmet (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClosedCamoSOGWM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Helmet (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGWM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamoSOGWM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Helmet (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGWM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmMask_CamoSOGW: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Helmet (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_CamoSOGW: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Helmet (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_CamoSOGWM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Helmet (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGWM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_CamoSOGWM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Helmet (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGWM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_CamoSOGW: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Helmet (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_CamoSOGWM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Helmet (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGWM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelm_CamoSOGB: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Black SOG Helmet (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGB_co.paa"};
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
    class TKE_UCMCHelm_CamoSOGBM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Black SOG Helmet (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGBM_co.paa"};
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
    class TKE_UCMCHelmClosedCamoSOGB: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Helmet (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamoSOGB: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Helmet (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClosedCamoSOGBM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Helmet (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGBM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamoSOGBM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Helmet (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGBM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmMask_CamoSOGB: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Helmet (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_CamoSOGB: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Helmet (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_CamoSOGBM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Helmet (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGBM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_CamoSOGBM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Helmet (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGBM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_CamoSOGB: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Helmet (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGB_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_CamoSOGBM: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Helmet (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmSOGBM_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCNPilotHelmNP_Victus: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] 274th TS Atmospheric Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_VictusHelm_co.paa","\1MR_Uniforms\Textures\TKE_VictusPilotHelm_co.paa"};
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
    class TKE_UCNPilotHelm_Victus: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] 274th TS Exo Atmospheric Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_VictusHelm_co.paa","\1MR_Uniforms\Textures\TKE_VictusPilotHelm_co.paa"};
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
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] 274th TS Helmet (Closed)";
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamoVictus: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] 274th TS Helmet (Clear Closed)";
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelmVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmMask_CamoVictus: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
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
    class TKE_UCMCHelmClearMask_CamoVictus: 7thFleet_Helmet
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
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
class TKE_UCMCHelm_Camo124G0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Green Army Helmet- 0.HQ (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G0_HQ_co.paa"};
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
    class TKE_UCMCHelm_Camo124GM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Green Army Helmet- 0.HQ (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM0_HQ_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124G0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 0.HQ (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124G0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 0.HQ (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124GM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 0.HQ (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124GM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 0.HQ (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmMask_Camo124G0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 0.HQ (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124G0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 0.HQ (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo124GM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 0.HQ (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124GM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 0.HQ (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_Camo124G0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 0.HQ (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_Camo124GM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 0.HQ (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelm_Camo124W0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] White Army Helmet- 0.HQ (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W0_HQ_co.paa"};
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
    class TKE_UCMCHelm_Camo124WM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] White Army Helmet- 0.HQ (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM0_HQ_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124W0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 0.HQ (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124W0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 0.HQ (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124WM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 0.HQ (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124WM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 0.HQ (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmMask_Camo124W0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 0.HQ (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124W0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 0.HQ (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo124WM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 0.HQ (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124WM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 0.HQ (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_Camo124W0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 0.HQ (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_Camo124WM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 0.HQ (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelm_Camo124B0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Black Army Helmet- 0.HQ (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B0_HQ_co.paa"};
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
    class TKE_UCMCHelm_Camo124BM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Black Army Helmet- 0.HQ (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM0_HQ_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124B0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 0.HQ (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124B0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 0.HQ (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124BM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 0.HQ (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124BM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 0.HQ (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmMask_Camo124B0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 0.HQ (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124B0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 0.HQ (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo124BM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 0.HQ (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124BM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 0.HQ (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_Camo124B0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 0.HQ (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_Camo124BM0_HQ: 7thFleet_Helmet
    {
        author = "Frenchie";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 0.HQ (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM0_HQ_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelm_Camo124G1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Green Army Helmet- 1.1 (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G1_1_co.paa"};
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
    class TKE_UCMCHelm_Camo124GM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Green Army Helmet- 1.1 (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM1_1_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124G1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.1 (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124G1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.1 (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124GM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.1 (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124GM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.1 (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmMask_Camo124G1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.1 (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124G1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.1 (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo124GM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.1 (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124GM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.1 (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_Camo124G1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.1 (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_Camo124GM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.1 (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelm_Camo124W1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] White Army Helmet- 1.1 (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W1_1_co.paa"};
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
    class TKE_UCMCHelm_Camo124WM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] White Army Helmet- 1.1 (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM1_1_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124W1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.1 (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124W1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.1 (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124WM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.1 (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124WM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.1 (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmMask_Camo124W1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.1 (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124W1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.1 (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo124WM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.1 (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124WM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.1 (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_Camo124W1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.1 (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_Camo124WM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.1 (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelm_Camo124B1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Black Army Helmet- 1.1 (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B1_1_co.paa"};
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
    class TKE_UCMCHelm_Camo124BM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Black Army Helmet- 1.1 (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM1_1_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124B1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.1 (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124B1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.1 (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124BM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.1 (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124BM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.1 (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmMask_Camo124B1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.1 (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124B1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.1 (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo124BM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.1 (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124BM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.1 (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_Camo124B1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.1 (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_Camo124BM1_1: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.1 (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM1_1_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
class TKE_UCMCHelm_Camo124G1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Green Army Helmet- 1.2 (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G1_2_co.paa"};
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
    class TKE_UCMCHelm_Camo124GM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Green Army Helmet- 1.2 (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM1_2_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124G1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.2 (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124G1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.2 (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124GM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.2 (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124GM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.2 (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124G_co.paa"};
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
    class TKE_UCMCHelmMask_Camo124G1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.2 (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124G1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.2 (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo124GM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.2 (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124GM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.2 (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_Camo124G1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.2 (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124G1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_Camo124GM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Green Army Helmet- 1.2 (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124GM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelm_Camo124W1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] White Army Helmet- 1.2 (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W1_2_co.paa"};
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
    class TKE_UCMCHelm_Camo124WM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] White Army Helmet- 1.2 (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM1_2_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124W1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.2 (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124W1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.2 (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124WM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.2 (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124WM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.2 (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124W_co.paa"};
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
    class TKE_UCMCHelmMask_Camo124W1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.2 (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124W1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.2 (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo124WM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.2 (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124WM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.2 (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_Camo124W1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.2 (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124W1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_Camo124WM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White Army Helmet- 1.2 (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124WM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelm_Camo124B1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Black Army Helmet- 1.2 (Light)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B1_2_co.paa"};
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
    class TKE_UCMCHelm_Camo124BM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreVarietys[] = {"","","_broken"};
        optreHUDStyle = "";
        displayName = "[7th Fleet] Black Army Helmet- 1.2 (Light, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM1_2_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124B1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.2 (Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124B1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.2 (Clear Closed)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClosedCamo124BM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.2 (Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_co.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmClearClosedCamo124BM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.2 (Clear Closed, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCHUD_ca.paa","\1MR_Uniforms\Textures\TKE_UCMCPlate124B_co.paa"};
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
    class TKE_UCMCHelmMask_Camo124B1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.2 (Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124B1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.2 (Clear Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmMask_Camo124BM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.2 (Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"};
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
    class TKE_UCMCHelmClearMask_Camo124BM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.2 (Clear Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorV2_ca"};
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
    class TKE_UCMCHelmSkullMask_Camo124B1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.2 (Skull Mask)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124B1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_UCMCHelmSkullMask_Camo124BM1_2: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black Army Helmet- 1.2 (Skull Mask, Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCHelm124BM1_2_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisorSkull_co.paa"};
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
    class TKE_KMCHelmSOGG: 7thFleet_Helmet
	{
		author = "Rogue771";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green SOG Enforcer Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_KMCHelmSOGG_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
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
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_KMCHelmSOGGM: 7thFleet_Helmet
	{
		author = "Rogue771";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green SOG Enforcer Helmet (Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_KMCHelmSOGGM_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
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
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_KMCHelmSOGGT: 7thFleet_Helmet
	{
		author = "Rogue771";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green SOG Enforcer Helmet (Teeth)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_KMCHelmSOGGT_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
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
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_KMCHelmSOGGMT: 7thFleet_Helmet
	{
		author = "Rogue771";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
		displayName = "[7th Fleet] Green SOG Enforcer Helmet (Medic, Teeth)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_KMCHelmSOGGMT_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
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
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class TKE_KMCHelmSOGB: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Enforcer Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_KMCHelmSOGB_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
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
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_KMCHelmSOGBM: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Enforcer Helmet (Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_KMCHelmSOGBM_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
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
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_KMCHelmSOGBT: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Enforcer Helmet (Teeth)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_KMCHelmSOGBT_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
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
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_KMCHelmSOGBMT: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] Black SOG Enforcer Helmet (Medic, Teeth)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_KMCHelmSOGBMT_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
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
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
class TKE_KMCHelmSOGW: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Enforcer Helmet";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_KMCHelmSOGW_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
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
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_KMCHelmSOGWM: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Enforcer Helmet (Medic)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_KMCHelmSOGWM_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
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
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_KMCHelmSOGWT: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Enforcer Helmet (Teeth)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_KMCHelmSOGWT_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
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
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_KMCHelmSOGWMT: 7thFleet_Helmet
    {
        author = "Rogue771";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        optreHUDStyle = "ODST_1";
        optreVarietys[] = {"_dp","","_broken"};
        displayName = "[7th Fleet] White SOG Enforcer Helmet (Medic, Teeth)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_KMCHelmSOGWMT_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 10;
            uniformModel = "\TKE_Kuiper_Engagements\TKE_KMC\TKE_KMCHelm.p3d";
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
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TKE_IntegratedNVGs;
    class 7EF_TKE_IntegratedNVGs: TKE_IntegratedNVGs 
    {
        displayName = "[7th Fleet] Integrated NVG/TI";
        ACE_nightvision_generation = 4;
        ACE_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";
        ace_nightvision_colorPreset[] = {0, {0, 0, 0, 0}, {1.3, 1.2, 0, 0.9}, {6, 1, 1, 0}};
        visionMode[] = {"Normal", "NVG", "TI"};
    };
};