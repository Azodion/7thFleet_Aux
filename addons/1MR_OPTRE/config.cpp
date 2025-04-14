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

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class AITankSteeringComponent;
class Components;
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

class CfgVehicles
{
	class OPTRE_M494
	{
		class Turrets
		{
			class MainTurret;
		};
	};
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

		class Components
		{
			class TransportCountermeasuresComponent;
			class AITankSteeringComponent
			{
				allowCollisionAvoidance = 1;
				allowDrifting = 0;
				allowOvertaking = 1;
				allowTurnAroundInPoint = 1;
				commandTurnFactor = 2;
				convoyPIDWeights[] = {1,0,0};
				differenceAngleCoef = 1;
				doPredictForward = 1;
				doRemapSpeed = 0;
				forwardAngleCoef = 0.7;
				maxWheelAngleDiff = 0.2616;
				minSpeedToKeep = 0.01;
				predictForwardMaxSpeed = 15;
				predictForwardRange[] = {1,20};
				remapSpeedRange[] = {30,70};
				remapSpeedScalar[] = {1,0.35};
				speedPIDWeights[] = {0.7,0.2,0};
				speedPredictionMethod = 3;
				steerAheadSaturation[] = {0.01,0.4};
				steeringAngleCoef = 1;
				steeringPIDWeights[] = {2.9,0.1,0.2};
				stuckMaxTime = 3;
				wheelAngleCoef = 0.7;
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class GroundTarget
						{
							maxRange = 3000;
							minRange = 5;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class GroundTarget
						{
							maxRange = 3000;
							minRange = 5;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType = "MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType = "MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
				};
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"7th_300Rnd_30mm_HE","7th_300Rnd_30mm_HE","7th_300Rnd_30mm_HE","7th_250Rnd_30mm_AP","7th_250Rnd_30mm_AP","OPTRE_500Rnd_762x51_Box_Tracer","OPTRE_500Rnd_762x51_Box_Tracer","OPTRE_500Rnd_762x51_Box_Tracer","OPTRE_500Rnd_762x51_Box_Tracer","7th_2Rnd_Talon","7th_2Rnd_Talon","7th_2Rnd_Talon","SmokeLauncherMag","SmokeLauncherMag_Single"};
				weapons[] = {"7th_M503","OPTRE_M247T_Coax","7th_ATGM_Launcher","SmokeLauncher"};
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



	class OPTRE_M413_base
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class OPTRE_M413_MGS_7thMEF: OPTRE_M413_base
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

		class Components
		{
			class TransportCountermeasuresComponent;
			class AITankSteeringComponent
			{
				allowCollisionAvoidance = 1;
				allowDrifting = 0;
				allowOvertaking = 1;
				allowTurnAroundInPoint = 1;
				commandTurnFactor = 2;
				convoyPIDWeights[] = {1,0,0};
				differenceAngleCoef = 1;
				doPredictForward = 1;
				doRemapSpeed = 0;
				forwardAngleCoef = 0.7;
				maxWheelAngleDiff = 0.2616;
				minSpeedToKeep = 0.01;
				predictForwardMaxSpeed = 15;
				predictForwardRange[] = {1,20};
				remapSpeedRange[] = {30,70};
				remapSpeedScalar[] = {1,0.35};
				speedPIDWeights[] = {0.7,0.2,0};
				speedPredictionMethod = 3;
				steerAheadSaturation[] = {0.01,0.4};
				steeringAngleCoef = 1;
				steeringPIDWeights[] = {2.9,0.1,0.2};
				stuckMaxTime = 3;
				wheelAngleCoef = 0.7;
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class GroundTarget
						{
							maxRange = 3000;
							minRange = 5;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class GroundTarget
						{
							maxRange = 3000;
							minRange = 5;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType = "MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType = "MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
				};
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"7th_20Rnd_105mm_APFSDS","7th_20Rnd_105mm_HEAT","7th_20Rnd_105mm_APFSDS","7th_20Rnd_105mm_HEAT","7th_20Rnd_105mm_APFSDS","7th_20Rnd_105mm_HEAT","7th_2Rnd_Talon"};
				weapons[] = {"7th_105mm","7th_ATGM_Launcher"};
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



	class OPTRE_M412_IFV_UNSC
	{
		class Turrets
		{
			class MainTurret;
		};
	};
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

		class Components
		{
			class TransportCountermeasuresComponent;
			class AITankSteeringComponent
			{
				allowCollisionAvoidance = 1;
				allowDrifting = 0;
				allowOvertaking = 1;
				allowTurnAroundInPoint = 1;
				commandTurnFactor = 2;
				convoyPIDWeights[] = {1,0,0};
				differenceAngleCoef = 1;
				doPredictForward = 1;
				doRemapSpeed = 0;
				forwardAngleCoef = 0.7;
				maxWheelAngleDiff = 0.2616;
				minSpeedToKeep = 0.01;
				predictForwardMaxSpeed = 15;
				predictForwardRange[] = {1,20};
				remapSpeedRange[] = {30,70};
				remapSpeedScalar[] = {1,0.35};
				speedPIDWeights[] = {0.7,0.2,0};
				speedPredictionMethod = 3;
				steerAheadSaturation[] = {0.01,0.4};
				steeringAngleCoef = 1;
				steeringPIDWeights[] = {2.9,0.1,0.2};
				stuckMaxTime = 3;
				wheelAngleCoef = 0.7;
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class GroundTarget
						{
							maxRange = 3000;
							minRange = 5;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class GroundTarget
						{
							maxRange = 3000;
							minRange = 5;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType = "MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType = "MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
				};
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"7th_100Rnd_50mm_HE","7th_100Rnd_50mm_AP","7th_100Rnd_50mm_HE","7th_100Rnd_50mm_AP","7th_100Rnd_50mm_HE","7th_100Rnd_50mm_AP","7th_2Rnd_Talon","7th_2Rnd_Talon"};
				weapons[] = {"7th_M230","7th_ATGM_Launcher"};
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
};