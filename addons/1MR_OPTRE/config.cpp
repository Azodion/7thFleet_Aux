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
		textureList[] = {"7thFleet",1};
		hiddenSelectionsTextures[] = {"\1MR_OPTRE\Textures\oryx_armor_7thMEF_co.paa","\1MR_OPTRE\Textures\oryx_main_7thMEF_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\1MR_OPTRE\Textures\oryx_turret_7thMEF_co.paa","\1MR_OPTRE\Textures\Scorpion_mg_7thMEF_co.paa"};
		class textureSources
		{
			class 7thFleet
			{
				displayName = "7th Fleet";
				author = "Frenchie";
				textures[] = {"\1MR_OPTRE\Textures\oryx_armor_7thMEF_co.paa","\1MR_OPTRE\Textures\oryx_main_7thMEF_co.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles_Tracked\Oryx\data\texture\oryx_net_ca.paa","\1MR_OPTRE\Textures\oryx_turret_7thMEF_co.paa","1MR_OPTRE\Textures\Scorpion_mg_7thMEF_co.paa"};
			};
		};

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
				magazines[] = {"7th_300Rnd_30mm_HE","7th_300Rnd_30mm_HE","7th_300Rnd_30mm_HE","7th_250Rnd_30mm_AP","7th_250Rnd_30mm_AP","OPTRE_500Rnd_762x51_Box_Tracer","OPTRE_500Rnd_762x51_Box_Tracer","OPTRE_500Rnd_762x51_Box_Tracer","OPTRE_500Rnd_762x51_Box_Tracer","7th_2Rnd_Talon","7th_2Rnd_Talon","SmokeLauncherMag","SmokeLauncherMag_Single"};
				weapons[] = {"7th_M503","OPTRE_M247T_Coax","7th_ATGM_Launcher","SmokeLauncher"};
			};
		};
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
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6"};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEF_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEF_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"};
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
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEF_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEF_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};

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
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
		hiddenSelectionsTextures[] = {"1MR_OPTRE\Textures\Bison_Body_7thMEF_CO.paa","1MR_OPTRE\Textures\Bison_Misc_7thMEF_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"};

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
				magazines[] = {"7th_100Rnd_50mm_HE","7th_100Rnd_50mm_AP","7th_100Rnd_50mm_HE","7th_100Rnd_50mm_AP","7th_100Rnd_50mm_HE","7th_100Rnd_50mm_AP","7th_2Rnd_Talon"};
				weapons[] = {"7th_M230","7th_ATGM_Launcher"};
			};
		};
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