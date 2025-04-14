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
		units[] = {"Victus_Gryphon","Victus_O_Plane_CAS_02_dynamicLoadout_F","qav_ripsaw_Mk44_7thFleet","Victus_Heli_Transport_03_F","Victus_Heli_Transport_03_unarmed_F","Victus_Heli_Transport_01_F","Victus_Heli_Light_01_dynamicLoadout_F","Victus_Heli_Light_01_F","Victus_Heli_Attack_01_F","B_Victus_Plane_Fighter_02_F","B_Victus_Plane_Fighter_02_Stealth_F","Y32C_Victus_Infantry","Y32C_Victus_Vehicle","UCN_1MR_LSV_01_unarmed_F","UCN_1MR_LSV_01_armed_F","UCN_1MR_LSV_01_AT_F","UCN_UCIA_LSV_01_unarmed_F","UCN_UCIA_LSV_01_armed_F","UCN_UCIA_LSV_01_AT_F","7thFleet_MRAP","7thFleet_MRAP_HMG","7thFleet_MRAP_GMG","7thMEF_APC_Tracked_02_base_F","7thMEF_APC_Tracked_02_medevac_F","7thMEF_APC_Tracked_02_AA_F","7thMEF_APC_Tracked_02_cannon_F","7thFleet_MBT_52","7thFleet_MSE_3","7thFleet_MSE_3_unarmed","X32C_Infantry_Base","Y32C_21stMAW_Vehicle","Y32C_UCIA_Infantry","Y32C_UCIA_Vehicle","B_33rdCAW_Plane_Fighter_02_F","B_33rdCAW_Plane_Fighter_02_Stealth_F","UCN_124_LSV_01_unarmed_F","UCN_124_LSV_01_armed_F","UCN_124_LSV_01_AT_F","124thESB_MRAP","124thESB_MRAP_HMG","124thESB_MRAP_GMG","124thESB_APC_Tracked_02_base_F","124thESB_APC_Tracked_02_medevac_F","124thESB_APC_Tracked_02_AA_F","124thESB_APC_Tracked_02_cannon_F","124thESB_MBT_52","124thESB_MSE_3","124thESB_MSE_3_unarmed","B_MBT_01_124cannon_F","B_MBT_01_124TUSK_F","B_MBT_01_124arty_F","B_MBT_01_124mlrs_F","33rdCAW_Pilot","21stMAW_Pilot"};
		vehicles[] = {"Victus_Gryphon","Victus_O_Plane_CAS_02_dynamicLoadout_F","qav_ripsaw_Mk44_7thFleet","B_Victus_Plane_Fighter_02_F","B_Victus_Plane_Fighter_02_Stealth_F","Y32C_Victus_Infantry","Y32C_Victus_Vehicle","UCN_1MR_LSV_01_unarmed_F","UCN_1MR_LSV_01_armed_F","UCN_1MR_LSV_01_AT_F","UCN_UCIA_LSV_01_unarmed_F","UCN_UCIA_LSV_01_armed_F","UCN_UCIA_LSV_01_AT_F","7thFleet_MRAP","7thFleet_MRAP_HMG","7thFleet_MRAP_GMG","7thMEF_APC_Tracked_02_base_F","7thMEF_APC_Tracked_02_medevac_F","7thMEF_APC_Tracked_02_AA_F","7thMEF_APC_Tracked_02_cannon_F","7thFleet_MBT_52","7thFleet_MSE_3","7thFleet_MSE_3_unarmed","X32C_Infantry_Base","Y32C_21stMAW_Vehicle","Y32C_UCIA_Infantry","Y32C_UCIA_Vehicle","B_33rdCAW_Plane_Fighter_02_F","B_33rdCAW_Plane_Fighter_02_Stealth_F","UCN_124_LSV_01_unarmed_F","UCN_124_LSV_01_armed_F","UCN_124_LSV_01_AT_F","124thESB_MRAP","124thESB_MRAP_HMG","124thESB_MRAP_GMG","124thESB_APC_Tracked_02_base_F","124thESB_APC_Tracked_02_medevac_F","124thESB_APC_Tracked_02_AA_F","124thESB_APC_Tracked_02_cannon_F","124thESB_MBT_52","124thESB_MSE_3","124thESB_MSE_3_unarmed","B_MBT_01_124cannon_F","B_MBT_01_124TUSK_F","B_MBT_01_124arty_F","B_MBT_01_124mlrs_F","33rdCAW_Pilot","21stMAW_Pilot"};
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

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsDisplayManagerComponentLeft
{
	class Components;
};
class VehicleSystemsDisplayManagerComponentRight
{
	class Components;
};
class EventHandlers;
class Components;
class Turrets
{
	class MainTurret;
};

class CfgVehicles
{
	class Flag_White_F;
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
	class UCN_124_LSV_01_unarmed_F: UCN_1MR_LSV_01_unarmed_F
	{
		author = "Frenchie";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		DLC = "1st Marine Raiders Armory";
		displayname = "LSV";
		side = 1;
		faction = "124thESB";
		crew = "TKE_7thFleet_Raider";
		typicalCargo[] = {"TKE_7thFleet_Raider"};
		forceInGarage = 1;
		textureList[] = {"124",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\LSV_01_124_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa"};
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
	class UCN_124_LSV_01_armed_F: UCN_1MR_LSV_01_armed_F
	{
		author = "Frenchie";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		DLC = "1st Marine Raiders Armory";
		displayname = "LSV- MG";
		side = 1;
		faction = "124thESB";
		crew = "TKE_7thFleet_Raider";
		typicalCargo[] = {"TKE_7thFleet_Raider"};
		forceInGarage = 1;
		textureList[] = {"124",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\LSV_01_124_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa"};
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

	class O_APC_Tracked_02_AA_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class 7thMEF_APC_Tracked_02_AA_F: O_APC_Tracked_02_AA_F
	{
		author = "Frenchie";
		armor = 630;
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		DLC = "1st Marine Raiders Armory";
		displayname = "AAV-5 Rattlesnake";
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
				textures[] = {"\1MR_Vehicles\Textures\APC_Tracked_02_ext_01_7MEF_AA_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_02_ext_02_7MEF_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_01_AA_Tower_7MEF_CO.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
				factions[] = {"1MR"};
			};
			class 124
			{
				displayName = "124thESB";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\APC_Tracked_02_ext_01_124_AA_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_01_AA_Tower_124_CO.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
				factions[] = {"1MR"};
			};
		};
		textureList[] = {"7thMEF",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\APC_Tracked_02_ext_01_7MEF_AA_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_02_ext_02_7MEF_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_01_AA_Tower_7MEF_CO.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Green","7EF_AtlasAA_2Rnd","7EF_AtlasAA_2Rnd"};
				weapons[] = {"7EF_35mm_AA_Weapon","7EF_Atlas_G2A_Weapon"};
			};
		};
	};
	class 124thESB_APC_Tracked_02_AA_F: 7thMEF_APC_Tracked_02_AA_F
	{
		faction = "124thESB";
		textureList[] = {"124",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\APC_Tracked_02_ext_01_124_AA_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_01_AA_Tower_124_CO.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
	};
	class O_KEF_MDTF_AAV_5: O_APC_Tracked_02_AA_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Red","7EF_AI_AA_2Rnd","7EF_AI_AA_2Rnd"};
				weapons[] = {"autocannon_35mm","7EF_AI_AA_Weapon"};
			};
		};
	};
	class O_KEF_MDMC_AAV_5: O_APC_Tracked_02_AA_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Red","7EF_AI_AA_2Rnd","7EF_AI_AA_2Rnd"};
				weapons[] = {"autocannon_35mm","7EF_AI_AA_Weapon"};
			};
		};
	};
	class O_KEF_MDMC_W_AAV_5: O_APC_Tracked_02_AA_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Red","7EF_AI_AA_2Rnd","7EF_AI_AA_2Rnd"};
				weapons[] = {"autocannon_35mm","7EF_AI_AA_Weapon"};
			};
		};
	};
	class O_KEF_MDTF_C_AAV_5: O_APC_Tracked_02_AA_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Red","7EF_AI_AA_2Rnd","7EF_AI_AA_2Rnd"};
				weapons[] = {"autocannon_35mm","7EF_AI_AA_Weapon"};
			};
		};
	};
	class O_KEF_MDTF_W_AAV_5: O_APC_Tracked_02_AA_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Red","7EF_AI_AA_2Rnd","7EF_AI_AA_2Rnd"};
				weapons[] = {"autocannon_35mm","7EF_AI_AA_Weapon"};
			};
		};
	};
	class ER_JCG_AAV_5: O_APC_Tracked_02_AA_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Red","7EF_AI_AA_2Rnd","7EF_AI_AA_2Rnd"};
				weapons[] = {"autocannon_35mm","7EF_AI_AA_Weapon"};
			};
		};
	};
	class ER_JSF_AAV_5: O_APC_Tracked_02_AA_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Red","7EF_AI_AA_2Rnd","7EF_AI_AA_2Rnd"};
				weapons[] = {"autocannon_35mm","7EF_AI_AA_Weapon"};
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
	class 124thESB_MRAP: 7thFleet_MRAP
	{
		faction = "124thESB";
		textureList[] = {"124",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\MRAP_02_ext_01_124_CO.paa","\1MR_Vehicles\Textures\MRAP_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\Turret_124.paa"};
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
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
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
	class 124thESB_MRAP_HMG: 7thFleet_MRAP_HMG
	{
		faction = "124thESB";
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
		textureList[] = {"124",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\MRAP_02_ext_01_124_CO.paa","\1MR_Vehicles\Textures\MRAP_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\Turret_124.paa"};
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
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
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
	class 124thESB_MRAP_GMG: 7thFleet_MRAP_GMG
	{
		faction = "124thESB";
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
		textureList[] = {"124",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\MRAP_02_ext_01_124_CO.paa","\1MR_Vehicles\Textures\MRAP_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\Turret_124.paa"};
	};
	class I_MBT_03_cannon_F;
	class 7thFleet_MBT_52: I_MBT_03_cannon_F
	{
		faction="7thFleet";
		side=1;
		displayName="MBT-52 Jaguar";
		hiddenSelectionsTextures[]={"\1MR_Vehicles\Textures\mbt_03_ext01_7MEF_co.paa","\1MR_Vehicles\Textures\mbt_03_ext02_7MEF_co.paa","\1MR_Vehicles\Textures\mbt_03_rcws_7MEF_co.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
		crew="7thFleet_Crewman";
		typicalCargo[]={"7thFleet_Crewman"};
		class TransportMagazines
		{
			class _xx_TKE_35rnd_62x35_mag
			{
				magazine = "TKE_35rnd_62x35_mag";
				count = 4;
			};
			class _xx_TKE_SMOKE_mag
			{
				magazine = "TKE_SMOKE_mag";
				count = 2;
			};
			class _xx_TKE_SMOKE_mag_blue
			{
				magazine = "TKE_SMOKE_mag_blue";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg
			{
				weapon = "7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
		};
	};
	class 124thESB_MBT_52: 7thFleet_MBT_52
	{
		faction="124thESB";
		hiddenSelectionsTextures[]={"\1MR_Vehicles\Textures\mbt_03_ext01_124_co.paa","\1MR_Vehicles\Textures\mbt_03_ext02_124_co.paa","\1MR_Vehicles\Textures\mbt_03_rcws_124_co.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
		crew="7thFleet_Crewman";
		typicalCargo[]={"7thFleet_Crewman"};
	};
	class B_MBT_01_cannon_F;
	class B_MBT_01_124cannon_F: B_MBT_01_cannon_F
	{
		faction="124thESB";
		side=1;
		displayName="MBT-94 Lion";
		hiddenSelectionsTextures[]={"\1MR_Vehicles\Textures\mbt_01_body_124_co.paa","\1MR_Vehicles\Textures\mbt_01_tow_124_co.paa","\1MR_Vehicles\Textures\mbt_addons_124_co.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
		crew="7thFleet_Crewman";
		typicalCargo[]={"7thFleet_Crewman"};
		class TransportMagazines
		{
			class _xx_TKE_35rnd_62x35_mag
			{
				magazine = "TKE_35rnd_62x35_mag";
				count = 4;
			};
			class _xx_TKE_SMOKE_mag
			{
				magazine = "TKE_SMOKE_mag";
				count = 2;
			};
			class _xx_TKE_SMOKE_mag_blue
			{
				magazine = "TKE_SMOKE_mag_blue";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg
			{
				weapon = "7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
		};
	};
	class B_MBT_01_TUSK_F;
	class B_MBT_01_124TUSK_F: B_MBT_01_TUSK_F 
	{
		faction="124thESB";
		side=1;
		displayName="MBT-94 Lion (TUSK)";
		hiddenSelectionsTextures[]={"\1MR_Vehicles\Textures\mbt_01_body_124_co.paa","\1MR_Vehicles\Textures\mbt_01_tow_124_co.paa","\1MR_Vehicles\Textures\mbt_addons_124_co.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
		crew="7thFleet_Crewman";
		typicalCargo[]={"7thFleet_Crewman"};
		class TransportMagazines
		{
			class _xx_TKE_35rnd_62x35_mag
			{
				magazine = "TKE_35rnd_62x35_mag";
				count = 4;
			};
			class _xx_TKE_SMOKE_mag
			{
				magazine = "TKE_SMOKE_mag";
				count = 2;
			};
			class _xx_TKE_SMOKE_mag_blue
			{
				magazine = "TKE_SMOKE_mag_blue";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg
			{
				weapon = "7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
		};
	};
	class B_MBT_01_arty_F;
	class B_MBT_01_124arty_F: B_MBT_01_arty_F
	{
		faction="124thESB";
		side=1;
		displayName="M14 Elephant"; 
		hiddenSelectionsTextures[]={"\1MR_Vehicles\Textures\mbt_01_body_124_co.paa","\1MR_Vehicles\Textures\mbt_01_scorcher_124_co.paa","\1MR_Vehicles\Textures\mbt_addons_124_co.paa","\1MR_Vehicles\Textures\Turret_124.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
		crew="7thFleet_Crewman";
		typicalCargo[]={"7thFleet_Crewman"};
		class TransportMagazines
		{
			class _xx_TKE_35rnd_62x35_mag
			{
				magazine = "TKE_35rnd_62x35_mag";
				count = 4;
			};
			class _xx_TKE_SMOKE_mag
			{
				magazine = "TKE_SMOKE_mag";
				count = 2;
			};
			class _xx_TKE_SMOKE_mag_blue
			{
				magazine = "TKE_SMOKE_mag_blue";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg
			{
				weapon = "7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
		};
	};
	class B_MBT_01_mlrs_F;
	class B_MBT_01_124mlrs_F: B_MBT_01_mlrs_F
	{
		faction="124thESB";
		side=1;
		displayName="M15 Giraffe"; 
		hiddenSelectionsTextures[]={"\1MR_Vehicles\Textures\mbt_01_body_124_co.paa","\1MR_Vehicles\Textures\mbt_01_mlrs_124_co.paa","\1MR_Vehicles\Textures\mbt_addons_124_co.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
		crew="7thFleet_Crewman";
		typicalCargo[]={"7thFleet_Crewman"};
		class TransportMagazines
		{
			class _xx_TKE_35rnd_62x35_mag
			{
				magazine = "TKE_35rnd_62x35_mag";
				count = 4;
			};
			class _xx_TKE_SMOKE_mag
			{
				magazine = "TKE_SMOKE_mag";
				count = 2;
			};
			class _xx_TKE_SMOKE_mag_blue
			{
				magazine = "TKE_SMOKE_mag_blue";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg
			{
				weapon = "7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
		};
	};

	class Plane_Base_F;
	class Plane_Fighter_04_Base_F: Plane_Base_F
	{
		class EjectionSystem;
	};
	class I_Plane_Fighter_04_F: Plane_Fighter_04_Base_F{};
	class Ejection_Seat_Plane_Fighter_04_base_F;
	class B_33rdCAW_Ejection_Seat_Plane_Fighter_02_F: Ejection_Seat_Plane_Fighter_04_base_F
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
		class EventHandlers
		{
			init="[_this select 0] execVM '\1MR_Vehicles\Functions\MagLock.sqf'";
		};
		author = "Frenchie";
		armor = 80;
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
		class TransportItems
		{
			class Victus_Parachute_TI
			{
				item = "B_Parachute";
				count = 1;
			};
		};
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
		class EventHandlers
		{
			init="[_this select 0] execVM '\1MR_Vehicles\Functions\MagLock.sqf'";
		};
		author = "Frenchie";
		armor = 80;
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
		class TransportItems
		{
			class Victus_Parachute_TI
			{
				item = "B_Parachute";
				count = 1;
			};
		};
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
		class EventHandlers
		{
			init="[_this select 0] execVM '\1MR_Vehicles\Functions\MagLock.sqf'";
		};
		author = "Frenchie";
		armor = 70;
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
		class TransportItems
		{
			class Victus_Parachute_TI
			{
				item = "B_Parachute";
				count = 1;
			};
		};
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
		armor = 50;
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine", 
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
		class TransportItems
		{
			class Victus_Parachute_TI
			{
				item = "B_Parachute";
				count = 1;
			};
		};
		hiddenSelectionsTextures[]= {"\1MR_Vehicles\Textures\Heli_Light_01_ext_UCN_CO.paa"};

		incomingMissileDetectionSystem = 16;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						aimDown = 30;
						angleRangeHorizontal = 120;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableSpeed = 300;
						minSpeedThreshold = 0;
						
						class AirTarget
						{
							maxRange = 2000;
							minRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 2000;
							minRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};

					class IRSensorComponent: SensorTemplateIR
					{
						aimdown = -0.25;
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						maxTrackableSpeed = 300;

						class AirTarget
						{
							maxRange = 2000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 2000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};

					class VisualSensorComponent: SensorTemplateVisual
					{
						aimdown = -0.25;
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						maxTrackableSpeed = 300;

						class AirTarget
						{
							maxRange = 1500;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 1500;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};


					class LaserSensorComponent;
					class NVSensorComponent;
					class PassiveRadarSensorComponent;
				};
			};
			class TransportCountermeasuresComponent;
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F\Heli_Light_01\Data\UI\Heli_Light_01_3DEN_CA.paa";
				class Presets;
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "7th_Widowmaker_12Rnd";
						hardpoints[] = {"7th_Hardpoints_Sabertooth","7th_Hardpoints_Talon","7th_Hardpoints_Havoc","7th_Hardpoints_Stratos","7th_Hardpoints_Atlas","7th_Hardpoints_Widowmaker"};
						priority = 5;
						UIposition[] = {0.06,0.4};
					};
					class PylonRight1:PylonLeft1
					{
						mirroredMissilePos = 1;
						priority = 5;
						UIposition[] = {0.59,0.4};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[] = {3000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[] = {3000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class B_Heli_Light_01_F;
	class Victus_Heli_Light_01_F: B_Heli_Light_01_F
	{
		author = "Frenchie";
		armor = 50;
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class Victus_Parachute_TI
			{
				item = "B_Parachute";
				count = 1;
			};
		};
		hiddenSelectionsTextures[]= {"\1MR_Vehicles\Textures\Heli_Light_01_ext_UCN_CO.paa"};
		incomingMissileDetectionSystem = 16;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						aimDown = 30;
						angleRangeHorizontal = 120;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableSpeed = 300;
						minSpeedThreshold = 0;
						
						class AirTarget
						{
							maxRange = 2000;
							minRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 2000;
							minRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};

					class IRSensorComponent: SensorTemplateIR
					{
						aimdown = -0.25;
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						maxTrackableSpeed = 300;

						class AirTarget
						{
							maxRange = 2000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 2000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};

					class VisualSensorComponent: SensorTemplateVisual
					{
						aimdown = -0.25;
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						maxTrackableSpeed = 300;

						class AirTarget
						{
							maxRange = 1500;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 1500;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};


					class LaserSensorComponent;
					class NVSensorComponent;
					class PassiveRadarSensorComponent;
				};
			};
			class TransportCountermeasuresComponent;
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[] = {3000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[] = {3000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class Victus_Gryphon: I_Plane_Fighter_04_F
	{
		author = "Schnee";
		armor = 100;
		acceleration = 500;
		fuelCapacity = 2540;
		maxSpeed = 1800;
		VTOLPitchInfluence = 3.0;
		VTOLRollInfluence = 10.0;
		VTOLYawInfluence = 6.0;
		vtol = 4;
		thrustCoef[] = {1.8,1.8,1.8,1.9,2,2.3,2.5,2.3,2,2,2,1.8,0.8,0.8,1.0,1.2};
		airBrakeFrictionCoef = 15;
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;
		geardowntime = 2;
		gearuptime = 2;
		crewCrashProtection = 0.1;
		LockDetectionSystem = "2+4+8";
		tf_isolatedAmount = 0.05;
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		displayName = "UC-F/42 Wyrm";
		textureList[] = {"Victus",1};
		hiddenSelectionsTextures[] = {
			"\1MR_Vehicles\Textures\Victus_04_Fus01_co.paa",
			"\1MR_Vehicles\Textures\Victus_04_Fus02_co.paa",
			"a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
		};
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"1800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"Laserdesignator_pilotCamera",
			"7EF_Gatling_30mm_Plane_CAS_01_F",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=100;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=8000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=120;
						maxTrackableSpeed=500;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=100;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=100;
						aimDown=1;
						animDirection="pilotCameraRotY";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=0.1;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=13000;
							maxRange=13000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=13000;
							maxRange=13000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=0.1;
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableATL=100;
						maxTrackableSpeed=60;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={12000,2000,16000,6000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={12000,2000,16000,6000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportCountermeasuresComponent;
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Jets\Plane_Fighter_04\Data\UI\Fighter_04_3DEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"7th_Hardpoints"
							
						};
						attachment="7EF_StratosAA_1Rnd";
						priority=5;
						maxweight=300;
						UIposition[]={0.55000001,0.40000001};
					};
					class pylon2: pylon1
					{
						UIposition[]={0.1,0.40000001};
						mirroredMissilePos=1;
					};
					class pylon3
					{
						hardpoints[]=
						{
							"7th_Hardpoints"
						};
						priority=4;
						attachment="7EF_Talon_4Rnd";
						maxweight=750;
						UIposition[]={0.5,0.34999999};
					};
					class Pylon4: pylon3
					{
						UIposition[]={0.15000001,0.34999999};
						mirroredMissilePos=3;
					};
					class pylon5
					{
						hardpoints[]=
						{
							"7th_Hardpoints"
						};
						priority=3;
						attachment="7EF_Jupiter_500_1Rnd";
						maxweight=1200;
						UIposition[]={0.44999999,0.30000001};
					};
					class Pylon6: pylon5
					{
						UIposition[]={0.2,0.30000001};
						mirroredMissilePos=5;
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
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass = "B_33rdCAW_Ejection_Seat_Plane_Fighter_02_F";
		};
	};
	class O_Plane_CAS_02_dynamicLoadout_F;
	class Victus_O_Plane_CAS_02_dynamicLoadout_F: O_Plane_CAS_02_dynamicLoadout_F
	{
		author = "Schnee";
		armor = 120;
		DLC = "1st Marine Raiders Armory";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		displayName = "UC-G/55 Strix";
		textPlural = "Victus overhead";
		textSingular = "Victus overhead";
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"1800Rnd_Gatling_30mm_Plane_CAS_01_F"
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
		maxSpeed = 650;
		thrustCoef[] = { 2.0, 1.6, 1.3, 1.3, 1.2, 1.8, 1.8, 1.8, 1.5, 1.2, 1.3, 1.4, 1.6 };
		envelope[] = {0,0.07,0.28,0.63,1.11,1.74,2.51,3.41,4.46,5.64,6.96,8.42,8.8,9.11,9.38,9.45,9.43,9,8,7,6};
		aileronSensitivity = 1.2;
		elevatorSensitivity = 0.9;
		angleOfIndicence = 0.065;
		airFrictionCoef = 0.85;
		flapsEffectiveness = 1.6;
		landingAoa = 14;
		vtol = 4;
		geardowntime = 2;
		gearuptime = 2;
		crewCrashProtection = 0.1;
		LockDetectionSystem = "2+4+8";
		tf_isolatedAmount = 0.05;
		class Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Plane_cas_02_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]={"7th_Hardpoints_Stratos","7th_Hardpoints_Atlas",};
						attachment="7EF_StratosAA_1Rnd";
						priority=5;
						maxweight=150;
						UIposition[]={0.34999999,0};
					};
					class Pylons2: Pylons1
					{
						hardpoints[]={"7th_Hardpoints_Havoc", "7th_Hardpoints_Talon", "7th_Hardpoints_Stratos", "7th_Hardpoints_Atlas", "7th_Hardpoints_Bombs", "7th_Hardpoints_Widowmaker", "7th_Hardpoints_Cryon"};
						priority=4;
						attachment="7th_Widowmaker_12Rnd";
						maxweight=500;
						UIposition[]={0.345,0.050000001};
					};
					class Pylons3: Pylons1
					{
						hardpoints[]={"7th_Hardpoints_Guardian","7th_Hardpoints_Sabertooth","7th_Hardpoints_Havoc", "7th_Hardpoints_Talon", "7th_Hardpoints_Stratos", "7th_Hardpoints_Atlas", "7th_Hardpoints_Bombs", "7th_Hardpoints_Widowmaker"};
						priority=3;
						attachment="7EF_Talon_4Rnd";
						maxweight=1050;
						UIposition[]={0.34,0.1};
					};
					class Pylons4: Pylons1
					{
						hardpoints[]={"7th_Hardpoints_Havoc", "7th_Hardpoints_Talon", "7th_Hardpoints_Stratos", "7th_Hardpoints_Atlas", "7th_Hardpoints_Bombs"};
						priority=2;
						attachment="7EF_Jupiter_500_1Rnd";
						maxweight=1200;
						UIposition[]={0.33000001,0.2};
					};
					class Pylons5: Pylons1
					{
						hardpoints[]={"7th_Hardpoints_Havoc", "7th_Hardpoints_Talon", "7th_Hardpoints_Stratos", "7th_Hardpoints_Atlas", "7th_Hardpoints_Bombs"};
						priority=1;
						attachment="7EF_Jupiter_500_1Rnd";
						maxweight=1200;
						UIposition[]={0.33000001,0.25};
					};
					class Pylons6: Pylons5
					{
						UIposition[]={0.33000001,0.30000001};
						mirroredMissilePos=5;
					};
					class Pylons7: Pylons4
					{
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=4;
					};
					class Pylons8: Pylons3
					{
						UIposition[]={0.34,0.44999999};
						mirroredMissilePos=3;
					};
					class Pylons9: Pylons2
					{
						UIposition[]={0.345,0.5};
						mirroredMissilePos=2;
					};
					class Pylons10: Pylons1
					{
						UIposition[]={0.34999999,0.55000001};
						mirroredMissilePos=1;
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=100;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=120;
						maxTrackableSpeed=500;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=100;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=100;
						aimDown=1;
						animDirection="pilotCameraRotY";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=0.1;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=13000;
							maxRange=13000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=9000;
							maxRange=9000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=0.1;
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableATL=100;
						maxTrackableSpeed=60;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,2000,16000,6000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,2000,16000,6000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportCountermeasuresComponent;
		};
	};
	class Heli_Attack_01_dynamicLoadout_base_F
	{
		class Components;
	};
	class B_Heli_Attack_01_dynamicLoadout_F: Heli_Attack_01_dynamicLoadout_base_F
	{
		armor = 70;
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Beta\Heli_Attack_01\Data\UI\Heli_Attack_01_EDEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="7EF_StratosAA_1Rnd";
						priority=5;
						bay=1;
						hardpoints[]={"7th_Hardpoints_Guardian","7th_Hardpoints_Sabertooth","7th_Hardpoints_Talon","7th_Hardpoints_Havoc","7th_Hardpoints_Widowmaker","7th_Hardpoints_Stratos","7th_Hardpoints_Atlas","7th_Hardpoints_Cryon"};
						turret[]={0};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="7EF_Talon_4Rnd";
						priority=4;
						hardpoints[]={"7th_Hardpoints_Talon","7th_Hardpoints_Havoc","7th_Hardpoints_Widowmaker","7th_Hardpoints_Stratos","7th_Hardpoints_Atlas"};
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment="7th_Widowmaker_12Rnd";
						priority=3;
						hardpoints[]={"7th_Hardpoints_Talon","7th_Hardpoints_Havoc","7th_Hardpoints_Widowmaker","7th_Hardpoints_Stratos","7th_Hardpoints_Atlas"};
						UIposition[]={0.1,0.30000001};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=3;
						UIposition[]={0.58999997,0.30000001};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.62,0.34999999};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.63999999,0.40000001};
					};
				};
				class Bays
				{
					class Bay
					{
						bayOpenTime=1;
						openBayWhenWeaponSelected=1;
						autoCloseWhenEmptyDelay=2;
					};
				};
			};
		};
	};
};