class CfgPatches
{
	class EF_7th_Crates
	{
		author="Hophri";
		name="7th Expeditionary Fleet Aux Mod";
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Air_F"
		};
		units[]=
		{
			"EF_7th_Ammo",
			"EF_7th_Medical",
			"EF_7th_Explosive",
			"EF_7th_RRR"
		};
		requiredVersion=0.1;
		weapons[]={};
	};
};

class CfgEditorSubcategories
{
	class 7th_ResupplyCrates
	{
		displayName = "Resupply Crates";
	};
	
};

class CfgVehicles
{
	class ACE_BOX_AMMO;
	class ContainerSupply;
	class SupplyXX: ContainerSupply
	{
		maximumLoad="XX";
	};
	class TKE_SupplyCrate;
	class EF_7th_Ammo: TKE_SupplyCrate
	{
		author="Hophri";
		mapSize=1.25;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.382;
			verticalOffsetWorld=0;
			init="''";
		};
		
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.5, 0};
        ace_dragging_dragDirection = 0;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.5, 1};
        ace_dragging_carryDirection = 90;
        ace_dragging_ignoreWeightCarry = 1;
		
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;
    
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[7th Fleet] Ammo Crate";
		model="\TKE_Kuiper_Engagements\TKE_Props\TKE_SupplyCrate.p3d";
		icon="\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa";
		editorCategory="7FLT_Editor_Props";
		editorSubcategory="7th_ResupplyCrates";
		maximumLoad=500000;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7thFleetProps\7thFleetCrates\Textures\7th_AmmoCrate_co.paa"
		};
		class TransportMagazines
		{
			class transport_pdw
			{
				magazine="KEF_45rnd_pdw_magTG";
				count=40;
			};
			class transport_arb
			{
				magazine="TKE_35rnd_62x35_magTG";
				count=40;
			};
			class transport_bullfrog
			{
				magazine="KEF_25rnd_762x51_magGT";
				count=40;
			};
			class transport_bpr
			{
				magazine="TKE_30rnd_575x45_magTG";
				count=40;
			};
			class transport_falcon
			{
				magazine="TKE_20rnd_969x51_magGTUCN";
				count=40;
			};
			class transport_ripper
			{
				magazine="TKE_150rnd_62x35_magGTUCN";
				count=40;
			};
			class transport_cerberus
			{
				magazine="KEF_100rnd_ucnmmg_magTG";
				count=20;
			};
			class transport_xlr
			{
				magazine="TKE_Powerpack";
				count=20;
			};
			class transport_m14
			{
				magazine="10Rnd_Mk14_762x51_Mag";
				count=40;
			};
			class transport_pdwudt
			{
				magazine="TKE_SMGUDT_mag";
				count=40;
			};
			class transport_rhino
			{
				magazine="WRS_Shockgun_Magazine";
				count=40;
			};
			class transport_bullshark1
			{
				magazine="WRS_Shotgun_Magazine";
				count=40;
			};
			class transport_bullshark2
			{
				magazine="WRS_Shotgun_Magazine_Slug";
				count=40;
			};
			class transport_bullshark3
			{
				magazine="WRS_Shotgun_Magazine_NonLethal";
				count=40;
			};
			class transport_bullshark4
			{
				magazine="WRS_Shotgun_Magazine_DragonBreath";
				count=40;
			};
			class transport_boomslang
			{
				magazine="WRS_Boomslang_Magazine";
				count=20;
			};
			class transport_wildebeest
			{
				magazine="200Rnd_556x45_Box_Tracer_F";
				count=20;
			};
			class transport_cmbtpistol
			{
				magazine="TKE_UCNPistol_mag";
				count=20;
			};
			class transport_1911
			{
				magazine="TKE_1911_mag";
				count=20;
			};
			class transport_constrictor
			{
				magazine="WRS_Revolver_Magazine";
				count=20;
			};
			class transport_puma
			{
				magazine="WRS_Puma_Magazine";
				count=20;
			};
			class transport_jackal
			{
				magazine="TKE_20rnd_969x51_magUCN";
				count=40;
			};
			class transport_hmg38
			{
				magazine="OPTRE_40Rnd_30x06_Mag";
				count=40;
			};
			class transport_grot
			{
				magazine="30Rnd_65x39_caseless_msbs_mag";
				count=40;
			};
			class transport_greyhound
			{
				magazine="WRS_Ar_Magazine";
				count=40;
			};
			class transport_bulldog
			{
				magazine="WRS_Ar1_Magazine";
				count=40;
			};
			class transport_raptor
			{
				magazine="WRS_Ar2_Magazine";
				count=40;
			};
			class transport_1911plas
			{
				magazine="TKE_1911_mag_plastic";
				count=10;
			};
			class transport_conplas
			{
				magazine="WRS_Revolver_Magazine_plastic";
				count=10;
			};
			class transport_pumaplas
			{
				magazine="WRS_Puma_Magazine_plastic";
				count=10;
			};
			class transport_CPplas
			{
				magazine="TKE_UCNPistol_mag_plastic";
				count=10;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class EF_7th_Medical: TKE_SupplyCrate
	{
		author="Hophri";
		mapSize=1.25;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.382;
			verticalOffsetWorld=0;
			init="''";
		};
		
		ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.5, 0};
        ace_dragging_dragDirection = 0;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.5, 1};
        ace_dragging_carryDirection = 90;
        ace_dragging_ignoreWeightCarry = 1;

        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;
    
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[7th Fleet] Medical Crate";
		model="\TKE_Kuiper_Engagements\TKE_Props\TKE_SupplyCrate.p3d";
		icon="\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa";
		editorCategory="7FLT_Editor_Props";
		editorSubcategory="7th_ResupplyCrates";
		maximumLoad=500000;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7thFleetProps\7thFleetCrates\Textures\7th_MedCrate_co.paa"
		};
		class TransportMagazines
		{
			class transport_pk
			{
				magazine="ACE_painkillers";
				count=60;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class transport_elastic
			{
				name="ACE_elasticBandage";
				count=150;
			};
			class transport_packing
			{
				name="ACE_packingBandage";
				count=150;
			};
			class transport_qc
			{
				name="ACE_quikclot";
				count=150;
			};
			class transport_1000plasma
			{
				name="ACE_plasmaIV";
				count=30;
			};
			class transport_500plasma
			{
				name="ACE_plasmaIV_500";
				count=30;
			};
			class transport_250plasma
			{
				name="ACE_plasmaIV_250";
				count=30;
			};
			class transport_1000blood
			{
				name="ACE_bloodIV";
				count=30;
			};
			class transport_500blood
			{
				name="ACE_bloodIV_500";
				count=30;
			};
			class transport_250blood
			{
				name="ACE_bloodIV_250";
				count=30;
			};
			class transport_suture
			{
				name="ACE_suture";
				count=80;
			};
			class transport_tourn
			{
				name="ACE_tourniquet";
				count=30;
			};
			class transport_biofoam
			{
				name="OPTRE_Biofoam";
				count=80;
			};
			class transport_adenosine
			{
				name="ACE_adenosine";
				count=60;
			};
			class transport_epi
			{
				name="ACE_epinephrine";
				count=60;
			};
			class transport_morph
			{
				maganamezine="7EF_Painkiller";
				count=60;
			};
			class transport_16g
			{
				maganamezine="kat_IV_16";
				count=60;
			};
			class transport_fastio
			{
				maganamezine="kat_IO_FAST";
				count=40;
			};
			class transport_ammon
			{
				maganamezine="kat_Carbonate";
				count=20;
			};
			class transport_eaca
			{
				maganamezine="kat_EACA";
				count=20;
			};
			class transport_txa
			{
				maganamezine="kat_TXA";
				count=20;
			};
			class transport_etom
			{
				maganamezine="kat_etomidate";
				count=20;
			};
			class transport_fluma
			{
				maganamezine="kat_flumazenil";
				count=20;
			};
			class transport_loraz
			{
				maganamezine="kat_lorazepam";
				count=20;
			};
			class transport_clamp
			{
				maganamezine="kat_clamp";
				count=20;
			};
			class transport_kinglt
			{
				maganamezine="kat_larynx";
				count=20;
			};
			class transport_retract
			{
				maganamezine="kat_retractor";
				count=20;
			};
			class transport_scalp
			{
				maganamezine="kat_scalpel";
				count=20;
			};
			class transport_nalo
			{
				maganamezine="kat_naloxone";
				count=20;
			};
			class transport_ches
			{
				maganamezine="kat_chestSeal";
				count=40;
			};
		};
	};
	class EF_7th_Explosive: TKE_SupplyCrate
	{
		author="Hophri";
		mapSize=1.25;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.382;
			verticalOffsetWorld=0;
			init="''";
		};
		
		ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.5, 0};
        ace_dragging_dragDirection = 0;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.5, 1};
        ace_dragging_carryDirection = 90;
        ace_dragging_ignoreWeightCarry = 1;
		
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;
    
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[7th Fleet] Explosives Crate";
		model="\TKE_Kuiper_Engagements\TKE_Props\TKE_SupplyCrate.p3d";
		icon="\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa";
		editorCategory="7FLT_Editor_Props";
		editorSubcategory="7th_ResupplyCrates";
		maximumLoad=500000;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7thFleetProps\7thFleetCrates\Textures\7th_ExplosiveCrate_co.paa"
		};
		class TransportMagazines
		{
			class transport_uglhe
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=40;
			};
			class transport_uglhex3
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class transport_titanAP
			{
				magazine="Titan_AP";
				count=10;
			};
			class transport_titanAA
			{
				magazine="Titan_AA";
				count=5;
			};
			class transport_maaws75
			{
				magazine="MRAWS_HEAT_F";
				count=10;
			};
			class transport_maawshe
			{
				magazine="MRAWS_HE_F";
				count=10;
			};
			class transport_maawsheat
			{
				magazine="7thFleet_OPTRE_M41_Twin_HEAT";
				count=10;
			};
			class transport_maawssaclos
			{
				magazine="7thFleet_OPTRE_M41_Twin_HEAT_SACLOS";
				count=10;
			};
			class transport_maawsIR
			{
				magazine="7thFleet_OPTRE_M41_Twin_HEAT_G";
				count=10;
			};
			class transport_smokew
			{
				magazine="7thFleet_OPTRE_M41_Twin_Smoke_W";
				count=10;
			};
			class transport_smoker
			{
				magazine="7thFleet_OPTRE_M41_Twin_Smoke_R";
				count=10;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class transport_c7
			{
				name="C7_Remote_Mag";
				count=10;
			};
			class transport_c12
			{
				name="C12_Remote_Mag";
				count=5;
			};
			class transport_fraggrenade
			{
				name="TKE_FRAG_mag";
				count=30;
			};
			class transport_impgrenade
			{
				name="TKE_IMPACT_mag";
				count=30;
			};
			class transport_smoke
			{
				name="TKE_SMOKE_mag";
				count=30;
			};
		};
	};
	class EF_7th_RRR: TKE_SupplyCrate
	{
		author="Hophri";
		mapSize=1.25;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.382;
			verticalOffsetWorld=0;
			init="''";
		};
		
		ace_rearm_defaultSupply = 999999999;
		ace_refuel_fuelCargo = -10;
		ace_repair_canRepair = 1;
		ace_isRepairFacility = 1;
		ace_refuel_hooks[] = {{0,0,0},{0,0,0}};
		
		ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.5, 0};
        ace_dragging_dragDirection = 0;
        ace_dragging_ignoreWeight = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.5, 1};
        ace_dragging_carryDirection = 90;
        ace_dragging_ignoreWeightCarry = 1;
		
        ace_cargo_size = 0;
        ace_cargo_canLoad = 0;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;
    
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[7th Fleet] RRR Crate";
		model="\TKE_Kuiper_Engagements\TKE_Props\TKE_SupplyCrate.p3d";
		icon="\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa";
		editorCategory="7FLT_Editor_Props";
		editorSubcategory="7th_ResupplyCrates";
		maximumLoad=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7thFleetProps\7thFleetCrates\Textures\7th_RRR_co.paa"
		};
	};
};