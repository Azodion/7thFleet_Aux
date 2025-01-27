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
		weapons[]={"7FW_WRS_Weapon_Sniper_Bolt","7FW_WRS_Weapon_Revolver","7FW_WRS_Weapon_Revolver_Black","7FW_WRS_Weapon_ShockGun","7FW_WRS_Weapon_ShockGun_Black","7FW_WRS_Weapon_ShotGun","7FW_WRS_Weapon_ShotGun_black","7FW_WRS_Weapon_LMG","WBK_SciFi_Pistol","WBK_SciFi_Pistol_black"};
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
	class WRS_Weapon_Sniper_Bolt;
	class 7FW_WRS_Weapon_Sniper_Bolt: WRS_Weapon_Sniper_Bolt
	{
		author="Frenchie";
		displayName="[7th Fleet] M2014/SR- Boomslang";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "7FW_WRS_Weapon_Sniper_Bolt";
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\boomslangicon.paa";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_Boomslang_Grey_CO.paa"};
	};
	class WRS_Weapon_Revolver;
	class 7FW_WRS_Weapon_Revolver: WRS_Weapon_Revolver
	{
		author="Frenchie";
		displayName="[7th Fleet] M2/HC- Constrictor";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "7FW_WRS_Weapon_Revolver";
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\constrictoricon.paa";
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
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_Constrictor_Black_CO.paa"};
	};
	class WRS_Weapon_ShockGun;
	class 7FW_WRS_Weapon_ShockGun: WRS_Weapon_ShockGun
	{
		author="Frenchie";
		displayName="[7th Fleet] XSG/10- Rhino";
		baseWeapon = "7FW_WRS_Weapon_ShockGun";
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\rhinoicon.paa";
	};
	class WRS_Weapon_ShockGun_black;
	class 7FW_WRS_Weapon_ShockGun_Black: WRS_Weapon_ShockGun_black
	{
		author="Frenchie";
		displayName="[7th Fleet] XSG/10- Rhino (Black)";
		baseWeapon = "7FW_WRS_Weapon_ShockGun_Black";
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\rhinoicon.paa";
	};
	class WRS_Weapon_ShotGun;
	class 7FW_WRS_Weapon_ShotGun: WRS_Weapon_ShotGun
	{
		author="Frenchie";
		displayName="[7th Fleet] M12/SG- Bullshark";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "7FW_WRS_Weapon_ShotGun";
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\bulldogicon.paa";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_Bullshark_Silver_CO.paa"};
	};
	class 7FW_WRS_Weapon_ShotGun_Black: WRS_Weapon_ShotGun
	{
		author="Frenchie";
		displayName="[7th Fleet] M12/SG- Bullshark (Black)";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "7FW_WRS_Weapon_ShotGun_Black";
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\bulldogicon.paa";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_Bullshark_Black_CO.paa"};
	};
	class WRS_Weapon_LMG;
	class 7FW_WRS_Weapon_LMG: WRS_Weapon_LMG
	{
		author="Frenchie";
		displayName="[7th Fleet] M7/HAW- Wildebeest";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "7FW_WRS_Weapon_LMG";
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\wildebeasticon.paa";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_Wildebeest_co.paa"};
	};
	class WBK_SciFi_Pistol;
	class 7FW_WBK_SciFi_Pistol: WBK_SciFi_Pistol
	{
		author="Frenchie";
		displayName="[7th Fleet] M3/AP- Puma";
		scope = 2;
		scopeArsenal = 2;
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\pumaicon.paa";
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
		baseWeapon = "7FW_WBK_SciFi_Pistol_Black";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_Puma_Black_CO.paa"};
	};
	class TKE_UCNLasRifle;
	class 7FW_UCNLasRifle: TKE_UCNLasRifle
	{
		author="Frenchie";
		displayName="[7th Fleet] XLR/01- Lance";
		scope = 2;
		scopeArsenal = 2;
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\xlricon.paa";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_UCNLasRifle1_co.paa","\7thFleetWeapons\Textures\7FW_UCNLasRifle2_co.paa"};
	};
	class hgun_ACPC2_F;
	class TKE_hgun_M1911_F: hgun_ACPC2_F
	{
		author="Frenchie";
		displayName="[7th Fleet] M1911A5";
		magazines[]={"TKE_1911_mag"};
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
	class TKE_UCNBPRifle;
	class 7FW_UCNBPRifle: TKE_UCNBPRifle
	{
		author = "Frenchie";
		displayName = "[7th Fleet] BPR/0-D/1";
		hiddenSelectionsTextures[] = {"\TKE_Kuiper_Engagements\TKE_Weapons\data\TKE_UCNBPRifle_co.paa"};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
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
			reloadTime = 0.09;
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
			reloadTime = 0.09;
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
	class TKE_UCNBPRifleV2;
	class 7FW_UCNBPRifleV2: TKE_UCNBPRifleV2
	{
		author = "Frenchie";
		displayName = "[7th Fleet] BPR/0-D/1 (UBGL)";
		hiddenSelectionsTextures[] = {"\7thFleetWeapons\Textures\7FW_UCNBPRifle_co.paa","\TKE_Kuiper_Engagements\TKE_Weapons\data\TKE_UBGL_co.paa"};
		pictureWire = "\7thFleetWeapons\WireWeaponIcons\bprglicon.paa";
		modes[] = {"Single","Burst","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
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
			reloadTime = 0.09;
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
			reloadTime = 0.09;
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
};
class CfgMagazines
{
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
};