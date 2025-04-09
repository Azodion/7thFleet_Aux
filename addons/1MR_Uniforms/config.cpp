////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 09 16:52:22 2023 : 'file' last modified on Tue Oct 18 19:53:08 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 1MR_Uniforms
	{
		units[] = {};
		vehicles[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	class 1MR
	{
		displayName = "86th CAB (Slots)";
		author = "Frenchie";
		icon = "";
		priority = 2;
		side = 1;
	};
	class UCIA
	{
		displayName = "United Coalition Intelligence Agency";
		author ="Frenchie";
		icon = "";
		priority = 2;
		side = 1;
	};
	class 7thFleet
	{
		displayName = "7th Fleet";
		author = "Frenchie";
		icon = "";
		priority = 2;
		side = 1;
	};
};
class CfgUnitInsignia
{
	class insignia_1MR_UCN_1
	{
		displayName = "[7th Fleet] 1st Marine Raider Patch-Full";
		author = "Frenchie";
		texture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";	
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};
	class insignia_1MR_UCN_2
	{
		displayName = "[7th Fleet] 1st Marine Raider Patch-Red";
		author = "Frenchie";
		texture = "\1MR_Uniforms\Textures\1MRred.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};
	class insignia_1MR_UCN_3
	{
		displayName = "[7th Fleet] 1st Marine Raider Patch-Grey";
		author = "Frenchie";
		texture = "\1MR_Uniforms\Textures\1MRgrey.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};
	class insignia_UCIA
	{
		displayName = "[7th Fleet] UCIA Patch";
		author = "Frenchie";
		texture = "\1MR_Uniforms\Textures\uciapatch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};
	class insignia_21stMAW
	{
		displayName = "[7th Fleet] 21st MAW Patch";
		author = "Frenchie";
		texture = "\1MR_Uniforms\Textures\21stMAWpatch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};
	class insignia_33rdCAW
	{
		displayName = "[7th Fleet] 33rd CAW Patch";
		author = "Frenchie";
		texture = "\1MR_Uniforms\Textures\33rdCAWpatch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};
	class insignia_7thFleet
	{
		displayName = "[7th Fleet] 7th Fleet Patch";
		author = "Frenchie";
		texture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};
	class insignia_7thMEF
	{
		displayName = "[7th Fleet] 7th MEF Patch";
		author = "Frenchie";
		texture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};
	class insignia_SPGD9
	{
		displayName = "[7th Fleet] SPG-D9 Patch";
		author = "Frenchie";
		texture = "\1MR_Uniforms\Textures\SPGD9patch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};
	class insignia_SPGD14
	{
		displayName = "[7th Fleet] SPG-D14 Patch";
		author = "Frenchie";
		texture = "\1MR_Uniforms\Textures\SPGD14patch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};
	class insignia_124ESB
	{
		displayName = "[7th Fleet] 124th Expeditionary Service Battalion Patch";
		author = "Frenchie";
		texture = "\1MR_Uniforms\Textures\124thpatch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};
	class insignia_274TS
	{
		displayName = "[7th Fleet] 274th Tactical Squadron Patch";
		author = "Frenchie";
		texture = "\1MR_Uniforms\Textures\124thpatch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};
	class insignia_86CAB
	{
		displayName = "[7th Fleet] 86th Combined Arms Brigade Patch";
		author = "Frenchie";
		texture = "\1MR_Uniforms\Textures\86CABpatch.paa";
		material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
		textureVehicle = "";
	};

};

class CfgVehicles
{
	class Man;
	class TKE_EVAPack;
	class TKE_EVAPack7th: TKE_EVAPack
	{
		author = "Frenchie";
		displayName = "[7th Fleet] EVA Pack";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_EVAPack7th_co.paa"};
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";	
	};
	class TKE_EVAPack7thLR: TKE_EVAPack
	{
		author = "Frenchie";
		displayName = "[7th Fleet] EVA Pack (LR)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_EVAPack7thLR_co.paa"};
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";	
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class TKE_RadioPackUCN;
	class TKE_RadioPack1MR: TKE_RadioPackUCN
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Radio Pack";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\TKE_Kuiper_Engagements\TKE_MD\data\TKE_RadioPack_co.paa"};
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";	
		maximumLoad = 300;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class TKE_JammerPackUCN;
	class TKE_JammerPack1MR: TKE_JammerPackUCN
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Jammer Pack";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\TKE_Kuiper_Engagements\TKE_MD\data\TKE_JammerPack_co.paa"};
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";	
		maximumLoad = 300;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class TKE_LightPackUCN;
	class TKE_LightPack1MR: TKE_LightPackUCN
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Raider Light Pack";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";	
		maximumLoad = 300;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_LightPack1MR_co.paa"};
	
	};
	class TKE_LightPack7MEF: TKE_LightPackUCN
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Marine Light Pack";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		maximumLoad = 300;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_LightPack7MEF_co.paa"};
	
	};
	class TKE_LightPack124: TKE_LightPackUCN
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Army Light Pack";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";	
		maximumLoad = 300;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_LightPack124_co.paa"};
	};
	class TKE_CamelBakUCN;
	class TKE_CamelBak1MR: TKE_CamelBakUCN
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Raider Camel Bak";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		maximumLoad = 350;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_CamelBak1MR_co.paa"};
	};
	class TKE_CamelBak7MEF: TKE_CamelBakUCN
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Marine Camel Bak";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		maximumLoad = 350;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_CamelBak7MEF_co.paa"};
	};
	class TKE_CamelBak124: TKE_CamelBakUCN
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Army Camel Bak";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";	
		maximumLoad = 350;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_CamelBak124_co.paa"};
	};
	class TKE_CamelBakV2UCN;
	class TKE_CamelBakV21MR: TKE_CamelBakV2UCN
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Raider Field Camel Bak ";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		maximumLoad = 350;
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_CamelBak1MR_co.paa","\TKE_Kuiper_Engagements\TKE_MD\data\TKE_BedRoll_co","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa"};
	};
	class TKE_CamelBakV27MEF: TKE_CamelBakV2UCN
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Marine Field Camel Bak ";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		maximumLoad = 350;
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_CamelBak7MEF_co.paa","\TKE_Kuiper_Engagements\TKE_MD\data\TKE_BedRoll_co","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa"};
	};
	class TKE_CamelBakV2124: TKE_CamelBakV2UCN
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Army Field Camel Bak ";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";	
		maximumLoad = 350;
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_CamelBak124_co.paa","\TKE_Kuiper_Engagements\TKE_MD\data\TKE_BedRoll_co","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa"};
	};
	class TKE_BackPack1;
	class TKE_BackPack11MR: TKE_BackPack1
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Raider Combat Pack";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		maximumLoad = 400;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_BackPack11MR_co.paa"};
	};
	class TKE_BackPack17MEF: TKE_BackPack1
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Marine Combat Pack";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		maximumLoad = 400;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_BackPack17MEF_co.paa"};
	};
	class TKE_BackPack1124: TKE_BackPack1
	{
		author = "Frenchie";
		displayName = "[7th Fleet] Army Combat Pack";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";	
		maximumLoad = 400;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_BackPack1124_co.paa"};
	};
	class TKE_BackPack2;
	class TKE_BackPack21MR: TKE_BackPack2
	{
		author = "Rogue771";
		displayName = "[7th Fleet] Raider Combat Pack (Bedroll)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		maximumLoad = 400;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_BackPack11MR_co.paa"};
	};
	class TKE_BackPack27MEF: TKE_BackPack2
	{
		author = "Rogue771";
		displayName = "[7th Fleet] Marine Combat Pack (Bedroll)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		maximumLoad = 400;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_BackPack17MEF_co.paa"};
	};
	class TKE_BackPack2124: TKE_BackPack2
	{
		author = "Rogue771";
		displayName = "[7th Fleet] Army Combat Pack (Bedroll)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";	
		maximumLoad = 400;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_BackPack1124_co.paa"};
	};
	class TKE_AlicePackUCN;
	class TKE_AlicePack1MR: TKE_AlicePackUCN
	{
		author = "Rogue771";
		displayName = "[7th Fleet] Raider Alicepack";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		maximumLoad = 550;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_AlicePack1MR_co.paa"};
	};
	class TKE_AlicePack7MEF: TKE_AlicePackUCN
	{
		author = "Rogue771";
		displayName = "[7th Fleet] Marine Alicepack";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		maximumLoad = 550;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_AlicePack7MEF_co.paa"};
	};
	class TKE_AlicePack124: TKE_AlicePackUCN
	{
		author = "Rogue771";
		displayName = "[7th Fleet] Army Alicepack";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";	
		maximumLoad = 550;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_AlicePack124_co.paa"};
	};
	class TKE_AlicePackUCNM;
	class TKE_AlicePack1MRM: TKE_AlicePackUCNM
	{
		author = "Rogue771";
		displayName = "[7th Fleet] Raider Alicepack (Medic)";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\UCN1stRaidersUI.paa";
		maximumLoad = 550;
		mass = 40;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_AlicePack1MRM_co.paa"};
	};
	class TKE_AlicePack7MEFM: TKE_AlicePackUCNM
	{
		author = "Rogue771";
		displayName = "[7th Fleet] Marine Alicepack (Medic)";
		picture = "\1MR_Uniforms\Textures\7thMEFpatch.paa";
		maximumLoad = 550;
		mass = 40;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_AlicePack7MEFM_co.paa"};
	};
	class TKE_AlicePack124M: TKE_AlicePackUCNM
	{
		author = "Rogue771";
		displayName = "[7th Fleet] Army Alicepack (Medic)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";	
		maximumLoad = 550;
		mass = 40;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_AlicePack124M_co.paa"};
	};
	class B_G_Soldier_LAT_F;
	class B_1MR_Sweater_camo_black_F: B_G_Soldier_LAT_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_1MR_Sweater_camo_black";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\1MR_sweater_camo_black.paa"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
	};
	class B_1MR_Sweater_camo_grey_F: B_G_Soldier_LAT_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_1MR_Sweater_camo_grey";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\1MR_sweater_camo_grey.paa"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
	};
	class B_1MR_Sweater_camo_blue_F: B_G_Soldier_LAT_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_1MR_Sweater_camo_blue";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\1MR_sweater_camo_blue.paa"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
	};
	class B_1MR_Sweater_camo_rust_F: B_G_Soldier_LAT_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_1MR_Sweater_camo_rust";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\1MR_sweater_camo_rust.paa"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
	};
	class B_1MR_Sweater_camo_green_F: B_G_Soldier_LAT_F
	{
		author = "Frenchie";
		scope = 1;
		uniformClass = "U_1MR_Sweater_camo_green";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\1MR_sweater_camo_green.paa"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
	};
	class TKE_Rogue_Uniform_base;
	class TKE_Rogue_UniformNC_inf_B;
	class TKE_Rogue_UniformRolled_base;
	class TKE_Rogue_UniformUCIA_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIA_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledUCIA_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIA_U_B";
	};
	class TKE_Rogue_UniformUCIANC_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIA_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIA_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (NC)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIANC_U_B";
	};
	class TKE_Rogue_UniformUCIARolled_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIA_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledUCIA_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (Rolled)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIARolled_U_B";
	};
	class TKE_Rogue_UniformUCIAredhex_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAredhex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIAredhex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (Red Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIAredhex_U_B";
	};
	class TKE_Rogue_UniformUCIANCredhex_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAredhex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIAredhex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (NC, Red Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIANCredhex_U_B";
	};
	class TKE_Rogue_UniformUCIARolledredhex_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAredhex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledUCIAredhex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Red Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIARolledredhex_U_B";
	};
	class TKE_Rogue_UniformUCIAWhitehex_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAWhitehex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIAWhitehex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (White Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIAWhitehex_U_B";
	};
	class TKE_Rogue_UniformUCIANCWhitehex_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAWhitehex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIAWhitehex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (NC, White Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIANCWhitehex_U_B";
	};
	class TKE_Rogue_UniformUCIARolledWhitehex_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAWhitehex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledUCIAWhitehex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, White Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIARolledwhitehex_U_B";
	};
	class TKE_Rogue_UniformUCIABlackhex_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIABlackhex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIABlackhex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (Black Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIABlackhex_U_B";
	};
	class TKE_Rogue_UniformUCIANCBlackhex_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIABlackhex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIABlackhex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (NC, Black Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIANCBlackhex_U_B";
	};
	class TKE_Rogue_UniformUCIARolledBlackhex_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIABlackhex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledUCIABlackhex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Black Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIARolledblackhex_U_B";
	};
	class TKE_Rogue_UniformUCIAGreenhex_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAGreenhex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIAGreenhex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (Green Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIAGreenhex_U_B";
	};
	class TKE_Rogue_UniformUCIANCGreenhex_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAGreenhex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIAGreenhex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (NC, Green Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIANCGreenhex_U_B";
	};
	class TKE_Rogue_UniformUCIARolledgreenhex_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAGreenhex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledUCIAGreenhex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Green Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIARolledgreenhex_U_B";
	};
	class TKE_Rogue_UniformUCIABluehex_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIABluehex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIABluehex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (Blue Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIABluehex_U_B";
	};
	class TKE_Rogue_UniformUCIANCBluehex_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIABluehex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIABluehex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (NC, Blue Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIANCBluehex_U_B";
	};
	class TKE_Rogue_UniformUCIARolledBluehex_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIABluehex_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledUCIABluehex_co.paa"};
		side = 1;
		displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Blue Hex)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformUCIARolledbluehex_U_B";
	};
	class TKE_Rogue_UniformUCIAredStripe_inf_B: TKE_Rogue_Uniform_base
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAredStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIAredStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (Red Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIAredStripe_U_B";
    };
    class TKE_Rogue_UniformUCIANCredStripe_inf_B: TKE_Rogue_UniformNC_inf_B
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAredStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIAredStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (NC, Red Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIANCredStripe_U_B";
    };
    class TKE_Rogue_UniformUCIARolledredStripe_inf_B: TKE_Rogue_UniformRolled_base
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAredStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledUCIAredStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Red Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIARolledredStripe_U_B";
    };
    class TKE_Rogue_UniformUCIAWhiteStripe_inf_B: TKE_Rogue_Uniform_base
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAWhiteStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIAWhiteStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (White Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIAWhiteStripe_U_B";
    };
    class TKE_Rogue_UniformUCIANCWhiteStripe_inf_B: TKE_Rogue_UniformNC_inf_B
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAWhiteStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIAWhiteStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (NC, White Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIANCWhiteStripe_U_B";
    };
    class TKE_Rogue_UniformUCIARolledWhiteStripe_inf_B: TKE_Rogue_UniformRolled_base
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAWhiteStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledUCIAWhiteStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, White Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIARolledwhiteStripe_U_B";
    };
    class TKE_Rogue_UniformUCIABlackStripe_inf_B: TKE_Rogue_Uniform_base
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIABlackStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIABlackStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (Black Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIABlackStripe_U_B";
    };
    class TKE_Rogue_UniformUCIANCBlackStripe_inf_B: TKE_Rogue_UniformNC_inf_B
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIABlackStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIABlackStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (NC, Black Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIANCBlackStripe_U_B";
    };
    class TKE_Rogue_UniformUCIARolledBlackStripe_inf_B: TKE_Rogue_UniformRolled_base
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIABlackStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledUCIABlackStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Black Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIARolledblackStripe_U_B";
    };
    class TKE_Rogue_UniformUCIAGreenStripe_inf_B: TKE_Rogue_Uniform_base
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAGreenStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIAGreenStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (Green Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIAGreenStripe_U_B";
    };
    class TKE_Rogue_UniformUCIANCGreenStripe_inf_B: TKE_Rogue_UniformNC_inf_B
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAGreenStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIAGreenStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (NC, Green Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIANCGreenStripe_U_B";
    };
    class TKE_Rogue_UniformUCIARolledgreenStripe_inf_B: TKE_Rogue_UniformRolled_base
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIAGreenStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledUCIAGreenStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Green Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIARolledgreenStripe_U_B";
    };
    class TKE_Rogue_UniformUCIABlueStripe_inf_B: TKE_Rogue_Uniform_base
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIABlueStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIABlueStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (Blue Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIABlueStripe_U_B";
    };
    class TKE_Rogue_UniformUCIANCBlueStripe_inf_B: TKE_Rogue_UniformNC_inf_B
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIABlueStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topUCIABlueStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (NC, Blue Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIANCBlueStripe_U_B";
    };
    class TKE_Rogue_UniformUCIARolledBlueStripe_inf_B: TKE_Rogue_UniformRolled_base
    {
        scope = 1;
        scopecurator = 1;
        scopearsenal = 1;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsUCIABlueStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledUCIABlueStripe_co.paa"};
        side = 1;
        displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Blue Stripe)";
        backpack = "";
        uniformClass = "TKE_Rogue_UniformUCIARolledblueStripe_U_B";
    };
	class TKE_Rogue_UniformNavy_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsNavy_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topNavy_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Navy Combat Uniform";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformNavy_U_B";
	};
	class TKE_Rogue_UniformNavyNC_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsNavy_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topNavy_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Navy Combat Uniform (NC)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformNavyNC_U_B";
	};
	class TKE_Rogue_UniformNavyRolled_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsNavy_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolledNavy_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Navy Combat Uniform (Rolled)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformNavyRolled_U_B";
	};
	class TKE_Rogue_Uniform1MR_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants1MR_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top1MR_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Marine Combat Uniform";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform1MR_U_B";
	};
	class TKE_Rogue_Uniform1MRNC_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants1MR_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top1MR_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Marine Combat Uniform (NC)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform1MRNC_U_B";
	};
	class TKE_Rogue_Uniform1MRRolled_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants1MR_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolled1MR_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Marine Combat Uniform (Rolled)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform1MRRolled_U_B";
	};
	class TKE_Rogue_Uniform1MRType13_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants1MRType13_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top1MRType13_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Marine Combat Uniform (Type13)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform1MRType13_U_B";
	};
	class TKE_Rogue_Uniform1MRType13NC_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants1MRType13_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top1MRType13_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Marine Combat Uniform (NC, Type13)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform1MRType13NC_U_B";
	};
	class TKE_Rogue_Uniform1MRType13Rolled_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants1MRType13_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolled1MRType13_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Marine Combat Uniform (Rolled, Type13)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform1MRType13Rolled_U_B";
	};
	class TKE_Rogue_Uniform1MRCamo_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants1MRCamo_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top1MRCamo_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Marine Combat Uniform (Camo)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform1MRCamo_U_B";
	};
	class TKE_Rogue_Uniform1MRCamoNC_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants1MRCamo_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top1MRCamo_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Marine Combat Uniform (NC, Camo)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform1MRCamoNC_U_B";
	};
	class TKE_Rogue_Uniform1MRCamoRolled_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants1MRCamo_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolled1MRCamo_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Marine Combat Uniform (Rolled, Camo)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform1MRCamoRolled_U_B";
	};
	class TKE_Rogue_Uniform1MRStripe_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants1MRStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top1MRStripe_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Marine Combat Uniform (Stripe)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform1MRStripe_U_B";
	};
	class TKE_Rogue_Uniform1MRStripeNC_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants1MRStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top1MRStripe_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Marine Combat Uniform (NC, Stripe)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform1MRStripeNC_U_B";
	};
	class TKE_Rogue_Uniform1MRStripeRolled_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants1MRStripe_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolled1MRStripe_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Marine Combat Uniform (Rolled, Stripe)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform1MRStripeRolled_U_B";
	};
	class TKE_Rogue_Uniform124StripeG_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants124StripeG_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top124StripeG_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Army Combat Uniform (Woodland Stripe)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform124StripeG_U_B";
	};
	class TKE_Rogue_Uniform124StripeGNC_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants124StripeG_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top124StripeG_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Army Combat Uniform (NC, Woodland Stripe)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform124StripeGNC_U_B";
	};
	class TKE_Rogue_Uniform124StripeGRolled_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants124StripeG_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolled124StripeG_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Army Combat Uniform (Rolled, Woodland Stripe)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform124StripeGRolled_U_B";
	};
	class TKE_Rogue_Uniform124StripeW_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants124StripeW_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top124StripeW_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Army Combat Uniform (Snow Stripe)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform124StripeW_U_B";
	};
	class TKE_Rogue_Uniform124StripeWNC_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants124StripeW_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top124StripeW_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Army Combat Uniform (NC, Snow Stripe)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform124StripeWNC_U_B";
	};
	class TKE_Rogue_Uniform124StripeWRolled_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants124StripeW_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolled124StripeW_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Army Combat Uniform (Rolled, Snow Stripe)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform124StripeWRolled_U_B";
	};
	class TKE_Rogue_Uniform124StripeB_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants124StripeB_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top124StripeB_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Army Combat Uniform (Night Stripe)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform124StripeB_U_B";
	};
	class TKE_Rogue_Uniform124StripeBNC_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants124StripeB_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_top124StripeB_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Army Combat Uniform (NC, Night Stripe)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform124StripeBNC_U_B";
	};
	class TKE_Rogue_Uniform124StripeBRolled_inf_B: TKE_Rogue_UniformRolled_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pants124StripeB_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_rolled124StripeB_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Army Combat Uniform (Rolled, Night Stripe)";
		backpack = "";
		uniformClass = "TKE_Rogue_Uniform124StripeBRolled_U_B";
	};
	class TKE_Rogue_UniformVictus_inf_B: TKE_Rogue_Uniform_base
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsVictus_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topVictus_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Navy Combat Uniform [274th]";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformVictus_U_B";
	};
	class TKE_Rogue_UniformVictusNC_inf_B: TKE_Rogue_UniformNC_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_Rogue_Uni_pantsVictus_co.paa","\1MR_Uniforms\Textures\TKE_Rogue_Uni_topVictus_co.paa"};
		side = 1;
		displayName = "[7th Fleet] Navy Combat Uniform (274th, NC)";
		backpack = "";
		uniformClass = "TKE_Rogue_UniformVictusNC_U_B";
	};
	class B_CTRG_Soldier_F;
	class B_CTRG_Soldier_3_F;
	class B_CTRG_soldier_GL_LAT_F;
	class B_recon_LAT_F;
	class TKE_UniformUCIA_base: B_CTRG_Soldier_F
	{
		author = "Rogue771";
		scope = 1;
		camouflage = 0.4;
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		hiddenSelectionsMaterials[] = {"\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		uniformClass = "U_TKE_UniformUCIA_base";
		modelsides[] += {0,1,2,3,6};
	};
	class TKE_UniformUCIA_Rolled_base: B_CTRG_Soldier_3_F
	{
		author = "Rogue771";
		scope = 1;
		camouflage = 0.4;
		hiddenSelectionsMaterials[] = {"\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		uniformClass = "U_TKE_UniformUCIA_Rolled_base";
		modelsides[] += {0,1,2,3,6};
	};
	class TKE_UniformUCIA_Sleeved_base: B_CTRG_soldier_GL_LAT_F
	{
		author = "Rogue771";
		scope = 1;
		camouflage = 0.4;
		hiddenSelectionsMaterials[] = {"\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		uniformClass = "U_TKE_UniformUCIA_Sleeved_base";
		modelsides[] += {0,1,2,3,6};
	};
	class TKE_UniformUCIA: TKE_UniformUCIA_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIA";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIA_co.paa"};
	};
	class TKE_UniformUCIA_Rolled: TKE_UniformUCIA_Rolled_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIA_Rolled";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIA_co.paa"};
	};
	class TKE_UniformUCIA_Sleeved: TKE_UniformUCIA_Sleeved_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIA_Sleeved";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIA_co.paa"};
	};
	class TKE_UniformUCIABlackHex: TKE_UniformUCIA_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIABlackHex";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlackHex_co.paa"};
	};
	class TKE_UniformUCIABlackHex_Rolled: TKE_UniformUCIA_Rolled_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIABlackHex_Rolled";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlackHex_co.paa"};
	};
	class TKE_UniformUCIABlackHex_Sleeved: TKE_UniformUCIA_Sleeved_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIABlackHex_Sleeved";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlackHex_co.paa"};
	};
	class TKE_UniformUCIAGreenHex: TKE_UniformUCIA_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIAGreenHex";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAGreenHex_co.paa"};
	};
	class TKE_UniformUCIAGreenHex_Rolled: TKE_UniformUCIA_Rolled_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIAGreenHex_Rolled";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAGreenHex_co.paa"};
	};
	class TKE_UniformUCIAGreenHex_Sleeved: TKE_UniformUCIA_Sleeved_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIAGreenHex_Sleeved";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAGreenHex_co.paa"};
	};
	class TKE_UniformUCIABlueHex: TKE_UniformUCIA_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIABlueHex";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlueHex_co.paa"};
	};
	class TKE_UniformUCIABlueHex_Rolled: TKE_UniformUCIA_Rolled_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIABlueHex_Rolled";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlueHex_co.paa"};
	};
	class TKE_UniformUCIABlueHex_Sleeved: TKE_UniformUCIA_Sleeved_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIABlueHex_Sleeved";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlueHex_co.paa"};
	};
	class TKE_UniformUCIARedHex: TKE_UniformUCIA_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIARedHex";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIARedHex_co.paa"};
	};
	class TKE_UniformUCIARedHex_Rolled: TKE_UniformUCIA_Rolled_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIARedHex_Rolled";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIARedHex_co.paa"};
	};
	class TKE_UniformUCIARedHex_Sleeved: TKE_UniformUCIA_Sleeved_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIARedHex_Sleeved";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIARedHex_co.paa"};
	};
	class TKE_UniformUCIAWhiteHex: TKE_UniformUCIA_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIAWhiteHex";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteHex_co.paa"};
	};
	class TKE_UniformUCIAWhiteHex_Rolled: TKE_UniformUCIA_Rolled_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIAWhiteHex_Rolled";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteHex_co.paa"};
	};
	class TKE_UniformUCIAWhiteHex_Sleeved: TKE_UniformUCIA_Sleeved_base
	{
		author = "Rogue771";
		uniformClass = "U_TKE_UniformUCIAWhiteHex_Sleeved";
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteHex_co.paa"};
	};
	class TKE_UniformUCIABlackStripe: TKE_UniformUCIA_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIABlackStripe";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlackStripe_co.paa"};
    };
    class TKE_UniformUCIABlackStripe_Rolled: TKE_UniformUCIA_Rolled_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIABlackStripe_Rolled";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlackStripe_co.paa"};
    };
    class TKE_UniformUCIABlackStripe_Sleeved: TKE_UniformUCIA_Sleeved_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIABlackStripe_Sleeved";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlackStripe_co.paa"};
    };
    class TKE_UniformUCIAGreenStripe: TKE_UniformUCIA_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIAGreenStripe";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAGreenStripe_co.paa"};
    };
    class TKE_UniformUCIAGreenStripe_Rolled: TKE_UniformUCIA_Rolled_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIAGreenStripe_Rolled";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAGreenStripe_co.paa"};
    };
    class TKE_UniformUCIAGreenStripe_Sleeved: TKE_UniformUCIA_Sleeved_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIAGreenStripe_Sleeved";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAGreenStripe_co.paa"};
    };
    class TKE_UniformUCIABlueStripe: TKE_UniformUCIA_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIABlueStripe";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlueStripe_co.paa"};
    };
    class TKE_UniformUCIABlueStripe_Rolled: TKE_UniformUCIA_Rolled_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIABlueStripe_Rolled";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlueStripe_co.paa"};
    };
    class TKE_UniformUCIABlueStripe_Sleeved: TKE_UniformUCIA_Sleeved_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIABlueStripe_Sleeved";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlueStripe_co.paa"};
    };
    class TKE_UniformUCIARedStripe: TKE_UniformUCIA_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIARedStripe";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIARedStripe_co.paa"};
    };
    class TKE_UniformUCIARedStripe_Rolled: TKE_UniformUCIA_Rolled_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIARedStripe_Rolled";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIARedStripe_co.paa"};
    };
    class TKE_UniformUCIARedStripe_Sleeved: TKE_UniformUCIA_Sleeved_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIARedStripe_Sleeved";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIARedStripe_co.paa"};
    };
    class TKE_UniformUCIAWhiteStripe: TKE_UniformUCIA_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIAWhiteStripe";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteStripe_co.paa"};
    };
    class TKE_UniformUCIAWhiteStripe_Rolled: TKE_UniformUCIA_Rolled_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIAWhiteStripe_Rolled";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteStripe_co.paa"};
    };
    class TKE_UniformUCIAWhiteStripe_Sleeved: TKE_UniformUCIA_Sleeved_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_UniformUCIAWhiteStripe_Sleeved";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteStripe_co.paa"};
    };
class TKE_Uniform1MR: TKE_UniformUCIA_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform1MR";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MR.paa"};
    };
    class TKE_Uniform1MR_Rolled: TKE_UniformUCIA_Rolled_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform1MR_Rolled";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MR.paa"};
    };
    class TKE_Uniform1MR_Sleeved: TKE_UniformUCIA_Sleeved_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform1MR_Sleeved";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MR.paa"};
    };


class TKE_Uniform1MRType13: TKE_UniformUCIA_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform1MRType13";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRType13.paa"};
    };
    class TKE_Uniform1MRType13_Rolled: TKE_UniformUCIA_Rolled_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform1MRType13_Rolled";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRType13.paa"};
    };
    class TKE_Uniform1MRType13_Sleeved: TKE_UniformUCIA_Sleeved_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform1MRTyp13_Sleeved";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRType13.paa"};
    };
    
class TKE_Uniform1MRCamo: TKE_UniformUCIA_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform1MRCamo";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRCamo.paa"};
    };
    class TKE_Uniform1MRCamo_Rolled: TKE_UniformUCIA_Rolled_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform1MRCamo_Rolled";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRCamo.paa"};
    };
    class TKE_Uniform1MRCamo_Sleeved: TKE_UniformUCIA_Sleeved_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform1MRCamo_Sleeved";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRCamo.paa"};
    };
    
class TKE_Uniform1MRStripe: TKE_UniformUCIA_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform1MRStripe";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRStripe.paa"};
    };
    class TKE_Uniform1MRStripe_Rolled: TKE_UniformUCIA_Rolled_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform1MRStripe_Rolled";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRStripe.paa"};
    };
    class TKE_Uniform1MRStripe_Sleeved: TKE_UniformUCIA_Sleeved_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform1MRStripe_Sleeved";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRStripe.paa"};
    };
class TKE_Uniform124GStripe: TKE_UniformUCIA_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform124GStripe";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124GStripe.paa"};
    };
    class TKE_Uniform124GStripe_Rolled: TKE_UniformUCIA_Rolled_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform124GStripe_Rolled";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124GStripe.paa"};
    };
    class TKE_Uniform124GStripe_Sleeved: TKE_UniformUCIA_Sleeved_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform124GStripe_Sleeved";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124GStripe.paa"};
    };
class TKE_Uniform124WStripe: TKE_UniformUCIA_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform124WStripe";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124WStripe.paa"};
    };
    class TKE_Uniform124WStripe_Rolled: TKE_UniformUCIA_Rolled_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform124WStripe_Rolled";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124WStripe.paa"};
    };
    class TKE_Uniform124WStripe_Sleeved: TKE_UniformUCIA_Sleeved_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform124WStripe_Sleeved";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124WStripe.paa"};
    };
class TKE_Uniform124BStripe: TKE_UniformUCIA_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform124BStripe";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124BStripe.paa"};
    };
    class TKE_Uniform124BStripe_Rolled: TKE_UniformUCIA_Rolled_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform124BStripe_Rolled";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124BStripe.paa"};
    };
    class TKE_Uniform124BStripe_Sleeved: TKE_UniformUCIA_Sleeved_base
    {
        author = "Rogue771";
        uniformClass = "U_TKE_Uniform124BStripe_Sleeved";
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124BStripe.paa"};
    };

	class I_G_Story_Protagonist_F;
	class TKE_UniformUCIA_BlackButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIA_BlackButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black","\1MR_Uniforms\Textures\TKE_uniformUCIA"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIA_BlueButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIA_BlueButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue","\1MR_Uniforms\Textures\TKE_uniformUCIA"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIA_WhiteButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIA_WhiteButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white","\1MR_Uniforms\Textures\TKE_uniformUCIA"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIABlackHex_BlackButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIABlackHex_BlackButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlackHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIABlackHex_BlueButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIABlackHex_BlueButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlackHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIABlackHex_WhiteButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIABlackHex_WhiteButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlackHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIAGreenHex_BlackButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIAGreenHex_BlackButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAGreenHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIAGreenHex_BlueButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIAGreenHex_BlueButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAGreenHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIAGreenHex_WhiteButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIAGreenHex_WhiteButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAGreenHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIABlueHex_BlackButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIABlueHex_BlackButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlueHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIABlueHex_BlueButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIABlueHex_BlueButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlueHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIABlueHex_WhiteButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIABlueHex_WhiteButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlueHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIARedHex_BlackButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIARedHex_BlackButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIARedHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIARedHex_BlueButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIARedHex_BlueButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIARedHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIARedHex_WhiteButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIARedHex_WhiteButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIARedHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIAWhiteHex_BlackButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIAWhiteHex_BlackButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIAWhiteHex_BlueButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIAWhiteHex_BlueButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIAWhiteHex_WhiteButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIAWhiteHex_WhiteButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteHex_co.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_UniformUCIABlackStripe_BlackButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIABlackStripe_BlackButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlackStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIABlackStripe_BlueButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIABlackStripe_BlueButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlackStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIABlackStripe_WhiteButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIABlackStripe_WhiteButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlackStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIAGreenStripe_BlackButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIAGreenStripe_BlackButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAGreenStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIAGreenStripe_BlueButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIAGreenStripe_BlueButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAGreenStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIAGreenStripe_WhiteButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIAGreenStripe_WhiteButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAGreenStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIABlueStripe_BlackButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIABlueStripe_BlackButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlueStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIABlueStripe_BlueButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIABlueStripe_BlueButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlueStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIABlueStripe_WhiteButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIABlueStripe_WhiteButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlueStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIARedStripe_BlackButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIARedStripe_BlackButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIARedStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIARedStripe_BlueButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIARedStripe_BlueButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIARedStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIARedStripe_WhiteButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIARedStripe_WhiteButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIARedStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIAWhiteStripe_BlackButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIAWhiteStripe_BlackButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIAWhiteStripe_BlueButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIAWhiteStripe_BlueButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_UniformUCIAWhiteStripe_WhiteButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_UniformUCIAWhiteStripe_WhiteButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteStripe_co.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
	class TKE_Uniform1MR_BlackButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_Uniform1MR_BlackButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform1MR.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_Uniform1MR_BlueButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_Uniform1MR_BlueButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue","\1MR_Uniforms\Textures\TKE_uniform1MR.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_Uniform1MR_WhiteButtonUp: I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_Uniform1MR_WhiteButtonUp";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white","\1MR_Uniforms\Textures\TKE_uniform1MR.paa"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo1","camo2"};
	};
	class TKE_Uniform1MRType13_BlackButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform1MRType13_BlackButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform1MRType13.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_Uniform1MRType13_BlueButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform1MRType13_BlueButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue","\1MR_Uniforms\Textures\TKE_uniform1MRType13.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_Uniform1MRType13_WhiteButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform1MRType13_WhiteButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white","\1MR_Uniforms\Textures\TKE_uniform1MRType13.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
class TKE_Uniform1MRCamo_BlackButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform1MRCamo_BlackButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform1MRCamo.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_Uniform1MRCamo_BlueButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform1MRCamo_BlueButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue","\1MR_Uniforms\Textures\TKE_uniform1MRCamo.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_Uniform1MRCamo_WhiteButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform1MRCamo_WhiteButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white","\1MR_Uniforms\Textures\TKE_uniform1MRCamo.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
class TKE_Uniform1MRStripe_BlackButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform1MRStripe_BlackButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform1MRStripe.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_Uniform1MRStripe_BlueButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform1MRStripe_BlueButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue","\1MR_Uniforms\Textures\TKE_uniform1MRStripe.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_Uniform1MRStripe_WhiteButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform1MRStripe_WhiteButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white","\1MR_Uniforms\Textures\TKE_uniform1MRStripe.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
class TKE_Uniform124GStripe_BlackButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform124GStripe_BlackButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform124GStripe.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_Uniform124GStripe_BlueButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform124GStripe_BlueButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue","\1MR_Uniforms\Textures\TKE_uniform124GStripe.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_Uniform124GStripe_WhiteButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform124GStripe_WhiteButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white","\1MR_Uniforms\Textures\TKE_uniform124GStripe.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
class TKE_Uniform124WStripe_BlackButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform124WStripe_BlackButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform124WStripe.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_Uniform124WStripe_BlueButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform124WStripe_BlueButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue","\1MR_Uniforms\Textures\TKE_uniform124WStripe.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_Uniform124WStripe_WhiteButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform124WStripe_WhiteButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white","\1MR_Uniforms\Textures\TKE_uniform124WStripe.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
class TKE_Uniform124BStripe_BlackButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform124BStripe_BlackButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform124BStripe.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_Uniform124BStripe_BlueButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform124BStripe_BlueButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue","\1MR_Uniforms\Textures\TKE_uniform124BStripe.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
    class TKE_Uniform124BStripe_WhiteButtonUp: I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        uniformClass = "U_TKE_Uniform124BStripe_WhiteButtonUp";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white","\1MR_Uniforms\Textures\TKE_uniform124BStripe.paa"};
        picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
        scope = 1;
        scopeCurator = 0;
        modelSides[] = {0,1,2,3,4,5,6,7};
        hiddenSelections[] = {"camo1","camo2"};
    };
	class B_CTRG_Soldier_2_F;
	class TKE_UniformUCIA_Tee: B_CTRG_Soldier_2_F
	{
		author = "Frenchie";
		uniformClass = "U_TKE_UniformUCIA_Tee";
		hiddenSelectionsMaterials[] = {"\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat",""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIA","\1MR_Uniforms\Textures\TKE_Tee_black"};
		picture = "\TKE_Kuiper_Engagements\TKE_Uniforms\ui\MDLogoUI.paa";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
	class 86CAB_Rifleman: TKE_Rogue_Uniform1MR_inf_B
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2; 
		linkedItems[] = {"TKE_beretUCN_86CAB","TKE_UCMCArmour1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		side = 1;
		faction = "1MR";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		displayName = "Rifleman";
		backpack = "";
	};
	class 86CAB_Medic: 86CAB_Rifleman
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2; 
		linkedItems[] = {"TKE_beretUCN_86CAB","TKE_UCMCArmour1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		side = 1;
		faction = "1MR";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		displayName = "Medic";
		role = "CombatLifeSaver";
		backpack = "";
	};
	class 86CAB_Engineer: 86CAB_Rifleman
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2; 
		linkedItems[] = {"TKE_beretUCN_86CAB","TKE_UCMCArmour1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		side = 1;
		faction = "1MR";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		displayName = "Engineer";
		role = "CombatEngineer";
		backpack = "";
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
	class Eventhandlers;
	class U_TKE_Uniform_base: U_B_CTRG_Soldier_F
	{
		class ItemInfo;
	};
	class U_TKE_Uniform_Rolled_base: U_B_CTRG_Soldier_3_F
	{
		class ItemInfo;
	};
	class U_TKE_Uniform_Sleeved_base: U_B_CTRG_1
	{
		class ItemInfo;
	};
	class U_TKE_UniformUCIA: U_TKE_Uniform_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIA_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIA";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIA_Rolled: U_TKE_Uniform_Rolled_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Rolled)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIA_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIA_Rolled";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIA_Sleeved: U_TKE_Uniform_Sleeved_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Sleeved)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIA_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIA_Sleeved";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlackHex: U_TKE_Uniform_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Black Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlackHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIABlackHex";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlackHex_Rolled: U_TKE_Uniform_Rolled_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Black Hex, Rolled)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlackHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIABlackHex_Rolled";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlackHex_Sleeved: U_TKE_Uniform_Sleeved_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Black Hex, Sleeved)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlackHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIABlackHex_Sleeved";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIAGreenHex: U_TKE_Uniform_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Green Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAGreenHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIAGreenHex";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIAGreenHex_Rolled: U_TKE_Uniform_Rolled_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Green Hex, Rolled)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAGreenHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIAGreenHex_Rolled";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIAGreenHex_Sleeved: U_TKE_Uniform_Sleeved_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Green Hex, Sleeved)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAGreenHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIAGreenHex_Sleeved";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlueHex: U_TKE_Uniform_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Blue Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlueHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIABlueHex";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlueHex_Rolled: U_TKE_Uniform_Rolled_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Blue Hex, Rolled)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlueHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIABlueHex_Rolled";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlueHex_Sleeved: U_TKE_Uniform_Sleeved_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Blue Hex, Sleeved)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlueHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIABlueHex_Sleeved";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIARedHex: U_TKE_Uniform_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Red Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIARedHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIARedHex";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIARedHex_Rolled: U_TKE_Uniform_Rolled_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Red Hex, Rolled)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIARedHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIARedHex_Rolled";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIARedHex_Sleeved: U_TKE_Uniform_Sleeved_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (Red Hex, Sleeved)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIARedHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIARedHex_Sleeved";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIAWhiteHex: U_TKE_Uniform_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (White Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIAWhiteHex";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIAWhiteHex_Rolled: U_TKE_Uniform_Rolled_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (White Hex, Rolled)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIAWhiteHex_Rolled";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIAWhiteHex_Sleeved: U_TKE_Uniform_Sleeved_base
	{
		author = "Frenchie";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] UCIA Uniform (White Hex, Sleeved)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteHex_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIAWhiteHex_Sleeved";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlackStripe: U_TKE_Uniform_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (Black Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlackStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIABlackStripe";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIABlackStripe_Rolled: U_TKE_Uniform_Rolled_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (Black Stripe, Rolled)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlackStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIABlackStripe_Rolled";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIABlackStripe_Sleeved: U_TKE_Uniform_Sleeved_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (Black Stripe, Sleeved)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlackStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIABlackStripe_Sleeved";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIAGreenStripe: U_TKE_Uniform_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (Green Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAGreenStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIAGreenStripe";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIAGreenStripe_Rolled: U_TKE_Uniform_Rolled_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (Green Stripe, Rolled)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAGreenStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIAGreenStripe_Rolled";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIAGreenStripe_Sleeved: U_TKE_Uniform_Sleeved_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (Green Stripe, Sleeved)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAGreenStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIAGreenStripe_Sleeved";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIABlueStripe: U_TKE_Uniform_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (Blue Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlueStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIABlueStripe";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIABlueStripe_Rolled: U_TKE_Uniform_Rolled_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (Blue Stripe, Rolled)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlueStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIABlueStripe_Rolled";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIABlueStripe_Sleeved: U_TKE_Uniform_Sleeved_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (Blue Stripe, Sleeved)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIABlueStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIABlueStripe_Sleeved";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIARedStripe: U_TKE_Uniform_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (Red Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIARedStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIARedStripe";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIARedStripe_Rolled: U_TKE_Uniform_Rolled_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (Red Stripe, Rolled)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIARedStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIARedStripe_Rolled";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIARedStripe_Sleeved: U_TKE_Uniform_Sleeved_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (Red Stripe, Sleeved)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIARedStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIARedStripe_Sleeved";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIAWhiteStripe: U_TKE_Uniform_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (White Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIAWhiteStripe";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIAWhiteStripe_Rolled: U_TKE_Uniform_Rolled_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (White Stripe, Rolled)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIAWhiteStripe_Rolled";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIAWhiteStripe_Sleeved: U_TKE_Uniform_Sleeved_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] UCIA Uniform (White Stripe, Sleeved)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIAWhiteStripe_Sleeved";
			containerClass = "Supply90";
			mass = 80;
        };
    };
	class U_TKE_Uniform1MR: U_TKE_Uniform_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Uniform";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MR_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MR";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MR_Rolled: U_TKE_Uniform_Rolled_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Uniform (Rolled)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MR_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MR_Rolled";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MR_Sleeved: U_TKE_Uniform_Sleeved_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Uniform (Sleeved)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MR_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MR_Sleeved";
			containerClass = "Supply90";
			mass = 80;
        };
    };


	class U_TKE_Uniform1MRType13: U_TKE_Uniform_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Uniform (Type 13)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRType13_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRType13";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MRType13_Rolled: U_TKE_Uniform_Rolled_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Uniform (Type 13, Rolled)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRType13_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRType13_Rolled";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MRType13_Sleeved: U_TKE_Uniform_Sleeved_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Uniform (Type 13, Sleeved)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRType13_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRType13_Sleeved";
			containerClass = "Supply90";
			mass = 80;
        };
    };


	class U_TKE_Uniform1MRCamo: U_TKE_Uniform_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Uniform (Camo)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRCamo_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRCamo";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MRCamo_Rolled: U_TKE_Uniform_Rolled_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Uniform (Camo, Rolled)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRCamo_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRCamo_Rolled";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MRCamo_Sleeved: U_TKE_Uniform_Sleeved_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Uniform (Camo, Sleeved)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRCamo_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRCamo_Sleeved";
			containerClass = "Supply90";
			mass = 80;
        };
    };


	class U_TKE_Uniform1MRStripe: U_TKE_Uniform_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Uniform (Stripe)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRStripe";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MRStripe_Rolled: U_TKE_Uniform_Rolled_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Uniform (Stripe, Rolled)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRStripe_Rolled";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MRStripe_Sleeved: U_TKE_Uniform_Sleeved_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Marine Uniform (Stripe, Sleeved)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform1MRStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRStripe_Sleeved";
			containerClass = "Supply90";
			mass = 80;
        };
    };
	class U_TKE_Uniform124GStripe: U_TKE_Uniform_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Army Uniform (Woodland Stripe)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124GStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124GStripe";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform124GStripe_Rolled: U_TKE_Uniform_Rolled_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Army Uniform (Woodland Stripe, Rolled)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124GStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124GStripe_Rolled";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform124GStripe_Sleeved: U_TKE_Uniform_Sleeved_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Army Uniform (Woodland Stripe, Sleeved)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124GStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124GStripe_Sleeved";
			containerClass = "Supply90";
			mass = 80;
        };
    };
	class U_TKE_Uniform124WStripe: U_TKE_Uniform_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Army Uniform (Snow Stripe)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124WStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124WStripe";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform124WStripe_Rolled: U_TKE_Uniform_Rolled_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Army Uniform (Snow Stripe, Rolled)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124WStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124WStripe_Rolled";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform124WStripe_Sleeved: U_TKE_Uniform_Sleeved_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Army Uniform (Snow Stripe, Sleeved)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124WStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124WStripe_Sleeved";
			containerClass = "Supply90";
			mass = 80;
        };
    };
	class U_TKE_Uniform124BStripe: U_TKE_Uniform_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Army Uniform (Night Stripe)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124BStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124BStripe";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform124BStripe_Rolled: U_TKE_Uniform_Rolled_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Army Uniform (Night Stripe, Rolled)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124BStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124BStripe_Rolled";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform124BStripe_Sleeved: U_TKE_Uniform_Sleeved_base
    {
        author = "Frenchie";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[7th Fleet] Army Uniform (Night Stripe, Sleeved)";
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniform124BStripe_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124BStripe_Sleeved";
			containerClass = "Supply90";
			mass = 80;
        };
    };
	class U_I_G_Story_Protagonist_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_TKE_UniformUCIA_BlackButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Black Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIA_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIA_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIA_BlueButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Blue Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIA_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIA_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIA_WhiteButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (White Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIA_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIA_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlackHex_BlackButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Black Hex, Black Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlackHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIABlackHex_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlackHex_BlueButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Black Hex, Blue Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlackHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIABlackHex_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlackHex_WhiteButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Black Hex, White Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlackHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIABlackHex_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIAGreenHex_BlackButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Green Hex, Black Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAGreenHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIAGreenHex_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIAGreenHex_BlueButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Green Hex, Blue Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAGreenHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIAGreenHex_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIAGreenHex_WhiteButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Green Hex, White Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAGreenHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIAGreenHex_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlueHex_BlackButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Blue Hex, Black Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlueHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIABlueHex_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlueHex_BlueButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Blue Hex, Blue Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlueHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIABlueHex_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlueHex_WhiteButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Blue Hex, White Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlueHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIABlueHex_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIARedHex_BlackButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Red Hex, Black Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIARedHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIARedHex_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIARedHex_BlueButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Red Hex, Blue Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIARedHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIARedHex_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIARedHex_WhiteButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Red Hex, White Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIARedHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIARedHex_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIAWhiteHex_BlackButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (White Hex, Black Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIAWhiteHex_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIAWhiteHex_BlueButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (White Hex, Blue Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIAWhiteHex_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIAWhiteHex_WhiteButtonUp: U_I_G_Story_Protagonist_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (White Hex, White Button Up)";
		hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteHex_co.paa"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIAWhiteHex_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_TKE_UniformUCIABlackStripe_BlackButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (Black Stripe, Black Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlackStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIABlackStripe_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIABlackStripe_BlueButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (Black Stripe, Blue Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlackStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIABlackStripe_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIABlackStripe_WhiteButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (Black Stripe, White Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlackStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIABlackStripe_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIAGreenStripe_BlackButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (Green Stripe, Black Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAGreenStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIAGreenStripe_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIAGreenStripe_BlueButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (Green Stripe, Blue Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAGreenStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIAGreenStripe_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIAGreenStripe_WhiteButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (Green Stripe, White Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAGreenStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIAGreenStripe_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIABlueStripe_BlackButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (Blue Stripe, Black Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlueStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIABlueStripe_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIABlueStripe_BlueButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (Blue Stripe, Blue Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlueStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIABlueStripe_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIABlueStripe_WhiteButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (Blue Stripe, White Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIABlueStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIABlueStripe_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIARedStripe_BlackButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (Red Stripe, Black Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIARedStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIARedStripe_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIARedStripe_BlueButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (Red Stripe, Blue Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIARedStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIARedStripe_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIARedStripe_WhiteButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (Red Stripe, White Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIARedStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIARedStripe_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIAWhiteStripe_BlackButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (White Stripe, Black Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIAWhiteStripe_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIAWhiteStripe_BlueButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (White Stripe, Blue Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIAWhiteStripe_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_UniformUCIAWhiteStripe_WhiteButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] UCIA Uniform (White Stripe, White Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniformUCIAWhiteStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_UniformUCIAWhiteStripe_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
	class U_TKE_Uniform1MR_BlackButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Marine Uniform (Black Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform1MR_co.paa"};
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MR_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MR_BlueButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Marine Uniform (Blue Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniform1MR_co.paa"};
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MR_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MR_WhiteButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Marine Uniform (White Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniform1MR_co.paa"};
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MR_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
	class U_TKE_Uniform1MRType13_BlackButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Marine Uniform (Type 13, Black Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform1MRType13_co.paa"};
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRType13_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MRType13_BlueButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Marine Uniform (Type 13, Blue Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniform1MRType13_co.paa"};
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRType13_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MRType13_WhiteButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Marine Uniform (Type 13, White Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniform1MRType13_co.paa"};
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRType13_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
	class U_TKE_Uniform1MRCamo_BlackButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Marine Uniform (Camo, Black Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform1MRCamo_co.paa"};
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRCamo_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MRCamo_BlueButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Marine Uniform (Camo, Blue Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniform1MRCamo_co.paa"};
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRCamo_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MRCamo_WhiteButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Marine Uniform (Camo, White Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniform1MRCamo_co.paa"};
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRCamo_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
	class U_TKE_Uniform1MRStripe_BlackButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Marine Uniform (Stripe, Black Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform1MRStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRStripe_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MRStripe_BlueButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Marine Uniform (Stripe, Blue Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniform1MRStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRStripe_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform1MRStripe_WhiteButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Marine Uniform (Stripe, White Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniform1MRStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform1MRStripe_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };


	class U_TKE_Uniform124GStripe_BlackButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Army Uniform (Woodland Stripe, Black Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform124GStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124GStripe_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform124GStripe_BlueButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Army Uniform (Woodland Stripe, Blue Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniform124GStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124GStripe_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform124GStripe_WhiteButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Army Uniform (Woodland Stripe, White Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniform124GStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124GStripe_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
	class U_TKE_Uniform124WStripe_BlackButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Army Uniform (Snow Stripe, Black Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform124WStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124WStripe_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform124WStripe_BlueButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Army Uniform (Snow Stripe, Blue Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniform124WStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124WStripe_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform124WStripe_WhiteButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Army Uniform (Snow Stripe, White Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniform124WStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124WStripe_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
	class U_TKE_Uniform124BStripe_BlackButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Army Uniform (Night Stripe, Black Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_black.paa","\1MR_Uniforms\Textures\TKE_uniform124BStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124BStripe_BlackButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform124BStripe_BlueButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Army Uniform (Night Stripe, Blue Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_blue.paa","\1MR_Uniforms\Textures\TKE_uniform124BStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124BStripe_BlueButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };
    class U_TKE_Uniform124BStripe_WhiteButtonUp: U_I_G_Story_Protagonist_F
    {
        author = "Frenchie";
        displayName = "[7th Fleet] Army Uniform (Night Stripe, White Button Up)";
        hiddenSelectionsMaterials[] = {"","\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat"};
        hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_ButtonUp_white.paa","\1MR_Uniforms\Textures\TKE_uniform124BStripe_co.paa"};
        picture = "\1MR_Uniforms\Textures\124thpatch.paa";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        hiddenSelections[] = {"camo1","camo2"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "TKE_Uniform124BStripe_WhiteButtonUp";
			containerClass = "Supply90";
			mass = 80;
        };
    };

	class U_B_CTRG_Soldier_2_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_TKE_UniformUCIA_Tee: U_B_CTRG_Soldier_2_F
	{
		author = "Frenchie";
		displayName = "[7th Fleet] UCIA Uniform (Tee)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterials[] = {"\TKE_Kuiper_Engagements\TKE_Uniforms\data\TKE_uniform.rvmat",""};
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_uniformUCIA","\1MR_Uniforms\Textures\TKE_tee_black"};
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		class ItemInfo: ItemInfo
		{
			uniformClass = "TKE_UniformUCIA_Tee";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform_U_OP;
	class TKE_Rogue_UniformNC_U_OP;
	class TKE_Rogue_UniformRolled_U_OP;
	class TKE_Rogue_UniformUCIA_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIA_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIANC_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (NC)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIANC_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIARolled_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (Rolled)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIARolled_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIARedhex_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (Red Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIARedhex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIANCRedHex_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (NC, Red Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIANCRedHex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIARolledredhex_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Red Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIARolledRedhex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIAWhitehex_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (White Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIAWhitehex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIANCWhiteHex_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (NC, White Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIANCWhiteHex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIARolledWhiteHex_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, White Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIARolledWhiteHex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIABlackhex_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (Black Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIABlackhex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIANCBlackHex_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (NC, Black Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIANCBlackHex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIARolledBlackHex_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Black Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIARolledBlackHex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIAGreenhex_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (Green Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIAGreenhex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIANCGreenHex_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (NC, Green Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIANCGreenHex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIARolledGreenHex_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Green Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIARolledGreenHex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIABluehex_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (Blue Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIABluehex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIANCBlueHex_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (NC, Blue Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIANCBlueHex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIARolledBlueHex_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Blue Hex)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformUCIARolledBlueHex_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformUCIARedStripe_U_B: TKE_Rogue_Uniform_U_OP
    {
        author = "Frenchie";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (Red Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIARedStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIANCRedStripe_U_B: TKE_Rogue_UniformNC_U_OP
    {
        author = "Frenchie";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (NC, Red Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIANCRedStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIARolledredStripe_U_B: TKE_Rogue_UniformRolled_U_OP
    {
        author = "Rogue771";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Red Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIARolledRedStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIAWhiteStripe_U_B: TKE_Rogue_Uniform_U_OP
    {
        author = "Frenchie";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (White Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIAWhiteStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIANCWhiteStripe_U_B: TKE_Rogue_UniformNC_U_OP
    {
        author = "Frenchie";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (NC, White Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIANCWhiteStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIARolledWhiteStripe_U_B: TKE_Rogue_UniformRolled_U_OP
    {
        author = "Rogue771";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, White Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIARolledWhiteStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIABlackStripe_U_B: TKE_Rogue_Uniform_U_OP
    {
        author = "Frenchie";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (Black Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIABlackStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIANCBlackStripe_U_B: TKE_Rogue_UniformNC_U_OP
    {
        author = "Frenchie";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (NC, Black Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIANCBlackStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIARolledBlackStripe_U_B: TKE_Rogue_UniformRolled_U_OP
    {
        author = "Rogue771";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Black Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIARolledBlackStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIAGreenStripe_U_B: TKE_Rogue_Uniform_U_OP
    {
        author = "Frenchie";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (Green Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIAGreenStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIANCGreenStripe_U_B: TKE_Rogue_UniformNC_U_OP
    {
        author = "Frenchie";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (NC, Green Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIANCGreenStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIARolledGreenStripe_U_B: TKE_Rogue_UniformRolled_U_OP
    {
        author = "Rogue771";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Green Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIARolledGreenStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIABlueStripe_U_B: TKE_Rogue_Uniform_U_OP
    {
        author = "Frenchie";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (Blue Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIABlueStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIANCBlueStripe_U_B: TKE_Rogue_UniformNC_U_OP
    {
        author = "Frenchie";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (NC, Blue Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIANCBlueStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
    class TKE_Rogue_UniformUCIARolledBlueStripe_U_B: TKE_Rogue_UniformRolled_U_OP
    {
        author = "Rogue771";
        scope = 2;
        allowedSlots[] = {"BACKPACK_SLOT"};
        displayName = "[7th Fleet] UCIA Combat Uniform (Rolled, Blue Stripe)";
        picture = "\1MR_Uniforms\Textures\uciapatch.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "TKE_Rogue_UniformUCIARolledBlueStripe_inf_B";
            containerClass = "Supply90";
            mass = 80;
        };
    };
	class TKE_Rogue_UniformNavy_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Navy Combat Uniform";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformNavy_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformNavyNC_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Navy Combat Uniform (NC)";
		picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformNavyNC_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformNavyRolled_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Navy Combat Uniform (Rolled)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformNavyRolled_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform1MR_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Marine Combat Uniform";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform1MR_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform1MRNC_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Marine Combat Uniform (NC)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform1MRNC_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform1MRRolled_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Marine Combat Uniform (Rolled)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform1MRRolled_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform1MRType13_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Marine Combat Uniform (Type 13)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform1MRType13_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform1MRType13NC_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Marine Combat Uniform (NC, Type 13)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform1MRType13NC_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform1MRType13Rolled_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Marine Combat Uniform (Rolled, Type 13)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform1MRType13Rolled_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform1MRCamo_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Marine Combat Uniform (Camo)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform1MRCamo_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform1MRCamoNC_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Marine Combat Uniform (NC, Camo)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform1MRCamoNC_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform1MRCamoRolled_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Marine Combat Uniform (Rolled, Camo)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform1MRCamoRolled_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform1MRStripe_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Marine Combat Uniform (Stripe)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform1MRStripe_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform1MRStripeNC_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Marine Combat Uniform (NC, Stripe)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform1MRStripeNC_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform1MRStripeRolled_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Marine Combat Uniform (Rolled, Stripe)";
        picture = "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform1MRStripeRolled_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform124StripeG_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Army Combat Uniform (Woodland Stripe)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform124StripeG_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform124StripeGNC_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Army Combat Uniform (NC, Woodland Stripe)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform124StripeGNC_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform124StripeGRolled_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Army Combat Uniform (Rolled, Woodland Stripe)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform124StripeGRolled_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform124StripeW_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Army Combat Uniform (Snow Stripe)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform124StripeW_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform124StripeWNC_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Army Combat Uniform (NC, Snow Stripe)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform124StripeWNC_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform124StripeWRolled_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Army Combat Uniform (Rolled, Snow Stripe)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform124StripeWRolled_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform124StripeB_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Army Combat Uniform (Night Stripe)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform124StripeB_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform124StripeBNC_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Army Combat Uniform (NC, Night Stripe)";
		picture = "\1MR_Uniforms\Textures\124thpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform124StripeBNC_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_Uniform124StripeBRolled_U_B: TKE_Rogue_UniformRolled_U_OP
	{
		author = "Rogue771";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Army Combat Uniform (Rolled, Night Stripe)";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_Uniform124StripeBRolled_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformVictus_U_B: TKE_Rogue_Uniform_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Navy Combat Uniform (274th)";
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformVictus_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class TKE_Rogue_UniformVictusNC_U_B: TKE_Rogue_UniformNC_U_OP
	{
		author = "Frenchie";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "[7th Fleet] Navy Combat Uniform (274th, NC)";
		picture = "\1MR_Uniforms\Textures\274thpatch.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TKE_Rogue_UniformVictusNC_inf_B";
			containerClass = "Supply90";
			mass = 80;
		};
	};
	class U_BG_Guerrilla_6_1;
	class U_1MR_Sweater_camo_black: U_BG_Guerrilla_6_1
	{
		author = "Frenchie";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		displayName = "[7th Fleet] UCIA Sweater-Black";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_1MR_Sweater_camo_black_F";
			containerClass = "Supply90";
			mass = 20;
		};
	};
	class U_1MR_Sweater_camo_grey: U_BG_Guerrilla_6_1
	{
		author = "Frenchie";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		displayName = "[7th Fleet] UCIA Sweater-Grey";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_1MR_Sweater_camo_grey_F";
			containerClass = "Supply90";
			mass = 20;
		};
	};
	class U_1MR_Sweater_camo_blue: U_BG_Guerrilla_6_1
	{
		author = "Frenchie";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		displayName = "[7th Fleet] UCIA Sweater-Blue";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_1MR_Sweater_camo_blue_F";
			containerClass = "Supply90";
			mass = 20;
		};
	};
	class U_1MR_Sweater_camo_rust: U_BG_Guerrilla_6_1
	{
		author = "Frenchie";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		displayName = "[7th Fleet] UCIA Sweater-Rust";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_1MR_Sweater_camo_rust_F";
			containerClass = "Supply90";
			mass = 20;
		};
	};
	class U_1MR_Sweater_camo_green: U_BG_Guerrilla_6_1
	{
		author = "Frenchie";
		picture = "\1MR_Uniforms\Textures\uciapatch.paa";
		displayName = "[7th Fleet] UCIA Sweater-Green";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_1MR_Sweater_camo_green_F";
			containerClass = "Supply90";
			mass = 20;
		};
	};
};
class cfgMods
{
	author = "Frenchie";
	timepacked = "1664995700";
};
