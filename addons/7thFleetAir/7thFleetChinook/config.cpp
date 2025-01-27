class CfgPatches
{
	class EF_7th_ResupChinook
	{
        author="Hophri";
		name="7th Expeditionary Forces Aux Mod";
		addonRootClass="A3_Air_F_Heli";
		requiredAddons[]=
		{
			"A3_Air_F_Heli"
		};
		requiredVersion=0.1;
		units[]=
		{
			"EF_7th_ResupplyChinook"
		};
		weapons[]={};
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
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
        class components;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Components;
	};
	class ViewPilot;
	class UserActions;
	class CargoTurret_01;
	class CargoTurret_02;
	class SensorTemplatePassiveRadar;
	class SensorTemplateAntiRadiation;
	class SensorTemplateActiveRadar;
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateMan;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class SensorTemplateDataLink;
    
	class EF_7th_ResupplyChinook: Helicopter_Base_H
	{
		author="Hophri";
		mapSize=27.48;
        
        faction = "274thTS";
        side = 1;
		scope = 0;
		scopeCurator = 0;
		attendant = 1;
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

		crew = "33rdCAW_Pilot";
		driverCanEject = 1;

        class ViewPilot
        {
            initFov = 0.75;
            minFov = 0.42;
            maxFov = 0.85;
            initAngleX=-8;
            minAngleX = -65;
            maxAngleX = 85;
            initAngleY = 0;
            minAngleY = -150;
            maxAngleY = 150;
            position[] = {0.1, -0.25, -0.25};
        };

	class Components: Components
		{
		class SensorsManagerComponent
			{
				class Components
				{
					
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange=6000;
							maxRange=6000;
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
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						color[]={0.5,1,0.5,0.5};
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=0;
					};
				};
			};
		};

        class RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F_Heli\Heli_Transport_03\RTD_Heli_Transport_03.xml";
			autoHoverCorrection[]={6.5,0,0};
			defaultCollective=0.60500002;
			retreatBladeStallWarningSpeed=92.583;
			maxTorque=4032;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=350000;
			maxTailRotorStress=350000;
		};
		armor=100;
		maxSpeed=300;
		fuelCapacity=1500;
		fuelConsumptionRate=0.05;
		slingLoadMaxCargoMass=1000000;
		enableSweep=0;
		liftForceCoef=1.65;
		mainBladeRadius=8.1499996;
		tailBladeCenter="rotor_02_center";
		tailBladeRadius=8.1499996;
		tailBladeVertical=0;
		maxFordingDepth=1;
		memoryPointTaskMarker="TaskMarker_1_pos";
		cost=1000000;
		threat[]={0.80000001,0.1,0.60000002};
		editorSubcategory="EdSubcat_Helicopters";
		icon="\A3\Air_F_Heli\Heli_Transport_03\Data\UI\Map_Heli_Transport_03_base_CA.paa";
		picture="\A3\Air_F_Heli\Heli_Transport_03\Data\UI\Heli_Transport_03_base_CA.paa";
		gearRetracting=1;
		gearUpTime=1;
		gearDownTime=1;
		driveOnComponent[]=
		{
			"gear_1_1_wheels",
			"gear_2_1_wheels",
			"gear_1_2_wheel",
			"gear_2_2_wheel"
		};
		displayname="[7th Fleet] Resupply Chinook";
		driverAction="pilot_Heli_Transport_03";
		driverInAction="pilot_Heli_Transport_03";
		GetInAction="GetInMedium";
		getOutAction="GetOutMedium";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"passenger_apc_generic04",
			"passenger_apc_generic02",
			"passenger_apc_generic03",
			"passenger_apc_generic04",
			"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic02",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_foldhands",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic01",
			"passenger_apc_generic01",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanright",
			"passenger_low01"
		};
		enableManualFire=0;
		model="\A3\Air_F_Heli\Heli_Transport_03\Heli_Transport_03_F.p3d";
		DLC="Heli";
		overviewPicture="\A3\Data_F_Heli\Images\dlcbrowser_heli_01_ca.paa";
		transportSoldier=14;
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
		hideWeaponsCargo=1;
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment3"
		};
		getInRadius=2;
		memoryPointCM[]=
		{
			"Flare_launcher_1_pos",
			"Flare_launcher_2_pos"
		};
		memoryPointCMDir[]=
		{
			"Flare_launcher_1_dir",
			"Flare_launcher_2_dir"
		};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		radarTargetSize=1.2;
		visualTargetSize=1.2;
		irTargetSize=1.2;
		lockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem="8 + 16";
		selectionHRotorMove="main_rotor_1_blur";
		selectionHRotorStill="main_rotor_1_static";
		selectionVRotorMove="main_rotor_2_blur";
		selectionVRotorStill="main_rotor_2_static";
		maximumLoad=6000;
		supplyRadius=-0.5;
		unitInfoTypeRTD="RscUnitInfoAirRTDFullDigital";
		class MFD
		{
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=999;
				visual="zbytek";
				minimalHit=0.050000001;
				depends="Total";
				radius=0.0099999998;
			};
			class HitFuel: HitFuel
			{
				armor=0.69999999;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.3;
				radius=0.40000001;
				minimalHit=0.050000001;
				explosionShielding=1.5;
			};
			class HitEngine1
			{
				armor=0.69999999;
				radius=0.60000002;
				name="engine_1_hit";
				explosionShielding=3;
				minimalHit=0.1;
				visual="motor";
				passThrough=1;
				convexComponent="engine_1_hit";
				material=51;
			};
			class HitEngine2: HitEngine1
			{
				radius=1;
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
			class HitEngine3: HitEngine1
			{
				radius=0.75;
				name="engine_3_hit";
				convexComponent="engine_3_hit";
			};
			class HitEngine4: HitEngine1
			{
				radius=0.75;
				name="engine_4_hit";
				convexComponent="engine_4_hit";
			};
			class HitEngine: HitEngine
			{
				armor=999;
				radius=0.050000001;
				minimalHit=1;
				depends="0.25 * (HitEngine1 + HitEngine2 + HitEngine3 + HitEngine4)";
			};
			class HitHRotor: HitHRotor
			{
				armor=2.5999999;
				radius=0.40000001;
				minimalHit=0.090000004;
				explosionShielding=2.5;
				name="main_rotor_1_hit";
				convexComponent="main_rotor_1_hit";
				visual="main_rotor_1_damage";
			};
			class HitVRotor: HitVRotor
			{
				armor=2.5999999;
				radius=0.40000001;
				minimalHit=0.090000004;
				explosionShielding=2.5;
				name="main_rotor_1_hit";
				convexComponent="main_rotor_1_hit";
				depends="HitHRotor";
				visual="main_rotor_2_damage";
			};
			class HitRotorVirtual: HitHRotor
			{
				name="";
				convexComponent="";
				visual="";
				depends="0.5 * (HitHRotor + HitVRotor)";
			};
			class HitGlass1: HitGlass1
			{
				armor=1.3;
				radius=0.44999999;
				explosionShielding=6;
			};
			class HitGlass2: HitGlass2
			{
				armor=1.3;
				radius=0.44999999;
				explosionShielding=6;
			};
			class HitGlass3: HitGlass3
			{
				armor=1.3;
				radius=0.34999999;
				explosionShielding=6;
			};
			class HitGlass4: HitGlass4
			{
				armor=1.3;
				radius=0.34999999;
				explosionShielding=6;
			};
			class HitGlass5: HitGlass5
			{
				armor=1.3;
				radius=0.46000001;
				explosionShielding=6;
			};
			class HitGlass6: HitGlass6
			{
				armor=1.3;
				radius=0.46000001;
				explosionShielding=6;
			};
			class HitGlass7: HitGlass6
			{
				name="glass7";
				convexComponent="glass7";
				visual="glass7";
				radius=0.2;
			};
			class HitGlass8: HitGlass7
			{
				name="glass8";
				convexComponent="glass8";
				visual="glass8";
			};
			class HitGlass9: HitGlass6
			{
				name="glass9";
				convexComponent="glass9";
				visual="glass9";
				radius=0.41999999;
			};
			class HitGlass10: HitGlass9
			{
				name="glass10";
				convexComponent="glass10";
				visual="glass10";
			};
			class HitGlass11: HitGlass9
			{
				name="glass11";
				convexComponent="glass11";
				visual="glass11";
			};
			class HitGlass12: HitGlass9
			{
				name="glass12";
				convexComponent="glass12";
				visual="glass12";
			};
			class HitGlass13: HitGlass6
			{
				name="glass13";
				convexComponent="glass13";
				visual="glass13";
				radius=0.33000001;
			};
			class HitGlass14: HitGlass13
			{
				name="glass14";
				convexComponent="glass14";
				visual="glass14";
			};
			class HitGlass15: HitGlass14
			{
				name="glass15";
				convexComponent="glass15";
				visual="glass15";
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitRotor_source
			{
				source="Hit";
				hitpoint="HitRotorVirtual";
				raw=1;
			};
			class HitHRotor_source: HitRotor_source
			{
				hitpoint="HitHRotor";
			};
			class HitVRotor_source: HitRotor_source
			{
				hitpoint="HitVRotor";
			};
			class Door_R_source
			{
				source="door";
				initPhase=0;
				animPeriod=1;
				sound="ServoRampSound";
			};
			class Door_L_source: Door_R_source
			{
			};
			class Door_rear_source: Door_R_source
			{
			};
			class Minigun_Hide_Source
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Minigun
			{
				source="revolving";
				weapon="LMG_Minigun_Transport";
			};
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="LMG_Minigun_Transport";
			};
			class Minigun2
			{
				source="revolving";
				weapon="LMG_Minigun_Transport2";
			};
			class Muzzle_flash2
			{
				source="ammorandom";
				weapon="LMG_Minigun_Transport2";
			};
		};
		class UserActions
		{
			class Ramp_Open
			{
				userActionID=60;
				displayName="$STR_ACTION_RAMP_OPEN0";
				textToolTip="$STR_ACTION_RAMP_OPEN0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position="";
				condition="this doorPhase 'Door_rear_source' < 0.5 AND Alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]])} && {((this getVariable ['bis_disabled_Ramp',0]) isEqualTo 0)}";
				statement="this animateDoor ['Door_rear_source', 1]";
				priority=1.5;
				radius=1.5;
				radiusView=0.2;
				showIn3D=17;
				available=0;
				showWindow=0;
				onlyForPlayer=1;
				shortcut="";
			};
			class Ramp_Close: Ramp_Open
			{
				userActionID=61;
				displayName="$STR_ACTION_RAMP_CLOSE0";
				textToolTip="$STR_ACTION_RAMP_CLOSE0";
				condition="this doorPhase 'Door_rear_source' > 0.5 AND Alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]])} && {((this getVariable ['bis_disabled_Ramp',0]) isEqualTo 0)}";
				statement="this animateDoor ['Door_rear_source', 0]";
			};
		};
		class RenderTargets
		{
			class SlingLoadCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="slingLoad_cam_pos";
					pointDirection="slingLoad_cam_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_0_TL",
					"PIP_0_TR",
					"PIP_0_BL",
					"PIP_0_BR"
				};
			};
		};
		dustEffect="HeliDustBig";
		class Exhausts
		{
			class Exhaust_L
			{
				position="exhaust_L";
				direction="exhaust_L_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust_R
			{
				position="exhaust_R";
				direction="exhaust_R_dir";
				effect="ExhaustsEffectHeliMed";
			};
		};
		attenuationEffectType="HeliAttenuation";
		emptySound[]=
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundBuildingCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		soundDammage[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			10,
			1
		};
		soundGetIn[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\getin",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\getout",
			1,
			1,
			40
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\helit03_start_int2",
			0.25118864,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\helit03_start_ext",
			1.4125376,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\helit03_stop_int2",
			0.25118864,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\helit03_stop_ext",
			1.4125376,
			1,
			600
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",
			0.31622776,
			1
		};
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",
			2.5118864,
			1,
			150
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1.7782794,
			1,
			200
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1.7782794,
			1,
			200
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			300
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			200
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		gearUpExt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_up_OUT",
			1,
			1,
			1000
		};
		gearUpInt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_up_IN",
			1,
			1,
			100
		};
		gearUp[]=
		{
			"gearUpInt",
			"gearUpExt"
		};
		gearDownInt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_down_IN",
			1,
			1,
			100
		};
		gearDownExt[]=
		{
			"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_03\Huron_gear_down_OUT",
			1,
			1,
			1000
		};
		gearDown[]=
		{
			"gearDownInt",
			"gearDownExt"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_engine_ext2",
					1.7782794,
					1,
					800
				};
				frequency="rotorSpeed";
				volume="camPos*(rotorSpeed factor[0.4,1])";
			};
			class RotorExt
			{
				sound[]=
				{
					"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_rotor_low_ext2",
					1.4125376,
					0.80000001,
					2000
				};
				frequency="rotorSpeed*1.1";
				volume="1.8*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorSwistExt
			{
				sound[]=
				{
					"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_sfx",
					1,
					1,
					400
				};
				frequency=1;
				volume="camPos*(rotorThrust factor [0.6, 1])";
				cone[]={1,1.4,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_engine_int3",
					0.79432821,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class RotorInt
			{
				sound[]=
				{
					"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_rotor_low_int",
					1,
					0.80000001
				};
				frequency="rotorSpeed*1.1";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1.2589254,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1.2589254,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.63095737,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
					1.1220185,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					1,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[50,80])";
			};
		};
		class SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_engine_ext2",
						1.7782794,
						1,
						800
					};
					frequency="rotorSpeed";
					volume="camPos*(rotorSpeed factor[0.4,1])";
				};
				class RotorExt
				{
					sound[]=
					{
						"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_rotor_low_ext2",
						1.4125376,
						0.80000001,
						2000
					};
					frequency="rotorSpeed*1.1";
					volume="1.8*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorSwistExt
				{
					sound[]=
					{
						"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_sfx",
						1,
						1,
						400
					};
					frequency=1;
					volume="camPos*(rotorThrust factor [0.6, 1])";
					cone[]={1,1.4,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_engine_int3",
						0.79432821,
						1
					};
					frequency="rotorSpeed";
					volume="(1-camPos)*(rotorSpeed factor[0.4,1])";
				};
				class RotorInt
				{
					sound[]=
					{
						"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_03\helit03_rotor_low_int",
						1,
						0.80000001
					};
					frequency="rotorSpeed*1.1";
					volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_int",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_closed",
						0.63095737,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
						1.1220185,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress3",
						1,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[50,80])";
				};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="pilot_Heli_Transport_03";
				gunnerInAction="pilot_Heli_Transport_03";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";
				gunnerGetInAction="GetInMedium";
				gunnerGetOutAction="GetOutMedium";
				preciseGetInOut="GETIN_OLD";
				GunnerDoor="";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="pedalL";
				gunnerRightLegAnimName="pedalR";
				proxyIndex=3;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment2";
				commanding=-3;
				class ViewGunner: ViewPilot
				{
				};
				class Components
				{};
				selectionFireAnim="";
			};
			class MainTurret: MainTurret
			{
				CanEject=1;
				isCopilot=0;
				body="mainTurret";
				gun="mainGun";
				minElev=-25;
				maxElev=20;
				initElev=-15;
				minTurn=30;
				maxTurn=140;
				initTurn=90;
				animationSourceHatch="";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				gunnerName="$STR_A3_LEFT_GUNNER";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				memoryPointGunnerOptics="Eye";
				gunnerAction="Gunner_HeliTransport3_1";
				gunnerInAction="Gunner_HeliTransport3_1";
				gunnerLeftHandAnimName="gunner_1_hand_l";
				gunnerRightHandAnimName="gunner_1_hand_r";
				gunnerLeftLegAnimName="gunner_1_legs";
				gunnerRightLegAnimName="gunner_1_legs";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				weapons[]=
				{
					"LMG_Minigun_Transport"
				};
				magazines[]=
				{
					"2000Rnd_65x39_Belt_Tracer_Red"
				};
				soundServo[]=
				{
					"",
					1.4125376,
					1,
					30
				};
				soundServoVertical[]=
				{
					"",
					1.4125376,
					1,
					30
				};
				commanding=-2;
				primaryGunner=1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				proxyIndex=1;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerDoor="";
				playerPosition=3;
				soundAttenuationTurret="HeliAttenuationGunner";
				disableSoundAttenuation=0;
				canUseScanners=0;
				selectionFireAnim="zasleh";
			};
			class RightDoorGun: MainTurret
			{
				minTurn=-140;
				maxTurn=-30;
				initTurn=-90;
				body="RightDoorTurret";
				gun="RightDoorGun";
				animationSourceBody="mainTurret2";
				animationSourceGun="mainGun2";
				selectionFireAnim="zasleh_1";
				gunnerAction="Gunner_HeliTransport3_2";
				gunnerInAction="Gunner_HeliTransport3_2";
				gunnerLeftHandAnimName="gunner_2_hand_l";
				gunnerRightHandAnimName="gunner_2_hand_r";
				gunnerLeftLegAnimName="gunner_2_legs";
				gunnerRightLegAnimName="gunner_2_legs";
				proxyIndex=2;
				gunnerName="$STR_A3_RIGHT_GUNNER";
				weapons[]=
				{
					"LMG_Minigun_Transport2"
				};
				commanding=-3;
				gunBeg="muzzle_beg_2";
				gunEnd="muzzle_end_2";
				primaryGunner=0;
				memoryPointGun="";
				memoryPointGunnerOptics="Eye2";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos gunner2";
				memoryPointsGetInGunnerDir="pos gunner2 dir";
				gunnerDoor="";
				canUseScanners=0;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo dir r";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex=15;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{-9.5507002,-1.5932},
						{7.2315998,6.1824002},
						{21.2761,24.8757},
						{18.4188,51.977901},
						{-1.294,61.902401}
					};
					limitsArrayBottom[]=
					{
						{-10.5189,-1.5408},
						{-11.8771,7.4937},
						{-9.0822001,24.590599},
						{-13.2861,45.595699},
						{-23.2533,55.884998}
					};
				};
				class TurnIn: TurnOut
				{
				};
				isPersonTurret=1;
				enabledByAnimationSource="Door_rear_source";
				playerPosition=2;
				soundAttenuationTurret="HeliAttenuationRamp";
				disableSoundAttenuation=0;
				selectionFireAnim="";
			};
			class CargoTurret_02: CargoTurret_01
			{
				memoryPointsGetInGunner="pos cargo l";
				memoryPointsGetInGunnerDir="pos cargo dir l";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{4.2147999,-41.222198},
						{15.2573,-37.7332},
						{25.244499,-33.571602},
						{28.359501,-4.6949},
						{21.892,7.1290002},
						{13.5426,15.8007},
						{-4.1974001,23.5159}
					};
					limitsArrayBottom[]=
					{
						{-12.4846,-33.923},
						{-6.7800002,-26.0082},
						{-1.3741,-5.0386},
						{-5.0306001,13.1077},
						{-3.7142,23.5767}
					};
				};
				class TurnIn: TurnOut
				{
				};
				proxyIndex=16;
			};
		};
		class Reflectors
		{
			class Light_L
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=5;
				outerAngle=65;
				coneFadeCoef=10;
				position="Light_L_pos";
				direction="Light_L_dir";
				hitpoint="Light_L";
				selection="Light_L_hide";
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
			};
			class Light_R: Light_L
			{
				position="Light_R_pos";
				direction="Light_R_dir";
				hitpoint="Light_R";
				selection="Light_R_hide";
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewpInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=0;
			maxTurn=0;
			initTurn=0;
			minElev=80;
			maxElev=80;
			initElev=80;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=0;
		};
		memoryPointDriverOptics="slingLoad_cam";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
			"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_damage.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_destruct.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext02.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext02_damage.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext02_destruct.rvmat",
				"a3\data_f\glass_veh.rvmat",
				"a3\Data_f\Glass_veh_damage.rvmat",
				"a3\Data_f\Glass_veh_damage.rvmat",
				"a3\data_f\glass_veh_int.rvmat",
				"a3\Data_f\Glass_veh_damage.rvmat",
				"a3\Data_f\Glass_veh_damage.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_intadds.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_intadds_damage.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_intadds_destruct.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_int01.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_int01_damage.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_int01_destruct.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_int02.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_int02_damage.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_int02_destruct.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_intboard.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_intboard_damage.rvmat",
				"A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_intboard_destruct.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_add.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_add_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_add_damage.rvmat"
			};
		};
		numberPhysicalWheels=4;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=10;
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TextureSources
		{
			class Green
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
					"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
					"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
	};
};