////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 09 16:52:22 2023 : 'file' last modified on Tue Oct 18 19:53:08 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 1MR_Headgear
	{
		units[] = {};
		vehicles[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgOptreHudSchemes
{
    class Glasses
    {
        class MainDialogs {
            TKE_TacticalGlasses_O        = "OPTRE_MarrineGlasses_orange";  
            TKE_TacticalGlasses_G        = "OPTRE_MarrineGlasses_green";
            TKE_TacticalGlasses_R        = "OPTRE_MarrineGlasses_red";
            TKE_TacticalGlasses       = "OPTRE_MarrineGlasses_white";
            TKE_TacticalGlasses_B        = "OPTRE_MarrineGlasses_blue";
            TKE_TacticalGlasses_P        = "OPTRE_MarrineGlasses_pink";
            TKE_TacticalGlasses_blk    = "OPTRE_MarrineGlasses_black";
			Rogue_UCNHelmClosedFW        = "OPTRE_MarrineGlasses_blue";
			Rogue_UCNHelmClosedFWV2        = "OPTRE_MarrineGlasses_blue";
        };
    };
};
class CfgGlasses
{
	class Rogue_MarineHelmClosedFW;
	class Rogue_UCNHelmClosedFW: Rogue_MarineHelmClosedFW
	{
		author="Frenchie";
		displayname="[7th Fleet] Visor";
		model="\Rogue_ODST\Rogue_MarineHelmClosedFW.p3d";
		picture = "\1MR_Uniforms\Textures\7thfleetpatch.paa";
		optreHUDStyle = "Glasses";
        optreVarietys[] = {"","",""};
		hiddenSelections[]={"camo2"};
		hiddenSelectionsTextures[]={"\1MR_Uniforms\Textures\Rogue_UCNHex_FacePlate_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Rogue_MarineHelmClosedFWV2;
	class Rogue_UCNHelmClosedFWV2: Rogue_MarineHelmClosedFWV2
	{
		author="Frenchie";
		displayname="[7th Fleet] Visor Clear";
		model="\Rogue_ODST\Rogue_MarineHelmClosedFWV2.p3d";
		picture = "\1MR_Uniforms\Textures\7thfleetpatch.paa";
		optreHUDStyle = "Glasses";
        optreVarietys[] = {"","",""};
		hiddenSelections[]={"camo2"};
		hiddenSelectionsTextures[]={"\1MR_Uniforms\Textures\Rogue_UCNHex_FacePlate_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class G_Diving;
	class TKE_G_Diving: G_Diving
	{
		author = "Frenchie";
		displayname = "[7th Fleet] Scuba Rebreather Kit";
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCNRebreatherKit.p3d";
		picture = "\1MR_Uniforms\Textures\7thfleetpatch.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCNPilotHelm_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mass = 4;
	};
	class TKE_CombatGlasses;
	class TKE_TacticalGlasses_O: TKE_CombatGlasses
	{
		author = "Frenchie";
		displayname = "[7th Fleet] Tactical Glasses (Orange)";
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_CombatGlasses.p3d";
		picture = "\1MR_Uniforms\Textures\7thfleetpatch.paa";
		optreHUDStyle = "Glasses";
        optreVarietys[] = {"","",""};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_TacticalGlasses_O_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mass = 1;
	};
	class TKE_TacticalGlasses_G: TKE_CombatGlasses
	{
		author = "Frenchie";
		displayname = "[7th Fleet] Tactical Glasses (Green)";
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_CombatGlasses.p3d";
		picture = "\1MR_Uniforms\Textures\7thfleetpatch.paa";
		optreHUDStyle = "Glasses";
        optreVarietys[] = {"","",""};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_TacticalGlasses_G_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mass = 1;
	};
	class TKE_TacticalGlasses_R: TKE_CombatGlasses
	{
		author = "Frenchie";
		displayname = "[7th Fleet] Tactical Glasses (Red)";
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_CombatGlasses.p3d";
		picture = "\1MR_Uniforms\Textures\7thfleetpatch.paa";
		optreHUDStyle = "Glasses";
        optreVarietys[] = {"","",""};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_TacticalGlasses_R_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mass = 1;
	};
	class TKE_TacticalGlasses_B: TKE_CombatGlasses
	{
		author = "Frenchie";
		displayname = "[7th Fleet] Tactical Glasses (Blue)";
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_CombatGlasses.p3d";
		picture = "\1MR_Uniforms\Textures\7thfleetpatch.paa";
		optreHUDStyle = "Glasses";
        optreVarietys[] = {"","",""};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_TacticalGlasses_B_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mass = 1;
	};
	class TKE_TacticalGlasses_P: TKE_CombatGlasses
	{
		author = "Frenchie";
		displayname = "[7th Fleet] Tactical Glasses (Pink)";
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_CombatGlasses.p3d";
		picture = "\1MR_Uniforms\Textures\7thfleetpatch.paa";
		optreHUDStyle = "Glasses";
        optreVarietys[] = {"","",""};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_TacticalGlasses_P_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mass = 1;
	};
	class TKE_TacticalGlasses: TKE_CombatGlasses
	{
		author = "Frenchie";
		displayname = "[7th Fleet] Tactical Glasses";
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_CombatGlasses.p3d";
		picture = "\1MR_Uniforms\Textures\7thfleetpatch.paa";
		optreHUDStyle = "Glasses";
        optreVarietys[] = {"","",""};
		hiddenSelections[] = {"camo"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mass = 1;
	};
	class TKE_TacticalGlasses_blk: TKE_CombatGlasses
	{
		author = "Frenchie";
		displayname = "[7th Fleet] Tactical Glasses (Black)";
		model = "\TKE_Kuiper_Engagements\TKE_UCN\TKE_CombatGlasses.p3d";
		picture = "\1MR_Uniforms\Textures\7thfleetpatch.paa";
		optreHUDStyle = "Glasses";
        optreVarietys[] = {"","",""};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_TacticalGlasses_blk_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mass = 1;
	};
	
};
class cfgWeapons
{
	class ItemCore;
	class ItemInfo;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class TKE_PatrolCapCUCN;
	class TKE_PatrolCapLunarB: TKE_PatrolCapCUCN
	{
		author = "Frenchie";
		scope = 2;
		displayName = "[7th Fleet] Lunar Patrol Cap";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_PatrolCapLunarB_co.paa"};
	};
	class TKE_PatrolCapWdlB: TKE_PatrolCapCUCN
	{
		author = "Frenchie";
		scope = 2;
		displayName = "[7th Fleet] Woodland Patrol Cap";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_PatrolCapWdlB_co.paa"};
	};
	class TKE_PatrolCapWntrB: TKE_PatrolCapCUCN
	{
		author = "Frenchie";
		scope = 2;
		displayName = "[7th Fleet] Winter Patrol Cap";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_PatrolCapWntrB_co.paa"};
	};
	class TKE_PatrolCapAridB: TKE_PatrolCapCUCN
	{
		author = "Frenchie";
		scope = 2;
		displayName = "[7th Fleet] Arid Patrol Cap";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_PatrolCapAridB_co.paa"};
	};
    class H_Beret_EAF_01_F;
	class TKE_beretUCN_1MR: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_1MR";
        DLC = "";
		displayName = "[7th Fleet] 1st Marine Raider Beret";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\1MR_beret.paa"};
	};
    class TKE_beretUCN_7FLT: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_7FLT";
        DLC = "";
		displayName = "[7th Fleet] Navy Beret";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\7FLT_beret.paa"};
	};
    class TKE_beretUCN_7MEF: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_7MEF";
        DLC = "";
		displayName = "[7th Fleet] 7th MEF Beret";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\7MEF_beret.paa"};
	};
    class TKE_beretUCN_33CAW: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_33CAW";
        DLC = "";
		displayName = "[7th Fleet] 33rd CAW Beret";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\33CAW_beret.paa"};
	};
    class TKE_beretUCN_21MAW: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_21MAW";
        DLC = "";
		displayName = "[7th Fleet] 21st MAW Beret";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\21MAW_beret.paa"};
	};
    class TKE_beretUCN;
	class TKE_beretUCN_UCIAD9: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_UCIAD9";
		displayName = "[7th Fleet] UCIA-SPG D9 Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\D9_beret.paa"};
	};
	class TKE_beretUCN_UCIAD14: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_UCIAD14";
		displayName = "[7th Fleet] UCIA-SPG D14 Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\D14_beret.paa"};
	};
	class TKE_beretUCN_UCIAD13: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_UCIAD13";
		displayName = "[7th Fleet] UCIA-SPG D13 Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\D13_beret.paa"};
	};
	class TKE_beretUCN_274TS: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_274TS";
        DLC = "";
		displayName = "[7th Fleet] 274th TS Beret";
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\274TS_beret.paa"};
	};
	class TKE_beretUCN_86CAB: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_274TS";
        DLC = "";
		displayName = "[7th Fleet] 86th CAB Beret";
		picture = "\1MR_Uniforms\Textures\86thpatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\86CAB_beret.paa"};
	};
    class TKE_beretUCN_DarkRaider: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_BlackHex";
		displayName = "[7th Fleet] UCIA Raider Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\DarkRaider_beret.paa"};
	};
    class TKE_beretUCN_BlackHex: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_BlackHex";
		displayName = "[7th Fleet] UCIA Black Hex Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\BlackHex_beret.paa"};
	};
    class TKE_beretUCN_GreenHex: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_GreenHex";
		displayName = "[7th Fleet] UCIA Green Hex Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\GreenHex_beret.paa"};
	};
    class TKE_beretUCN_WhiteHex: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_WhiteHex";
		displayName = "[7th Fleet] UCIA White Hex Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\WhiteHex_beret.paa"};
	};
    class TKE_beretUCN_RedHex: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_RedHex";
		displayName = "[7th Fleet] UCIA Red Hex Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\RedHex_beret.paa"};
	};
    class TKE_beretUCN_BlueHex: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_BlueHex";
		displayName = "[7th Fleet] UCIA Blue Hex Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\BlueHex_beret.paa"};
	};
	class TKE_beretUCN_BlackStripe: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_BlackStripe";
		displayName = "[7th Fleet] UCIA Black Stripe Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\BlackStripe_beret.paa"};
	};
    class TKE_beretUCN_GreenStripe: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_GreenStripe";
		displayName = "[7th Fleet] UCIA Green Stripe Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\GreenStripe_beret.paa"};
	};
    class TKE_beretUCN_WhiteStripe: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_WhiteStripe";
		displayName = "[7th Fleet] UCIA White Stripe Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\WhiteStripe_beret.paa"};
	};
    class TKE_beretUCN_RedStripe: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_RedStripe";
		displayName = "[7th Fleet] UCIA Red Stripe Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\RedStripe_beret.paa"};
	};
    class TKE_beretUCN_BlueStripe: H_Beret_EAF_01_F
	{
		author = "Frenchie";
		_generalMacro = "TKE_beretUCN_BlueStripe";
		displayName = "[7th Fleet] UCIA Blue Stripe Beret";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsMaterials[] = {""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\BlueStripe_beret.paa"};
	};
	class H_cap_oli;
	class H_cap_oli_hs;
	class H_cap_1MR: H_cap_oli
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Raiders Cap";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\H_cap_1MR"};
	};
	class H_cap_1MR_hs: H_cap_oli_hs
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Raiders Cap (Headset)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\H_cap_1MR.paa"};
	};
	class H_cap_7MEF: H_cap_oli
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Marine Cap";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\H_cap_7MEF.paa"};
	};
	class H_cap_7MEF_hs: H_cap_oli_hs
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Marine Cap (Headset)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\H_cap_7MEF.paa"};
	};
	class H_cap_7thFLeet: H_cap_oli
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Navy Cap";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\H_cap_7thFleet.paa"};
	};
	class H_cap_7thFleet_hs: H_cap_oli_hs
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] Navy Cap (Headset)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\H_cap_7thFleet.paa"};
	};
};