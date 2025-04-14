////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 09 16:52:22 2023 : 'file' last modified on Tue Oct 18 19:53:08 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

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
class CfgVehicles
{
	class Eventhandlers;
	class Components;
	class SensorTemplatePassiveRadar;
	class SensorTemplateAntiRadiation;
	class SensorTemplateActiveRadar;
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateMan;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class SensorTemplateDataLink;
	class ej_AH96_NATO;
	class ej_AH96_Victus: ej_AH96_NATO
	{
		author = "Frenchie";
		DLC = "1st Marine Raiders Armory";
		displayName = "AH-96 Coyote (6 Pylons)";
		side = 1;
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
				textures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_Victus_co.paa","\1MR_EricJ\Textures\uh60m_engine_Victus_co.paa","\1MR_EricJ\Textures\ductfans_Victus_co.paa"};
				factions[] = {"274thTS"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_Victus_co.paa","\1MR_EricJ\Textures\uh60m_engine_Victus_co.paa","\1MR_EricJ\Textures\ductfans_Victus_co.paa"};
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
				textures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_VictusMEV_co.paa","\1MR_EricJ\Textures\uh60m_engine_VictusMEV_co.paa","\1MR_EricJ\Textures\ductfans_Victus_co.paa"};
				factions[] = {"274thTS"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_VictusMEV_co.paa","\1MR_EricJ\Textures\uh60m_engine_VictusMEV_co.paa","\1MR_EricJ\Textures\ductfans_Victus_co.paa"};
	};
	class ej_MH92DAP3;
	class ej_MH92DAP3_Victus: ej_MH92DAP3
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
		magazines[] = {
			"240Rnd_CMFlare_Chaff_Magazine", 
			"2500Rnd_127x99_mag_Tracer_Red",
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
				textures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_Victus_co.paa","\1MR_EricJ\Textures\uh60m_engine_Victus_co.paa","\1MR_EricJ\Textures\ductfans_Victus_co.paa"};
				factions[] = {"274thTS"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_Victus_co.paa","\1MR_EricJ\Textures\uh60m_engine_Victus_co.paa","\1MR_EricJ\Textures\ductfans_Victus_co.paa"};
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
				textures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_Victus_co.paa","\1MR_EricJ\Textures\uh60m_engine_Victus_co.paa","\1MR_EricJ\Textures\ductfans_Victus_co.paa"};
				factions[] = {"274thTS"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\1MR_EricJ\Textures\uh60m_fuselage_Victus_co.paa","\1MR_EricJ\Textures\uh60m_engine_Victus_co.paa","\1MR_EricJ\Textures\ductfans_Victus_co.paa"};
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
				textures[] = {"\1MR_EricJ\Textures\ah6_merge1_Victus_co.paa","\1MR_EricJ\Textures\ductfans_Victus_co.paa"};
				factions[] = {"274thTS"};
			};
		};
		textureList[] = {"Victus",1};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\1MR_EricJ\Textures\ah6_merge1_Victus_co.paa","\1MR_EricJ\Textures\ductfans_Victus_co.paa"};
		#include "\1MR_Vehicles\MFD.cpp"
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
			"2500Rnd_127x99_mag_Tracer_Red",
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
		#include "\1MR_Vehicles\MFD.cpp"
	};
};