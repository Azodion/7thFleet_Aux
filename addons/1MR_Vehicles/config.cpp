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
		units[] = {"qav_ripsaw_Mk44_7thFleet","Victus_Heli_Transport_03_F","Victus_Heli_Transport_03_unarmed_F","Victus_Heli_Transport_01_F","Victus_Heli_Light_01_dynamicLoadout_F","Victus_Heli_Light_01_F","Victus_Heli_Attack_01_F","B_Victus_Plane_Fighter_02_F","B_Victus_Plane_Fighter_02_Stealth_F","Y32C_Victus_Infantry","Y32C_Victus_Vehicle","UCN_1MR_LSV_01_unarmed_F","UCN_1MR_LSV_01_armed_F","UCN_1MR_LSV_01_AT_F","UCN_UCIA_LSV_01_unarmed_F","UCN_UCIA_LSV_01_armed_F","UCN_UCIA_LSV_01_AT_F","7thFleet_MRAP","7thFleet_MRAP_HMG","7thFleet_MRAP_GMG","7thMEF_APC_Tracked_02_base_F","7thMEF_APC_Tracked_02_medevac_F","7thMEF_APC_Tracked_02_AA_F","7thMEF_APC_Tracked_02_cannon_F","7thFleet_MBT_52","7thFleet_MSE_3","7thFleet_MSE_3_unarmed","Y32C_21stMAW_Infantry","Y32C_21stMAW_Vehicle","Y32C_UCIA_Infantry","Y32C_UCIA_Vehicle","B_33rdCAW_Plane_Fighter_02_F","B_33rdCAW_Plane_Fighter_02_Stealth_F","UCN_124_LSV_01_unarmed_F","UCN_124_LSV_01_armed_F","UCN_124_LSV_01_AT_F","124thESB_MRAP","124thESB_MRAP_HMG","124thESB_MRAP_GMG","124thESB_APC_Tracked_02_base_F","124thESB_APC_Tracked_02_medevac_F","124thESB_APC_Tracked_02_AA_F","124thESB_APC_Tracked_02_cannon_F","124thESB_MBT_52","124thESB_MSE_3","124thESB_MSE_3_unarmed","B_MBT_01_124cannon_F","B_MBT_01_124TUSK_F","B_MBT_01_124arty_F","B_MBT_01_124mlrs_F","33rdCAW_Pilot","21stMAW_Pilot"};
		vehicles[] = {"qav_ripsaw_Mk44_7thFleet","B_Victus_Plane_Fighter_02_F","B_Victus_Plane_Fighter_02_Stealth_F","Y32C_Victus_Infantry","Y32C_Victus_Vehicle","UCN_1MR_LSV_01_unarmed_F","UCN_1MR_LSV_01_armed_F","UCN_1MR_LSV_01_AT_F","UCN_UCIA_LSV_01_unarmed_F","UCN_UCIA_LSV_01_armed_F","UCN_UCIA_LSV_01_AT_F","7thFleet_MRAP","7thFleet_MRAP_HMG","7thFleet_MRAP_GMG","7thMEF_APC_Tracked_02_base_F","7thMEF_APC_Tracked_02_medevac_F","7thMEF_APC_Tracked_02_AA_F","7thMEF_APC_Tracked_02_cannon_F","7thFleet_MBT_52","7thFleet_MSE_3","7thFleet_MSE_3_unarmed","Y32C_21stMAW_Infantry","Y32C_21stMAW_Vehicle","Y32C_UCIA_Infantry","Y32C_UCIA_Vehicle","B_33rdCAW_Plane_Fighter_02_F","B_33rdCAW_Plane_Fighter_02_Stealth_F","UCN_124_LSV_01_unarmed_F","UCN_124_LSV_01_armed_F","UCN_124_LSV_01_AT_F","124thESB_MRAP","124thESB_MRAP_HMG","124thESB_MRAP_GMG","124thESB_APC_Tracked_02_base_F","124thESB_APC_Tracked_02_medevac_F","124thESB_APC_Tracked_02_AA_F","124thESB_APC_Tracked_02_cannon_F","124thESB_MBT_52","124thESB_MSE_3","124thESB_MSE_3_unarmed","B_MBT_01_124cannon_F","B_MBT_01_124TUSK_F","B_MBT_01_124arty_F","B_MBT_01_124mlrs_F","33rdCAW_Pilot","21stMAW_Pilot"};
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
	class 7thFleet
	{
		displayName = "[TKE] 7th Expeditionary Fleet";
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
class CfgAmmo
{
	class Gatling_30mm_HE_Plane_CAS_01_F;
	class 7EF_Gatling_30mm_HE_F: Gatling_30mm_HE_Plane_CAS_01_F
	{
		allowAgainstInfantry = 1;
	};
};
class CfgMagazines
{
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class 800Rnd_Gatling_30mm_Plane_CAS_01_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		count = 800;
		descriptionShort = "30mm Combat Mix DU:HEI";
		displayName = "30mm HEI";
		displayNameShort = "30mm HEI";
		tracersEvery = 1;
		ammo = "7EF_Gatling_30mm_HE_F";
	};
};
class CfgWeapons
{
	class Gatling_30mm_Plane_CAS_01_F;
	class 7EF_Gatling_30mm_Plane_CAS_01_F: Gatling_30mm_Plane_CAS_01_F
	{
		displayname = "30mm Rotary Cannon";
		magazines[]=
		{
			"800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		magazineReloadTime=8;
		dispersion = 0.002;
		ballisticsComputer = 4 + 8;
		canLock = 2;
	};
};
class CfgVehicles
{
	class SensorTemplatePassiveRadar;
	class SensorTemplateAntiRadiation;
	class SensorTemplateActiveRadar;
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateMan;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class SensorTemplateDataLink;
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
		faction = "7thFleet"
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
		faction = "7thFleet"
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
	class 7thFleet_Crewman: TKE_Rogue_UniformNC_inf_B
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		faction = "7thFleet"
		side = 1;
		displayName = "Marine Crewman";
		role = "Crewman";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
        weapons[]={"7thFleet_C_TKE_UCNRifle2_optic_ACO_grn_smg","TKE_MDPistolBlack","Put","Throw"};
        respawnWeapons[]={"7thFleet_C_TKE_UCNRifle2_optic_ACO_grn_smg","TKE_MDPistolBlack","Put","Throw"};
        items[]={"FirstAidKit","FirstAidKit"};
        respawnItems[]={"FirstAidKit","FirstAidKit"}; 
        magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag"};
        respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag"};
        linkedItems[] = {"TKE_UCMCArmour17th","TKE_UCMCHelmClosedCamo7th","ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_CombatGlassesNVG"};
        respawnLinkedItems[] = {"TKE_UCMCArmour17th","TKE_UCMCHelmClosedCamo7th","ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_CombatGlassesNVG"};
		backpack = "";
	};
	class TKE_Rogue_UniformUCIANC_inf_B;
	class UCIA_Pilot: TKE_Rogue_UniformUCIANC_inf_B
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		faction = "7thFleet"
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
		faction = "7thFleet";
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
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
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
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
		faction = "7thFleet";
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
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
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
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
		faction = "7thFleet";
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
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
	class UCN_124_LSV_01_AT_F: UCN_1MR_LSV_01_AT_F
	{
		author = "Frenchie";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		DLC = "1st Marine Raiders Armory";
		displayname = "LSV- AT";
		side = 1;
		faction = "124thESB";
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
		forceInGarage = 1;
		textureList[] = {"124",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\LSV_01_124_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_02_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_03_CO.paa","\1MR_Vehicles\Textures\1MR_LSV_Adds_CO.paa"};
	};
	class O_APC_Tracked_02_base_F;
	class O_APC_Tracked_02_cannon_F;
	class 7thMEF_APC_Tracked_02_cannon_F: O_APC_Tracked_02_cannon_F
	{
		author = "Frenchie";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		DLC = "1st Marine Raiders Armory";
		displayname = "IFV-4 Crocodile";
		side = 1;
		faction = "7thFleet";
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
		class TextureSources
		{
			class 7thMEF
			{
				displayName = "7thMEF";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\APC_Tracked_02_ext_01_7MEF_armed_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_02_ext_02_7MEF_CO.paa","\1MR_Vehicles\Textures\RCWS30_7MEF_CO.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
				factions[] = {"1MR"};
			};
			class 124
			{
				displayName = "124thESB";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\APC_Tracked_02_ext_01_124_armed_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\RCWS30_124_CO.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
				factions[] = {"1MR"};
			}; 
		};
		textureList[] = {"7thMEF",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\APC_Tracked_02_ext_01_7MEF_armed_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_02_ext_02_7MEF_CO.paa","\1MR_Vehicles\Textures\RCWS30_7MEF_CO.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
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
	class 124thESB_APC_Tracked_02_cannon_F: 7thMEF_APC_Tracked_02_cannon_F
	{
		faction = "124thESB";
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
		textureList[] = {"124",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\APC_Tracked_02_ext_01_124_armed_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\RCWS30_124_CO.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
	};
	class O_APC_Tracked_02_AA_F;
	class 7thMEF_APC_Tracked_02_AA_F: O_APC_Tracked_02_AA_F
	{
		author = "Frenchie";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		DLC = "1st Marine Raiders Armory";
		displayname = "AAV-5 Rattlesnake";
		side = 1;
		faction = "7thFleet";
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
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
	};
	class 124thESB_APC_Tracked_02_AA_F: 7thMEF_APC_Tracked_02_AA_F
	{
		faction = "124thESB";
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
		textureList[] = {"124",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\APC_Tracked_02_ext_01_124_AA_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\APC_Tracked_01_AA_Tower_124_CO.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
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
		faction = "7thFleet";
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
	class 124thESB_MRAP: 7thFleet_MRAP
	{
		faction = "124thESB";
		crew = "7thFleet_Crewman";
		typicalCargo[] = {"7thFleet_Crewman"};
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
		faction = "7thFleet";
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
		faction = "7thFleet";
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
	class O_APC_Wheeled_02_rcws_v2_F;
	class 7thFleet_MSE_3: O_APC_Wheeled_02_rcws_v2_F
  {
    faction="7thFleet";
    side=1;
    displayName="MSE-3 Kangaroo";
    hiddenSelectionsTextures[]={"\1MR_Vehicles\Textures\APC_Wheeled_02_ext_01_7MEF_CO.paa","\1MR_Vehicles\Textures\APC_Wheeled_02_ext_02_7MEF_CO.paa","\1MR_Vehicles\Textures\turret_7MEF.paa","a3\armor_f\data\camonet_nato_green_co.paa","\1MR_Vehicles\Textures\cage_7MEF_co.paa"};
    crew="7thFleet_Crewman";
    typicalCargo[]={"7thFleet_Crewman"};
	textureList[] = {"7MEF",1};
	animationList[] = {"showBags",0,"showCanisters",1,"showTools",1,"showCamonetHull",0,"showSLATHull",0};
	class TransportMagazines
	{
		class _xx_TKE_35rnd_62x35_mag
		{
			magazine = "TKE_35rnd_62x35_mag";
			count = 12;
		};
		class _xx_TKE_FRAG_mag
		{
			magazine = "TKE_FRAG_mag";
			count = 6;
		};
		class _xx_TKE_IMPACT_mag
		{
			magazine = "TKE_IMPACT_mag";
			count = 6;
		};
		class _xx_TKE_SMOKE_mag
		{
			magazine = "TKE_SMOKE_mag";
			count = 8;
		};
		class _xx_TKE_SMOKE_mag_blue
		{
			magazine = "TKE_SMOKE_mag_blue";
			count = 8;
		};
		class _xx_TKE_SMOKE_mag_orange
		{
			magazine = "TKE_SMOKE_mag_orange";
			count = 8;
		};
		class _xx_TKE_SMOKE_mag_yellow
		{
			magazine = "TKE_SMOKE_mag_yellow";
			count = 8;
		};
		class _xx_TKE_SMOKE_mag_green
		{
			magazine = "TKE_SMOKE_mag_green";
			count = 8;
		};
		class _xx_MRAWS_HEAT_F
		{
			magazine = "MRAWS_HEAT_F";
			count = 5;
		};
		class _xx_MRAWS_HE_F
		{
			magazine = "MRAWS_HE_F";
			count = 2;
		};
		class _xx_Titan_AT
		{
			magazine = "Titan_AT";
			count = 2;
		};
		class _xx_Titan_AA
		{
			magazine = "Titan_AA";
			count = 2;
		};
	};
	class TransportWeapons
	{
		class _xx_7thFleet_TKE_UCNRifle2_optic_ACO_grn
		{
			weapon = "7thFleet_TKE_UCNRifle2_optic_ACO_grn";
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
  class 124thESB_MSE_3: 7thFleet_MSE_3
  {
    faction="124thESB";
    hiddenSelectionsTextures[]={"\1MR_Vehicles\Textures\APC_Wheeled_02_ext_01_124_CO.paa","\1MR_Vehicles\Textures\APC_Wheeled_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\turret_124.paa","a3\armor_f\data\camonet_nato_green_co.paa","\1MR_Vehicles\Textures\cage_7MEF_co.paa"};
    crew="7thFleet_Crewman";
    typicalCargo[]={"7thFleet_Crewman"};
	textureList[] = {"124",1};
  };
	class KEF_APC_Wheeled_02_unarmed_F;
	class 7thFleet_MSE_3_Unarmed: KEF_APC_Wheeled_02_unarmed_F
  {
    faction="7thFleet";
    side=1;
    displayName="MSE-3 Kangaroo (Unarmed)";
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    hiddenSelectionsTextures[]={"\1MR_Vehicles\Textures\APC_Wheeled_02_ext_01_7MEF_CO.paa","\1MR_Vehicles\Textures\APC_Wheeled_02_ext_02_7MEF_CO.paa","\1MR_Vehicles\Textures\turret_7MEF.paa","a3\armor_f\data\camonet_nato_green_co.paa","\1MR_Vehicles\Textures\cage_7MEF_co.paa"};
    crew="7thFleet_Trooper";
    typicalCargo[]={"7thFleet_Trooper"};
	textureList[] = {"7thMEF",1};
	class TransportMagazines
	{
		class _xx_TKE_35rnd_62x35_mag
		{
			magazine = "TKE_35rnd_62x35_mag";
			count = 12;
		};
		class _xx_TKE_FRAG_mag
		{
			magazine = "TKE_FRAG_mag";
			count = 6;
		};
		class _xx_TKE_IMPACT_mag
		{
			magazine = "TKE_IMPACT_mag";
			count = 6;
		};
		class _xx_TKE_SMOKE_mag
		{
			magazine = "TKE_SMOKE_mag";
			count = 8;
		};
		class _xx_TKE_SMOKE_mag_blue
		{
			magazine = "TKE_SMOKE_mag_blue";
			count = 8;
		};
		class _xx_TKE_SMOKE_mag_orange
		{
			magazine = "TKE_SMOKE_mag_orange";
			count = 8;
		};
		class _xx_TKE_SMOKE_mag_yellow
		{
			magazine = "TKE_SMOKE_mag_yellow";
			count = 8;
		};
		class _xx_TKE_SMOKE_mag_green
		{
			magazine = "TKE_SMOKE_mag_green";
			count = 8;
		};
		class _xx_MRAWS_HEAT_F
		{
			magazine = "MRAWS_HEAT_F";
			count = 5;
		};
		class _xx_MRAWS_HE_F
		{
			magazine = "MRAWS_HE_F";
			count = 2;
		};
		class _xx_Titan_AT
		{
			magazine = "Titan_AT";
			count = 2;
		};
		class _xx_Titan_AA
		{
			magazine = "Titan_AA";
			count = 2;
		};
	};
	class TransportWeapons
	{
		class _xx_7thFleet_TKE_UCNRifle2_optic_ACO_grn
		{
			weapon = "7thFleet_TKE_UCNRifle2_optic_ACO_grn";
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
class 124thESB_MSE_3_Unarmed: 7thFleet_MSE_3_Unarmed
  {
    faction="124thESB";
    hiddenSelectionsTextures[]={"\1MR_Vehicles\Textures\APC_Wheeled_02_ext_01_124_CO.paa","\1MR_Vehicles\Textures\APC_Wheeled_02_ext_02_124_CO.paa","\1MR_Vehicles\Textures\turret_124.paa","a3\armor_f\data\camonet_nato_green_co.paa","\1MR_Vehicles\Textures\cage_7MEF_co.paa"};
    crew="7thFleet_Crewman";
    typicalCargo[]={"7thFleet_Crewman"};
	textureList[] = {"124",1};
  };
  class qav_ripsaw_Mk44;
  class qav_ripsaw_Mk44_7thFleet: qav_ripsaw_Mk44
	{
		displayName = "MS4 Ripsaw";
		author = "Frenchie";
		side = 1;
		scope = 2;
		faction = "7thFleet";
		crew = "B_UAV_AI";
		model = "\QAV_ripsaw\QAV_ripsaw_mk44.p3d";
		typicalCargo[] = {"B_UAV_AI"};
		textureList[] = {"7thMEF",1};
		hiddenSelections[] = {"rshull","rshull2","rssusp","rsturret","rsturret2","rsacc1","rsacc2"};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\rshull_7th_co.paa","\1MR_Vehicles\Textures\rshull2_7th_co.paa","\1MR_Vehicles\Textures\rssusp_7th_co.paa","\1MR_Vehicles\Textures\rsturret_7th_co.paa","\1MR_Vehicles\Textures\rsturret2_7th_co.paa","\1MR_Vehicles\Textures\rsacc1_7th_co.paa","\1MR_Vehicles\Textures\rsacc2_7th_co.paa"};
		class TextureSources
		{
			class 7thMEF
			{
				displayName = "7thMEF";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\rshull_7th_co.paa","\1MR_Vehicles\Textures\rshull2_7th_co.paa","\1MR_Vehicles\Textures\rssusp_7th_co.paa","\1MR_Vehicles\Textures\rsturret_7th_co.paa","\1MR_Vehicles\Textures\rsturret2_7th_co.paa","\1MR_Vehicles\Textures\rsacc1_7th_co.paa","\1MR_Vehicles\Textures\rsacc2_7th_co.paa"};
				factions[] = {"1MR"};
			};
		};	
	};

	class O_T_VTOL_02_infantry_dynamicLoadout_F;
	class Y32C_21stMAW_Infantry: O_T_VTOL_02_infantry_dynamicLoadout_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "X-32/I Drake";
		side = 1;
		faction = "7thFleet";
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
				displayName = "Victus";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
		};
		textureList[] = {"21stMAW",0.6,"21stMAWMRVN",0.1,"21stMAWRS",0.1,"21stMAWASTRO",0.1,"21stMAWKILGORE",0.1,"274thTS",0};
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
	class Y32C_Victus_Infantry: Y32C_21stMAW_Infantry
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "X-32/I Drake";
		side = 1;
		faction = "274thTS";
		crew = "21stMAW_Pilot";
		typicalCargo[] = {"21stMAW_Pilot"};
		textureList[] = {"274thTS",1};
	};
	class Y32C_UCIA_Infantry: O_T_VTOL_02_infantry_dynamicLoadout_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "X-32/I Drake (Covert)";
		side = 1;
		faction = "7thFleet";
		crew = "UCIA_Pilot";
		typicalCargo[] = {"UCIA_Pilot"};
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
		class TextureSources
		{
			class UCIA
			{
				displayName = "UCIA- Standard";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_UCIA_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_UCIA_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_UCIA_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_UCIA_CO.paa"};
			};
		};
		textureList[] = {"UCIA",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_UCIA_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_UCIA_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_UCIA_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_UCIA_CO.paa"};
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
	class O_T_VTOL_02_vehicle_dynamicLoadout_F;
	class Y32C_21stMAW_Vehicle: O_T_VTOL_02_vehicle_dynamicLoadout_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "X-32/V Drake";
		side = 1;
		faction = "7thFleet";
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
				displayName = "Victus";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_Victus_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_Victus_CO.paa"};
			};
		};
		textureList[] = {"21stMAW",0.6,"21stMAWMRVN",0.1,"21stMAWRS",0.1,"21stMAWASTRO",0.1,"21stMAWKILGORE",0.1,"274thTS",0};
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
	class Y32C_Victus_Vehicle: Y32C_21stMAW_Vehicle
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "X-32/V Drake";
		side = 1;
		faction = "274thTS";
		crew = "21stMAW_Pilot";
		typicalCargo[] = {"21stMAW_Pilot"};
		textureList[] = {"274thTS",1};
	};
	class Y32C_UCIA_Vehicle: O_T_VTOL_02_vehicle_dynamicLoadout_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "X-32/V Drake (Covert)";
		side = 1;
		faction = "7thFleet";
		crew = "UCIA_Pilot";
		typicalCargo[] = {"UCIA_Pilot"};
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
		class TextureSources
		{
			class UCIA
			{
				displayName = "UCIA- Standard";
				author = "Frenchie";
				textures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_UCIA_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_UCIA_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_UCIA_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_UCIA_CO.paa"};
			};
		};
		textureList[] = {"UCIA",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\VTOL_02_EXT01_UCIA_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT02_UCIA_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_L_UCIA_CO.paa","\1MR_Vehicles\Textures\VTOL_02_EXT03_R_UCIA_CO.paa"};
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
		faction = "7thFleet";
		crew = "33rdCAW_Pilot";
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"7EF_Gatling_30mm_Plane_CAS_01_F",
			"Laserdesignator_pilotCamera",
			"EricJ_CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
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
			"Laserbatteries",
			"800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"7EF_Gatling_30mm_Plane_CAS_01_F",
			"Laserdesignator_pilotCamera",
			"EricJ_CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		textureList[] = {"274thTS",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Victus_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};

	};
	class B_33rdCAW_Plane_Fighter_02_Stealth_F: O_Plane_Fighter_02_Stealth_F
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayname = "F-201/S Hawk";
		side = 1;
		faction = "7thFleet";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"7EF_Gatling_30mm_Plane_CAS_01_F",
			"Laserdesignator_pilotCamera",
			"EricJ_CMFlareLauncher",
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
			"Laserbatteries",
			"800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"7EF_Gatling_30mm_Plane_CAS_01_F",
			"Laserdesignator_pilotCamera",
			"EricJ_CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		textureList[] = {"274thTS",1};
		hiddenSelectionsTextures[] = {"\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_02_Victus_CO.paa","\1MR_Vehicles\Textures\Fighter_02_fuselage_01_Victus_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_07_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa","\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_09_CO.paa","\A3\Data_F\clear_empty.paa"};

	};
	class B_33rdCAW_Ejection_Seat_Plane_Fighter_02_F: Ejection_Seat_Plane_Fighter_02_base_F
	{
		author = "Frenchie";
		scope = 1;
		side = 1;
		faction = "7thFleet";
		crew = "33rdCAW_Pilot";
	};
	class B_Heli_Transport_03_F;
	class Victus_Heli_Transport_03_F: B_Heli_Transport_03_F
	{
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
			"EricJ_CMFlareLauncher",
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
			"EricJ_CMFlareLauncher",
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
			"EricJ_CMFlareLauncher",
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
			"7EF_ej_M134_minigun",
			"EricJ_CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		hiddenSelectionsTextures[]= {"\1MR_Vehicles\Textures\Heli_Light_01_ext_UCN_CO.paa"};
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
			"EricJ_CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		hiddenSelectionsTextures[]= {"\1MR_Vehicles\Textures\Heli_Light_01_ext_UCN_CO.paa"};
	};
	class B_Heli_Attack_01_F;
	class Victus_Heli_Attack_01_F: B_Heli_Attack_01_F
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
			"7EF_ej_M134_minigun",
			"EricJ_CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		hiddenSelectionsTextures[]= {"\1MR_Vehicles\Textures\Heli_Attack_01_UCN_CO.paa"};
	};
	
};