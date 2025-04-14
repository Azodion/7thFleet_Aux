////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 09 16:52:22 2023 : 'file' last modified on Tue Oct 18 19:53:08 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 1MR_OPTRE
	{
		units[] = {"OPTRE_M412_IFV_7thMEF","OPTRE_M411_APC_7thMEF","OPTRE_M413_MGS_7thMEF","OPTRE_M494_7thMEF","OPTRE_Victus_AV22C_Sparrowhawk","OPTRE_Victus_AV22B_Sparrowhawk","OPTRE_Victus_AV22A_Sparrowhawk","OPTRE_Victus_AV22_Sparrowhawk","OPTRE_Victus_YSS_1000_A_VTOL","OPTRE_Victus_hornet_CAS","OPTRE_Victus_hornet_CAP","OPTRE_Victus_falcon_armed_S","OPTRE_Victus_falcon_armed","OPTRE_Victus_falcon_S","OPTRE_Victus_falcon"};
		vehicles[] = {"OPTRE_M412_IFV_7thMEF","OPTRE_M411_APC_7thMEF","OPTRE_M413_MGS_7thMEF","OPTRE_M494_7thMEF","OPTRE_Victus_AV22C_Sparrowhawk","OPTRE_Victus_AV22B_Sparrowhawk","OPTRE_Victus_AV22A_Sparrowhawk","OPTRE_Victus_AV22_Sparrowhawk","OPTRE_Victus_YSS_1000_A_VTOL","OPTRE_Victus_hornet_CAS","OPTRE_Victus_hornet_CAP","OPTRE_Victus_falcon_armed_S","OPTRE_Victus_falcon_armed","OPTRE_Victus_falcon_S","OPTRE_Victus_falcon"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
///////////////////////\1MR_OPTRE\Textures\UCS709logo.paa/////////////////////////
class CfgFactionClasses
{
	class 7thFleet
	{
		displayName = "[TKE] 7th Fleet (Lunar)";
		author = "Frenchie";
		icon = "";
		priority = 2;
		side = 1;
	};
	class 7thFleetArid
	{
		displayName = "[TKE] 7th Fleet (Arid)";
		author = "Frenchie";
		icon = "";
		priority = 2;
		side = 1;
	};
	class 7thFleetWdl
	{
		displayName = "[TKE] 7th Fleet (Woodland)";
		author = "Frenchie";
		icon = "";
		priority = 2;
		side = 1;
	};
	class 7thFleetWntr
	{
		displayName = "[TKE] 7th Fleet (Winter)";
		author = "Frenchie";
		icon = "";
		priority = 2;
		side = 1;
	};
	class 124thESB
	{
		displayName = "[TKE] 124th Expeditionary Security Battalion";
		author = "Frenchie";
		icon = "";
		priority = 2;
		side = 1;
	};
	class 274thTS
	{
		displayName = "[TKE] 274th Tactical Squadron";
		author = "Frenchie";
		icon = "";
		priority = 2;
		side = 1;
	};
};
class CfgVehicles
{
	class OPTRE_M494;
	class OPTRE_M494_7thMEF: OPTRE_M494
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		scope = 2;
		scopeCurator = 2;
		displayName = "M494 Oryx IFV";
		faction = "7thFleet";
		crew = "7thFleet_Crewman";
		side = 1;
		textureList[] = {"7thMEF",1};
		hiddenSelectionsTextures[] = {"\1MR_OPTRE\Textures\oryx_armor_7thMEF_co.paa","\1MR_OPTRE\Textures\oryx_main_7thMEF_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\1MR_OPTRE\Textures\oryx_turret_7thMEF_co.paa","\1MR_OPTRE\Textures\Scorpion_mg_7thMEF_co.paa"};
		class textureSources
		{
			class 7thMEF
			{
				displayName = "7thMEF";
				author = "Frenchie";
				textures[] = {"\1MR_OPTRE\Textures\oryx_armor_7thMEF_co.paa","\1MR_OPTRE\Textures\oryx_main_7thMEF_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\1MR_OPTRE\Textures\oryx_turret_7thMEF_co.paa","1MR_OPTRE\Textures\Scorpion_mg_7thMEF_co.paa"};
			};
			class 7thMEFArid
			{
				displayName = "7thMEFArid";
				author = "Frenchie";
				textures[] = {"\1MR_OPTRE\Textures\oryx_armor_7thMEFArid_co.paa","\1MR_OPTRE\Textures\oryx_main_7thMEFArid_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\1MR_OPTRE\Textures\oryx_turret_7thMEFArid_co.paa","1MR_OPTRE\Textures\Scorpion_mg_7thMEFArid_co.paa"};
			};
			class 7thMEFWntr
			{
				displayName = "7thMEFWntr";
				author = "Frenchie";
				textures[] = {"\1MR_OPTRE\Textures\oryx_armor_7thMEFWntr_co.paa","\1MR_OPTRE\Textures\oryx_main_7thMEFWntr_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\1MR_OPTRE\Textures\oryx_turret_7thMEFWntr_co.paa","1MR_OPTRE\Textures\Scorpion_mg_7thMEFWntr_co.paa"};
			};
			class 7thMEFWdl
			{
				displayName = "7thMEFWdl";
				author = "Frenchie";
				textures[] = {"\1MR_OPTRE\Textures\oryx_armor_7thMEFWdl_co.paa","\1MR_OPTRE\Textures\oryx_main_7thMEFWdl_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\1MR_OPTRE\Textures\oryx_turret_7thMEFWdl_co.paa","1MR_OPTRE\Textures\Scorpion_mg_7thMEFWdl_co.paa"};
			};
		};
	};
	class OPTRE_M494_7thMEFArid: OPTRE_M494_7thMEF
	{
		faction = "7thFleetArid";
		crew = "7thFleet_Crewman";
		textureList[] = {"7thMEFArid",1};
		hiddenSelectionsTextures[] = {"\1MR_OPTRE\Textures\oryx_armor_7thMEFArid_co.paa","\1MR_OPTRE\Textures\oryx_main_7thMEFArid_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\1MR_OPTRE\Textures\oryx_turret_7thMEFArid_co.paa","1MR_OPTRE\Textures\Scorpion_mg_7thMEFArid_co.paa"};

		
	};
	class OPTRE_M494_7thMEFWdl: OPTRE_M494_7thMEF
	{
		faction = "7thFleetWdl";
		crew = "7thFleet_Crewman";
		textureList[] = {"7thMEFWdl",1};
		hiddenSelectionsTextures[] = {"\1MR_OPTRE\Textures\oryx_armor_7thMEFWdl_co.paa","\1MR_OPTRE\Textures\oryx_main_7thMEFWdl_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\1MR_OPTRE\Textures\oryx_turret_7thMEFWdl_co.paa","1MR_OPTRE\Textures\Scorpion_mg_7thMEFWdl_co.paa"};

	};
	class OPTRE_M494_7thMEFWntr: OPTRE_M494_7thMEF
	{
		faction = "7thFleetWntr";
		crew = "7thFleet_Crewman";
		textureList[] = {"7thMEFWntr",1};
		hiddenSelectionsTextures[] = {"\1MR_OPTRE\Textures\oryx_armor_7thMEFWntr_co.paa","\1MR_OPTRE\Textures\oryx_main_7thMEFWntr_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\1MR_OPTRE\Textures\oryx_turret_7thMEFWntr_co.paa","1MR_OPTRE\Textures\Scorpion_mg_7thMEFWntr_co.paa"};

	};
	class OPTRE_M411_APC_UNSC;
	class OPTRE_M411_APC_7thMEF: OPTRE_M411_APC_UNSC
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "7thFleet";
		crew = "7thFleet_Crewman";
		displayName = "M411 Bison APC";
		textureList[] = {"7thMEF",1,"7thMEFArid",0,"7thMEFWdl",0,"7thMEFWntr",0};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6"};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEF_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEF_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"};
		class textureSources
		{
			class 7thMEF
			{
				displayName = "7thMEF";
				author = "Frenchie";
				textures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEF_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEF_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"};
			};
			class 7thMEFArid
			{
				displayName = "7thMEFArid";
				author = "Frenchie";
				textures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFArid_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEFArid_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"};
			};
			class 7thMEFWntr
			{
				displayName = "7thMEFWntr";
				author = "Frenchie";
				textures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFWntr_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEWntr_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_Snow_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"};
			};
			class 7thMEFWdl
			{
				displayName = "7thMEFWdl";
				author = "Frenchie";
				textures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFWdl_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEFWdl_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"};
			};
		};
	};
	class OPTRE_M411_APC_7thMEFArid: OPTRE_M411_APC_7thMEF
	{
		faction = "7thFleetArid";
		crew = "7thFleet_Crewman";
		textureList[] = {"7thMEF",0,"7thMEFArid",1,"7thMEFWdl",0,"7thMEFWntr",0};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFArid_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEFArid_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"};

	};
	class OPTRE_M411_APC_7thMEFWdl: OPTRE_M411_APC_7thMEF
	{
		faction = "7thFleetWdl";
		crew = "7thFleet_Crewman";
		textureList[] = {"7thMEF",0,"7thMEFArid",0,"7thMEFWdl",1,"7thMEFWntr",0};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFWdl_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEFWdl_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"};

	};
	class OPTRE_M411_APC_7thMEFWntr: OPTRE_M411_APC_7thMEF
	{
		faction = "7thFleetWntr";
		crew = "7thFleet_Crewman";
		textureList[] = {"7thMEF",0,"7thMEFArid",0,"7thMEFWdl",0,"7thMEFWntr",1};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFWntr_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEWntr_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_Snow_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"};

	};
	class OPTRE_M413_MGS_UNSC;
	class OPTRE_M413_MGS_7thMEF: OPTRE_M413_MGS_UNSC
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "7thFleet";
		crew = "7thFleet_Crewman";
		displayName = "M413 Bison MGS";
		textureList[] = {"7thMEF",1,"7thMEFArid",0,"7thMEFWdl",0,"7thMEFWntr",0};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEF_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEF_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};
		class textureSources
		{
			class 7thMEF
			{
				displayName = "7thMEF";
				author = "Frenchie";
				textures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEF_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEF_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};
			};
			class 7thMEFArid
			{
				displayName = "7thMEFArid";
				author = "Frenchie";
				textures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFArid_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEFArid_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};
			};
			class 7thMEFWntr
			{
				displayName = "7thMEFWntr";
				author = "Frenchie";
				textures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFWntr_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEWntr_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_Snow_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};
			};
			class 7thMEFWdl
			{
				displayName = "7thMEFWdl";
				author = "Frenchie";
				textures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFWdl_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEFWdl_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};
			};
		};
	};
	class OPTRE_M413_MGS_7thMEFArid: OPTRE_M413_MGS_7thMEF
	{
		faction = "7thFleetArid";
		crew = "7thFleet_Crewman";
		textureList[] = {"7thMEF",0,"7thMEFArid",1,"7thMEFWdl",0,"7thMEFWntr",0};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFArid_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEFArid_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};

	};
	class OPTRE_M413_MGS_7thMEFWdl: OPTRE_M413_MGS_7thMEF
	{
		faction = "7thFleetWdl";
		crew = "7thFleet_Crewman";
		textureList[] = {"7thMEF",0,"7thMEFArid",0,"7thMEFWdl",1,"7thMEFWntr",0};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFWdl_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEFWdl_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};

	};
	class OPTRE_M413_MGS_7thMEFWntr: OPTRE_M413_MGS_7thMEF
	{
		faction = "7thFleetWntr";
		crew = "7thFleet_Crewman";
		textureList[] = {"7thMEF",0,"7thMEFArid",0,"7thMEFWdl",0,"7thMEFWntr",1};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFWntr_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEWntr_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_Snow_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};

	};
	class OPTRE_M412_IFV_UNSC;
	class OPTRE_M412_IFV_7thMEF: OPTRE_M412_IFV_UNSC
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "7thFleet";
		crew = "7thFleet_Crewman";
		displayName = "M412 Bison IFV";
		textureList[] = {"7thMEF",0,"7thMEFArid",1,"7thMEFWdl",0,"7thMEFWntr",0};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEF_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEF_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};
		class textureSources
		{
			class 7thMEF
			{
				displayName = "7thMEF";
				author = "Frenchie";
				textures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEF_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEF_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};
			};
			class 7thMEFArid
			{
				displayName = "7thMEFArid";
				author = "Frenchie";
				textures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFArid_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEFArid_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};
			};
			class 7thMEFWntr
			{
				displayName = "7thMEFWntr";
				author = "Frenchie";
				textures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFWntr_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEWntr_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_Snow_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};
			};
			class 7thMEFWdl
			{
				displayName = "7thMEFWdl";
				author = "Frenchie";
				textures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFWdl_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEFWdl_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};
			};
		};
	};
	class OPTRE_M412_IFV_7thMEFArid: OPTRE_M412_IFV_7thMEF
	{
		faction = "7thFleetArid";
		crew = "7thFleet_Crewman";
		textureList[] = {"7thMEF",0,"7thMEFArid",1,"7thMEFWdl",0,"7thMEFWntr",0};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFArid_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEFArid_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};

	};
	class OPTRE_M412_IFV_7thMEFWdl: OPTRE_M412_IFV_7thMEF
	{
		faction = "7thFleetWdl";
		crew = "7thFleet_Crewman";
		textureList[] = {"7thMEF",0,"7thMEFArid",0,"7thMEFWdl",1,"7thMEFWntr",0};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFWdl_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEFWdl_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};

	};
	class OPTRE_M412_IFV_7thMEFWntr: OPTRE_M412_IFV_7thMEF
	{
		faction = "7thFleetWntr";
		crew = "7thFleet_Crewman";
		textureList[] = {"7thMEF",0,"7thMEFArid",0,"7thMEFWdl",0,"7thMEFWntr",1};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEFWntr_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEWntr_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_Snow_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};

	};
	class OPTRE_UNSC_falcon;
	class OPTRE_Victus_falcon: OPTRE_UNSC_falcon
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		liftForceCoef=1.65;
		slingLoadMaxCargoMass=1000000;
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
	};
	class OPTRE_UNSC_falcon_S;
	class OPTRE_Victus_falcon_S: OPTRE_UNSC_falcon_S
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		liftForceCoef=1.65;
		slingLoadMaxCargoMass=1000000;
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
	};
	class OPTRE_UNSC_falcon_armed;
	class OPTRE_Victus_falcon_armed: OPTRE_UNSC_falcon_armed
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		liftForceCoef=1.65;
		slingLoadMaxCargoMass=1000000;
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
	};
	class OPTRE_UNSC_falcon_armed_S;
	class OPTRE_Victus_falcon_armed_S: OPTRE_UNSC_falcon_armed_S
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		liftForceCoef=1.65;
		slingLoadMaxCargoMass=1000000;
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Main_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Black\Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"};
	};
	class OPTRE_UNSC_hornet_CAP;
	class OPTRE_Victus_hornet_CAP: OPTRE_UNSC_hornet_CAP
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		hiddenSelectionsTextures[] = {"\1MR_OPTRE\Textures\hornet_hull_Victus_co.paa"};
	};
	class OPTRE_UNSC_hornet_CAS;
	class OPTRE_Victus_hornet_CAS: OPTRE_UNSC_hornet_CAS
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		hiddenSelectionsTextures[] = {"\1MR_OPTRE\Textures\hornet_hull_Victus_co.paa"};
	};
	class OPTRE_YSS_1000_A_VTOL;
	class OPTRE_Victus_YSS_1000_A_VTOL: OPTRE_YSS_1000_A_VTOL
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		hiddenSelectionsTextures[] = {"OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat1_co.paa","OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat2_co.paa","OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat3_co.paa","OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat4_co.paa","OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat5_co.paa","OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat6_co.paa","OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat7_co.paa","OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat8_co.paa"};
	};
	class OPTRE_AV22_Sparrowhawk;
	class OPTRE_Victus_AV22_Sparrowhawk: OPTRE_AV22_Sparrowhawk
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		hiddenSelectionsTextures[] = {"OPTRE_Vehicles_Air\sparrowhawk\data\black\body_01_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\body_02_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\body_03_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\body_04_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\body_05_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\autocannon_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\feed_autocannon_co.paa"};
	};
	class OPTRE_AV22A_Sparrowhawk;
	class OPTRE_Victus_AV22A_Sparrowhawk: OPTRE_AV22A_Sparrowhawk
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		hiddenSelectionsTextures[] = {"OPTRE_Vehicles_Air\sparrowhawk\data\black\body_01_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\body_02_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\body_03_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\body_04_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\body_05_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\autocannon_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\feed_autocannon_co.paa"};
	};
	class OPTRE_AV22B_Sparrowhawk;
	class OPTRE_Victus_AV22B_Sparrowhawk: OPTRE_AV22B_Sparrowhawk
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		hiddenSelectionsTextures[] = {"OPTRE_Vehicles_Air\sparrowhawk\data\black\body_01_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\body_02_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\body_03_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\body_04_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\body_05_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\autocannon_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\feed_autocannon_co.paa"};
	};
	class OPTRE_AV22C_Sparrowhawk;
	class OPTRE_Victus_AV22C_Sparrowhawk: OPTRE_AV22C_Sparrowhawk
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		hiddenSelectionsTextures[] = {"OPTRE_Vehicles_Air\sparrowhawk\data\black\body_01_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\body_02_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\body_03_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\body_04_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\body_05_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\autocannon_co.paa","OPTRE_Vehicles_Air\sparrowhawk\data\black\feed_autocannon_co.paa"};
	};
};