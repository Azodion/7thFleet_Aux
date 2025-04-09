////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 09 16:52:22 2023 : 'file' last modified on Tue Oct 18 19:53:08 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_
#define private 0
#define protected 1
#define public 2

class CfgPatches
{
	class 1MR_EricJ
	{
		units[] = {"ej_MH92_Victus","ej_MH92DAP3_Victus","ej_UH92_Victus","ej_UH92_Victus_MEV","ej_AH96_Victus","ej_mh15m_Victus","ej_ah15m_Victus"};
		vehicles[] = {"ej_MH92_Victus","ej_MH92DAP3_Victus","ej_UH92_Victus","ej_UH92_Victus_MEV","ej_AH96_Victus","ej_mh15m_Victus","ej_ah15m_Victus"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
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
class Eventhandlers;
class Components;
class SensorsManagerComponent;
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
	class ej_AH96
	{
		class Components;
	};
	class ej_AH96_Victus: ej_AH96
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayName = "AH-96 Coyote (6 Pylons)";
		side = 1;
		scope = 2;
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
		class TextureSources
		{
			class Victus
			{
				displayName = "Victus";
				author = "Frenchie";
				textures[] = {"\1MR_EricJ\Textures\ah96_body_Victus_co.paa","\1MR_EricJ\Textures\ah96_engines_Victus_co.paa","uh-60\data\blackductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_co.paa"};
				factions[] = {"274thTS"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\1MR_EricJ\Textures\ah96_body_Victus_co.paa","\1MR_EricJ\Textures\ah96_engines_Victus_co.paa","uh-60\data\blackductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_co.paa"};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\UH-60\Data\UI\Heli_attack_AH_96.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "7EF_Talon_4Rnd";
						bay = 1;
						hardpoints[] = {"7th_Hardpoints_Widowmaker","7th_Hardpoints_Talon"};
						priority = 5;
						turret[] = {0};
						UIposition[] = {0.06,0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						priority = 4;
						UIposition[] = {0.08,0.35};
					};
					class PylonLeft3: PylonLeft1
					{
						priority = 3;
						UIposition[] = {0.1,0.3};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.59,0.4};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.57,0.35};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos = 3;
						UIposition[] = {0.55,0.3};
					};
					class pylonTip1
					{
						attachment = "7EF_StratosAA_1Rnd";
						hardpoints[] = {"7th_Hardpoints_Stratos","7th_Hardpoints_Cryon"};
						priority = 3;
						turret[] = {};
						UIposition[] = {0.04,0.25};
					};
					class pylonTip2: pylonTip1
					{
						mirroredMissilePos = 7;
						UIposition[] = {0.625,0.25};
					};
				};
			};
		};
	};
	class ej_UH92; 
	class ej_UH92_Victus: ej_UH92
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
        ace_cargo_space = 50;
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
		class TextureSources
		{
			class Victus
			{
				displayName = "Victus";
				author = "Frenchie";
				textures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_Victus_co.paa","\1MR_EricJ\Textures\uh60m_engine_Victus_co.paa","\uh-60\data\blackductfans_co.paa"};
				factions[] = {"274thTS"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_Victus_co.paa","\1MR_EricJ\Textures\uh60m_engine_Victus_co.paa","\uh-60\data\blackductfans_co.paa"};
	};
	class ej_UH92_Victus_MEV: ej_UH92
	{
		class EventHandlers: EventHandlers
		{
			init="[_this select 0] execVM '\1MR_Vehicles\Functions\MagLock.sqf';";
		};
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayName = "UH-92 Cherokee MEV";
		side = 1;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		attendant = 1;
        ace_cargo_loadmasterTurrets[] = {{1}};
        ace_cargo_space = 50;
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
				class EF_7th_Medical {
                    type = "EF_7th_Medical";
                    amount = 3;
                };
			};
		};
		class TextureSources
		{
			class VictusMEV
			{
				displayName = "Victus-MEV";
				author = "Frenchie";
				textures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_VictusMEV_co.paa","\1MR_EricJ\Textures\uh60m_engine_VictusMEV_co.paa","\uh-60\data\blackductfans_co.paa"};
				factions[] = {"274thTS"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_VictusMEV_co.paa","\1MR_EricJ\Textures\uh60m_engine_VictusMEV_co.paa","\uh-60\data\blackductfans_co.paa"};
	};
	class ej_MH92DAP_base
	{
		class Components;
	};
	class ej_MH92DAP3_Victus: ej_MH92DAP_base
	{
		class EventHandlers: EventHandlers
		{
			init="[_this select 0] execVM '\1MR_Vehicles\Functions\MagLock.sqf';";
		};
		author = "Frenchie";
		displayName = "MH-92F DAP (4 pylons)";
		DLC = "1st Marine Raiders Armory";
		side = 1;
		scope = 2;
		faction = "274thTS";
		crew = "33rdCAW_Pilot";
		typicalCargo[] = {"33rdCAW_Pilot"};
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine", 
			"2500Rnd_127x99_mag_Tracer_Red",
			"Laserbatteries"
		};
		weapons[] = {
			"ej_master_arms_safe",
			"Laserdesignator_pilotCamera",
			"7EF_M134_minigun",
			"CMFlareLauncher",
			"kuy_IR_Jammer_Weapon"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class TextureSources
		{
			class Victus
			{
				displayName = "Victus";
				author = "Frenchie";
				textures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_Victus_co.paa","\1MR_EricJ\Textures\uh60m_engine_Victus_co.paa","\uh-60\data\blackductfans_co.paa"};
				factions[] = {"274thTS"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_Victus_co.paa","\1MR_EricJ\Textures\uh60m_engine_Victus_co.paa","\uh-60\data\blackductfans_co.paa"};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\UH-60\Data\UI\Heli_Cherokee.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "7EF_Talon_4Rnd";
						hardpoints[] = {"7th_Hardpoints_Guardian","7th_Hardpoints_Sabertooth","7th_Hardpoints_Widowmaker","7th_Hardpoints_Stratos","7th_Hardpoints_Cryon","7th_Hardpoints_Talon","7th_Hardpoints_Havoc"};
						priority = 5;
						turret[] = {};
						UIposition[] = {0.06,0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						hardpoints[] = {"7th_Hardpoints_Sabertooth","7th_Hardpoints_Widowmaker","7th_Hardpoints_Stratos","7th_Hardpoints_Cryon","7th_Hardpoints_Talon","7th_Hardpoints_Havoc"};
						UIposition[] = {0.08,0.35};
					};
					class PylonRight3: PylonLeft2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.57,0.35};
					};
					class PylonRight4: PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.6,0.4};
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
		class pilotCamera
		{
			controllable = 1;
			initElev = 15;
			initTurn = 0;
			maxElev = 90;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			maxTurn = 360;
			minTurn = -360;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			minElev = -20;
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
	};
	class ej_MH92;
	class ej_MH92_Victus: ej_MH92
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
        ace_cargo_space = 50;
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
		class TextureSources
		{
			class Victus
			{
				displayName = "Victus";
				author = "Frenchie";
				textures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_Victus_co.paa","\1MR_EricJ\Textures\uh60m_engine_Victus_co.paa","\uh-60\data\blackductfans_co.paa"};
				factions[] = {"274thTS"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_Victus_co.paa","\1MR_EricJ\Textures\uh60m_engine_Victus_co.paa","\uh-60\data\blackductfans_co.paa"};
	};
	class ej_mh15m;
	class ej_mh15m_Victus: ej_mh15m
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayName = "MH-15 Little Bird";
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
		class TransportItems{};
		class TextureSources
		{
			class Victus
			{
				displayName = "Victus";
				author = "Frenchie";
				textures[] = {"\1MR_EricJ\Textures\ah6_merge1_Victus_co.paa","\uh-60\data\blackductfans_co.paa"};
				factions[] = {"274thTS"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_EricJ\Textures\ah6_merge1_Victus_co.paa","\uh-60\data\blackductfans_co.paa"};
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
						range[] = {4000,2000,16000,8000};
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
						range[] = {4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class ej_ah15m;
	class ej_ah15m_Victus: ej_ah15m
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayName = "AH-15 Little Bird";
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
		class TransportItems{};
		class TextureSources
		{
			class Victus
			{
				displayName = "Victus";
				author = "Frenchie";
				textures[] = {"\1MR_EricJ\Textures\ah6_merge1_Victus_co.paa","\uh-60\data\dapductfans_co.paa"};
				factions[] = {"274thTS"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_EricJ\Textures\ah6_merge1_Victus_co.paa","\uh-60\data\dapductfans_co.paa"};
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
						hardpoints[] = {"7th_Hardpoints_Sabertooth","7th_Hardpoints_Talon", "7th_Hardpoints_Stratos","7th_Hardpoints_Widowmaker"};
						priority = 5;
						UIposition[] = {0.06,0.4};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos = 1;
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
						range[] = {4000,2000,16000,8000};
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
						range[] = {4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
};