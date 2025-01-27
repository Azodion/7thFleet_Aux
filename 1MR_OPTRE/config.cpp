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
		units[] = {"OPTRE_Victus_AV22C_Sparrowhawk","OPTRE_Victus_AV22B_Sparrowhawk","OPTRE_Victus_AV22A_Sparrowhawk","OPTRE_Victus_AV22_Sparrowhawk","OPTRE_Victus_YSS_1000_A_VTOL","OPTRE_Victus_hornet_CAS","OPTRE_Victus_hornet_CAP","OPTRE_Victus_falcon_armed_S","OPTRE_Victus_falcon_armed","OPTRE_Victus_falcon_S","OPTRE_Victus_falcon"};
		vehicles[] = {"OPTRE_Victus_AV22C_Sparrowhawk","OPTRE_Victus_AV22B_Sparrowhawk","OPTRE_Victus_AV22A_Sparrowhawk","OPTRE_Victus_AV22_Sparrowhawk","OPTRE_Victus_YSS_1000_A_VTOL","OPTRE_Victus_hornet_CAS","OPTRE_Victus_hornet_CAP","OPTRE_Victus_falcon_armed_S","OPTRE_Victus_falcon_armed","OPTRE_Victus_falcon_S","OPTRE_Victus_falcon"};
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
class CfgVehicles
{
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