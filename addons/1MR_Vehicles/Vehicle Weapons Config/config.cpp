//WELCOME TO HOPHRI'S HELL OF VEHICLE WEAPON CONFIGS. ENJOY!!!!!!!!!!!!!!!!!!!!//

#define _ARMA_

class CfgPatches
{
	class 7EF_VIC_WEPS
	{
		author = "Hophri";
		units[] = {};
		vehicles[] = {};
		weapons[] = {"7EF_Gatling_30mm_Plane_CAS_01_F", "7EF_M134_minigun", "7EF_M230_Weapon"};
		requiredVersion = 0.1;
		requiredAddons[] = {};
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
class Mode_FullAuto;
class Components;

class CfgAmmo
{	
	class BulletBase;
	class MissileCore;
	class BombCore;

	//Air Vics
	class Gatling_30mm_HE_Plane_CAS_01_F;
	class 7EF_Gatling_30mm_HE_F: Gatling_30mm_HE_Plane_CAS_01_F
	{
		allowAgainstInfantry = 1;
		ace_frag_skip = 1;
		deflecting = 0;
		hit = 120;
		indirectHit = 60;
		indirectHitRange = 4;
		tracerStartTime = 0.002;
		tracerEndTime = 30;
		typicalSpeed = 1300;
	};
	class B_127x99_Ball_Tracer_Red;
	class 7EF_B_127x99_HE_Tracer_Red: B_127x99_Ball_Tracer_Red
	{
		ACE_damageType = "explosive";
		ace_frag_skip = 1;
		allowAgainstInfantry = 1;
		airLock = 1;
		caliber = 1.3;
		deflecting = 0;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.4;
		fuseDistance = 5;
		hit = 50;
		indirectHit = 15;
		indirectHitRange = 2;
		tracerScale = 1.2;
		tracerStartTime = 0.01;
		tracerEndTime = 30;
		weaponType = "mGun";
		typicalSpeed = 1600;
	};
	class B_30x113mm_M789_HEDP;
	class 7EF_30mm_M230_HEDPT: B_30x113mm_M789_HEDP
	{
		ace_frag_skip = 1;
		deflecting = 0;
		hit = 120;
		indirectHit = 60;
		indirectHitRange = 4;
		tracerStartTime = 0.002;
		tracerEndTime = 30;
		typicalSpeed = 1300;
	};
	class M_Scalpel_AT;
	class 7EF_Talon_AT: M_Scalpel_AT
	{
		cmImmunity = 1.0;
		fuseDistance = 50;
		hit = 3000;
		indirectHit = 200;
		maneuvrability = 90;
		maxControlRange = 20000;
		maxSpeed = 900;
		thrust = 800;
		thrustTime = 1;
		trackOversteer = 2;
		missileKeepLockedCone = 360;
		missileLockCone = 100;
		missileLockMaxSpeed = 200;
		missileLockMaxDistance = 12000;
		missileLockMinDistance = 50;
		weaponLockSystem = "2 + 4";
		weaponLockDelay = 1;
		canLock = 2;
		airLock = 0;
		irLock = 1;
        laserLock = 1;
	};
	class 7EF_Havoc_AT: M_Scalpel_AT
	{
		cmImmunity = 1.0;
		fuseDistance = 50;
		hit = 3000;
		indirectHit = 200;
		maneuvrability = 90;
		maxControlRange = 20000;
		maxSpeed = 900;
		thrust = 800;
		thrustTime = 1;
		trackOversteer = 2;
		missileKeepLockedCone = 360;
		missileLockCone = 100;
		missileLockMaxSpeed = 200;
		missileLockMaxDistance = 12000;
		missileLockMinDistance = 50;
		weaponLockSystem = 8;
		weaponLockDelay = 1;
		canLock = 2;
		airLock = 0;
		irLock = 0;
        laserLock = 0;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						maxTrackableSpeed = 200;
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
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						maxTrackableSpeed = 200;
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
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						maxTrackableSpeed = 200;
						class AirTarget
						{
							maxRange = 12000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 12000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class Missile_AA_03_F;
	class 7EF_Cryon_AA: Missile_AA_03_F
	{
		cmImmunity = 0.75;
		hit = 150;
		indirectHit = 150;
		maneuvrability = 90;
		maxSpeed = 1200;
		missileKeepLockedCone = 180;
		missileLockCone = 100;
		missileLockMaxDistance = 4500;
		missileLockMaxSpeed = 700;
		missileLockMinDistance = 50;
		weaponLockSystem = "2 + 16";
		weaponLockDelay = 1;
		airLock = 2;
        irLock = 1;
        laserLock = 0;
		thrust = 800;
		thrustTime = 2;
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 80;
						angleRangeVertical = 80;
						maxTrackableSpeed = 1200;
						class AirTarget
						{
							maxRange = 4500;
							minRange = 5;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 4500;
							minRange = 5;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class 7EF_Stratos_AA: Missile_AA_03_F
	{
		cmImmunity = 0.9;
		hit = 500;
		indirectHit = 500;
		maneuvrability = 40;
		maxSpeed = 1500;
		missileKeepLockedCone = 120;
		missileLockCone = 50;
		missileLockMaxDistance = 16000;
		missileLockMaxSpeed = 700;
		missileLockMinDistance = 50;
		weaponLockSystem = "2 + 16";
		weaponLockDelay = 3;
		airLock = 2;
        irLock = 1;
        laserLock = 0;
		thrust = 800;
		thrustTime = 2;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 25;
						angleRangeVertical = 25;
						maxTrackableSpeed = 1200;
						class AirTarget
						{
							maxRange = 16000;
							minRange = 5;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						}
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 5;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						}
					};
				};
			};
		};
	};
	class 7EF_Atlas_AA: Missile_AA_03_F
	{
		cmImmunity = 1.0;
		hit = 500;
		indirectHit = 500;
		maneuvrability = 40;
		maxSpeed = 1500;
		missileKeepLockedCone = 120;
		missileLockCone = 50;
		missileLockMaxDistance = 16000;
		missileLockMaxSpeed = 700;
		missileLockMinDistance = 50;
		weaponLockSystem = 8;
		weaponLockDelay = 3;
		airLock = 2;
        irLock = 0;
        laserLock = 0;
		thrust = 800;
		thrustTime = 2;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						maxTrackableSpeed = 1200;
						class AirTarget
						{
							maxRange = 16000;
							minRange = 5;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						}
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 5;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						}
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						maxTrackableSpeed = 1200;
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
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						angleRangeHorizontal = 240;
						angleRangeVertical = 240;
						maxTrackableSpeed = 1200;
						class AirTarget
						{
							maxRange = 16000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class Bomb_03_F;
	class 7th_Jupiter_Ammo: Bomb_03_F
	{
		hit = 8000;
		indirectHit = 3000;
		indirectHitRange = 16;
		canLock = 2;
		airLock = 0;
		irLock = 1;
		laserLock = 1;
		maneuvrability = 20;
		weaponLockSystem = "2 + 4";
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						maxTrackableSpeed = 30;
						class AirTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 10000;
							minRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						maxTrackableSpeed = 30;
						class AirTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						maxTrackableSpeed = 30;
						class AirTarget
						{
							maxRange = 5000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 5000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class 7th_Neptune_Ammo: Bomb_03_F
	{
		hit = 8000;
		indirectHit = 3000;
		indirectHitRange = 16;
		canLock = 2;
		airLock = 0;
		irLock = 1;
		laserLock = 0;
		maneuvrability = 20;
		weaponLockSystem = 8;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						maxTrackableSpeed = 120;
						class AirTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						angleRangeHorizontal = 240;
						angleRangeVertical = 240;
						maxTrackableSpeed = 120;
						class AirTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 10000;
							minRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class M_AT;
	class 7th_Widowmaker_HE: M_AT
	{
		hit = 300;
		indirectHit = 100;
		indirectHitRange = 10;
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_02_F";
	};
	class 7th_57mm_HEDPT: BulletBase
	{
		allowAgainstInfantry = 1;
		airFriction = -0.00012;
		caliber = 12;
		deflecting = 0;
		deflectionSlowDown = 0.8;
		hit = 180;
		indirectHit = 140;
		indirectHitRange = 6;
		timeToLive = 20;
		tracerStartTime = 0.02;
		tracerScale = 3;
		typicalSpeed = 1100;
		explosive = 0.6;
		explosionEffects = "ExploAmmoExplosion";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};

	class 7th_Nuke_AGM: MissileCore
	{
		hit = 10000;
		indirectHit = 5000;
		indirectHitRange = 100;
		explosionEffects = "Effect_MushroomCloud";
		explosionSoundEffect = "DefaultExplosion";
		soundHit[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_Bomb_large", db45, 1, 3000};
		craterEffects = "HEShellCrater";
		whistleDist = 1200;
		fuseDistance = 50;
	};

	//Ground Vics
	class OPTRE_B_30mm_AP2;
	class 7th_30mm_AP: OPTRE_B_30mm_AP2
	{
		hit = 180;
		weaponLockSystem = 2;
	};
	class OPTRE_B_30mm_HE2;
	class 7th_30mm_HE: OPTRE_B_30mm_HE2
	{
		hit = 65;
		fuseDistance = 5;
		indirectHit = 35;
		indirectHitRange = 4;
		weaponLockSystem = 2;
	};
	class M_Titan_AT;
	class 7th_Vikhr_Ground_AT: M_Titan_AT
	{
		cmImmunity = 1.0;
		fuseDistance = 80;
		hit = 3000;
		indirectHit = 80;
		maneuvrability = 30;
		manualControl = 1;
		maxControlRange = 20000;
		maxSpeed = 900;
		missileKeepLockedCone = 90;
		missileLockCone = 15;
		missileLockMaxDistance = 3000;
		missileLockMinDistance = 5;
		missileLockMaxSpeed = 550;
		weaponLockSystem = "2 + 4 + 16"
		weaponLockDelay = 1;
		canLock = 2;
		airLock = 0;
		irLock = 1;
        laserLock = 1;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 15;
						angleRangeVertical = 15;
						maxTrackableSpeed = 55;
						class AirTarget
						{
							maxRange = 3000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 3000;
							minRange = 50;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						angleRangeHorizontal = 90;
						angleRangeVertical = 70;
						maxTrackableSpeed = 55;
						class AirTarget
						{
							maxRange = 3000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 3000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class OPTRE_B_50mm;
	class 7th_50mm_HE: OPTRE_B_50mm
	{
		hit = 80;
		fuseDistance = 5;
		indirectHit = 80;
		indirectHitRange = 6;
		weaponLockSystem = 2;
	};
	class OPTRE_B_50mm_APFSDS;
	class 7th_50mm_AP: OPTRE_B_50mm_APFSDS
	{
		hit = 250;
		weaponLockSystem = 2;
	};
	class OPTRE_Sh_105mm_APBC;
	class 7th_105mm_APFSDS: OPTRE_Sh_105mm_APBC
	{
		hit = 600;
	};
	class OPTRE_Sh_105mm_HEAT;
	class 7th_105mm_HEAT: OPTRE_Sh_105mm_HEAT
	{
		hit = 300;
		indirectHit = 100;
		indirectHitRange = 8;
	};
	class M_Titan_AA_long;
	class 7EF_Atlas_G2A_AA: M_Titan_AA_long
	{
		cmImmunity = 1.0;
		hit = 500;
		indirectHit = 500;
		maneuvrability = 100;
		maxSpeed = 1500;
		missileKeepLockedCone = 120;
		missileLockCone = 50;
		missileLockMaxDistance = 16000;
		missileLockMaxSpeed = 700;
		missileLockMinDistance = 50;
		weaponLockSystem = 8;
		weaponLockDelay = 3;
		airLock = 2;
        irLock = 0;
        laserLock = 0;
		thrust = 800;
		thrustTime = 2;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
						maxTrackableSpeed = 1200;
						class AirTarget
						{
							maxRange = 16000;
							minRange = 5;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						}
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 5;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						}
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
						maxTrackableSpeed = 1200;
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
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
						maxTrackableSpeed = 1200;
						class AirTarget
						{
							maxRange = 16000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 50;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
};

class CfgMagazines
{
	class VehicleMagazine;
	//Air Vics
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class 1800Rnd_Gatling_30mm_Plane_CAS_01_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		count = 1800;
		descriptionShort = "30mm Combat Mix DU:HEIT";
		displayName = "30mm HEIT";
		displayNameMFDFormat = "30mm HEIT";
		displayNameShort = "30mm HEIT";
		tracersEvery = 1;
		ammo = "7EF_Gatling_30mm_HE_F";
	};
	class 500Rnd_127x99_mag_Tracer_Red;
	class 2500Rnd_127x99_mag_Tracer_Red: 500Rnd_127x99_mag_Tracer_Red
	{
		count = 2500;
		descriptionShort = "2500Rnd HET";
		displayName = "2500Rnd HET";
		displayNameMFDFormat = "12.7mm HET";
		displayNameShort = "12.7mm HET";
		tracersEvery = 1;
		ammo = "7EF_B_127x99_HE_Tracer_Red";
	};
	class PylonRack_4Rnd_LG_scalpel;
	class 7EF_Talon_4Rnd: PylonRack_4Rnd_LG_scalpel
	{
		ammo = "7EF_Talon_AT";
		count = 4;
		descriptionShort = "Short/Long Range Laser/IR Guided Anti-Tank Warhead";
		displayName = "[7th Fleet] Talon 4x AGM";
		displayNameMFDFormat = "Talon";
		displayNameShort = "[7th Fleet] Talon";
		hardpoints[] = {"7th_Hardpoints","7th_Hardpoints_Talon"};
		mass = 1;
		pylonWeapon = "7EF_Talon_Weapon";
	};
	class 7EF_Havoc_4Rnd: PylonRack_4Rnd_LG_scalpel
	{
		ammo = "7EF_Havoc_AT";
		count = 4;
		descriptionShort = "Short/Long Range Radar Guided Anti-Tank Warhead";
		displayName = "[7th Fleet] Havoc 4x AGM";
		displayNameMFDFormat = "Havoc";
		displayNameShort = "[7th Fleet] Havoc";
		hardpoints[] = {"7th_Hardpoints","7th_Hardpoints_Havoc"};
		mass = 1;
		pylonWeapon = "7EF_Havoc_Weapon";
	};
	class PylonRack_1Rnd_Missile_AA_03_F;
	class 7EF_CryonAA_12Rnd: PylonRack_1Rnd_Missile_AA_03_F
	{
		ammo = "7EF_Cryon_AA";
		count = 12;
		descriptionShort = "Short/Long Range IR Guided Anti-Air Missiles";
		displayName = "[7th Fleet] Cryon 12x AA";
		displayNameMFDFormat = "Cryon";
		displayNameShort = "[7th Fleet] Cryon";
		hardpoints[] = {"7th_Hardpoints","7th_Hardpoints_Cryon"};
		mass = 1;
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_DAGR_F.p3d";
		pylonWeapon = "7EF_Cryon_Weapon";
	};
	class 7EF_StratosAA_1Rnd: PylonRack_1Rnd_Missile_AA_03_F
	{
		ammo = "7EF_Stratos_AA";
		count = 1;
		descriptionShort = "Short/Long Range IR Guided Anti-Air Missile";
		displayName = "[7th Fleet] Stratos AA";
		displayNameMFDFormat = "Stratos";
		displayNameShort = "[7th Fleet] Stratos";
		hardpoints[] = {"7th_Hardpoints","7th_Hardpoints_Stratos"};
		mass = 1;
		pylonWeapon = "7EF_Stratos_Weapon";
	};
	class 7EF_AtlasAA_1Rnd: PylonRack_1Rnd_Missile_AA_03_F
	{
		ammo = "7EF_Atlas_AA";
		count = 1;
		descriptionShort = "Short/Long Range Radar Guided Anti-Air Missile";
		displayName = "[7th Fleet] Atlas AA";
		displayNameMFDFormat = "Atlas";
		displayNameShort = "[7th Fleet] Atlas";
		hardpoints[] = {"7th_Hardpoints","7th_Hardpoints_Atlas"};
		mass = 1;
		pylonWeapon = "7EF_Atlas_Weapon";
	};
	class PylonMissile_1Rnd_Bomb_03_F;
	class 7EF_Jupiter_500_1Rnd: PylonMissile_1Rnd_Bomb_03_F
	{
		ammo = "7th_Jupiter_Ammo";
		count = 1;
		descriptionShort = "Laser/IR Guided 500lbs Bomb";
		displayName = "[7th Fleet] Jupiter 500";
		displayNameMFDFormat = "Jupiter";
		displayNameShort = "[7th Fleet] Jupiter";
		hardpoints[] = {"7th_Hardpoints","7th_Hardpoints_Bombs"};
		mass = 1;
		pylonWeapon = "7EF_Jupiter_Weapon";
	};
	class 7EF_Neptune_500_1Rnd: PylonMissile_1Rnd_Bomb_03_F
	{
		ammo = "7th_Neptune_Ammo";
		count = 1;
		descriptionShort = "Radar Guided 500lbs Bomb";
		displayName = "[7th Fleet] Neptune 500";
		displayNameMFDFormat = "Neptune";
		displayNameShort = "[7th Fleet] Neptune";
		hardpoints[] = {"7th_Hardpoints","7th_Hardpoints_Bombs"};
		mass = 1;
		pylonWeapon = "7EF_Neptune_Weapon";
	};
	class PylonRack_12Rnd_missiles;
	class 7th_Widowmaker_12Rnd: PylonRack_12Rnd_missiles
	{
		ammo = "7th_Widowmaker_HE";
		count = 12;
		descriptionShort = "Unguided High-Explosive Mini Missiles";
		displayName = "[7th Fleet] Widowmaker 12Rnd";
		displayNameMFDFormat = "Widowmaker";
		displayNameShort = "[7th Fleet] Widowmaker";
		hardpoints[] = {"7th_Hardpoints","7th_Hardpoints_Widowmaker"};
		mass = 1;
		pylonWeapon = "7EF_Widowmaker_Weapon";
	};
	class 7EF_Sabertooth_150Rnd: VehicleMagazine
	{
		count = 150;
		ammo = "7EF_30mm_M230_HEDPT";
		descriptionShort = "150Rnd of Glorious 30mm";
		displayName = "[7th Fleet] 30mm Sabertooth";
		displayNameMFDFormat = "30mm HEDPT";
		displayNameShort = "[7th Fleet] Sabertooth";
		hardpoints[] = {"7th_Hardpoints_Sabertooth"};
		tracersEvery = 1;
		mass = 1;
		muzzlePos = "memMuzzle";
		muzzleEnd = "memGunTip";
		model = "\1MR_Vehicles\Vehicle Weapons Config\Pylons\Sabertooth\Sabertooth_30mm_Pylon.p3d";
		pylonWeapon = "7EF_Sabertooth_Weapon";
	};
	class 7EF_Guardian_60Rnd: VehicleMagazine
	{
		count = 60;
		ammo = "7th_57mm_HEDPT";
		descriptionShort = "60Rnd of That Good Ol 57mm";
		displayName = "[7th Fleet] 57mm Guardian";
		displayNameMFDFormat = "57mm HEDPT";
		displayNameShort = "[7th Fleet] Guardian";
		hardpoints[] = {"7th_Hardpoints_Guardian"};
		tracersEvery = 1;
		mass = 1;
		muzzlePos = "memMuzzle";
		muzzleEnd = "memGunTip";
		model = "\1MR_Vehicles\Vehicle Weapons Config\Pylons\Guardian\Guardian_57mm_Pylon.p3d";
		pylonWeapon = "7EF_Guardian_Weapon";
	};

	//Ground Vics
	class OPTRE_250Rnd_30mm_AP2;
	class 7th_250Rnd_30mm_AP: OPTRE_250Rnd_30mm_AP2
	{
		ammo = "7th_30mm_AP";
		displayName = "[7th Fleet] 250Rnd 30mm APFSDS";
		displayNameShort = "[7th] 30mm APFSDS";
	};
	class OPTRE_300Rnd_30mm_HE2;
	class 7th_300Rnd_30mm_HE: OPTRE_300Rnd_30mm_HE2
	{
		ammo = "7th_30mm_HE";
		displayName = "[7th Fleet] 300Rnd 30mm HE";
		displayNameShort = "[7th] 30mm HE";
	};
	class OPTRE_2Rnd_GAT_missiles;
	class 7th_2Rnd_Talon: OPTRE_2Rnd_GAT_missiles
	{
		ammo = "7th_Vikhr_Ground_AT";
		displayName = "[7th Fleet] 2Rnd Talon ATGM";
		displayNameShort = "[7th] Talon ATGM";
	};
	class OPTRE_100Rnd_50mm_HE;
	class 7th_100Rnd_50mm_HE: OPTRE_100Rnd_50mm_HE
	{
		ammo = "7th_50mm_HE";
		displayName = "[7th Fleet] 50mm HE";
		displayNameShort = "[7th] 50mm HE";
	};
	class OPTRE_100Rnd_50mm_APFSDS;
	class 7th_100Rnd_50mm_AP: OPTRE_100Rnd_50mm_APFSDS
	{
		ammo = "7th_50mm_AP";
		displayName = "[7th Fleet] 50mm APFSDS";
		displayNameShort = "[7th] 50mm APFSDS";
	};
	class OPTRE_60Rnd_105mm_APBC;
	class 7th_20Rnd_105mm_APFSDS: OPTRE_60Rnd_105mm_APBC
	{
		count = 20;
		ammo = "7th_105mm_APFSDS";
		displayName = "[7th Fleet] 105mm APFSDS";
		displayNameShort = "[7th] 105mm APFSDS";
	};
	class OPTRE_60Rnd_105mm_HEAT;
	class 7th_20Rnd_105mm_HEAT: OPTRE_60Rnd_105mm_HEAT
	{
		count = 20;
		ammo = "7th_105mm_HEAT";
		displayName = "[7th Fleet] 105mm HEAT";
		displayNameShort = "[7th] 105mm HEAT";
	};
	class 4Rnd_Titan_long_missiles;
	class 7EF_AtlasAA_2Rnd: 4Rnd_Titan_long_missiles
	{
		ammo = "7EF_Atlas_G2A_AA";
		count = 2;
		descriptionShort = "Short/Long Range Radar Guided Anti-Air Missile";
		displayName = "[7th Fleet] Atlas AA";
		displayNameMFDFormat = "Atlas";
		displayNameShort = "[7th Fleet] Atlas";
		hardpoints[] = {};
		mass = 1;
		pylonWeapon = "7EF_Atlas_G2A_Weapon";
	};
};
class CfgWeapons
{
	//Air Vics
	class Gatling_30mm_Plane_CAS_01_F;
	class 7EF_Gatling_30mm_Plane_CAS_01_F: Gatling_30mm_Plane_CAS_01_F
	{
		displayname = "[7th Fleet] 30mm GAU-8";
		displayNameShort = "[7th Fleet] GAU-8";
		ballisticsComputer = "4 + 8";
		magazines[]=
		{
			"1800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		magazineReloadTime=8;
		dispersion = 0.002;
		canLock = 2;
	};
	class MGunCore;
	class M134_minigun;
	class 7EF_M134_minigun: M134_minigun
	{
		cursor = "EmptyCursor";
		cursorAim = "mg";
		displayname = "[7th Fleet] 2x GAU-19 12.7mm";
		displayNameShort = "[7th Fleet] GAU-19";
		descriptionShort="2x GAU-19 12.7mm";
		ballisticsComputer = "4 + 8";
		magazines[]=
		{
			"2500Rnd_127x99_mag_Tracer_Red"
		};
		magazineReloadTime=3;
		dispersion = 0.002;
		canLock = 2;
	};
	class missiles_SCALPEL;
	class 7EF_Talon_Weapon: missiles_SCALPEL
	{
		displayname = "[7th Fleet] Talon AGM";
		displayNameShort = "[7th Fleet] Talon";
		magazines[]=
		{
			"7EF_Talon_4Rnd"
		};
		weaponLockDelay = 1;
		magazineReloadTime=5;
		canLock = 2;
		cmImmunity = 1.0;
		lockAcquire = 1;
	};
	class 7EF_Havoc_Weapon: missiles_SCALPEL
	{
		displayname = "[7th Fleet] Havoc AGM";
		displayNameShort = "[7th Fleet] Havoc";
		magazines[]=
		{
			"7EF_Havoc_4Rnd"
		};
		weaponLockDelay = 1;
		magazineReloadTime=5;
		canLock = 2;
		cmImmunity = 1.0;
		lockAcquire = 1;
	};
	class Missile_AA_03_Plane_CAS_02_F;
	class 7EF_Cryon_Weapon: Missile_AA_03_Plane_CAS_02_F
	{
		displayname = "[7th Fleet] Cryon AA";
		displayNameShort = "[7th Fleet] Cryon";
		magazines[]=
		{
			"7EF_CryonAA_12Rnd"
		};
		weaponLockDelay = 1;
		magazineReloadTime=5;
		canLock = 2;
		cmImmunity = 0.75;
		lockAcquire = 1;
	};
	class 7EF_Stratos_Weapon: Missile_AA_03_Plane_CAS_02_F
	{
		displayname = "[7th Fleet] Stratos AA";
		displayNameShort = "[7th Fleet] Stratos";
		magazines[]=
		{
			"7EF_StratosAA_1Rnd"
		};
		weaponLockDelay = 3;
		magazineReloadTime=5;
		canLock = 2;
		cmImmunity = 0.9;
		lockAcquire = 1;
	};
	class 7EF_Atlas_Weapon: Missile_AA_03_Plane_CAS_02_F
	{
		displayname = "[7th Fleet] Atlas AA";
		displayNameShort = "[7th Fleet] Atlas";
		magazines[]=
		{
			"7EF_AtlasAA_1Rnd"
		};
		weaponLockDelay = 3;
		magazineReloadTime=5;
		canLock = 2;
		cmImmunity = 1.0;
		lockAcquire = 1;
	};
	class Bomb_03_Plane_CAS_02_F;
	class 7EF_Jupiter_Weapon: Bomb_03_Plane_CAS_02_F
	{
		displayname = "[7th Fleet] Jupiter 500";
		displayNameShort = "[7th Fleet] Jupiter";
		magazines[]=
		{
			"7EF_Jupiter_500_1Rnd"
		};
		weaponLockDelay = 1;
		magazineReloadTime=5;
		canLock = 2;
		cmImmunity = 1.0;
		lockAcquire = 1;
	};
	class 7EF_Neptune_Weapon: Bomb_03_Plane_CAS_02_F
	{
		displayname = "[7th Fleet] Neptune 500";
		displayNameShort = "[7th Fleet] Neptune";
		magazines[]=
		{
			"7EF_Neptune_500_1Rnd"
		};
		weaponLockDelay = 1;
		magazineReloadTime=5;
		canLock = 2;
		cmImmunity = 1.0;
		lockAcquire = 1;
	};
	class missiles_DAR;
	class 7EF_Widowmaker_Weapon: missiles_DAR
	{
		displayname = "[7th Fleet] Widowmaker 12Rnd";
		displayNameShort = "[7th Fleet] Widowmaker";
		magazines[]=
		{
			"7th_Widowmaker_12Rnd"
		};
		magazineReloadTime=5;
		canLock = 0;
		cmImmunity = 1.0;
	};
	class Twin_Cannon_20mm;
	class 7EF_Sabertooth_Weapon: Twin_Cannon_20mm
	{
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		displayname = "[7th Fleet] 30mm Sabertooth";
		displayNameShort = "[7th Fleet] Sabertooth";
		magazines[]=
		{
			"7EF_Sabertooth_150Rnd"
		};
		magazineReloadTime=4;
		dispersion = 0.002;
		ballisticsComputer = "4 + 8";
		canLock = 2;
		reloadTime = 0.3;
		sound[] = {"",1,1};
		modes[] = {"player","close","short","medium","far"};
		flash = "gunfire";
		flashSize = 0.5;
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun2";
				positionName = "memMuzzle";
				directionName = "memGunTip";
			};
			class Shell
			{
				positionName = "memEject";
				directionName = "memEject";
				effectName = "HeavyGunCartridge1";
			};
		};
		class player: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_01",1.9952624,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_02",1.9952624,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_03",1.9952624,1,1500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			displayName = "[7th Fleet] 30mm Sabertooth";
			soundContinuous = 0;
			reloadTime = 0.3;
			dispersion = 0.0009;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 8;
			maxRangeProbab = 0.01;
		};
		class close: player
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 6;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.8;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 5;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.8;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 3;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.8;
			midRange = 1500;
			midRangeProbab = 0.8;
			maxRange = 2000;
			maxRangeProbab = 0.7;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1800;
			minRange = 1800;
			minRangeProbab = 0.74;
			midRange = 2400;
			midRangeProbab = 0.65;
			maxRange = 3000;
			maxRangeProbab = 0.05;
		};
	};
	class 7EF_Guardian_Weapon: Twin_Cannon_20mm
	{
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		displayname = "[7th Fleet] 57mm Guardian";
		displayNameShort = "[7th Fleet] Guardian";
		magazines[]=
		{
			"7EF_Guardian_60Rnd"
		};
		magazineReloadTime=6;
		dispersion = 0.004;
		ballisticsComputer = "4 + 8";
		canLock = 2;
		reloadTime = 1;
		sound[] = {"",1,1};
		modes[] = {"player","close","short","medium","far"};
		flash = "gunfire";
		flashSize = 0.5;
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun2";
				positionName = "memMuzzle";
				directionName = "memGunTip";
			};
		};
		class player: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_01",1.99526,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_02",1.99526,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_03",1.99526,1,1500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				soundsetshot[] = {"jsrs_2025_autocannon_big_shot_soundset","jsrs_2025_weapon_stereo_autocannon_soundset","jsrs_2025_autocannon_tails_soundset"};
			};
			displayName = "[7th Fleet] 57mm Guardian";
			soundContinuous = 0;
			reloadTime = 1;
			dispersion = 0.0009;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 8;
			maxRangeProbab = 0.01;
		};
		class close: player
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 6;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.8;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 5;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.8;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 3;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 3;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.8;
			midRange = 1500;
			midRangeProbab = 0.8;
			maxRange = 2000;
			maxRangeProbab = 0.7;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1800;
			minRange = 1800;
			minRangeProbab = 0.74;
			midRange = 2400;
			midRangeProbab = 0.65;
			maxRange = 3000;
			maxRangeProbab = 0.05;
		};
	};

	//Ground Vics
	class OPTRE_M503_30mm_Autocannon
	{
		class AP;
		class HE;
	};
	class 7th_M503: OPTRE_M503_30mm_Autocannon
	{
		canLock = 2;
		magazineReloadTime=1;
		weaponLockDelay = 0.3;
		weaponLockSystem = 4;
		displayName = "[7th Fleet] 30mm Autocannon";
		displayNameShort = "[7th Fleet] 30mm";
		class AP: AP
		{
			magazines[] = {"7th_250Rnd_30mm_AP"};
		};

		class HE: HE
		{
			magazines[] = {"7th_300Rnd_30mm_HE"};
		};
	};
	class OPTRE_M670_ATGM_Launcher;
	class 7th_ATGM_Launcher: OPTRE_M670_ATGM_Launcher
	{
		canLock = 2;
		magazineReloadTime=8;
		weaponLockDelay = 1;
		weaponLockSystem = 4;
		displayName = "[7th Fleet] ATGM Launcher";
		displayNameShort = "[7th Fleet] ATGM Launcher";
		magazines[] = {"7th_2Rnd_Talon"};
	};
	class OPTRE_M230;
	class 7th_M230: OPTRE_M230
	{	
		canLock = 2;
		magazineReloadTime=3;
		weaponLockDelay = 0.3;
		weaponLockSystem = 4;
		displayName = "[7th Fleet] M230 Autocannon";
		displayNameShort = "[7th Fleet] M230";
		magazines[] = {"7th_100Rnd_50mm_HE","7th_100Rnd_50mm_AP"};
	};
	class OPTRE_105mm_M556;
	class 7th_105mm: OPTRE_105mm_M556
	{
		canLock = 0;
		magazineReloadTime=5;
		displayName = "[7th Fleet] 105mm Cannon";
		displayNameShort = "[7th Fleet] 105mm";
		magazines[] = {"7th_20Rnd_105mm_APFSDS","7th_20Rnd_105mm_HEAT"};
	};
	class missiles_titan_AA;
	class 7EF_Atlas_G2A_Weapon: missiles_titan_AA
	{
		displayname = "[7th Fleet] Atlas AA";
		displayNameShort = "[7th Fleet] Atlas";
		magazines[] = {"7EF_AtlasAA_2Rnd"};
		weaponLockDelay = 3;
		magazineReloadTime=5;
		canLock = 2;
		cmImmunity = 1.0;
		lockAcquire = 1;
	};
	class autocannon_35mm;
	class 7EF_35mm_AA_Weapon: autocannon_35mm
	{
		ballisticsComputer = "1 + 4 + 16";
		displayname = "[7th Fleet] CBT-003";
		displayNameShort = "[7th Fleet] CBT-003";
		magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Green"};
		canLock = 2;
	};
};

class CfgCloudlets {
    class Default;

    class Effect_MushroomCloud : Default {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal_02";
        particleFSNtieth = 4;
        particleFSIndex = 0;
        particleFSFrameCount = 8;
        particleFSLoop = 0;
        angleVar = 360;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 30;
        moveVelocity[] = {0, 1.5, 0};
        rotationVelocity = 0;
        weight = 0.05;
        volume = 0.04;
        rubbing = 0.1;
        size[] = {10, 50, 120};
        color[] = {
            {0.4, 0.4, 0.4, 0.6},
            {0.3, 0.3, 0.3, 0.4},
            {0.2, 0.2, 0.2, 0.1}
        };
        colorCoef[] = {1, 1, 1, 1};
        animationSpeed[] = {1.2};
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.2;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 2;
        positionVar[] = {5, 2, 5};
        MoveVelocityVar[] = {1.5, 0.5, 1.5};
        rotationVelocityVar = 2;
        sizeVar = 3;
        colorVar[] = {0.05, 0.05, 0.05, 0.1};
    };
};
