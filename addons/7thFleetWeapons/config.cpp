class CfgPatches
{
	class 7thFleetWeapons
	{
		author="Frenchie";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F"
		};
		units[]={};
		weapons[]={"7thFleet_SPNKr","7FW_WRS_Weapon_Revolver","7FW_WRS_Weapon_Revolver_Black","WBK_SciFi_Pistol","WBK_SciFi_Pistol_black","7FW_WRS_Weapon_ShotGun","7FW_WRS_Weapon_ShotGun_black"};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class Single;
class WeaponSlotsInfo;
class CfgWeapons
{
	class TKE_UBGL_F;
	class WRS_Weapon_Sniper_Bolt;
	class WRS_Weapon_Revolver;
	class 7FW_WRS_Weapon_Revolver: WRS_Weapon_Revolver
	{
		author="Frenchie";
		displayName="[7th Fleet] M2/HC- Constrictor";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "7FW_WRS_Weapon_Revolver";
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\constrictoricon.paa";
		magazines[]={"WRS_Revolver_Magazine","WRS_Revolver_Magazine_plastic"};
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_Constrictor_Base_CO.paa"};
	};
	class 7FW_WRS_Weapon_Revolver_Black: WRS_Weapon_Revolver
	{
		author="Frenchie";
		displayName="[7th Fleet] M2/HC- Constrictor (Black)";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "7FW_WRS_Weapon_Revolver_Black";
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\constrictoricon.paa";
		magazines[]={"WRS_Revolver_Magazine","WRS_Revolver_Magazine_plastic"};
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_Constrictor_Black_CO.paa"};
	};
	class WBK_SciFi_Pistol;
	class 7FW_WBK_SciFi_Pistol: WBK_SciFi_Pistol
	{
		author="Frenchie";
		displayName="[7th Fleet] M3/AP- Puma";
		scope = 2;
		scopeArsenal = 2;
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\pumaicon.paa";
		magazines[]={"WRS_Puma_Magazine","WRS_Puma_Magazine_plastic"};
		baseWeapon = "7FW_WBK_SciFi_Pistol";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_Puma_Base_CO.paa"};
	};
	class 7FW_WBK_SciFi_Pistol_Black: WBK_SciFi_Pistol
	{
		author="Frenchie";
		displayName="[7th Fleet] M3/AP- Puma (Black)";
		scope = 2;
		scopeArsenal = 2;
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\pumaicon.paa";
		magazines[]={"WRS_Puma_Magazine","WRS_Puma_Magazine_plastic"};
		baseWeapon = "7FW_WBK_SciFi_Pistol_Black";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_Puma_Black_CO.paa"};
	};
	class hgun_ACPC2_F;
	class TKE_hgun_M1911_F: hgun_ACPC2_F
	{
		author="Frenchie";
		displayName="[7th Fleet] M1911A5";
		magazines[]={"TKE_1911_mag","TKE_1911T_mag","TKE_1911_mag_plastic"};
		baseWeapon="TKE_hgun_M1911_F";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\TKE_M1911_co.paa"};
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\M1911icon.paa";

	};
	class TKE_KMCSMGGrey;
	class TKE_KMCSMGUDT: TKE_KMCSMGGrey
	{
		author="Frenchie";
		displayName="[7th Fleet] PDW H-6 (UDT)";
		magazines[]={"TKE_SMGUDT_mag"};
		baseWeapon="TKE_KMCSMGUDT";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_KMCSMGUDT_co.paa"};
		canShootInWater = 1;
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\kmcsmgicon.paa";
	};
	class srifle_DMR_06_hunter_F;
	class TKE_srifle_DMR_06_ceremonial_F: srifle_DMR_06_hunter_F
	{
		author="Frenchie";
		displayName="[7th Fleet] M14A5 (Ceremonial)";
		baseWeapon="TKE_srifle_DMR_06_ceremonial_F";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\TKE_hg_DMR_06_01_CO.paa","\7thFleetWeapons\Textures\TKE_DMR_06_02_CO.paa"};
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\M14icon.paa";
	};
	class TKE_UCNRifle;
	class 7FW_UCNRifle: TKE_UCNRifle
	{
		author="Frenchie";
		displayName = "[7th Fleet] ARB/3-D/2 - Bullfrog";
		initspeed = -1.5;
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_UCNRifle_co.paa"};
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\bullfrogicon.paa";
		modes[] = {"Single","Burst","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBV2_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBV2.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.106;
			dispersion = 0.00035;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBV2_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBV2.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			soundBurst = 0;
			burst = 3;
			reloadTime = 0.106;
			dispersion = 0.00035;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBV2_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBV2.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.106;
			dispersion = 0.00035;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			aiBurstTerminable = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
	};
	class TKE_UCNRifle2;
	class 7FW_UCNRifle2:TKE_UCNRifle2
	{
		author="Frenchie";
		displayName="[7th Fleet] ARB/3-D/1 - Carnivore";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_UCNRifle2_co.paa"};
		modes[] = {"Single","Burst","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\carnivoreicon.paa";
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARB_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARB.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.096;
			dispersion = 0.00035;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARB_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARB.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			soundBurst = 0;
			burst = 3;
			reloadTime = 0.096;
			dispersion = 0.00035;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARB_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARB.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.096;
			dispersion = 0.00035;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			aiBurstTerminable = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
	};
	class TKE_UCNRifle4;
	class 7FW_UCNRifle4:TKE_UCNRifle4
	{
		author="Frenchie";
		displayName="[7th Fleet] ARB/3-D/1 - Carnivore (UBGL)";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_UCNRifle2_co.paa","\TKE_Kuiper_Engagements\TKE_Weapons\data\TKE_UBGL_co.paa"};
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\carnivoreglicon.paa";
		modes[] = {"Single","Burst","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		magazines[] = {"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_magTR","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTY"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARB_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARB.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.096;
			dispersion = 0.00035;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			class TKE_UBGL_F{};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARB_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARB.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			soundBurst = 0;
			burst = 3;
			reloadTime = 0.096;
			dispersion = 0.00035;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARB_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARB.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.096;
			dispersion = 0.00035;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			aiBurstTerminable = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
	};
	class TKE_UCNRifle3;
	class 7FW_UCNRifle3:TKE_UCNRifle3
	{
		author="Frenchie";
		displayName = "[7th Fleet] ARB/3-D/3 - Viper";
		initspeed = -0.7;
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_UCNRifle3_co.paa"};
		modes[] = {"Single","Burst","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\vipericon.paa";
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARB_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARB.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.066;
			dispersion = 0.006;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARB_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARB.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			soundBurst = 0;
			burst = 3;
			reloadTime = 0.066;
			dispersion = 0.006;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARB_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARB.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.066;
			dispersion = 0.006;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			aiBurstTerminable = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
	};
	class TKE_UCNDMR;
	class 7FW_UCNDMR:TKE_UCNDMR
	{
		author="Frenchie";
		displayName = "[7th Fleet] M-ARB/3-D/4 - Falcon";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_UCNDMR_co.paa"};
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\vipericon.paa";
		initspeed = -2.5;
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBV2_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBV2.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.146;
			dispersion = 0.00035;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBV2_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBV2.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_ARBSilenced_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEARBSilenced.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.146;
			dispersion = 0.00035;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			aiBurstTerminable = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
	};
	class TKE_UCNLMG;
	class 7FW_UCNLMG: TKE_UCNLMG
	{
		author = "Frenchie";
		displayName = "[7th Fleet] SAW-ARB/3-D/5 - Ripper";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_UCNLMG_co.paa"};
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\rippericon.paa";
	};
	class TKE_UCNMMG;
	class 7FW_UCNMMG: TKE_UCNMMG
	{
		author = "Frenchie";
		displayName = "[7th Fleet] SCS/AW - Cerberus ";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_UCNMMGBack_co.paa","\7thFleetWeapons\Textures\7FW_UCNMMGFront_co.paa"};
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\cerberusicon.paa";
	};
	class TKE_UCNPistol;
	class 7FW_UCNPistol:TKE_UCNPistol
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Model-30 Combat Pistol";
		magazines[]={"TKE_UCNPistol_mag","TKE_UCNPistolT_mag","TKE_UCNPistol_mag_plastic"};
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_UCNPistol_co.paa"};
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\M30icon.paa";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 25;
			minRangeProbab = 0.3;
			midRange = 50;
			midRangeProbab = 0.5;
			maxRange = 100;
			maxRangeProbab = 0.2;
			aiRateOfFireDistance = 80;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_MDPistol_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEMDPistol.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_TKE_MDPistol_SoundSet"};
				begin1[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\sounds\TKEMDPistol.ogg",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.09;
			dispersion = 0.00035;
			minRange = 25;
			minRangeProbab = 0.3;
			midRange = 50;
			midRangeProbab = 0.5;
			maxRange = 100;
			maxRangeProbab = 0.2;
			aiRateOfFire = 1e-06;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
	};
	class launch_MRAWS_base_F;
	class kef_launch_7FW_black_F: launch_MRAWS_base_F
	{
		author = "the Neptune Corporation";
		baseWeapon = "launch_MRAWS_black_F";
		scope = 0;
		displayName = "MAAWS Mk4 Mod 1 (Black)";
		picture = "\kef_weapon_retextures\data\UI\icon_launch_MRAWS_black_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\launch_MRAWS_7FW_01_F_CO.paa","\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_CO.paa"};
	};
	class 7thFleet_SPNKr: kef_launch_7FW_black_F
	{
		scope = 2;
		ace_overpressure_angle = 20;
		ace_overpressure_range = 5;
		author = "Hophri";
		displayName = "[7th Fleet] MAAWS Mk.5 Mod 2";
		magazines[] = {"7thFleet_OPTRE_M41_Twin_HEAT", "7thFleet_OPTRE_M41_Twin_HEAP", "7thFleet_OPTRE_M41_Twin_HEAT_G", "7thFleet_OPTRE_M41_Twin_HE", "7thFleet_OPTRE_M41_Twin_HEAT_SALH", "7thFleet_OPTRE_M41_Twin_HEAT_SACLOS", "7thFleet_OPTRE_M41_Twin_HE_SALH_ProximityFuse", "7thFleet_OPTRE_M41_Twin_HE_SACLOS_ProximityFuse", "7thFleet_OPTRE_M41_Twin_Smoke_B", "7thFleet_OPTRE_M41_Twin_Smoke_G", "7thFleet_OPTRE_M41_Twin_Smoke_O", "7thFleet_OPTRE_M41_Twin_Smoke_P", "7thFleet_OPTRE_M41_Twin_Smoke_R", "7thFleet_OPTRE_M41_Twin_Smoke_W", "7thFleet_OPTRE_M41_Twin_Smoke_Y"};
		weaponLockDelay = 2;
		weaponLockSystem = "2 + 16";
		cmImmunity	= 0.25;
		canLock = 2;
		recoil = "";
		modes[] = {"Direct", "TopDown"};
		class Direct: Mode_SemiAuto
		{
			displayName = "Direct seek";
			
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType {
				begin1[] = {"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss",2.5,1,1500};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_single_law";
			
			reloadtime = 1;
			
			aiRateOfFire = 7.0;
			aiRateOfFireDistance = 600;
			minRange = 10;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class TopDown: Direct {
			displayName = "Top-down seek";
			textureType = "topDown";
			ace_missileGuidance_attackProfile = "JAV_TOP";
		};
		lockAcquire = 0;
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",
			0.31622776,
			2.5
		};
		class OpticsModes
		{
			class optics
			{
				cameraDir = "look";
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 1;
				opticsFlare = 1;
				opticsID = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomInit = 0.0875;
				opticsZoomMax = 0.0875;
				opticsZoomMin = 0.0875;
				useModelOptics = 1;
				visionMode[] = {"Normal","NVG","Ti"};
			};
		};
	};
	class WRS_Weapon_ShotGun;
	class 7FW_WRS_Weapon_ShotGun: WRS_Weapon_ShotGun
	{
		author="Frenchie";
		displayName="[7th Fleet] M12/SG- Bullshark";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "7FW_WRS_Weapon_ShotGun";
		magazines[] = {"WRS_12rnd_Shotgun_Magazine","WRS_12rnd_Shotgun_Magazine_Slug","WRS_12rnd_Shotgun_Magazine_NonLethal"};
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\bulldogicon.paa";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_Bullshark_Silver_CO.paa"};
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"WBK_SCIFI_SHAWTY_SoundSet","DMR05_tail_SoundSet","GM6Lynx_InteriorTail_SoundSet"};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			dispersion = 0.0051;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 0;
			aiDispersionCoefY = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"WBK_SCIFI_SHAWTY_SoundSet","DMR05_tail_SoundSet","GM6Lynx_InteriorTail_SoundSet"};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			dispersion = 0.0051;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 0;
			aiDispersionCoefY = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 250;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			dispersion = 0.00018;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
		};
		class far_optic2: Single
		{
			showToPlayer = 0;
			dispersion = 0.00018;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 2000;
		};
		class medium_optic2: Single
		{
			showToPlayer = 0;
			dispersion = 0.00018;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1000;
		};
	};
	class 7FW_WRS_Weapon_ShotGun_Black: 7FW_WRS_Weapon_ShotGun
	{
		author="Frenchie";
		displayName="[7th Fleet] M12/SG- Bullshark (Black)";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "7FW_WRS_Weapon_ShotGun_Black";
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\bulldogicon.paa";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_Bullshark_Black_CO.paa"};
	};
};
class CfgMagazines
{
	class WRS_Shotgun_Magazine;
	class WRS_12rnd_Shotgun_Magazine: WRS_Shotgun_Magazine
	{
		displayName = "12rnd Buckshot";
		count = 12;
		mass = 12;
	};
	class WRS_Shotgun_Magazine_Slug;
	class WRS_12rnd_Shotgun_Magazine_Slug: WRS_Shotgun_Magazine_Slug
	{
		count = 12;
		displayName = "12rnd Slug";
		mass = 12;
	};
	class WRS_Shotgun_Magazine_NonLethal;
	class WRS_12rnd_Shotgun_Magazine_NonLethal: WRS_Shotgun_Magazine_NonLethal
	{
		count = 12;
		displayName = "12rnd plastic";
		mass = 10;
	};
	class 20Rnd_556x45_UW_mag;
	class TKE_SMGUDT_mag: 20Rnd_556x45_UW_mag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "PDW H-6 Mag (UDT)";
        displaynameshort="Dual Purpose";
		ammo = "B_556x45_dual";
		count = 45;
		initSpeed = 410;
		tracersEvery = 0;
		descriptionShort = "";
	};
    class TKE_UCNPistol_mag;
	class TKE_1911_mag: TKE_UCNPistol_mag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "M1911A5 Mag";
        displaynameshort="";
		ammo = "TKE_pistol_round";
		count = 12;
		initSpeed = 410;
		tracersEvery = 0;
		descriptionShort = "";
		magazineGroup[] = {"TKE_Pistol_group"};
	};
	class TKE_1911T_mag: TKE_UCNPistol_mag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "M1911A5 Mag (Tracers)";
        displaynameshort="Tracers";
		ammo = "TKE_pistol_round";
		count = 12;
		initSpeed = 410;
		tracersEvery = 1;
		descriptionShort = "";
		magazineGroup[] = {"TKE_Pistol_group"};
	};
	class TKE_1911_mag_plastic: TKE_UCNPistol_mag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "M1911A5 Mag (Plastic)";
        displaynameshort="Plastic";
		ammo = "Shotgin_NonLethalRound";
		count = 12;
		initSpeed = 410;
		tracersEvery = 0;
		descriptionShort = "";
		magazineGroup[] = {"TKE_Pistol_group"};
	};
	class WRS_Revolver_Magazine;
	class WRS_Revolver_Magazine_plastic: WRS_Revolver_Magazine
	{
		tracersEvery = 0;
		displayName = "6rd Plastic cylinder";
		displaynameshort="Plastic";
		ammo = "Shotgin_NonLethalRound";
		mass = 4;
		count = 6;
	};
	class WRS_Puma_Magazine;
	class WRS_Puma_Magazine_plastic: WRS_Puma_Magazine
	{
		tracersEvery = 0;
		displayName = "16rnd Plastic LDUR";
		displaynameshort="Plastic";
		ammo = "Shotgin_NonLethalRound";
		count = 16;
	};
	class TKE_UCNPistolT_mag: TKE_UCNPistol_mag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Model-30 Combat Pistol mag (Tracers)";
		displaynameshort="Tracers";
		ammo = "TKE_pistol_round";
		count = 12;
		initSpeed = 410;
		tracersEvery = 1;
		descriptionShort = "";
		magazineGroup[] = {"TKE_Pistol_group"};
	};
	class TKE_UCNPistol_mag_plastic: TKE_UCNPistol_mag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Model-30 Combat Pistol mag (Plastic)";
		displaynameshort="Plastic";
		ammo = "Shotgin_NonLethalRound";
		count = 12;
		initSpeed = 410;
		tracersEvery = 1;
		descriptionShort = "";
		magazineGroup[] = {"TKE_Pistol_group"};
	};

	class OPTRE_M41_Twin_HEAT;
	class OPTRE_M41_Twin_HEAP;
	class OPTRE_M41_Twin_HEAT_G;
	class OPTRE_M41_Twin_HE;
	class OPTRE_M41_Twin_HEAT_SALH;
	class OPTRE_M41_Twin_HEAT_SACLOS;
	class OPTRE_M41_Twin_HE_SALH_ProximityFuse;
	class OPTRE_M41_Twin_HE_SACLOS_ProximityFuse;
	class OPTRE_M41_Twin_Smoke_B;
	class OPTRE_M41_Twin_Smoke_G;
	class OPTRE_M41_Twin_Smoke_O;
	class OPTRE_M41_Twin_Smoke_P;
	class OPTRE_M41_Twin_Smoke_R;
	class OPTRE_M41_Twin_Smoke_W;
	class OPTRE_M41_Twin_Smoke_Y;

	class 7thFleet_OPTRE_M41_Twin_HEAT: OPTRE_M41_Twin_HEAT
	{
		displayName = "HEAT (Un-Guided)";
		count = 1;		
		mass = 60;
	};
	class 7thFleet_OPTRE_M41_Twin_HEAP: OPTRE_M41_Twin_HEAP
	{
		displayName = "HEAP (Un-Guided)";
		count = 1;		
		mass = 60;
	};
	class 7thFleet_OPTRE_M41_Twin_HEAT_G: OPTRE_M41_Twin_HEAT_G
	{
		displayName = "HEAT (IR)";
		count = 1;		
		mass = 80;
	};
	class 7thFleet_OPTRE_M41_Twin_HE: OPTRE_M41_Twin_HE
	{
		displayName = "HE (Un-Guided)";
		count = 1;		
		mass = 80;
	};
	class 7thFleet_OPTRE_M41_Twin_HEAT_SALH: OPTRE_M41_Twin_HEAT_SALH
	{
		displayName = "HEAT (SALH)";
		count = 1;		
		mass = 80;
	};
	class 7thFleet_OPTRE_M41_Twin_HEAT_SACLOS: OPTRE_M41_Twin_HEAT_SACLOS
	{
		displayName = "HEAT (SACLOS)";
		count = 1;		
		mass = 80;
	};
	class 7thFleet_OPTRE_M41_Twin_HE_SALH_ProximityFuse: OPTRE_M41_Twin_HE_SALH_ProximityFuse
	{
		displayName = "HEAT (SALH Prox Fuse)";
		count = 1;		
		mass = 80;
	};
	class 7thFleet_OPTRE_M41_Twin_HE_SACLOS_ProximityFuse: OPTRE_M41_Twin_HE_SACLOS_ProximityFuse
	{
		displayName = "HEAT (SACLOS Prox Fuse)";
		count = 1;		
		mass = 80;
	};
	class 7thFleet_OPTRE_M41_Twin_Smoke_B: OPTRE_M41_Twin_Smoke_B
	{
		displayName = "Smoke Blue";
		count = 1;		
		mass = 40;
	};
	class 7thFleet_OPTRE_M41_Twin_Smoke_G: OPTRE_M41_Twin_Smoke_G
	{
		displayName = "Smoke Green";
		count = 1;		
		mass = 40;
	};
	class 7thFleet_OPTRE_M41_Twin_Smoke_O: OPTRE_M41_Twin_Smoke_O
	{
		displayName = "Smoke Orange";
		count = 1;		
		mass = 40;
	};
	class 7thFleet_OPTRE_M41_Twin_Smoke_P: OPTRE_M41_Twin_Smoke_P
	{
		displayName = "Smoke Purple";
		count = 1;		
		mass = 40;
	};
	class 7thFleet_OPTRE_M41_Twin_Smoke_R: OPTRE_M41_Twin_Smoke_R
	{
		displayName = "Smoke Red";
		count = 1;		
		mass = 40;
	};
	class 7thFleet_OPTRE_M41_Twin_Smoke_W: OPTRE_M41_Twin_Smoke_W
	{
		displayName = "Smoke White";
		count = 1;		
		mass = 40;
	};
	class 7thFleet_OPTRE_M41_Twin_Smoke_Y: OPTRE_M41_Twin_Smoke_Y
	{
		displayName = "Smoke Yellow";
		count = 1;		
		mass = 40;
	}; 
};