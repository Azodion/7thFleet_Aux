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
class CfgAmmo
{
	class Components;
	class Gatling_30mm_HE_Plane_CAS_01_F;
	class 7EF_Gatling_30mm_HE_F: Gatling_30mm_HE_Plane_CAS_01_F
	{
		allowAgainstInfantry = 1;
		ace_frag_skip = 1;
		hit = 80;
		indirectHit = 20;
		indirectHitRange = 4;
		tracerEndTime = 30;
	};
	class B_127x99_Ball_Tracer_Red;
	class 7EF_B_127x99_HE_Tracer_Red: B_127x99_Ball_Tracer_Red
	{
		ACE_damageType = "explosive";
		ace_frag_skip = 1;
		allowAgainstInfantry = 1;
		airLock = 1;
		caliber = 1.3;
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
	};
	class B_30x113mm_M789_HEDP;
	class 7EF_30mm_M230_HEDPT: B_30x113mm_M789_HEDP
	{
		ace_frag_skip = 1;
		hit = 80;
		indirectHit = 20;
		indirectHitRange = 4;
		tracerEndTime = 30;
	};
};
class CfgMagazines
{
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
	class PylonWeapon_M230;
	class PylonWeapon_M230_R;
	class 7EF_M230_Magazine_L: PylonWeapon_M230
	{
		count = 1200;
		descriptionShort = "1200Rnd HEDPT";
		displayName = "1200Rnd HEDPT";
		displayNameMFDFormat = "30mm HEDPT";
		displayNameShort = "30mm HEDPT";
		hardpoints[] = {"7EF_Hardpoints_L"};
		tracersEvery = 1;
		ammo = "7EF_30mm_M230_HEDPT";
		pylonWeapon = "7EF_M230_Weapon";
	};
	class 7EF_M230_Magazine_R: PylonWeapon_M230_R
	{
		count = 1200;
		descriptionShort = "1200Rnd HEDPT";
		displayName = "1200Rnd HEDPT";
		displayNameMFDFormat = "30mm HEDPT";
		displayNameShort = "30mm HEDPT";
		hardpoints[] = {"7EF_Hardpoints_R"};
		tracersEvery = 1;
		ammo = "7EF_30mm_M230_HEDPT";
		pylonWeapon = "7EF_M230_Weapon";
	};
};
class CfgWeapons
{
	class Gatling_30mm_Plane_CAS_01_F;
	class 7EF_Gatling_30mm_Plane_CAS_01_F: Gatling_30mm_Plane_CAS_01_F
	{
		displayname = "30mm GAU-8";
		magazines[]=
		{
			"1800Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
		magazineReloadTime=8;
		dispersion = 0.002;
		ballisticsComputer = 4 + 8;
		canLock = 2;
	};
	class MGunCore;
	class M134_minigun;
	class 7EF_M134_minigun: M134_minigun
	{
		displayname = "2x GAU-19 12.7mm";
		displayNameShort = "2x GAU-19";
		descriptionShort="2x GAU-19 12.7mm";
		magazines[]=
		{
			"2500Rnd_127x99_mag_Tracer_Red"
		};
		magazineReloadTime=3;
		dispersion = 0.002;
		ballisticsComputer = 4 + 8;
		canLock = 2;
	};
	class M230_uh60;
	class 7EF_M230_Weapon: M230_uh60
	{
		cursor = "EmptyCursor";
		cursorAim = "mg"
		displayname = "30mm M230 HEDPT";
		displayNameShort = "30mm HEDPT";
		descriptionShort="30mm M230 HEDPT";
		magazines[]=
		{
			"7EF_M230_Magazine_L",
			"7EF_M230_Magazine_R"
		};
		magazineReloadTime=6;
		dispersion = 0.002;
		ballisticsComputer = 4 + 8;
		canLock = 2;
		reloadTime=2.0;
		autoFire = 1;
	};
};