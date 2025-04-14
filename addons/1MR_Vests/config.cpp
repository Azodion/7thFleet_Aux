////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 09 16:52:22 2023 : 'file' last modified on Tue Oct 18 19:53:08 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 1MR_Vests
	{
		units[] = {};
		vehicles[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class cfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class VestItem;
	class Vest_Camo_Base;
	class Item_Base_F;
	class H_Booniehat_khk;
	class U_tank_green_F;
	class U_B_CTRG_Soldier_F;
	class U_B_CTRG_Soldier_3_F;
	class U_B_CTRG_1;
	class ItemCore;
	class ItemInfo;
    class TKE_UCIALArmourNP: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Light Riveted Armour (No Pouches)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmourNP.p3d";
		hiddenSelections[] = {"camo","camo1"};
		descriptionShort = "Armour Level I";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmourNP.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 17;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.4500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 18;
					passThrough = 0.45000002;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class TKE_UCIAHArmour: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Heavy Riveted Armour";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFHArmour.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFHArmour.p3d";
			containerClass = "Supply120";
			mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 17;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 25;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.4500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 18;
					passThrough = 0.45000002;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class TKE_UCIALArmour: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Light Riveted Armour";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmour.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmour.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 17;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.4500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 18;
					passThrough = 0.45000002;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class TKE_UCIAWebbing1: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Webbing V1";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFWebbing1.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		descriptionShort = "Armour Level I";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAWebbing_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFWebbing1.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo2","camo3"};
			hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAWebbing_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 4;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 12;
					passThrough = 0.6000002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 12;
					passThrough = 0.55;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 7;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
	};
	class TKE_UCIAWebbing2: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Webbing V2";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFWebbing1_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAWebbing_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFWebbing1_1.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAWebbing_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 4;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 12;
					passThrough = 0.6000002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 12;
					passThrough = 0.55;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 7;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class TKE_UCIAWebbing3: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Webbing V3";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFWebbing2.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		descriptionShort = "Armour Level I";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAWebbing_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFWebbing2.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo2","camo3"};
			hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAWebbing_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 4;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 12;
					passThrough = 0.6000002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 12;
					passThrough = 0.55;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 7;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
	};
	class TKE_UCIAWebbing4: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Webbing V4";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFWebbing2_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAWebbing_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFWebbing2_2.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAWebbing_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 4;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 12;
					passThrough = 0.6000002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 12;
					passThrough = 0.55;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 7;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
	};
	class TKE_UCIAWebbing5: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Webbing V5";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFWebbing3.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAWebbing_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFWebbing3.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAWebbing_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 4;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 18;
					passThrough = 0.4500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 12;
					passThrough = 0.45000002;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 7;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
	};
    class TKE_UCMCArmour1Scuba: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Scuba Armour";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourscuba_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
		hiddenSelections[] = {"camo","camo1"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
			containerClass = "Supply120";
			mass = 25;
        	vestType = "Rebreather";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourscuba_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class TKE_UCMCArmour1Press: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Press Standard Issue Armour";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourpress_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
		hiddenSelections[] = {"camo","camo1"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourPress_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class TKE_UCMCArmour1UCIA: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Standard Issue Armour";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
		hiddenSelections[] = {"camo","camo1"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		}; 
	};
	class TKE_UCMCArmour121st: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] 21st MAW Standard Issue Armour";
		picture = "\1MR_Uniforms\Textures\21stMAWpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour21stMAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
		hiddenSelections[] = {"camo","camo1"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1"};
    	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour21stMAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class TKE_UCMCArmour133rd: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] 33rd CAW Standard Issue Armour";
		picture = "\1MR_Uniforms\Textures\33rdCAWpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour33rdCAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
		hiddenSelections[] = {"camo","camo1"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1"};
    	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour33rdCAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
    class TKE_7thFltLArmour: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Navy Light Riveted Armour";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmour.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_NavyArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmour.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_NavyArmour_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 17;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.4500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 18;
					passThrough = 0.45000002;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
    class TKE_UCMCArmour17FLT: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Navy Standard Issue Armour";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
		hiddenSelections[] = {"camo","camo1"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1"};
    	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class TKE_UCMCArmour2_1UCIA: Vest_Camo_Base
	{
		author = "Frenchue";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Armour V1";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		descriptionShort = "Armour Level II";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
			containerClass = "Supply120";
			mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 25;
					passThrough = 0.4;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
    class TKE_UCMCArmour2_221st: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] 21st MAW Armour V2";
		picture = "\1MR_Uniforms\Textures\21stMAWpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour21stMAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour21stMAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
     class TKE_UCMCArmour2_233rd: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] 33rd CAW Armour V2";
		picture = "\1MR_Uniforms\Textures\33rdCAWpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour33rdCAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour33rdCAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
    class TKE_UCMCArmour2_27FLT: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Navy Armour V2";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
	class TKE_UCMCArmour2_2UCIA: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Armour V2";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
    class TKE_UCMCArmour3_121st: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] 21st MAW Armour V3";
		picture = "\1MR_Uniforms\Textures\21stMAWpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour21stMAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour21stMAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
     class TKE_UCMCArmour3_133rd: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] 33rd CAW Armour V3";
		picture = "\1MR_Uniforms\Textures\33rdCAWpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour33rdCAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour33rdCAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
    class TKE_UCMCArmour3_17FLT: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Navy Armour V3";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
	class TKE_UCMCArmour3_1UCIA: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Armour V3";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
	class TKE_UCMCArmour3_2UCIA: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Armour V4";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		descriptionShort = "Armour Level II";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 25;
					passThrough = 0.4;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
	class TKE_UCMCArmour4_1UCIA: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Armour V5";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
		descriptionShort = "Armour Level II";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
			containerClass = "Supply120";
			mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 25;
					passThrough = 0.4;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
    class TKE_UCMCArmour4_221st: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] 21st MAW Armour V6";
		picture = "\1MR_Uniforms\Textures\21stMAWpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour21stMAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
			containerClass = "Supply120";
			mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour21stMAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
     class TKE_UCMCArmour4_233rd: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] 33rd CAW Armour V6";
		picture = "\1MR_Uniforms\Textures\33rdCAWpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour33rdCAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
			containerClass = "Supply120";
			mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour33rdCAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
    class TKE_UCMCArmour4_27FLT: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Navy Armour V6";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
			containerClass = "Supply120";
			mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
	class TKE_UCMCArmour4_2UCIA: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Armour V6";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
		descriptionShort = "Armour Level II";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
			containerClass = "Supply120";
			mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
		    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class TKE_UCMCArmour5_1UCIA: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Armour V7";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		descriptionShort = "Armour Level II";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
			containerClass = "Supply120";
			mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 25;
					passThrough = 0.4;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
    class TKE_UCMCArmour5_221st: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] 21st MAW Armour V8";
		picture = "\1MR_Uniforms\Textures\21stMAWpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour21stMAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour21stMAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
     class TKE_UCMCArmour5_233rd: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] 33rd CAW Armour V8";
		picture = "\1MR_Uniforms\Textures\33rdCAWpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour33rdCAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour33rdCAW_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
    class TKE_UCMCArmour5_27FLT: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Navy Armour V8";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level I";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7FLT_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
	class TKE_UCMCArmour5_2UCIA: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Armour V8";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		descriptionShort = "Armour Level II";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
			containerClass = "Supply120";
			mass = 25;
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
	class TKE_UCMCArmour6_1UCIA: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Armour V9";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		descriptionShort = "Armour Level II";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
			containerClass = "Supply120";
			mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
	class TKE_UCMCArmour6_2UCIA: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Armour V10";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		descriptionShort = "Armour Level II";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
			containerClass = "Supply120";
			mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
	class TKE_UCMCArmour6_3UCIA: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Armour V11";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
       	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
		descriptionShort = "Armour Level II";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
			containerClass = "Supply120";
			mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
       	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
	class TKE_UCMCArmour6_4UCIA: Vest_Camo_Base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Armour V12";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		descriptionShort = "Armour Level II";
		class ItemInfo: VestItem
		{
			uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
			containerClass = "Supply120";
			mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
	    	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIA_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.32500002;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 25;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 5;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
    };
	 class TKE_UCIALArmourNPGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Light Riveted Armour (Green,No Pouches)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmourNP.p3d";
        hiddenSelections[] = {"camo","camo1"};
        descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmourNP.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 17;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.4500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.45000002;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCIAHArmourGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Heavy Riveted Armour (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFHArmour.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmourGreen_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFHArmour.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmourGreen_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 17;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.4500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.45000002;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCIALArmourGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Light Riveted Armour (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmour.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmour.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 17;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.4500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.45000002;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };


class TKE_UCMCArmour2_1UCIAGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V1 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour2_2UCIAGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V2 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAgreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_1UCIAGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V3 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAgreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAgreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_2UCIAGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V4 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_1UCIAGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V5 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_2UCIAGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V6 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_1UCIAGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V7 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_2UCIAGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V8 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };


class TKE_UCMCArmour6_1UCIAGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V9 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paaGreen"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_2UCIAGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V10 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_3UCIAGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V11 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
       	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
       	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_4UCIAGreen: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V12 (Green)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAGreen_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAGreen_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
 class TKE_UCIALArmourNPBlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Light Riveted Armour (Blue,No Pouches)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmourNP.p3d";
        hiddenSelections[] = {"camo","camo1"};
        descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourBlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmourNP.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourBlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 17;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.4500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.45000002;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCIAHArmourBlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Heavy Riveted Armour (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFHArmour.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourBlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmourBlue_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFHArmour.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourBlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmourBlue_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 17;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.4500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.45000002;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCIALArmourBlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Light Riveted Armour (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmour.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourBlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmour.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourBlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 17;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.4500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.45000002;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };


class TKE_UCMCArmour2_1UCIABlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V1 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour2_2UCIABlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V2 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_1UCIABlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V3 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_2UCIABlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V4 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
            containerClass = "Supply120";
            mass = 25;
		    hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_1UCIABlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V5 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_2UCIABlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V6 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_1UCIABlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V7 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_2UCIABlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V8 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };


class TKE_UCMCArmour6_1UCIABlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V9 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paaBlue"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_2UCIABlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V10 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_3UCIABlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V11 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
       	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
       	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_4UCIABlue: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V12 (Blue)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIABlue_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIABlue_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
 class TKE_UCIALArmourNPRed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Light Riveted Armour (Red,No Pouches)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmourNP.p3d";
        hiddenSelections[] = {"camo","camo1"};
        descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourRed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmourNP.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourRed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 17;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.4500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.45000002;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCIAHArmourRed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Heavy Riveted Armour (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFHArmour.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourRed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmourRed_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFHArmour.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourRed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmourRed_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 17;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.4500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.45000002;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCIALArmourRed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Light Riveted Armour (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmour.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourRed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmour.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourRed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 17;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.4500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.45000002;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };


class TKE_UCMCArmour2_1UCIARed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V1 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour2_2UCIARed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V2 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_1UCIARed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V3 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_2UCIARed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V4 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa""\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_1UCIARed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V5 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_2UCIARed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V6 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_1UCIARed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V7 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_2UCIARed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V8 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };


class TKE_UCMCArmour6_1UCIARed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V9 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paaRed"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_2UCIARed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V10 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_3UCIARed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V11 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
       	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
       	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_4UCIARed: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V12 (Red)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIARed_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIARed_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };

 class TKE_UCIALArmourNPWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Light Riveted Armour (White,No Pouches)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmourNP.p3d";
        hiddenSelections[] = {"camo","camo1"};
        descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmourNP.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 17;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.4500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.45000002;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCIAHArmourWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Heavy Riveted Armour (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFHArmour.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmourWhite_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFHArmour.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCIAArmourWhite_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 17;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.4500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.45000002;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCIALArmourWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Light Riveted Armour (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmour.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_FCF\TKE_FCFLArmour.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCIAArmourWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 17;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.4500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 18;
                    passThrough = 0.45000002;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };


class TKE_UCMCArmour2_1UCIAWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V1 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour2_2UCIAWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V2 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_1UCIAWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V3 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_2UCIAWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V4 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_1UCIAWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V5 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
	    hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_2UCIAWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V6 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_1UCIAWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V7 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_2UCIAWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V8 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };


class TKE_UCMCArmour6_1UCIAWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V9 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIA_co.paaWhite"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_2UCIAWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V10 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_3UCIAWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V11 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
       	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
            containerClass = "Supply120";
            mass = 25;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
       	hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_4UCIAWhite: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Armour V12 (White)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourUCIAWhite_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonUCIAWhite_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour1Victus: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] 274th TS Standard Issue Armour";
        picture = "\1MR_Uniforms\Textures\274thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
        hiddenSelections[] = {"camo","camo1"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
 class TKE_UCMCArmour2_2Victus: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] 274th TS Armour V2";
        picture = "\1MR_Uniforms\Textures\274thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
 class TKE_UCMCArmour3_1Victus: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] 274th TS Armour V3";
        picture = "\1MR_Uniforms\Textures\274thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
 class TKE_UCMCArmour4_2Victus: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] 274th TS Armour V6";
        picture = "\1MR_Uniforms\Textures\274thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
 class TKE_UCMCArmour5_2Victus: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] 274th TS Armour V8";
        picture = "\1MR_Uniforms\Textures\274thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmourVictus_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCMCArmour2_11MR: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V1";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour2_21MR: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V2";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_11MR: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V3";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_21MR: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V4";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_11MR: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V5";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_21MR: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V6";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_11MR: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V7";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
            containerClass = "Supply120";
            mass = 25;
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_21MR: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V8";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_11MR: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V9";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_21MR: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V10";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_31MR: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V11";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_41MR: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V12";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MR_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCMCArmour2_17th: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V1";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour2_27th: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V2";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_17th: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V3";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_27th: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V4";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_17th: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V5";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_27th: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V6";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_17th: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V7";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
            containerClass = "Supply120";
            mass = 25;
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_27th: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V8";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_17th: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V9";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_27th: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V10";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_37th: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V11";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_47th: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V12";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEF_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_ArmourAddon_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCMCArmour2_11MRArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V1 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour2_21MRArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V2 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_11MRArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V3 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_21MRArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V4 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_11MRArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V5 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_21MRArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V6 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_11MRArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V7 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
            containerClass = "Supply120";
            mass = 25;
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_21MRArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V8 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_11MRArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V9 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_21MRArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V10 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_31MRArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V11 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_41MRArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V12 (Arid)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCMCArmour2_17thArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V1 (Arid)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour2_27thArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V2 (Arid)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_17thArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V3 (Arid)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_27thArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V4 (Arid)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_17thArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V5 (Arid)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_27thArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V6 (Arid)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_17thArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V7 (Arid)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
            containerClass = "Supply120";
            mass = 25;
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_27thArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V8 (Arid)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_17thArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V9 (Arid)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_27thArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V10 (Arid)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_37thArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V11 (Arid)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_47thArid: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V12 (Arid)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFArid_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonArid_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCMCArmour2_11MRWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V1 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour2_21MRWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V2 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_11MRWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V3 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_21MRWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V4 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_11MRWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V5 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_21MRWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V6 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_11MRWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V7 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
            containerClass = "Supply120";
            mass = 25;
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_21MRWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V8 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_11MRWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V9 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_21MRWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V10 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_31MRWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V11 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_41MRWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V12 (Woodland)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCMCArmour2_17thWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V1 (Woodland)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour2_27thWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V2 (Woodland)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_17thWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V3 (Woodland)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_27thWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V4 (Woodland)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_17thWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V5 (Woodland)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_27thWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V6 (Woodland)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_17thWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V7 (Woodland)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
            containerClass = "Supply120";
            mass = 25;
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_27thWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V8 (Woodland)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_17thWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V9 (Woodland)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_27thWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V10 (Woodland)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_37thWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V11 (Woodland)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_47thWdl: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V12 (Woodland)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWdl_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWdl_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCMCArmour2_11MRWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V1 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour2_21MRWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V2 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_11MRWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V3 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_21MRWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V4 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_11MRWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V5 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_21MRWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V6 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_11MRWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V7 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
            containerClass = "Supply120";
            mass = 25;
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_21MRWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V8 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_11MRWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V9 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_21MRWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V10 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_31MRWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V11 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_41MRWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Raider Armour V12 (Winter)";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour1MRWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
    class TKE_UCMCArmour2_17thWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V1 (Winter)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour2_27thWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V2 (Winter)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour2_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_17thWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V3 (Winter)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level I";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_1.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa",""};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour3_27thWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V4 (Winter)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour3_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_17thWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V5 (Winter)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[]= {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};        
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour4_27thWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V6 (Winter)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour4_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo7","camo8"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_17thWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V7 (Winter)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_1.p3d";
            containerClass = "Supply120";
            mass = 25;
             hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour5_27thWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V8 (Winter)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour5_2.p3d";
            containerClass = "Supply120";
            mass = 25;
            hiddenSelections[] = {"camo","camo1","camo2","camo3"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_17thWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V9 (Winter)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_1.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_27thWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V10 (Winter)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_2.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_37thWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V11 (Winter)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_3.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo7","camo8"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNExtras_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_BinoUCN_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
class TKE_UCMCArmour6_47thWntr: Vest_Camo_Base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Armour V12 (Winter)";
        picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa"};
        model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        descriptionShort = "Armour Level II";
        class ItemInfo: VestItem
        {
            uniformModel = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCArmour6_4.p3d";
            containerClass = "Supply120";
            mass = 25;
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_UCMCArmour7thMEFWntr_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","\1MR_Uniforms\Textures\TKE_ArmourAddonWntr_co.paa"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 20;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 15;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 28;
                    passThrough = 0.32500002;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 25;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 5;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 10;
                    passThrough = 0.3;
                };
            };
        };
    };
};