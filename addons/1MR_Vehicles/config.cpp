////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 09 16:52:22 2023 : 'file' last modified on Tue Oct 18 19:53:08 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 1MR_Vehicles
	{
		units[] = {"Victus_O_Plane_CAS_02_dynamicLoadout_F","qav_ripsaw_Mk44_7thFleet","Victus_Heli_Transport_03_F","Victus_Heli_Transport_03_unarmed_F","Victus_Heli_Transport_01_F","Victus_Heli_Light_01_dynamicLoadout_F","Victus_Heli_Light_01_F","Victus_Heli_Attack_01_F","B_Victus_Plane_Fighter_02_F","B_Victus_Plane_Fighter_02_Stealth_F","Y32C_Victus_Infantry","Y32C_Victus_Vehicle","UCN_1MR_LSV_01_unarmed_F","UCN_1MR_LSV_01_armed_F","UCN_1MR_LSV_01_AT_F","UCN_UCIA_LSV_01_unarmed_F","UCN_UCIA_LSV_01_armed_F","UCN_UCIA_LSV_01_AT_F","7thFleet_MRAP","7thFleet_MRAP_HMG","7thFleet_MRAP_GMG","7thMEF_APC_Tracked_02_base_F","7thMEF_APC_Tracked_02_medevac_F","7thMEF_APC_Tracked_02_AA_F","7thMEF_APC_Tracked_02_cannon_F","7thFleet_MBT_52","7thFleet_MSE_3","7thFleet_MSE_3_unarmed","X32C_Infantry_Base","Y32C_21stMAW_Vehicle","Y32C_UCIA_Infantry","Y32C_UCIA_Vehicle","B_33rdCAW_Plane_Fighter_02_F","B_33rdCAW_Plane_Fighter_02_Stealth_F","UCN_124_LSV_01_unarmed_F","UCN_124_LSV_01_armed_F","UCN_124_LSV_01_AT_F","124thESB_MRAP","124thESB_MRAP_HMG","124thESB_MRAP_GMG","124thESB_APC_Tracked_02_base_F","124thESB_APC_Tracked_02_medevac_F","124thESB_APC_Tracked_02_AA_F","124thESB_APC_Tracked_02_cannon_F","124thESB_MBT_52","124thESB_MSE_3","124thESB_MSE_3_unarmed","B_MBT_01_124cannon_F","B_MBT_01_124TUSK_F","B_MBT_01_124arty_F","B_MBT_01_124mlrs_F","33rdCAW_Pilot","21stMAW_Pilot"};
		vehicles[] = {"Victus_O_Plane_CAS_02_dynamicLoadout_F","qav_ripsaw_Mk44_7thFleet","B_Victus_Plane_Fighter_02_F","B_Victus_Plane_Fighter_02_Stealth_F","Y32C_Victus_Infantry","Y32C_Victus_Vehicle","UCN_1MR_LSV_01_unarmed_F","UCN_1MR_LSV_01_armed_F","UCN_1MR_LSV_01_AT_F","UCN_UCIA_LSV_01_unarmed_F","UCN_UCIA_LSV_01_armed_F","UCN_UCIA_LSV_01_AT_F","7thFleet_MRAP","7thFleet_MRAP_HMG","7thFleet_MRAP_GMG","7thMEF_APC_Tracked_02_base_F","7thMEF_APC_Tracked_02_medevac_F","7thMEF_APC_Tracked_02_AA_F","7thMEF_APC_Tracked_02_cannon_F","7thFleet_MBT_52","7thFleet_MSE_3","7thFleet_MSE_3_unarmed","X32C_Infantry_Base","Y32C_21stMAW_Vehicle","Y32C_UCIA_Infantry","Y32C_UCIA_Vehicle","B_33rdCAW_Plane_Fighter_02_F","B_33rdCAW_Plane_Fighter_02_Stealth_F","UCN_124_LSV_01_unarmed_F","UCN_124_LSV_01_armed_F","UCN_124_LSV_01_AT_F","124thESB_MRAP","124thESB_MRAP_HMG","124thESB_MRAP_GMG","124thESB_APC_Tracked_02_base_F","124thESB_APC_Tracked_02_medevac_F","124thESB_APC_Tracked_02_AA_F","124thESB_APC_Tracked_02_cannon_F","124thESB_MBT_52","124thESB_MSE_3","124thESB_MSE_3_unarmed","B_MBT_01_124cannon_F","B_MBT_01_124TUSK_F","B_MBT_01_124arty_F","B_MBT_01_124mlrs_F","33rdCAW_Pilot","21stMAW_Pilot"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgEditorCategories
{
	class 7FLT_Editor_Props
	{
		displayName="[TKE] 7th Expeditionary Fleet Props";
	};
};
class CfgEditorSubcategories
{
	class 7FLT_Signs
	{
		displayName="Signs";
	};
};
class CfgFactionClasses
{
	class TKE_7thFleet
	{
		displayName = "[TKE] 7th Fleet (Lunar)";
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
	class Flag_White_F;
	class EventHandlers;
	class Components;
	class TKE_Flag_86thCAB_1_F: Flag_White_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Frenchie";
		displayName = "[7th Fleet] 86th CAB Flag";
		editorCategory = "7FLT_Editor_Props";
		editorSubcategory = "7FLT_Signs";
		editorpreview = "\1MR_Vehicles\Textures\flag_n_86thCAB_cloth.paa";
		class EventHandlers {init="(_this select 0) setFlagTexture '\1MR_Vehicles\Textures\flag_n_86thCAB_cloth.paa'";};
	};
	class TKE_Flag_1MR_1_F: Flag_White_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Frenchie";
		displayName = "[7th Fleet] 1st Marine Raider Flag";
		editorCategory = "7FLT_Editor_Props";
		editorSubcategory = "7FLT_Signs";
		editorpreview = "\1MR_Vehicles\Textures\flag_n_1MR_cloth.paa";
		class EventHandlers {init="(_this select 0) setFlagTexture '\1MR_Vehicles\Textures\flag_n_1MR_cloth.paa'";};
	};
	class TKE_Flag_124_1_F: Flag_White_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Frenchie";
		displayName = "[7th Fleet] 124th ESB Flag";
		editorCategory = "7FLT_Editor_Props";
		editorSubcategory = "7FLT_Signs";
		editorpreview = "\1MR_Vehicles\Textures\flag_n_124_cloth.paa";
		class EventHandlers {init="(_this select 0) setFlagTexture '\1MR_Vehicles\Textures\flag_n_124_cloth.paa'";};
	};
	class TKE_Flag_7MEF_1_F: Flag_White_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Frenchie";
		displayName = "[7th Fleet] 7th MEF Flag";
		editorCategory = "7FLT_Editor_Props";
		editorSubcategory = "7FLT_Signs";
		editorpreview = "\1MR_Vehicles\Textures\flag_n_7MEF_cloth.paa";
		class EventHandlers {init="(_this select 0) setFlagTexture '\1MR_Vehicles\Textures\flag_n_7MEF_cloth.paa'";};
	};
	class TKE_Flag_7FLT_1_F: Flag_White_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Frenchie";
		displayName = "[7th Fleet] Navy Flag";
		editorCategory = "7FLT_Editor_Props";
		editorSubcategory = "7FLT_Signs";
		editorpreview = "\1MR_Vehicles\Textures\flag_n_7FLT_cloth.paa";
		class EventHandlers {init="(_this select 0) setFlagTexture '\1MR_Vehicles\Textures\flag_n_7FLT_cloth.paa'";};
	};
	class Banner_01_base_F;
	class TKE_Banner_86tHCAB_1_F: Banner_01_base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "the Neptune Corporation";
		displayName = "[7th Fleet] 86th CAB Banner";
		editorCategory = "7FLT_Editor_Props";
		editorSubcategory = "7FLT_Signs";
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\flag_n_86thCAB_cloth.paa"};
		editorpreview = "\1MR_Vehicles\Textures\flag_n_86thCAB_cloth.paa";
	};
	class TKE_Banner_1MR_1_F: Banner_01_base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "the Neptune Corporation";
		displayName = "[7th Fleet] 1st Marine Raider Banner";
		editorCategory = "7FLT_Editor_Props";
		editorSubcategory = "7FLT_Signs";
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\flag_n_1MR_cloth.paa"};
		editorpreview = "\1MR_Vehicles\Textures\flag_n_1MR_cloth.paa";
	};
	class TKE_Banner_124_1_F: Banner_01_base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "the Neptune Corporation";
		displayName = "[7th Fleet] 124th ESB Banner";
		editorCategory = "7FLT_Editor_Props";
		editorSubcategory = "7FLT_Signs";
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\flag_n_124_cloth.paa"};
		editorpreview = "\1MR_Vehicles\Textures\flag_n_124_cloth.paa";
	};
	class TKE_Banner_7MEF_1_F: Banner_01_base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "the Neptune Corporation";
		displayName = "[7th Fleet] 7th MEF Banner";
		editorCategory = "7FLT_Editor_Props";
		editorSubcategory = "7FLT_Signs";
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\flag_n_7MEF_cloth.paa"};
		editorpreview = "\1MR_Vehicles\Textures\flag_n_7MEF_cloth.paa";
	};
	class TKE_Banner_7FLT_1_F: Banner_01_base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "the Neptune Corporation";
		displayName = "[7th Fleet] Navy Banner";
		editorCategory = "7FLT_Editor_Props";
		editorSubcategory = "7FLT_Signs";
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\flag_n_7FLT_cloth.paa"};
		editorpreview = "\1MR_Vehicles\Textures\flag_n_7FLT_cloth.paa";
	};
	class TKE_Rogue_UniformNavyNC_inf_B;
	class 33rdCAW_Pilot: TKE_Rogue_UniformNavyNC_inf_B
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		faction = "TKE_7thFleet"
		side = 1;
		displayName = "Navy Pilot";
		role = "Pilot";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
        weapons[]={"7thFleet_C_TKE_UCNRifle2_optic_ACO_grn_smg","TKE_MDPistolBlack","Put","Throw"};
        respawnWeapons[]={"7thFleet_C_TKE_UCNRifle2_optic_ACO_grn_smg","TKE_MDPistolBlack","Put","Throw"};
        items[]={"FirstAidKit","FirstAidKit"};
        respawnItems[]={"FirstAidKit","FirstAidKit"};  
        magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag"};
        respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag"};
        linkedItems[] = {"TKE_UCMCArmour133rd","TKE_UCNPilotHelm_33rd","ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_CombatGlassesNVG"};
        respawnLinkedItems[] = {"TKE_UCMCArmour133rd","TKE_UCNPilotHelm_33rd","ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_CombatGlassesNVG"};
		backpack = "";
	};
	class TKE_Rogue_UniformNC_inf_B;
	class 21stMAW_Pilot: TKE_Rogue_UniformNC_inf_B
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		faction = "TKE_7thFleet"
		side = 1;
		displayName = "Marine Pilot";
		role = "Pilot";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
        weapons[]={"7thFleet_C_TKE_UCNRifle2_optic_ACO_grn_smg","TKE_MDPistolBlack","Put","Throw"};
        respawnWeapons[]={"7thFleet_C_TKE_UCNRifle2_optic_ACO_grn_smg","TKE_MDPistolBlack","Put","Throw"};
        items[]={"FirstAidKit","FirstAidKit"};
        respawnItems[]={"FirstAidKit","FirstAidKit"};  
        magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag"};
        respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag"};
        linkedItems[] = {"TKE_UCMCArmour121st","TKE_UCNPilotHelm_21st","ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_CombatGlassesNVG"};
        respawnLinkedItems[] = {"TKE_UCMCArmour121st","TKE_UCNPilotHelm_21st","ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_CombatGlassesNVG"};
		backpack = "";
	};
	class TKE_Rogue_UniformUCIANC_inf_B;
	class UCIA_Pilot: TKE_Rogue_UniformUCIANC_inf_B
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		faction = "TKE_7thFleet"
		side = 1;
		displayName = "UCIA Pilot";
		role = "Pilot";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
        weapons[]={"7thFleet_C_TKE_UCNRifle2_optic_ACO_grn_smg","TKE_MDPistolBlack","Put","Throw"};
        respawnWeapons[]={"7thFleet_C_TKE_UCNRifle2_optic_ACO_grn_smg","TKE_MDPistolBlack","Put","Throw"};
        items[]={"FirstAidKit","FirstAidKit"};
        respawnItems[]={"FirstAidKit","FirstAidKit"};  
        magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag"};
        respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag"};
        linkedItems[] = {"TKE_UCNPilotHelm_UCIA","TKE_UCMCArmour1UCIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_CombatGlassesNVG"};
        respawnLinkedItems[] = {"TKE_UCNPilotHelm_UCIA","TKE_UCMCArmour1UCIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_CombatGlassesNVG"};
		backpack = "";
	};
class B_T_LSV_01_unarmed_F;
class B_T_LSV_01_armed_F;
class B_T_LSV_01_AT_F;
class UCN_1MR_LSV_01_unarmed_F: B_T_LSV_01_unarmed_F
	{
		author = "Frenchie";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		DLC = "1st Marine Raiders Armory";
		displayname = "Raider LSV";
		side = 1;
		faction = "TKE_7thFleet";
		crew = "TKE_7thFleet_Raider";
		typicalCargo[] = {"TKE_7thFleet_Raider"};
		forceInGarage = 1;
		class TextureSources
		{
			class Raider
			{
				displayName = "Raider";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\1MR_LSV_01_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa"};
				factions[] = {"1MR"};
			};
			class 124
			{
				displayName = "124th ESB";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\LSV_01_124_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa"};
				factions[] = {"1MR"};
			};
			class Anvil
			{
				displayName = "Anvil";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\LSV_01_Anvil_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa"};
				factions[] = {"1MR"};
			};
		};
		textureList[] = {"Raider",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\1MR_LSV_01_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa"};
		class TransportWeapons
		{
			class _xx_TKE_MDPistolBlack
			{
				weapon = "TKE_MDPistolBlack"; 
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_TKE_MDPistol_mag
			{
				magazine = "TKE_MDPistol_mag";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_FirstAidKit
			{
				magazine = "FirstAidKit";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			
		};
	};
	class UCN_1MR_LSV_01_armed_F: B_T_LSV_01_armed_F
	{
		author = "Frenchie";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		DLC = "1st Marine Raiders Armory";
		displayname = "Raider LSV- MG";
		side = 1;
		faction = "TKE_7thFleet";
		crew = "TKE_7thFleet_Raider";
		typicalCargo[] = {"TKE_7thFleet_Raider"};
		class TextureSources
		{
			class Raider
			{
				displayName = "Raider";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\1MR_LSV_01_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa"};
				factions[] = {"1MR"};
			};
			class 124
			{
				displayName = "124th ESB";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\LSV_01_124_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa"};
				factions[] = {"1MR"};
			};
			class Anvil
			{
				displayName = "Anvil";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\LSV_01_Anvil_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa"};
				factions[] = {"1MR"};
			};
		};
		textureList[] = {"Raider",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\1MR_LSV_01_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa"};
		class TransportWeapons
		{
			class _xx_TKE_MDPistolBlack
			{
				weapon = "TKE_MDPistolBlack";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_TKE_MDPistol_mag
			{
				magazine = "TKE_MDPistol_mag";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_FirstAidKit
			{
				magazine = "FirstAidKit";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			
		};
	};
	class UCN_1MR_LSV_01_AT_F: B_T_LSV_01_AT_F
	{
		author = "Frenchie";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		DLC = "1st Marine Raiders Armory";
		displayname = "Raider LSV- AT";
		side = 1;
		faction = "TKE_7thFleet";
		crew = "TKE_7thFleet_Raider";
		typicalCargo[] = {"TKE_7thFleet_Raider"};
		class TextureSources
		{
			class Raider
			{
				displayName = "Raider";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\1MR_LSV_01_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa","\1MR_Vehicles\Textures\1MR_launcher_CO.paa","\1MR_Vehicles\Textures\1MR_tubem_CO.paa"};
				factions[] = {"1MR"};
			};
			class 124
			{
				displayName = "124th ESB";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\LSV_01_124_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa","\1MR_Vehicles\Textures\1MR_launcher_CO.paa","\1MR_Vehicles\Textures\1MR_tubem_CO.paa"};
				factions[] = {"1MR"};
			};
			class Anvil
			{
				displayName = "Anvil";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\LSV_01_Anvil_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa"};
				factions[] = {"1MR"};
			};
		};
		textureList[] = {"Raider",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\1MR_LSV_01_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa","\1MR_Vehicles\Textures\1MR_launcher_CO.paa","\1MR_Vehicles\Textures\1MR_tubem_CO.paa"};
		class TransportWeapons
		{
			class _xx_TKE_MDPistolBlack
			{
				weapon = "TKE_MDPistolBlack";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_TKE_MDPistol_mag
			{
				magazine = "TKE_MDPistol_mag";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_FirstAidKit
			{
				magazine = "FirstAidKit";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
		};
	};
	class O_MRAP_02_F;
	class 7thFleet_MRAP: O_MRAP_02_F
	{
		author = "Frenchie";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		DLC = "1st Marine Raiders Armory";
		displayname = "M-ATV Boar";
		side = 1;
		faction = "TKE_7thFleet";
		crew = "TKE_7thFleet_Marine";
		typicalCargo[] = {"TKE_7thFleet_Marine"};
		class TextureSources
		{
			class 7thMEF
			{
				displayName = "7thMEF";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\MRAP_02_ext_01_7MEF_CO.paa","\1MR_Vehicles\Textures\MRAP_02_ext_02_7MEF_CO.paa","\1MR_Vehicles\Textures\turret_7MEF.paa"};
				factions[] = {"1MR"};
			};
			class 124
			{
				displayName = "124thESB";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\MRAP_02_ext_01_124_CO.paa","\1MR_Vehicles\Textures\MRAP_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\Turret_124.paa"};
				factions[] = {"1MR"};
			};
		};
		textureList[] = {"7thMEF",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\MRAP_02_ext_01_7MEF_CO.paa","\1MR_Vehicles\Textures\MRAP_02_ext_02_7MEF_CO.paa","\1MR_Vehicles\Textures\turret_7MEF.paa"};
		class TransportWeapons
		{
			class _xx_TKE_MDPistolBlack
			{
				weapon = "TKE_MDPistolBlack";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_TKE_MDPistol_mag
			{
				magazine = "TKE_MDPistol_mag";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_FirstAidKit
			{
				magazine = "FirstAidKit";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
		};
	};
	class O_MRAP_02_hmg_F;
	class 7thFleet_MRAP_HMG: O_MRAP_02_hmg_F
	{
		author = "Frenchie";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		DLC = "1st Marine Raiders Armory";
		displayname = "M-ATV Boar (HMG)";
		side = 1;
		faction = "TKE_7thFleet";
		crew = "TKE_7thFleet_Marine";
		typicalCargo[] = {"TKE_7thFleet_Marine"};
		class TextureSources
		{
			class 7thMEF
			{
				displayName = "7thMEF";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\MRAP_02_ext_01_7MEF_CO.paa","\1MR_Vehicles\Textures\MRAP_02_ext_02_7MEF_CO.paa","\1MR_Vehicles\Textures\turret_7MEF.paa"};
				factions[] = {"1MR"};
			};
			class 124
			{
				displayName = "124thESB";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\MRAP_02_ext_01_124_CO.paa","\1MR_Vehicles\Textures\MRAP_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\Turret_124.paa"};
				factions[] = {"1MR"};
			};
		};
		textureList[] = {"7thMEF",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\MRAP_02_ext_01_7MEF_CO.paa","\1MR_Vehicles\Textures\MRAP_02_ext_02_7MEF_CO.paa","\1MR_Vehicles\Textures\turret_7MEF.paa"};
		class TransportWeapons
		{
			class _xx_TKE_MDPistolBlack
			{
				weapon = "TKE_MDPistolBlack";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_TKE_MDPistol_mag
			{
				magazine = "TKE_MDPistol_mag";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_FirstAidKit
			{
				magazine = "FirstAidKit";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
		};
	};
	class O_MRAP_02_gmg_F;
	class 7thFleet_MRAP_GMG: O_MRAP_02_gmg_F
	{
		author = "Frenchie";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		DLC = "1st Marine Raiders Armory";
		displayname = "M-ATV Boar (GMG)";
		side = 1;
		faction = "TKE_7thFleet";
		crew = "TKE_7thFleet_Marine";
		typicalCargo[] = {"TKE_7thFleet_Marine"};
		class TextureSources
		{
			class 7thMEF
			{
				displayName = "7thMEF";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\MRAP_02_ext_01_7MEF_CO.paa","\1MR_Vehicles\Textures\MRAP_02_ext_02_7MEF_CO.paa","\1MR_Vehicles\Textures\turret_7MEF.paa"};
				factions[] = {"1MR"};
			};
			class 124
			{
				displayName = "124thESB";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\MRAP_02_ext_01_124_CO.paa","\1MR_Vehicles\Textures\MRAP_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\Turret_124.paa"};
				factions[] = {"1MR"};
			};
		};
		textureList[] = {"7thMEF",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\MRAP_02_ext_01_7MEF_CO.paa","\1MR_Vehicles\Textures\MRAP_02_ext_02_7MEF_CO.paa","\1MR_Vehicles\Textures\turret_7MEF.paa"};
		class TransportWeapons
		{
			class _xx_TKE_MDPistolBlack
			{
				weapon = "TKE_MDPistolBlack";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_TKE_MDPistol_mag
			{
				magazine = "TKE_MDPistol_mag";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_FirstAidKit
			{
				magazine = "FirstAidKit";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
		};
	}; 
	class O_T_VTOL_02_infantry_dynamicLoadout_F;
	class X32C_Infantry_Base: O_T_VTOL_02_infantry_dynamicLoadout_F
	{
		class EventHandlers: EventHandlers
		{
			init="[_this select 0] execVM '\1MR_Vehicles\Functions\MagLock.sqf';";
		};
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "X-32/I Drake";
		side = 1;
		faction = "TKE_7thFleet";
		crew = "21stMAW_Pilot";
		typicalCargo[] = {"21stMAW_Pilot"};
		ace_cargo_loadmasterTurrets[] = {{1}};
        ace_cargo_space = 100;
        ace_cargo_hasCargo = 1;
		class ace_cargo {
            class cargo {
                class EF_7th_Ammo {
                    type = "EF_7th_Ammo";
                    amount = 3;
                };
				class EF_7th_Medical {
                    type = "EF_7th_Medical";
                    amount = 3;
                };
				class EF_7th_Explosive {
                    type = "EF_7th_Explosive";
                    amount = 3;
                };
			};
		};
		incomingMissileDetectionSystem = 16;
		showAllTargets = 2;
		airBrakeFrictionCoef = 15;
		altFullForce = 10000;
		altNoForce = 75000;
		fuelCapacity = 4000;
		maxGForce = 15;
		maxSpeed = 900;
		elevatorCoef[] = {1.0, 0.9, 0.75, 0.5};
		thrustCoef[] = {1.7, 1.5, 1.1};
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent
					{
						aimDown = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 80;
						allowsMarking= 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						minSpeedThreshold = 0;
						maxTrackableSpeed = 1e10;
						maxTrackableATL= 1e10;
						typeRecognitionDistance = 10000;
						class AirTarget
						{
							maxRange = 10000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 10000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class IRSensorComponent
					{
						aimDown = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 40;
						animDirection = "";
						allowsMarking= 1;
						maxSpeedThreshold = 0;
						minSpeedThreshold = 0;
						maxTrackableSpeed = 1e10;
						maxTrackableATL= 1e10;
						typeRecognitionDistance = 8000;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class LaserSensorComponent
					{};
					class NVSensorComponent
					{};
					class PassiveRadarSensorComponent
					{};
					class VisualSensorComponent
					{
						aimDown = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 40;
						animDirection = "";
						allowsMarking= 1;
						maxSpeedThreshold = 0;
						minSpeedThreshold = 0;
						maxTrackableSpeed = 1e10;
						maxTrackableATL= 1e10;
						typeRecognitionDistance = 8000;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
			class TransportCountermeasuresComponent;
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Presets{};
				class Pylons
				{
					class PylonRight1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL","7EF_Hardpoints_R"};
						priority = 5;
						turret[] = {};
						UIposition[] = {0.35,0.16};
					};
					class PylonRight2: PylonRight1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL","7EF_Hardpoints_R"};
						priority = 4;
						UIposition[] = {0.33,0.21};
					};
					class PylonLeft1: PylonRight1
					{
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL","7EF_Hardpoints_L"};
						mirroredMissilePos = 1;
						UIposition[] = {0.35,0.39};
					};
					class PylonLeft2: PylonRight2
					{
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL","7EF_Hardpoints_L"};
						mirroredMissilePos = 2;
						UIposition[] = {0.33,0.34};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "MinimapDisplay";
				left = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {16000,8000,10000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "SensorDisplay";
				right = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {16000,8000,10000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		class pilotCamera
		{
			controllable = 1;
			initElev = 15;
			initTurn = 0;
			maxElev = 90;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			maxTurn = 360;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			minElev = -20;
			minTurn = -360;
			pilotOpticsShowCursor = 1;
			class OpticsIn
			{
				class Wide
				{
					directionStabilized = 1;
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					initAngleX = 0;
					initAngleY = 0;
					initFov = "(60 / 120)";
					maxAngleX = 0;
					maxAngleY = 0;
					maxFov = "(60 / 120)";
					minAngleX = 0;
					minAngleY = 0;
					minFov = "(60 / 120)";
					opticsDisplayName = "WFOV";
					opticsPPEffects[] = {};
					thermalMode[] = {0,1};
					visionMode[] = {"Normal","NVG","Ti"};
				};
				class Medium: Wide
				{
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					initFov = "(12 / 120)";
					maxFov = "(12 / 120)";
					minFov = "(12 / 120)";
					opticsDisplayName = "MFOV";
				};
				class Narrow: Wide
				{
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					initFov = "(4 / 120)";
					maxFov = "(4 / 120)";
					minFov = "(4 / 120)";
					opticsDisplayName = "NFOV";
				};
				class VeryNarrow: Wide
				{
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					initFov = "(2 / 120)";
					maxFov = "(2 / 120)";
					minFov = "(2 / 120)";
					opticsDisplayName = "NFOV";
				};
			};
		};
		class TextureSources
		{
			class 21stMAW
			{
				displayName = "21st Marine Air Wing- Standard";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_21stMAW_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_21stMAW_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_21stMAW_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_21stMAW_CO.paa"};
			};
			class 21stMAWMRVN
			{
				displayName = "21st Marine Air Wing- Marvin the Martian";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_21stMAWMRVN_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_21stMAWMRVN_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_21stMAWMRVN_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_21stMAWMRVN_CO.paa"};
			};
			class 21stMAWRS
			{
				displayName = "21st Marine Air Wing- Red Shark";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_21stMAWRS_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_21stMAWRS_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_21stMAWRS_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_21stMAWRS_CO.paa"};
			};
			class 21stMAWASTRO
			{
				displayName = "21st Marine Air Wing- Astronaut";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_21stMAWASTRO_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_21stMAWASTRO_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_21stMAWASTRO_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_21stMAWASTRO_CO.paa"};
			};
			class 21stMAWKILGORE
			{
				displayName = "21st Marine Air Wing- Kilgore";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_21stMAWKILGORE_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_21stMAWKILGORE_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_21stMAWKILGORE_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_21stMAWKILGORE_CO.paa"};
			};
			class 274thTS
			{
				displayName = "274th Tactical Squadron";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
			class 274thTSShark
			{
				displayName = "274th Tactical Squadron- Shark";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_VictusShark_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
			class 274thTSAstro
			{
				displayName = "274th Tactical Squadron- Astronaut";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_VictusAstro_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
			class 274thTSMRVN
			{
				displayName = "274th Tactical Squadron- Marvin the Martian";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_VictusMRVN_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
		};
		textureList[] = {"21stMAW",0.6,"21stMAWMRVN",0.1,"21stMAWRS",0.1,"21stMAWASTRO",0.1,"21stMAWKILGORE",0.1,"274thTS",0,"274thTSShark",0,"274thTSAstro",0,"274thTSMRVN",0};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_21stMAW_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_21stMAW_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_21stMAW_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_21stMAW_CO.paa"};
		class TransportWeapons
		{
			class _xx_TKE_MDPistolBlack
			{
				weapon = "TKE_MDPistolBlack";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_TKE_MDPistol_mag
			{
				magazine = "TKE_MDPistol_mag";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_FirstAidKit
			{
				magazine = "FirstAidKit";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
		};
	};
	class Y32C_Victus_Infantry: X32C_Infantry_Base
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "X-32/I Drake";
		side = 1;
		faction = "274thTS";
		crew = "21stMAW_Pilot";
		typicalCargo[] = {"21stMAW_Pilot"};
		class TextureSources
		{
			class 274thTS
			{
				displayName = "274th Tactical Squadron";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
			class 274thTSShark
			{
				displayName = "274th Tactical Squadron- Shark";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_VictusShark_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
			class 274thTSAstro
			{
				displayName = "274th Tactical Squadron- Astronaut";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_VictusAstro_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
			class 274thTSMRVN
			{
				displayName = "274th Tactical Squadron- Marvin the Martian";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_VictusMRVN_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
		};
		textureList[] = {"274thTS",0.4,"274thTSShark",0.2,"274thTSAstro",0.2,"274thTSMRVN",0.2};
	};
	class O_T_VTOL_02_vehicle_dynamicLoadout_F;
	class X32C_Vehicle_Base: O_T_VTOL_02_vehicle_dynamicLoadout_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "X-32/V Drake";
		side = 1;
		faction = "TKE_7thFleet";
		crew = "21stMAW_Pilot";
		typicalCargo[] = {"21stMAW_Pilot"};
		ace_cargo_loadmasterTurrets[] = {{1}};
        ace_cargo_space = 100;
        ace_cargo_hasCargo = 1;
		slingLoadMaxCargoMass=15000;
		liftForceCoef=1.35;
		class ace_cargo {
            class cargo {
                class EF_7th_Ammo {
                    type = "EF_7th_Ammo";
                    amount = 3;
                };
				class EF_7th_Medical {
                    type = "EF_7th_Medical";
                    amount = 3;
                };
				class EF_7th_Explosive {
                    type = "EF_7th_Explosive";
                    amount = 3;
                };
			};
		};
		incomingMissileDetectionSystem = 16;
		showAllTargets = 2
		showCrewAim = 0
		airBrakeFrictionCoef = 15;
		altFullForce = 10000;
		altNoForce = 75000;
		maxSpeed = 900;
		thrustCoef[] = {1.7, 1.5, 1.3, 1.1, 1.1, 1.1, 0.6};
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent
					{
						aimDown = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 80;
						allowsMarking= 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						minSpeedThreshold = 0;
						maxTrackableSpeed = 1e10;
						maxTrackableATL= 1e10;
						typeRecognitionDistance = 10000;
						class AirTarget
						{
							maxRange = 10000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 10000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class IRSensorComponent
					{
						aimDown = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 40;
						animDirection = "";
						allowsMarking= 1;
						maxSpeedThreshold = 0;
						minSpeedThreshold = 0;
						maxTrackableSpeed = 1e10;
						maxTrackableATL= 1e10;
						typeRecognitionDistance = 8000;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class LaserSensorComponent
					{};
					class NVSensorComponent
					{};
					class PassiveRadarSensorComponent
					{};
					class VisualSensorComponent
					{
						aimDown = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 40;
						animDirection = "";
						allowsMarking= 1;
						maxSpeedThreshold = 0;
						minSpeedThreshold = 0;
						maxTrackableSpeed = 1e10;
						maxTrackableATL= 1e10;
						typeRecognitionDistance = 8000;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
			class TransportCountermeasuresComponent;
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Presets{};
				class Pylons
				{
					class PylonRight1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL"};
						priority = 5;
						turret[] = {};
						UIposition[] = {0.35,0.16};
					};
					class PylonRight2: PylonRight1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL"};
						priority = 4;
						UIposition[] = {0.33,0.21};
					};
					class PylonLeft1: PylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.35,0.39};
					};
					class PylonLeft2: PylonRight2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.33,0.34};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "MinimapDisplay";
				left = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {16000,8000,10000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "SensorDisplay";
				right = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {16000,8000,10000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		class pilotCamera
		{
			controllable = 1;
			initElev = 15;
			initTurn = 0;
			maxElev = 90;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			maxTurn = 360;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			minElev = -20;
			minTurn = -360;
			pilotOpticsShowCursor = 1;
			class OpticsIn
			{
				class Wide
				{
					directionStabilized = 1;
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					initAngleX = 0;
					initAngleY = 0;
					initFov = "(60 / 120)";
					maxAngleX = 0;
					maxAngleY = 0;
					maxFov = "(60 / 120)";
					minAngleX = 0;
					minAngleY = 0;
					minFov = "(60 / 120)";
					opticsDisplayName = "WFOV";
					opticsPPEffects[] = {};
					thermalMode[] = {0,1};
					visionMode[] = {"Normal","NVG","Ti"};
				};
				class Medium: Wide
				{
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					initFov = "(12 / 120)";
					maxFov = "(12 / 120)";
					minFov = "(12 / 120)";
					opticsDisplayName = "MFOV";
				};
				class Narrow: Wide
				{
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					initFov = "(4 / 120)";
					maxFov = "(4 / 120)";
					minFov = "(4 / 120)";
					opticsDisplayName = "NFOV";
				};
				class VeryNarrow: Wide
				{
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					initFov = "(2 / 120)";
					maxFov = "(2 / 120)";
					minFov = "(2 / 120)";
					opticsDisplayName = "NFOV";
				};
			};
		};
		class TextureSources
		{
			class 21stMAW
			{
				displayName = "21st Marine Air Wing- Standard";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_21stMAW_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_21stMAW_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_21stMAW_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_21stMAW_CO.paa"};
			};
			class 21stMAWMRVN
			{
				displayName = "21st Marine Air Wing- Marvin the Martian";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_21stMAWMRVN_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_21stMAWMRVN_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_21stMAWMRVN_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_21stMAWMRVN_CO.paa"};
			};
			class 21stMAWRS
			{
				displayName = "21st Marine Air Wing- Red Shark";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_21stMAWRS_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_21stMAWRS_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_21stMAWRS_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_21stMAWRS_CO.paa"};
			};
			class 21stMAWASTRO
			{
				displayName = "21st Marine Air Wing- Astronaut";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_21stMAWASTRO_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_21stMAWASTRO_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_21stMAWASTRO_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_21stMAWASTRO_CO.paa"};
			};
			class 21stMAWKILGORE
			{
				displayName = "21st Marine Air Wing- Kilgore";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_21stMAWKILGORE_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_21stMAWKILGORE_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_21stMAWKILGORE_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_21stMAWKILGORE_CO.paa"};
			};
			class 274thTS
			{
				displayName = "274th Tactical Squadron";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
			class 274thTSShark
			{
				displayName = "274th Tactical Squadron- Shark";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_VictusShark_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
			class 274thTSAstro
			{
				displayName = "274th Tactical Squadron- Astronaut";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_VictusAstro_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
			class 274thTSMRVN
			{
				displayName = "274th Tactical Squadron- Marvin the Martian";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_VictusMRVN_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
		};
		textureList[] = {"21stMAW",0.6,"21stMAWMRVN",0.1,"21stMAWRS",0.1,"21stMAWASTRO",0.1,"21stMAWKILGORE",0.1,"274thTS",0,"274thTSShark",0,"274thTSAstro",0,"274thTSMRVN",0};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_21stMAW_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_21stMAW_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_21stMAW_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_21stMAW_CO.paa"};
		class TransportWeapons
		{
			class _xx_TKE_MDPistolBlack
			{
				weapon = "TKE_MDPistolBlack";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_TKE_MDPistol_mag
			{
				magazine = "TKE_MDPistol_mag";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_FirstAidKit
			{
				magazine = "FirstAidKit";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
		};
	};
	class Y32C_Victus_Vehicle: X32C_Vehicle_Base
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "X-32/V Drake";
		side = 1;
		faction = "274thTS";
		crew = "21stMAW_Pilot";
		typicalCargo[] = {"21stMAW_Pilot"};
		textureList[] = {"274thTS",0.4,"274thTSShark",0.2,"274thTSAstro",0.2,"274thTSMRVN",0.2};
		
	};
	class Plane_Base_F;
	class Plane_Fighter_02_Base_F: Plane_Base_F
	{
		class EjectionSystem;
	};
	class Ejection_Seat_Plane_Fighter_02_base_F;
	class O_Plane_Fighter_02_F: Plane_Fighter_02_Base_F{};
	class O_Plane_Fighter_02_Stealth_F: Plane_Fighter_02_Base_F{};
	class B_33rdCAW_Plane_Fighter_02_F: O_Plane_Fighter_02_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "F-201/C Hawk";
		side = 1;
		faction = "TKE_7thFleet";
		crew = "33rdCAW_Pilot";
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"7EF_Gatling_30mm_Plane_CAS_01_F",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		airBrakeFrictionCoef = 15;
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		typicalCargo[] = {"33rdCAW_Pilot"};
		class TextureSources
		{
			class 33rdCAW
			{
				displayName = "33rd Carrier Air Wing- Standard";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_33rdCAW_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
			class 33rdCAWStealth
			{
				displayName = "33rd Carrier Air Wing- Stealth";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAWStealth_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_33rdCAWStealth_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
			class 33rdCAWMUZT
			{
				displayName = "33rd Carrier Air Wing- Muzthag";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAWMUZT_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_33rdCAWMUZT_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAWMUZT_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
			class Army
			{
				displayName = "Army";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Army_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_Army_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
			class Navy
			{
				displayName = "Navy";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Navy_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_Navy_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
			class Stealth
			{
				displayName = "Stealth";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Stealth_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_Stealth_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
			class 274thTS
			{
				displayName = "Victus";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Victus_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
		};
		textureList[] = {"33rdCAW",1,"33rdCAWMUZT",0,"33rdCAWStealth",0,"Army",0,"Navy",0,"Stealth",0,"274thTS",0};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_33rdCAW_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa","\A3\Data_F\clear_empty.paa"};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass = "B_33rdCAW_Ejection_Seat_Plane_Fighter_02_F";
		};
		vtol = 4;
	};
	class B_Victus_Plane_Fighter_02_F: B_33rdCAW_Plane_Fighter_02_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "F-201/C Hawk";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"7EF_Gatling_30mm_Plane_CAS_01_F",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		airBrakeFrictionCoef = 15;
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		textureList[] = {"274thTS",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Victus_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
		vtol = 4;
	};
	class B_33rdCAW_Plane_Fighter_02_Stealth_F: O_Plane_Fighter_02_Stealth_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "F-201/S Hawk";
		side = 1;
		faction = "TKE_7thFleet";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"7EF_Gatling_30mm_Plane_CAS_01_F",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class TextureSources
		{
			class 33rdCAW
			{
				displayName = "33rd Carrier Air Wing- Standard";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_33rdCAW_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
			class 33rdCAWStealth
			{
				displayName = "33rd Carrier Air Wing- Stealth";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAWStealth_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_33rdCAWStealth_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
			class 33rdCAWMUZT
			{
				displayName = "33rd Carrier Air Wing- Muzthag";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAWMUZT_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_33rdCAWMUZT_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAWMUZT_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
			class Army
			{
				displayName = "Army";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Army_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_Army_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
			class Navy
			{
				displayName = "Navy";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Navy_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_Navy_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
			class Stealth
			{
				displayName = "Stealth";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Stealth_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_Stealth_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
			class 274thTS
			{
				displayName = "Victus";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Victus_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
			};
		};
		textureList[] = {"33rdCAW",1,"33rdCAWMUZT",0,"33rdCAWStealth",0,"Army",0,"Navy",0,"Stealth",0,"274thTS",0};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_33rdCAW_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_33rdCAW_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass = "B_33rdCAW_Ejection_Seat_Plane_Fighter_02_F";
		};
		airBrakeFrictionCoef = 15;
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;
		vtol = 4;
	};
	class B_Victus_Plane_Fighter_02_Stealth_F: B_33rdCAW_Plane_Fighter_02_Stealth_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "F-201/S Hawk";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"7EF_Gatling_30mm_Plane_CAS_01_F",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		textureList[] = {"274thTS",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Victus_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};
		airBrakeFrictionCoef = 15;
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;
		vtol = 4;
	};
	class B_33rdCAW_Ejection_Seat_Plane_Fighter_02_F: Ejection_Seat_Plane_Fighter_02_base_F
	{
		author = "Frenchie";
		scope = 1;
		side = 1;
		faction = "TKE_7thFleet";
		crew = "33rdCAW_Pilot";
	};
	class B_Heli_Transport_03_F;
	class Victus_Heli_Transport_03_F: B_Heli_Transport_03_F
	{
		class EventHandlers: EventHandlers
		{
			init="[_this select 0] execVM '\1MR_Vehicles\Functions\MagLock.sqf';";
		};
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		attendant = 1;
        ace_cargo_loadmasterTurrets[] = {{1}};
        ace_cargo_space = 100;
        ace_cargo_hasCargo = 1;
		slingLoadMaxCargoMass=80000;
		liftForceCoef=1.65;
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class ace_cargo {
            class cargo {
                class EF_7th_Ammo {
                    type = "EF_7th_Ammo";
                    amount = 6;
                };
				class EF_7th_Medical {
                    type = "EF_7th_Medical";
                    amount = 6;
                };
				class EF_7th_Explosive {
                    type = "EF_7th_Explosive";
                    amount = 6;
                };
			};
		};
		class TextureSources
		{
			class Victus
			{
				displayName = "Victus";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Heli_Transport_03_ext01_UCN_CO.paa","\1MR_Vehicles\Textures\Heli_Transport_03_ext02_UCN_CO.paa"};
				factions[] = {"1MR"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelectionsTextures[]= {"\1MR_Vehicles\Textures\Heli_Transport_03_ext01_UCN_CO.paa","\1MR_Vehicles\Textures\Heli_Transport_03_ext02_UCN_CO.paa"};
	};
	class B_Heli_Transport_03_unarmed_F;
	class Victus_Heli_Transport_03_unarmed_F: B_Heli_Transport_03_unarmed_F
	{
		class EventHandlers: EventHandlers
		{
			init="[_this select 0] execVM '\1MR_Vehicles\Functions\MagLock.sqf';";
		};
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		attendant = 1;
        ace_cargo_loadmasterTurrets[] = {{1}};
        ace_cargo_space = 100;
        ace_cargo_hasCargo = 1;
		slingLoadMaxCargoMass=80000;
		liftForceCoef=1.65;
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class ace_cargo {
            class cargo {
                class EF_7th_Ammo {
                    type = "EF_7th_Ammo";
                    amount = 6;
                };
				class EF_7th_Medical {
                    type = "EF_7th_Medical";
                    amount = 6;
                };
				class EF_7th_Explosive {
                    type = "EF_7th_Explosive";
                    amount = 6;
                };
			};
		};
		class TextureSources
		{
			class Victus
			{
				displayName = "Victus";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\Heli_Transport_03_ext01_UCN_CO.paa","\1MR_Vehicles\Textures\Heli_Transport_03_ext02_UCN_CO.paa"};
				factions[] = {"1MR"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelectionsTextures[]= {"\1MR_Vehicles\Textures\Heli_Transport_03_ext01_UCN_CO.paa","\1MR_Vehicles\Textures\Heli_Transport_03_ext02_UCN_CO.paa"};
	};
	class B_Heli_Transport_01_F;
	class Victus_Heli_Transport_01_F: B_Heli_Transport_01_F
	{
		class EventHandlers: EventHandlers
		{
			init="[_this select 0] execVM '\1MR_Vehicles\Functions\MagLock.sqf';";
		};
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		hiddenSelectionsTextures[]= {"\1MR_Vehicles\Textures\Heli_Transport_01_ext01_UCN_CO.paa","\1MR_Vehicles\Textures\Heli_Transport_01_ext02_UCN_CO.paa"};
		ace_cargo_loadmasterTurrets[] = {{1}};
        ace_cargo_space = 100;
        ace_cargo_hasCargo = 1;
		slingLoadMaxCargoMass=15000;
		liftForceCoef=1.35;
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class ace_cargo {
            class cargo {
                class EF_7th_Ammo {
                    type = "EF_7th_Ammo";
                    amount = 1;
                };
				class EF_7th_Medical {
                    type = "EF_7th_Medical";
                    amount = 1;
                };
				class EF_7th_Explosive {
                    type = "EF_7th_Explosive";
                    amount = 1;
                };
			};
		};
	};
	class B_Heli_Light_01_dynamicLoadout_F;
	class Victus_Heli_Light_01_dynamicLoadout_F: B_Heli_Light_01_dynamicLoadout_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine", 
			"2500Rnd_127x99_mag_Tracer_Red",
			"2500Rnd_127x99_mag_Tracer_Red"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"7EF_M134_minigun",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		hiddenSelectionsTextures[]= {"\1MR_Vehicles\Textures\Heli_Light_01_ext_UCN_CO.paa"};
		#include "\1MR_Vehicles\MFD.cpp"
	};
	class B_Heli_Light_01_F;
	class Victus_Heli_Light_01_F: B_Heli_Light_01_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		hiddenSelectionsTextures[]= {"\1MR_Vehicles\Textures\Heli_Light_01_ext_UCN_CO.paa"};
		#include "\1MR_Vehicles\MFD.cpp"
	};
	class O_Plane_CAS_02_dynamicLoadout_F;
	class Victus_O_Plane_CAS_02_dynamicLoadout_F: O_Plane_CAS_02_dynamicLoadout_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		displayName = "Strix-9";
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"Laserdesignator_pilotCamera",
			"7EF_Gatling_30mm_Plane_CAS_01_F",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\Fighter02_ext01_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter02_ext02_Victus_CO.paa"};
		airBrakeFrictionCoef = 15;
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;
		fuelCapacity = 2540;
		maxSpeed = 1500;
		thrustCoef[] = {2.5, 2.2, 2.0, 1.8, 1.6, 1.3, 1.0};
		envelope[] = {0.8, 1.6, 2.8, 3.5, 3.0, 1.7, 0.8};
		aileronSensitivity = 1.2;
		elevatorSensitivity = 0.9;
		GLimit = 9;
		angleOfIndicence = 0.065;
		airFrictionCoef = 0.85;
		flapsEffectiveness = 1.6;
		landingAoa = 14;
		vtol = 4;
	};
};